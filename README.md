# DayZ Origins Mod 1.8.3 — Client Configuration Definitions & Class Reference

[English](#english) | [Русский](#русский)

---

<a name="english"></a>
## English

> **Reference documentation and configuration catalog for DayZ Origins Mod v1.8.3 addons.**  
> *This repository contains exclusively text configuration declarations (`config.cpp`), localization string tables (`stringtable.xml`), PBO prefixes (`$PBOPREFIX$`), and an open-source Python tool for archive extraction and de-obfuscation. Designed for server administrators, modders, mission creators, and database managers.*

### ⚖️ Legal Status & Policy Compliance (Disclaimer)

1. **No Proprietary Binary Game Assets:**
   - This repository **DOES NOT CONTAIN** any copyrighted 3D model geometries (`.p3d`), textures (`.paa`), sound recordings (`.ogg`, `.wss`), animations (`.rtm`), or terrain binaries (`.wrp`).
2. **Interface & Class Specifications Only (API / Interoperability):**
   - The files provided are decompiled, declarative configuration definitions (`CfgVehicles`, `CfgWeapons`, `CfgMagazines`, `CfgBuildingLoot`, etc.). Under US Copyright Law (17 U.S.C. § 102(b)) and EU Software Directives, functional interface specifications, parameters, and class names necessary for interoperability are not subject to copyright.
3. **Fair Use & Non-Commercial Purpose:**
   - These references are published strictly for educational, research, and interoperability purposes to allow community server owners to balance loot tables, fix legacy compatibility issues, and create server-side scripts.
4. **No DRM Circumvention:**
   - The original PBO files utilized standard non-encrypted archive packaging with obfuscated header padding. This repository does not circumvent any digital rights management or encryption systems.
5. **Attribution:**
   - DayZ Origins Mod was originally created by **GamersPlatoon / Origins Mod Team**.
   - Arma 2: Operation Arrowhead is a registered trademark of **Bohemia Interactive a.s.**

### 📁 Repository Structure

The directory structure mirrors the official Bohemia Interactive virtual PBO prefix hierarchy:

```
├── dayz/                     # Base DayZ class declarations
├── dayz_anim/                # Animation states and gestures
├── dayz_code/                # System configs, loot tables, zombie FSM
├── dayz_equip/               # Equipment, medical supplies, backpacks
├── dayz_sfx/                 # Sound effects & environment events
├── dayz_weapons/             # Weapons, magazines, and ammunition
├── ori_air/                  # Aircraft (DC-3, biplanes, gyrocopters)
│   ├── camels/
│   ├── dc3/
│   └── rth_copter/
├── ori_base_buildings/       # Base building system (Houses L1-L4, garages, gates)
│   └── base/                 # Trader and neutral bases
├── ori_buildings/            # Urban buildings, Ivan's lab, bunkers, NPP
├── ori_characters/           # Survivor, bandit, hero, mutant, and zombie skins
├── ori_data/                 # Core mod metadata
├── ori_items/                # Origins unique items, crafting materials, tents
│   └── tent/
├── ori_language/             # Language definitions
├── ori_misc/                 # Miscellaneous props and objects
├── ori_plants/               # Flora and vegetation
├── ori_roads/                # Road segments
├── ori_signs/                # Road signs and posters
├── ori_sounds/               # CfgSounds audio definitions
├── ori_structures/           # Complex structures (oil rigs, bridges, tunnels)
├── ori_taviana/              # Taviana world configuration (CfgWorlds)
├── ori_train/                # Trains and railway assets
├── ori_ui/                   # UI dialogs, displays, and HUD elements
├── ori_vehicles/             # Custom Origins vehicles (Scrap APC, buggy, submarine)
│   ├── bathmobile/
│   ├── flycraft/
│   ├── rth_amphicar/
│   ├── rth_raft/
│   ├── rth_scrapapc/
│   └── submarine/
├── ori_weapons/              # Custom Origins weapons (AEK-971, FAMAS, RH series)
│   ├── aek_971/
│   ├── c1987_famas/
│   ├── rh_aks/
│   └── type89/
├── ori_wrecks/               # Vehicle wrecks and scrap piles
└── tools/                    # Standalone Python unpacker & RAP decompiler
```

### 📄 Contents of Each Addon Folder

1. **`config.cpp`** — Full debinarized human-readable C++ configuration file (class hierarchies, inheritance, memory points, animations, armor values, hitpoints, and loot tables).
2. **`$PBOPREFIX$.txt` / `$PBOPREFIX$`** — Package prefix required by Bohemia Interactive packaging tools (`Mikero PBOProject`, `AddonBuilder`).
3. **`stringtable.xml`** — Localization keys, strings, and item display names.
4. **Associated scripts (`.sqf`, `.fsm`, `.hpp`, `.csv`)** — Logic and state machine declarations included with the configs.

### 🔧 Standalone Extraction Tool

A pure Python 3 CLI tool is provided in `tools/origins_pbo_tool.py`:
- De-obfuscates legacy Origins 1.8.3 PBO archives.
- Automatically handles Bohemia LZSS decompression (`pack == 0x43707273`).
- Recursively debinarizes `config.bin` into clean `config.cpp`.
- Extracts all clean resources (sounds, models, textures).

```bash
# Unpack a single PBO:
python tools/origins_pbo_tool.py "ori_base_buildings.pbo" -o "extracted/ori_base_buildings"

# Unpack entire @OriginsMod/Addons directory:
python tools/origins_pbo_tool.py "@OriginsMod/Addons" -o "unpacked_origins"
```

---

<a name="русский"></a>
## Русский

> **Справочник конфигураций и классов аддонов клиента DayZ Origins Mod v1.8.3**  
> *Данный репозиторий содержит исключительно текстовые конфигурационные декларации (`config.cpp`), таблицы локализации (`stringtable.xml`), префиксы аддонов (`$PBOPREFIX$`) и открытую утилиту на Python для распаковки и разбинаривания. Предназначен для разработчиков серверов, мододелов, создателей миссий и лут-таблиц.*

### ⚖️ Правовой статус и соответствие правилам (Правовая информация)

1. **Отсутствие проприетарных бинарных медиа-ресурсов:**
   - В данном репозитории **ОТСУТСТВУЮТ** какие-либо защищенные авторским правом 3D-модели (`.p3d`), текстуры (`.paa`), звуковые файлы (`.ogg`, `.wss`), анимации (`.rtm`) или файлы ландшафтов (`.wrp`).
2. **Исключительно интерфейсные спецификации (API / Class Definitions):**
   - Файлы `config.cpp` представляют собой декомпилированные декларативные схемы классов (`CfgVehicles`, `CfgWeapons`, `CfgMagazines`, `CfgBuildingLoot` и др.), необходимые исключительно для обеспечения программной совместимости (Interoperability).
3. **Законность и добросовестное использование (Fair Use & Interoperability):**
   - Настоящие материалы публикуются исключительно в исследовательских и справочных целях для обеспечения совместимости стороннего серверного ПО, генераторов лут-позиций и админ-инструментов.
4. **Обфускация архивов:**
   - В оригинальных клиентских PBO-файлах содержался мусорный заголовочный байт-паддинг, препятствовавший чтению конфигураций стандартными утилитами. В настоящем каталоге представлены чистые разбинаренные конфигурации.
5. **Авторские права:**
   - Все права на оригинальный мод DayZ Origins принадлежат **GamersPlatoon / Origins Mod Team**.
   - Движок Arma 2: Operation Arrowhead принадлежит **Bohemia Interactive a.s.**

### 📁 Структура каталога

Репозиторий организован по модульной структуре аддонов. Каждая директория соответствует официальному виртуальному пути аддона (PBO Prefix):

```
├── dayz/                     # Базовые классы DayZ
├── dayz_anim/                # Анимации и жесты
├── dayz_code/                # Системные конфигурации, лут, FSM и правила
├── dayz_equip/               # Экипировка, медицина, рюкзаки
├── dayz_sfx/                 # Звуковые эффекты и события
├── dayz_weapons/             # Оружие и боеприпасы DayZ
├── ori_air/                  # Воздушная техника (DC-3, бипланы, гирокоптеры)
├── ori_base_buildings/       # Базостроительство Origins (дома L1-L4, гаражи, заборы)
│   └── base/                 # Базы торговцев и нейтралов
├── ori_buildings/            # Городские строения, лаборатория Ивана, бункеры, АЭС
├── ori_characters/           # Скины выживших, бандитов, героев, мутантов и зомби
├── ori_data/                 # Общие данные мода
├── ori_items/                # Предметы Origins, материалы крафта, палатки
├── ori_language/             # Языковые ресурсы
├── ori_misc/                 # Вспомогательные объекты
├── ori_plants/               # Растительность и флора
├── ori_roads/                # Дорожные покрытия
├── ori_signs/                # Дорожные знаки и таблички
├── ori_sounds/               # Декларации звуков CfgSounds
├── ori_structures/           # Инженерные сооружения (нефтевышки, мосты, тоннели)
├── ori_taviana/              # Конфигурация мира Тавиана (CfgWorlds)
├── ori_train/                # Железнодорожные составы и пути
├── ori_ui/                   # Интерфейс, диалоги и HUD
├── ori_vehicles/             # Уникальная наземная и водная техника Origins
├── ori_weapons/              # Уникальное оружие Origins (АЕК, FAMAS, RH AKS, Дробовики)
├── ori_wrecks/               # Остовы техники и обломки
└── tools/                    # Автономная Python-утилита распаковки и декомпиляции
```

### 📄 Состав каждой папки аддона

В каждой папке находятся файлы:
1. **`config.cpp`** — полностью разбинаренный текстовый конфигурационный файл (дерево классов C++, наследование, параметры анимаций, памяти, слотов инвентаря, шансов спавна, свойств брони и урона).
2. **`$PBOPREFIX$.txt` / `$PBOPREFIX$`** — файл виртуального префикса для упаковщиков PBO (`Mikero PBOProject`, `AddonBuilder`, `PBOConsole`).
3. **`stringtable.xml`** — файл строковых констант и локализации названий (присутствует в корневых аддонах и модулях).
4. **Вспомогательные скрипты (`.sqf`, `.fsm`, `.hpp`, `.csv`)** — если аддон содержит сопутствующие конфигурации логики (например, `player_act.sqf` или FSM зомби).

### 🛠 Применение для сервероделов и разработчиков

- **Таблицы лута:** точное сопоставление classname предметов и магазинов (`CfgBuildingLoot`, `CfgSurvival`).
- **Строительство баз:** проверка классов фаз постройки, рецептов и уровней (`Uroven1DrevenaBudka` .. `Uroven3VelkyDomek`, замки, укрепления).
- **Спавн техники:** корректные названия классов спавна машин, летательных аппаратов и лодок (`ScrapAPC`, `Amphicar`, `ScrapBuggy`, `Submarine`).
- **Скины и зомби:** классы NPC для кастомных спавнеров и миссий (`vil_alien`, `ori_mechanik`, `Doctor Ivan`, `z_Mutant`).

### 🔧 Автономная утилита распаковки и декомпиляции

В каталоге `tools/` размещена Python-утилита **`origins_pbo_tool.py`**, которая позволяет самостоятельно распаковать любой оригинальный PBO-файл Origins Mod 1.8.3 с извлечением всех ассетов (моделей, текстур, звуков) и декомпиляцией конфигураций:

```bash
# Распаковать отдельный архив:
python tools/origins_pbo_tool.py "ori_weapons.pbo" -o "unpacked_weapons"

# Распаковать всю папку с аддонами:
python tools/origins_pbo_tool.py "@OriginsMod/Addons" -o "full_unpacked_origins"
```
Подробное описание параметров доступно в [tools/README.md](tools/README.md).
