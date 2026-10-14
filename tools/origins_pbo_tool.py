#!/usr/bin/env python3
"""
DayZ Origins Mod 1.8.3 — Standalone PBO Unpacker & RAP Decompiler (derap)
========================================================================

Features:
- De-obfuscation: Automatically detects and strips junk headers, null-padding, and trap entries (*.*, _._, Vers/Encr clones).
- LZSS Decompression: Native implementation of Bohemia Interactive LZSS compression for PBO entries.
- RAP Decompiler: Native recursive debinarization of config.bin into standard human-readable config.cpp.
- Zero Dependencies: Pure Python 3 standard library only (no pip packages required).

Usage:
    python origins_pbo_tool.py "path/to/addon.pbo" -o "output_dir"
    python origins_pbo_tool.py "path/to/@OriginsMod/Addons" -o "output_dir"
"""

import os
import sys
import struct
import io
import re
import argparse
import glob

# Ensure UTF-8 output on Windows consoles
if sys.stdout and hasattr(sys.stdout, "buffer"):
    try:
        sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding="utf-8", errors="replace")
    except Exception:
        pass


def decompress_lzss(cdata: bytes, orig_size: int) -> bytes:
    """
    Decompresses Bohemia Interactive LZSS compressed stream (pack flag 0x43707273).
    """
    in_pos = 0
    out = bytearray()
    while in_pos < len(cdata) and len(out) < orig_size:
        flag = cdata[in_pos]
        in_pos += 1
        for bit in range(8):
            if len(out) >= orig_size or in_pos >= len(cdata):
                break
            if (flag >> bit) & 1:
                out.append(cdata[in_pos])
                in_pos += 1
            else:
                if in_pos + 1 >= len(cdata):
                    break
                b0 = cdata[in_pos]
                b1 = cdata[in_pos + 1]
                in_pos += 2
                offset = b0 | ((b1 & 0xF0) << 4)
                length = (b1 & 0x0F) + 3
                if offset == 0 or offset > len(out):
                    raise ValueError(f"Invalid LZSS backreference offset {offset} at output len {len(out)}")
                for _ in range(length):
                    out.append(out[-offset])
    return bytes(out)


