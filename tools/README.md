# Origins PBO Unpacker & RAP Decompiler

[English](#english) | [Русский](#русский)

---

<a name="english"></a>
## English

Standalone Python utility to unpack, de-obfuscate, and debinarize **DayZ Origins Mod 1.8.3** PBO archives into clean resources and readable `config.cpp` files.

### ⚡ Key Features

- **Header De-Obfuscation:** Automatically strips junk header padding, illegal filenames (`*.*`, `_._`), and fake packing flags (`Vers`, `Encr`).
- **Native Bohemia LZSS Decompression:** Decompresses genuine Bohemia Interactive LZSS compressed entries (`pack == 0x43707273`), including `config.bin`, `stringtable.xml`, and `.wrp` terrain maps.
- **Native RAP Decompiler (derap):** Recursively decodes binary `config.bin` files into clean, indented C++ syntax (handling complex nested arrays, hitpoints, memory points, and animation sources).
- **Zero Dependencies:** Pure Python 3 standard library only — no `pip` or external C extensions required.
- **Prefix Generation:** Automatically creates `$PBOPREFIX$.txt` and `$PBOPREFIX$` files based on official archive metadata.

### 🚀 Usage

#### 1. Unpack a single PBO archive (and decompile config.bin -> config.cpp):
```bash
python tools/origins_pbo_tool.py "path/to/ori_weapons.pbo" -o "extracted/ori_weapons"
```

#### 2. Unpack all PBO archives in `@OriginsMod/Addons`:
```bash
python tools/origins_pbo_tool.py "path/to/@OriginsMod/Addons" -o "unpacked_origins"
```

#### 3. Unpack only without decompiling configs:
```bash
python tools/origins_pbo_tool.py "path/to/addon.pbo" -o "output_dir" --no-decompile
```

### 📋 Requirements
- Python 3.7 or higher.
- Compatible with Windows, Linux, and macOS.

---

<a name="русский"></a>
## Русский

Автономная Python-утилита для распаковки, деобфускации и разбинаривания PBO-архивов **DayZ Origins Mod 1.8.3** с извлечением чистых ассетов и декомпиляцией `config.bin` в читаемый `config.cpp`.

### ⚡ Особенности

- **Чистая деобфускация:** Автоматически выявляет и вырезает мусорные ловушки в заголовках (`*.*`, `_._`), файлы с запрещенными именами, фейковые флаги сжатия (`Vers`, `Encr`) и кратно сжатые дубликаты.
- **Встроенная распаковка Bohemia LZSS:** Корректно распаковывает реальные файлы со сжатием `pack == 0x43707273` (`config.bin`, `stringtable.xml`, ландшафты `.wrp`).
- **Встроенный декомпилятор RAP (derap):** Рекурсивный разбор бинарных деревьев классов, вложенных подмассивов (ladders, hitpoints), чисел с плавающей точкой, целых чисел и строковых значений.
- **Ноль внешних зависимостей:** Работает на чистом Python 3.7+ без установки сторонних библиотек через `pip`.
- **Генерация префиксов:** Создает файлы `$PBOPREFIX$.txt` и `$PBOPREFIX$` на основе официальных метаданных архива.

### 🚀 Использование

#### 1. Распаковка одного PBO-архива:
```bash
python tools/origins_pbo_tool.py "path/to/ori_base_buildings.pbo" -o "extracted/ori_base_buildings"
```

#### 2. Распаковка всех PBO-архивов из папки `@OriginsMod/Addons`:
```bash
python tools/origins_pbo_tool.py "D:/Games/ArmA 2/@OriginsMod/Addons" -o "D:/Origins_Unpacked"
```

#### 3. Распаковка без декомпиляции `config.bin`:
```bash
python tools/origins_pbo_tool.py "path/to/addon.pbo" -o "output_dir" --no-decompile
```

### 📋 Требования
- Python 3.7 или новее.
- Поддерживаются Windows, Linux и macOS.