class Derap:
    """
    Parses and debinarizes Bohemia Interactive RAP binary configuration (config.bin) into C++ config.cpp syntax.
    """
    def __init__(self, data: bytes):
        self.data = data

    def read_cstr(self, p: int):
        end = self.data.find(b"\x00", p)
        if end == -1:
            return "", len(self.data)
        return self.data[p:end].decode("latin1", errors="replace"), end + 1

    def read_compact_int(self, p: int):
        res = 0
        shift = 0
        while True:
            if p >= len(self.data):
                return res, p
            b = self.data[p]
            p += 1
            res |= (b & 0x7F) << shift
            if not (b & 0x80):
                break
            shift += 7
        return res, p

    def parse_array_element(self, p: int):
        if p >= len(self.data):
            return '""', p
        etype = self.data[p]
        p += 1
        if etype == 0:  # String
            s, p = self.read_cstr(p)
            s_clean = s.replace('"', '""')
            return f'"{s_clean}"', p
        elif etype == 1:  # Float
            if p + 4 > len(self.data): return "0", len(self.data)
            fval = struct.unpack("<f", self.data[p:p+4])[0]
            p += 4
            return f"{fval:g}", p
        elif etype == 2:  # Int32
            if p + 4 > len(self.data): return "0", len(self.data)
            ival = struct.unpack("<i", self.data[p:p+4])[0]
            p += 4
            return str(ival), p
        elif etype == 3:  # Nested array
            sub_len, p = self.read_compact_int(p)
            sub_items = []
            for _ in range(sub_len):
                item_str, p = self.parse_array_element(p)
                sub_items.append(item_str)
            return "{" + ", ".join(sub_items) + "}", p
        elif etype == 4:  # Variable / Identifier
            var_name, p = self.read_cstr(p)
            return var_name, p
        else:
            return f"/* unknown etype {etype} */", p

    def parse_class_body(self, p: int, indent: int = 0):
        if p >= len(self.data):
            return [], ""
        pad = "  " * indent
        base_name, p = self.read_cstr(p)
        n_entries, p = self.read_compact_int(p)
        lines = []

        for _ in range(n_entries):
            if p >= len(self.data):
                break
            etype = self.data[p]
            p += 1
            if etype == 0:  # Subclass
                cname, p = self.read_cstr(p)
                if p + 4 > len(self.data): break
                body_off = struct.unpack("<I", self.data[p:p+4])[0]
                p += 4
                sub_lines, sub_base = self.parse_class_body(body_off, indent + 1)
                header = f"{pad}class {cname}"
                if sub_base:
                    header += f" : {sub_base}"
                header += " {"
                lines.append(header)
                lines.extend(sub_lines)
                lines.append(f"{pad}}};")
            elif etype == 1:  # Value property
                if p >= len(self.data): break
                vtype = self.data[p]
                p += 1
                vname, p = self.read_cstr(p)
                if vtype == 0:  # String
                    val, p = self.read_cstr(p)
                    val_clean = val.replace('"', '""')
                    lines.append(f'{pad}{vname} = "{val_clean}";')
                elif vtype == 1:  # Float
                    if p + 4 > len(self.data): break
                    fval = struct.unpack("<f", self.data[p:p+4])[0]
                    p += 4
                    lines.append(f"{pad}{vname} = {fval:g};")
                elif vtype == 2:  # Int32
                    if p + 4 > len(self.data): break
                    ival = struct.unpack("<i", self.data[p:p+4])[0]
                    p += 4
                    lines.append(f"{pad}{vname} = {ival};")
                elif vtype in [3, 4]:  # Expression / Variable
                    val, p = self.read_cstr(p)
                    lines.append(f"{pad}{vname} = {val};")
                else:
                    lines.append(f"{pad}// UNKNOWN VTYPE {vtype} for {vname}")
            elif etype == 2:  # Array property
                vname, p = self.read_cstr(p)
                arr_len, p = self.read_compact_int(p)
                items = []
                for _ in range(arr_len):
                    item_str, p = self.parse_array_element(p)
                    items.append(item_str)
                lines.append(f"{pad}{vname}[] = {{{', '.join(items)}}};")
            elif etype == 3:  # External class forward declaration
                cname, p = self.read_cstr(p)
                lines.append(f"{pad}class {cname};")
            else:
                lines.append(f"{pad}// UNKNOWN ENTRY TYPE {etype} at {p}")
                break

        return lines, base_name

    def decompile(self) -> str:
        idx = self.data.find(b"\x00raP")
        if idx == -1:
            raise ValueError("RAP magic signature \\x00raP not found")
        self.data = self.data[idx:]
        lines, _ = self.parse_class_body(16)
        return "\n".join(lines) + "\n"


def is_trap_entry(name: str, pack: int, orig_size: int, data_size: int) -> bool:
    """Detects obfuscation junk, illegal file names, and dummy traps inserted by mod packers."""
    if not name or name in ["*.*", "_._"]:
        return True
    if any(c in name for c in ["*", "?", ":", "<", ">", "|", '"']):
        return True
    # Fake packing flags
    if pack in [0x56657273, 0x456e6372]:  # 'Vers', 'Encr'
        return True
    # Clones with integer multiple ratios and random consonant-vowel names
    base = os.path.basename(name).lower()
    if data_size > 0 and orig_size % data_size == 0 and (orig_size // data_size) in [2, 3, 4, 5]:
        stem = os.path.splitext(base)[0]
        if re.fullmatch(r"[a-z]{3,14}", stem) and not any(k in stem for k in [
            "zombie", "player", "female", "soldier", "police", "surviv", "doctor",
            "taviana", "camera", "head", "sound", "radio", "house", "build", "weapon"
        ]):
            return True
    return False


def unpack_pbo(pbo_path: str, output_dir: str, decompile_configs: bool = True):
    pbo_name = os.path.basename(pbo_path)
    print(f"\n[*] Processing archive: {pbo_name}")
    print(f"    Target: {output_dir}")

    with open(pbo_path, "rb") as f:
        first = b""
        while True:
            c = f.read(1)
            if c == b"\x00" or not c: break
            first += c

        headers_dict = {}
        if first == b"":
            f.read(20)
            while True:
                k = b""
                while True:
                    c = f.read(1)
                    if c == b"\x00" or not c: break
                    k += c
                if not k: break
                v = b""
                while True:
                    c = f.read(1)
                    if c == b"\x00" or not c: break
                    v += c
                headers_dict[k.decode("latin1", errors="replace")] = v.decode("latin1", errors="replace")
        else:
            f.seek(0)

        entries = []
        while True:
            fn = b""
            while True:
                c = f.read(1)
                if c == b"\x00" or not c: break
                fn += c
            props = f.read(20)
            if len(props) < 20 or fn == b"": break
            pack, orig, res, ts, sz = struct.unpack("<IIIII", props)
            entries.append((fn.decode("latin1"), pack, orig, res, ts, sz))

        extracted_count = 0
        skipped_traps = 0
        configs_decompiled = 0

        os.makedirs(output_dir, exist_ok=True)
        if "prefix" in headers_dict:
            prefix_val = headers_dict["prefix"]
            for pfx_name in ["$PBOPREFIX$.txt", "$PBOPREFIX$"]:
                with open(os.path.join(output_dir, pfx_name), "w", encoding="utf-8") as pf:
                    pf.write(prefix_val + "\n")

        for fn, pack, orig, res, ts, sz in entries:
            data = f.read(sz)

            if is_trap_entry(fn, pack, orig, sz):
                skipped_traps += 1
                continue

            # Decompress if LZSS compressed
            if pack == 0x43707273:
                try:
                    payload = decompress_lzss(data, orig)
                except Exception:
                    # Obfuscated fake file marked as Cprs
                    skipped_traps += 1
                    continue
            else:
                payload = data

            # Strip leading NULLs or padding before \x00raP in configs
            is_cfg = fn.lower().endswith("config.bin")
            if is_cfg:
                idx = payload.find(b"\x00raP")
                if idx != -1:
                    payload = payload[idx:]

            clean_rel = fn.replace("\\", "/").strip("/ ")
            parts = [re.sub(r'[<>:"/\\|?*]', '_', p).strip(". ") for p in clean_rel.split("/")]
            safe_rel = os.path.join(*parts)
            target_path = os.path.join(output_dir, safe_rel)
            os.makedirs(os.path.dirname(target_path), exist_ok=True)

            with open(target_path, "wb") as out_f:
                out_f.write(payload)
            extracted_count += 1

            if decompile_configs and is_cfg:
                cpp_path = os.path.splitext(target_path)[0] + ".cpp"
                try:
                    der = Derap(payload)
                    cpp_text = der.decompile()
                    with open(cpp_path, "w", encoding="utf-8") as cpp_f:
                        cpp_f.write(cpp_text)
                    configs_decompiled += 1
                except Exception as e:
                    print(f"    [!] Failed to decompile config {fn}: {e}")

        print(f"    [OK] Extracted: {extracted_count} files, {configs_decompiled} configs decompiled, {skipped_traps} traps skipped.")
        return extracted_count, configs_decompiled, skipped_traps


def main():
    parser = argparse.ArgumentParser(description="DayZ Origins Mod 1.8.3 PBO Unpacker & RAP Decompiler")
    parser.add_argument("path", help="Path to a .pbo file or a directory containing .pbo files")
    parser.add_argument("-o", "--output", default="unpacked_origins", help="Output directory (default: unpacked_origins)")
    parser.add_argument("--no-decompile", action="store_true", help="Do not decompile config.bin to config.cpp")
    args = parser.parse_args()

    input_path = os.path.abspath(args.path)
    output_dir = os.path.abspath(args.output)
    decompile = not args.no_decompile

    if os.path.isfile(input_path):
        unpack_pbo(input_path, output_dir, decompile_configs=decompile)
    elif os.path.isdir(input_path):
        pbo_list = sorted(glob.glob(os.path.join(input_path, "*.pbo")))
        if not pbo_list:
            print(f"[-] No .pbo files found in {input_path}")
            return
        print(f"============================================================")
        print(f"Found {len(pbo_list)} PBO archives in:\n{input_path}")
        print(f"Output directory:\n{output_dir}")
        print(f"============================================================")

        tot_files = 0
        tot_configs = 0
        tot_traps = 0

        for pbo in pbo_list:
            addon_name = os.path.splitext(os.path.basename(pbo))[0]
            addon_out = os.path.join(output_dir, addon_name)
            ef, ec, st = unpack_pbo(pbo, addon_out, decompile_configs=decompile)
            tot_files += ef
            tot_configs += ec
            tot_traps += st

        print(f"\n============================================================")
        print(f"[FINISHED] Processed {len(pbo_list)} PBOs successfully!")
        print(f"  Valid files extracted: {tot_files}")
        print(f"  Configs decompiled:    {tot_configs}")
        print(f"  Traps & junk filtered: {tot_traps}")
        print(f"============================================================")
    else:
        print(f"[-] Path not found: {input_path}")


if __name__ == "__main__":
    main()
