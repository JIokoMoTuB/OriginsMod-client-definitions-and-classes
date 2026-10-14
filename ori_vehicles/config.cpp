class CfgPatches {
  class ori_vehicles {
    units[] = {"ori_vil_originsmod_lublin_truck", "ori_vil_originsmod_truck_civ", "ori_vil_originsmod_volvo_fl290", "ori_p85_originsmod_CUCV", "ori_p85_originsmod_cucv_pickup", "ori_vil_lada_2105_rust", "ori_poldek", "ori_poldek_black", "ori_transit", "ori_survivorBus", "ori_KaTransp", "ori_taviander", "ori_m3", "ori_buchanka", "ori_ZAZ968M", "ori_ScrapRaft", "ori_maniac", "ori_gaika", "ori_originsmod_pickupold", "ori_originsmod_pickupoldfuel", "ori_vil_truck_civ_base", "ori_excavator", "SUV_Special", "ArmoredSUV_Base_Ori", "SUV_MG_Ori", "ori_bike_d2", "SectorMG_Ori", "SectorMG2_Ori", "car_hatchback_ori", "car_sedan_ori", "datsun1_civil_1_open_ori", "Skoda_ori", "SkodaBlue_ori", "SkodaRed_ori", "SkodaGreen_ori", "UAZ_RU_ori", "UAZ_MG_Ori", "Volha_2_TK_CIV_EP1_ori", "ATV_Ori", "hilux1_civil_1_open_ori", "hilux1_civil_3_open_EP1_ori", "HMMWV_Ori", "Kamaz_Ori", "KamazOpen_Ori", "Lada1_ori", "Lada2_TK_CIV_EP1_ori", "LadaLM_ori", "LandRover_MG_Ori", "LandRover_Ori", "Offroad_MG_Ori", "RHIB_Ori", "S1203_TK_CIV_EP1_ori", "Tractor_ori", "TT650_Civ_ori", "TT650_Gue_ori", "TT650_TK_CIV_EP1_ori", "Old_moto_ori", "UralCivil_ori", "UralCivil2_ori", "V3S_Civ_ori", "VWGolf_Ori", "Zodiac_Ori", "PBX_Ori", "Pickup_PK_Ori", "ori_col_truck_fuel", "ori_col_truck_tent"};
    weapons[] = {"M2_Ori"};
    requiredVersion = 0.1;
    requiredAddons[] = {"CAWater2", "CAWheeled", "CAWheeled_E"};
  };
};
class CfgFactionClasses {
  class rth_copter_class {
    displayName = "Origins Mod";
    priority = 0;
    side = 3;
  };
};
class CfgWeapons {
  class CarHorn;
  class ManiacHorn : CarHorn {
    drySound[] = {"\ori\vehicles\maniac\sound\ManiacTruck_Claxon.ogg", 20, 1, 400};
  };
  class MGun;
  class M2_Ori : MGun {
    bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01", 0.177828, 1, 15};
    bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03", 0.177828, 1, 15};
    bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02", 0.177828, 1, 15};
    bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01", 0.177828, 1, 15};
    bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01", 0.316228, 1, 15};
    bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02", 0.316228, 1, 15};
    bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03", 0.316228, 1, 15};
    bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04", 0.316228, 1, 15};
    bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01", 0.177828, 1, 15};
    bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02", 0.177828, 1, 15};
    bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03", 0.177828, 1, 15};
    bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04", 0.177828, 1, 15};
    soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
    scope = 1;
    magazines[] = {"100Rnd_127x99_M2"};
    magazineReloadTime = 1;
    canLock = 0;
    initSpeed = 1030;
    aiDispersionCoefY = 15;
    aiDispersionCoefX = 15;
    modes[] = {"manual", "close", "short", "medium", "far"};
    class manual : MGun {
      autoFire = 1;
      begin1[] = {"ca\sounds\weapons\machineguns\m2_single_1", 1.41254, 1, 1200};
      begin2[] = {"ca\sounds\weapons\machineguns\m2_single_2", 1.41254, 1, 1200};
      soundBegin[] = {"begin1", 0.3, "begin2", 0.7};
      reloadTime = 0.06;
      dispersion = 0.0005;
      showToPlayer = 0;
      burst = 1;
      aiRateOfFire = 0.5;
      aiRateOfFireDistance = 50;
      minRange = 1;
      minRangeProbab = 0.01;
      midRange = 2;
      midRangeProbab = 0.01;
      maxRange = 3;
      maxRangeProbab = 0.01;
      displayName = "";
    };
    class close : manual {
      showToPlayer = 0;
      soundBurst = 0;
      burst = 20;
      aiRateOfFire = 0.5;
      aiRateOfFireDistance = 50;
      minRange = 0;
      minRangeProbab = 0.05;
      midRange = 20;
      midRangeProbab = 0.58;
      maxRange = 100;
      maxRangeProbab = 0.3;
    };
    class short : close {
      burst = 20;
      aiRateOfFire = 0.2;
      aiRateOfFireDistance = 300;
      minRange = 50;
      minRangeProbab = 0.05;
      midRange = 150;
      midRangeProbab = 0.58;
      maxRange = 300;
      maxRangeProbab = 0.3;
    };
    class medium : close {
      burst = 20;
      aiRateOfFire = 0.2;
      aiRateOfFireDistance = 600;
      minRange = 200;
      minRangeProbab = 0.05;
      midRange = 500;
      midRangeProbab = 0.58;
      maxRange = 800;
      maxRangeProbab = 0.3;
    };
    class far : close {
      burst = 20;
      aiRateOfFire = 0.1;
      aiRateOfFireDistance = 1000;
      minRange = 600;
      minRangeProbab = 0.05;
      midRange = 800;
      midRangeProbab = 0.4;
      maxRange = 1200;
      maxRangeProbab = 0.3;
    };
    displayName = "M2 Machinegun";
  };
};
class CfgSounds {
  class z_origins_hidraulic1_0 {
    name = "Hidraulic1";
    sound[] = {"\ori\sounds\hidraulic1.ogg", "db-5", 1};
    titles[] = {};
  };
  class z_demolishwall_0 {
    name = "";
    sound[] = {"\ori\sounds\demolishwall.ogg", "db-5", 1};
    titles[] = {};
  };
  class z_ffalarm_0 {
    name = "";
    sound[] = {"\ori\sounds\ffalarm.ogg", 2, 1, 80};
    titles[] = {};
  };
  class z_spraycan_0 {
    name = "";
    sound[] = {"\ori\sounds\spraycan.ogg", 1, 1, 80};
    titles[] = {};
  };
  class z_subsink_0 {
    name = "";
    sound[] = {"\ori\vehicles\submarine\sound\bubbles1.ogg", 5, 1, 80};
    titles[] = {};
  };
  class z_subgoup_0 {
    name = "";
    sound[] = {"\ori\vehicles\submarine\sound\potop.ogg", 5, 1, 80};
    titles[] = {};
  };
};
class CfgVehicles {
  class Land;
  class LandVehicle : Land {
    class NewTurret;
  };
  class Bicycle;
  class AllVehicles;
  class Car : LandVehicle {
    class HitPoints {
      class HitLFWheel;
      class HitLBWheel;
      class HitLMWheel;
      class HitLF2Wheel;
      class HitRFWheel;
      class HitRBWheel;
      class HitRMWheel;
      class HitRF2Wheel;
      class HitGlass1;
      class HitGlass2;
      class HitGlass3;
      class HitGlass4;
      class HitFuel;
      class HitEngine;
      class HitBody;
    };
    class Turrets {
      class MainTurret : NewTurret {
        class ViewOptics;
      };
    };
    class AnimationSources;
  };
  class Ship : AllVehicles {
    class NewTurret;
    class ViewPilot;
    class AnimationSources;
  };
  class Boat : Ship {
    class HitPoints {
      class HitEngine {
        armor = 1.2;
        material = 60;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
    };
    class Turrets {
      class MainTurret : NewTurret {
        commanding = -1;
        startEngine = 0;
      };
    };
  };
  class Pickup_PK_base;
  class UAZ_MG_base;
  class Ori_car_turrets : Pickup_PK_base {
    class Turrets;
    class MainTurret;
  };
  class Ori_car_turrets2 : UAZ_MG_base {
    class Turrets;
    class MainTurret;
  };
  class Skodabase;
  class UAZ_Unarmed_Base;
  class Ural_Base;
  class SUV_Base_EP1;
  class Kamaz_Base;
  class PBX;
  class ori_gaika : UAZ_Unarmed_Base {
    armor = 32;
    mapSize = 6;
    faction = "rth_copter_class";
    vehicleClass = "Car";
    scope = 2;
    side = 3;
    icon = "\CA\wheeled_e\Data\UI\Icon_volha_CA.paa";
    picture = "\ori\vehicles\data\ico\pic_van_ca.paa";
    attendant = 0;
    DriverAction = "Golf_Driver";
    model = "\ori\vehicles\gaika\gaika";
    transportSoldier = 6;
    displayName = "Gaika";
    turnCoef = 2.9;
    memoryPointsGetInCargo[] = {"pos cargo 1", "pos cargo 2", "pos cargo 2", "pos cargo 3", "pos cargo 3", "pos cargo 4"};
    memoryPointsGetInCargoDir[] = {"pos cargo dir 1", "pos cargo dir 2", "pos cargo dir 2", "pos cargo dir 3", "pos cargo dir 3", "pos cargo dir 4"};
    cargoAction[] = {"HMMWV_Cargo01", "HMMWV_Cargo01", "HMMWV_Cargo01", "HMMWV_Cargo01", "HMMWV_Cargo01", "Golf_Cargo03"};
    crew = "Profiteer2";
    hasGunner = 0;
    transportMaxMagazines = 100;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 10;
    hiddenSelections[] = {"camo01"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\gaika\data\Body_co.paa"};
    class Damage {
      tex[] = {};
      mat[] = {"ori\vehicles\gaika\data\body.rvmat", "ori\vehicles\gaika\data\body.rvmat", "ori\vehicles\gaika\data\body_de.rvmat", "ori\vehicles\gaika\data\int.rvmat", "ori\vehicles\gaika\data\int.rvmat", "ori\vehicles\gaika\data\int_de.rvmat"};
    };
    outsideSoundFilter = 1;
    insideSoundCoef = 0.8;
    soundGear[] = {"", 5.62341e-05, 1};
    soundGetIn[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_door", 1, 1};
    soundGetOut[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_door", 1, 1, 30};
    soundEngineOnInt[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_start", 1, 1};
    soundEngineOnExt[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_start", 1, 1, 100};
    soundEngineOffInt[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_stop", 1, 1};
    soundEngineOffExt[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_stop", 1, 1, 100};
    buildCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_building_01", 0.707946, 1, 150};
    buildCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_building_02", 0.707946, 1, 150};
    buildCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_building_03", 0.707946, 1, 150};
    buildCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_building_04", 0.707946, 1, 150};
    soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
    WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_wood_01", 0.707946, 1, 150};
    WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_wood_02", 0.707946, 1, 150};
    WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_wood_03", 0.707946, 1, 150};
    WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_wood_04", 0.707946, 1, 150};
    soundWoodCrash[] = {"woodCrash0", 0.25, "woodCrash1", 0.25, "woodCrash2", 0.25, "woodCrash3", 0.25};
    ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_01", 0.707946, 1, 150};
    ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_02", 0.707946, 1, 150};
    ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_03", 0.707946, 1, 150};
    ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_04", 0.707946, 1, 150};
    soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_acceleration", 0.562341, 1};
        limit = "0.15";
        expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
      class AccelerationOut {
        sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_acceleration", 0.562341, 1, 100};
        limit = "0.15";
        expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_low", 1.41254, 0.6, 100};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
      };
      class EngineHighOut {
        sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_mid", 1.41254, 0.6, 120};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
      };
      class IdleOut {
        sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_ext_idle", 0.562341, 1, 100};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.4, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise3", 0.562341, 1, 50};
        frequency = "1";
        volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_low", 1.41254, 0.6};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
      };
      class EngineHighIn {
        sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_mid", 1.41254, 0.6};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
      };
      class IdleIn {
        sound[] = {"\ca\Sounds_E\Wheeled_E\lada\lada_int_idle", 0.794328, 1};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise4", 0.316228, 1};
        frequency = "1";
        volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
    class Exhausts {
      class Exhaust1 {
        position = "vyfuk start1";
        direction = "vyfuk konec1";
        effect = "ExhaustsEffect";
      };
      class Exhaust2 {
        position = "vyfuk start2";
        direction = "vyfuk konec2";
        effect = "ExhaustsEffect";
      };
    };
    class AnimationSources {
      class kapot {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class bagaznik {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class dvere_PP {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class dvere_PZ {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class dvere_LP {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class dvere_LZ {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class pluhPredni {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class kolaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class oknaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class predniOknoOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
      class HitGlass1 {
        source = "Hit";
        hitpoint = "HitGlass1";
        raw = 1;
      };
      class HitGlass2 : HitGlass1 {
        hitpoint = "HitGlass2";
      };
      class HitGlass3 : HitGlass1 {
        hitpoint = "HitGlass3";
      };
      class HitGlass4 : HitGlass1 {
        hitpoint = "HitGlass4";
      };
      class HitGlass5 : HitGlass1 {
        hitpoint = "HitGlass5";
      };
      class HitGlass6 : HitGlass1 {
        hitpoint = "HitGlass6";
      };
      class Hitarmor1 {
        source = "Hit";
        hitpoint = "";
        raw = 1;
      };
      class Hitarmor2 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor3 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor4 : Hitarmor1 {
        hitpoint = "";
      };
      class hopa {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
      class doska {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
    };
    class HitPoints {
      class Hitarmor1 {
        armor = 1;
        material = -1;
        name = "pluhPredni";
        visual = "pluhPredni";
        passThrough = 0.2;
      };
      class Hitarmor2 : Hitarmor1 {
        name = "kolaOchrana";
        visual = "kolaOchrana";
      };
      class Hitarmor3 : Hitarmor1 {
        name = "oknaOchrana";
        visual = "oknaOchrana";
      };
      class Hitarmor4 : Hitarmor1 {
        name = "predniOknoOchrana";
        visual = "predniOknoOchrana";
      };
      class HitGlass1 {
        armor = 0.5;
        material = -1;
        name = "sklo_p1";
        visual = "sklo_p1";
        passThrough = 1;
      };
      class HitGlass2 : HitGlass1 {
        name = "sklo_pl1";
        visual = "sklo_pl1";
      };
      class HitGlass3 : HitGlass1 {
        name = "sklo_pp1";
        visual = "sklo_pp1";
      };
      class HitGlass4 : HitGlass1 {
        name = "sklo_z1";
        visual = "sklo_z1";
      };
      class HitGlass5 : HitGlass1 {
        name = "sklo_zl1";
        visual = "sklo_zl1";
      };
      class HitGlass6 : HitGlass1 {
        name = "sklo_zp1";
        visual = "sklo_zp1";
      };
      class HitLFWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.2;
      };
      class HitLBWheel : HitLFWheel {
        name = "wheel_1_2_steering";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "wheel_2_1_steering";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "wheel_2_2_steering";
        visual = "";
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 1;
      };
      class HitLGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 1;
      };
      class HitEngine {
        armor = 1.2;
        material = -1;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
      class HitBody {
        armor = 0.4;
        material = -1;
        name = "karoserie";
        visual = "karoserie";
        passThrough = 1;
      };
      class HitFuel {
        armor = 1.4;
        material = -1;
        name = "palivo";
        passThrough = 1;
      };
    };
    class Reflectors {
      class Front1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "p svetlo";
        direction = "konec p svetla";
        hitpoint = "p svetlo";
        selection = "p svetlo";
        size = 1;
        brightness = 1;
      };
      class Front2 : Front1 {
        position = "l svetlo";
        direction = "konec l svetla";
        hitpoint = "l svetlo";
        selection = "l svetlo";
      };
    };
  };
  class ori_vil_originsmod_lublin_truck : UAZ_Unarmed_Base {
    armor = 30;
    damageResistance = 0.01821;
    mapSize = 6;
    faction = "rth_copter_class";
    vehicleClass = "Car";
    scope = 2;
    side = 3;
    icon = "\ori\vehicles\data\ico\ico_van_ca.paa";
    picture = "\ori\vehicles\data\ico\pic_van_ca.paa";
    attendant = 0;
    DriverAction = "Golf_Driver";
    model = "\ori\vehicles\VIL_lublin_truck";
    transportSoldier = 1;
    displayName = "Lublin (truck)";
    cargoAction[] = {"HMMWV_Cargo01"};
    crew = "";
    hasGunner = 0;
    transportMaxMagazines = 180;
    transportMaxWeapons = 22;
    transportMaxBackpacks = 10;
    hiddenSelections[] = {"camo01"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\data\lublin_t_co.paa"};
    class Reflectors {
      class Left1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "L svetlo";
        direction = "konec L svetla";
        hitpoint = "L svetlo";
        selection = "L svetlo";
        size = 1;
        brightness = 0.8;
      };
      class Right1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "P svetlo";
        direction = "konec P svetla";
        hitpoint = "P svetlo";
        selection = "P svetlo";
        size = 1;
        brightness = 0.8;
      };
    };
    class TransportMagazines {
    };
    class Library {
      libTextDesc = "Lublin van produced by FSR and later continued by Daewoo";
    };
    class AnimationSources {
      class pluhPredni {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class kolaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class oknaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class predniOknoOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
      class HitGlass1 {
        source = "Hit";
        hitpoint = "HitGlass1";
        raw = 1;
      };
      class HitGlass2 : HitGlass1 {
        hitpoint = "HitGlass2";
      };
      class HitGlass3 : HitGlass1 {
        hitpoint = "HitGlass3";
      };
      class HitGlass4 : HitGlass1 {
        hitpoint = "HitGlass4";
      };
      class HitGlass5 : HitGlass1 {
        hitpoint = "HitGlass5";
      };
      class HitGlass6 : HitGlass1 {
        hitpoint = "HitGlass6";
      };
      class HitGlass7 : HitGlass1 {
        hitpoint = "HitGlass7";
      };
      class HitGlass8 : HitGlass1 {
        hitpoint = "HitGlass8";
      };
    };
    class HitPoints {
      class HitGlass1 {
        armor = 0.3;
        material = -1;
        name = "sklo_p";
        visual = "sklo_p";
        passThrough = 0;
      };
      class HitGlass2 : HitGlass1 {
        name = "sklo_p1";
        visual = "sklo_p1";
      };
      class HitGlass3 : HitGlass1 {
        name = "sklo_p2";
        visual = "sklo_p2";
      };
      class HitGlass4 : HitGlass1 {
        name = "sklo_p3";
        visual = "sklo_p3";
      };
      class HitGlass5 : HitGlass1 {
        name = "sklo_l1";
        visual = "sklo_l1";
      };
      class HitGlass6 : HitGlass1 {
        name = "sklo_l2";
        visual = "sklo_l2";
      };
      class HitGlass7 : HitGlass1 {
        name = "sklo_l3";
        visual = "sklo_l3";
      };
      class HitGlass8 : HitGlass1 {
        name = "sklo_z";
        visual = "sklo_z";
      };
      class HitLFWheel {
        armor = 0.5;
        material = -1;
        name = "levy predni tlumic";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel : HitLFWheel {
        name = "levy zadni tlumic";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "pravy predni tlumic";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "pravy zadni tlumic";
        visual = "";
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.7;
        material = -1;
        name = "palivo";
        passThrough = 1;
      };
      class HitRGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitEngine {
        armor = 0.7;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
    };
    class Damage {
      tex[] = {"ori\vehicles\data\sedan_glass_ca.paa", "ca\wheeled\data\sedan_glassbr1_ca.paa", "ca\wheeled\data\sedan_glassbr2_ca.paa"};
      mat[] = {"ori\vehicles\data\lub1.rvmat", "ori\vehicles\data\lub1.rvmat", "ori\vehicles\data\lub1_de.rvmat", "ori\vehicles\data\lub2.rvmat", "ori\vehicles\data\lub2.rvmat", "ori\vehicles\data\lub2_de.rvmat", "ori\vehicles\data\lublin_old.rvmat", "ori\vehicles\data\lublin_old.rvmat", "ori\vehicles\data\lublin_old_de.rvmat", "ori\vehicles\data\lublin_new.rvmat", "ori\vehicles\data\lublin_new.rvmat", "ori\vehicles\data\lublin_new_de.rvmat", "ori\vehicles\data\lublin_t.rvmat", "ori\vehicles\data\lublin_t.rvmat", "ori\vehicles\data\lublin_t_de.rvmat", "ori\vehicles\data\ambulace.rvmat", "ori\vehicles\data\ambulace.rvmat", "ori\vehicles\data\pusty_de.rvmat"};
    };
  };
  class ori_originsmod_pickupold : Ori_car_turrets {
    armor = 26;
    mapSize = 6;
    hiddenSelections[] = {"camo", "main_body", "clan", "clan_sign"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\data\cucv_co.paa"};
    transportSoldier = 4;
    vehicleClass = "Car";
    damageResistance = 0.01821;
    faction = "rth_copter_class";
    crew = "";
    driverAction = "HMMWV_Driver";
    cargoAction[] = {"HMMWV_Cargo01"};
    class TransportMagazines {
    };
    model = "\ori\vehicles\ori_vil_postapoca_pickup";
    maxSpeed = 120;
    hideProxyInCombat = 0;
    castDriverShadow = 1;
    forceHideDriver = 0;
    side = 3;
    scope = 2;
    terrainCoef = 2;
    displayName = "Gatling Capri 69";
    icon = "\ori\vehicles\data\ico\ico_cucv_ca.paa";
    picture = "\ori\vehicles\data\ico\pic_cucv_ca.paa";
    transportMaxMagazines = 100;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 6;
    enableManualFire = 1;
    hideWeaponsGunner = 0;
    ejectDeadGunner = 1;
    ejectDeadCargo = 1;
    ejectDeadDriver = 1;
    ejectDeadCommander = 1;
    wheelCircumference = 3;
    soundGear[] = {"", "db-85", 1};
    soundGetIn[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door", "db-5", 1};
    soundGetOut[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door", "db-5", 1, 20};
    soundEngineOnInt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_start", 0.177828, 1};
    soundEngineOnExt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_start", 0.177828, 1, 100};
    soundEngineOffInt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_stop", 0.177828, 1};
    soundEngineOffExt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_stop", 0.177828, 1, 100};
    buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01", 0.707946, 1, 200};
    buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02", 0.707946, 1, 200};
    buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03", 0.707946, 1, 200};
    buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04", 0.707946, 1, 200};
    soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
    WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", 0.707946, 1, 200};
    WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", 0.707946, 1, 200};
    WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", 0.707946, 1, 200};
    WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", 0.707946, 1, 200};
    WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", 0.707946, 1, 200};
    WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", 0.707946, 1, 200};
    soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
    ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01", 0.707946, 1, 200};
    ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02", 0.707946, 1, 200};
    ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03", 0.707946, 1, 200};
    ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04", 0.707946, 1, 200};
    soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_accelerate_3_x", "db-5", 1};
        limit = 0.4;
        expression = "(engineOn*(1-camPos))*gmeterZ";
      };
      class AccelerationOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_accelerate_3", "db-5", 1, 200};
        limit = 0.4;
        expression = "(engineOn*camPos)*gmeterZ";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_low", 0.177828, 1.4, 100};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
      };
      class EngineHighOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_high", "db0", 0.8, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
      };
      class IdleOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_idle", "db-5", 1, 100};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.4, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_low_x", 0.316228, 1.4};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.45]))";
      };
      class EngineHighIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_high_x", "db0", 0.8};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
      };
      class IdleIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_idle_x", 0.316228, 1};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2", 0.177828, 1};
        frequency = "1";
        volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
    class Turrets : Turrets {
      class MainTurret : MainTurret {
        enableManualFire = 1;
        body = "";
        gun = "gatling";
        outGunnerMayFire = 1;
        forceHideGunner = 1;
        castGunnerShadow = 1;
        viewGunnerInExternal = 1;
        gunnerOpticsModel = "\ca\Weapons\optika_empty";
        gunnerForceOptics = 0;
        weapons[] = {"PKT"};
        soundServo[] = {};
        stabilizedInAxes = 0;
        magazines[] = {"100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK"};
        gunnerAction = "HMMWV_Cargo01";
        gunnerInAction = "HMMWV_Cargo01";
        minElev = -5;
        initElev = -5;
        maxElev = 5;
        minTurn = -5;
        maxTurn = 5;
        initTurn = -5;
        commanding = -3;
        gunnerCompartments = "Compartment1";
      };
    };
    class Library {
      libTextDesc = "Old Big Pickup";
    };
    class Reflectors {
      class Front1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "p svetlo";
        direction = "konec p svetla";
        hitpoint = "p svetlo";
        selection = "p svetlo";
        size = 1;
        brightness = 1;
      };
      class Front2 : Front1 {
        position = "l svetlo";
        direction = "konec l svetla";
        hitpoint = "l svetlo";
        selection = "l svetlo";
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"ori\vehicles\data\oldcar_rust.rvmat", "ori\vehicles\data\oldcar_rust.rvmat", "ori\vehicles\data\oldcar_rust_de.rvmat"};
    };
    class AnimationSources {
      class gatling {
        source = "reload";
        weapon = "PKT";
      };
      class doorhood {
        source = "user";
        animPeriod = 10;
        initPhase = 0;
      };
      class doorhood2 {
        source = "user";
        animPeriod = 10;
        initPhase = 0;
      };
      class platform_move {
        source = "user";
        animPeriod = 10;
        initPhase = 0;
      };
      class pluhPredni {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class kolaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class oknaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class predniOknoOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
      class hopa {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
      class doska {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
    };
    class UserActions {
      class platform_on {
        displayName = "Platform Up";
        position = "zamerny";
        radius = 1;
        priority = 3;
        showWindow = 0;
        onlyForPlayer = 0;
        condition = "(alive this) && (this animationPhase ""doorhood""< 0.5) && (player in [gunner this, driver this])";
        statement = "(this animate [""doorhood"", 1]) && (this animate [""doorhood2"", 1]) && (this animate [""platform_move"", 1])";
      };
      class platform_off {
        displayName = "Platform Down";
        position = "zamerny";
        radius = 1;
        priority = 3;
        showWindow = 0;
        onlyForPlayer = 0;
        condition = "(alive this) && (this animationPhase ""doorhood"" >= 0.5) && (player in [gunner this, driver this])";
        statement = "(this animate [""doorhood"", 0]) && (this animate [""doorhood2"", 0]) && (this animate [""platform_move"", 0])";
      };
    };
    class HitPoints {
      class HitLFWheel {
        armor = 1;
        material = -1;
        name = "levy predni tlumic";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.2;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel : HitLFWheel {
        name = "levy zadni tlumic";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "pravy predni tlumic";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "pravy zadni tlumic";
        visual = "";
      };
      class HitBody {
        armor = 1.3;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.8;
        material = -1;
        name = "palivo";
        passThrough = 1;
      };
      class HitRGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitEngine {
        armor = 0.8;
        material = 51;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
    };
  };
  class ori_originsmod_pickupoldfuel : UAZ_Unarmed_Base {
    armor = 32;
    mapSize = 6;
    hiddenSelections[] = {"main_body", "clan", "clan_sign"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\data\cucv_co.paa"};
    transportSoldier = 1;
    vehicleClass = "Car";
    faction = "rth_copter_class";
    crew = "Profiteer2";
    driverAction = "HMMWV_Driver";
    cargoAction[] = {"HMMWV_Cargo01"};
    class TransportMagazines {
    };
    model = "\ori\vehicles\ori_postapocar_fuel";
    maxSpeed = 90;
    hideProxyInCombat = 0;
    viewDriverInExternal = 1;
    castDriverShadow = 1;
    forceHideDriver = 0;
    side = 3;
    scope = 2;
    displayName = "Rodina 62 (Fuel truck)";
    icon = "\ori\vehicles\data\ico\ico_cucv_ca.paa";
    picture = "\ori\vehicles\data\ico\pic_cucv_ca.paa";
    transportMaxMagazines = 100;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 6;
    soundGear[] = {"", "db-85", 1};
    soundGetIn[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door", "db-5", 1};
    soundGetOut[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door", "db-5", 1, 20};
    soundEngineOnInt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_start", 0.177828, 1};
    soundEngineOnExt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_start", 0.177828, 1, 100};
    soundEngineOffInt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_stop", 0.177828, 1};
    soundEngineOffExt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_stop", 0.177828, 1, 100};
    buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01", 0.707946, 1, 200};
    buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02", 0.707946, 1, 200};
    buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03", 0.707946, 1, 200};
    buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04", 0.707946, 1, 200};
    soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
    WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", 0.707946, 1, 200};
    WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", 0.707946, 1, 200};
    WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", 0.707946, 1, 200};
    WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", 0.707946, 1, 200};
    WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", 0.707946, 1, 200};
    WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", 0.707946, 1, 200};
    soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
    ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01", 0.707946, 1, 200};
    ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02", 0.707946, 1, 200};
    ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03", 0.707946, 1, 200};
    ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04", 0.707946, 1, 200};
    soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_accelerate_3_x", "db-5", 1};
        limit = 0.4;
        expression = "(engineOn*(1-camPos))*gmeterZ";
      };
      class AccelerationOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_accelerate_3", "db-5", 1, 200};
        limit = 0.4;
        expression = "(engineOn*camPos)*gmeterZ";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_low", 0.177828, 1.4, 100};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
      };
      class EngineHighOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_high", "db0", 0.8, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
      };
      class IdleOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_idle", "db-5", 1, 100};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.4, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_low_x", 0.316228, 1.4};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.45]))";
      };
      class EngineHighIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_high_x", "db0", 0.8};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
      };
      class IdleIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_idle_x", 0.316228, 1};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2", 0.177828, 1};
        frequency = "1";
        volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
    class Library {
      libTextDesc = "Old Pickup with tank";
    };
    class Reflectors {
      class Left {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "L svetlo";
        direction = "konec L svetla";
        hitpoint = "L svetlo";
        selection = "L svetlo";
        size = 1;
        brightness = 1;
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"ori\vehicles\data\rust_pickup.rvmat", "ori\vehicles\data\rust_pickup.rvmat", "ori\vehicles\data\rust_pickup_de.rvmat"};
    };
    class AnimationSources {
      class pluhPredni {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class kolaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class oknaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class predniOknoOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
    };
    class HitPoints {
      class HitLFWheel {
        armor = 0.4;
        material = -1;
        name = "levy predni tlumic";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel : HitLFWheel {
        name = "levy zadni tlumic";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "pravy predni tlumic";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "pravy zadni tlumic";
        visual = "";
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.5;
        material = -1;
        name = "palivo";
        passThrough = 0.5;
      };
      class HitRGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitEngine {
        armor = 0.5;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 0.2;
      };
    };
  };
  class ori_p85_originsmod_CUCV : UAZ_Unarmed_Base {
    armor = 32;
    mapSize = 6;
    hiddenSelections[] = {"main_body", "clan", "clan_sign"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\data\cucv_co.paa"};
    transportSoldier = 3;
    vehicleClass = "Car";
    faction = "rth_copter_class";
    crew = "";
    damageResistance = 0.01221;
    driverAction = "HMMWV_Driver";
    cargoAction[] = {"HMMWV_Cargo01"};
    class TransportMagazines {
    };
    model = "\ori\vehicles\p85_cucv";
    maxSpeed = 100;
    insideSoundCoef = 0.8;
    hideProxyInCombat = 0;
    viewDriverInExternal = 1;
    castDriverShadow = 1;
    forceHideDriver = 0;
    side = 3;
    scope = 2;
    displayName = "M1008 CUCV";
    icon = "\ori\vehicles\data\ico\ico_cucv_ca.paa";
    picture = "\ori\vehicles\data\ico\pic_cucv_ca.paa";
    transportMaxMagazines = 100;
    transportMaxWeapons = 16;
    transportMaxBackpacks = 8;
    class Library {
      libTextDesc = "Jeep M38A1";
    };
    class Damage {
      tex[] = {"ori\vehicles\data\glass_ca.paa", "ca\wheeled\data\hatchback_glassbr1_ca.paa", "ca\wheeled\data\hatchback_glassbr2_ca.paa"};
      mat[] = {"ori\vehicles\data\cucv.rvmat", "ori\vehicles\data\cucv.rvmat", "ori\vehicles\data\cucv_de.rvmat"};
    };
    class AnimationSources {
      class pluhPredni {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class kolaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class oknaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class predniOknoOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
      class HitGlass1 {
        source = "Hit";
        hitpoint = "HitGlass1";
        raw = 1;
      };
      class HitGlass2 : HitGlass1 {
        hitpoint = "HitGlass2";
      };
      class HitGlass3 : HitGlass1 {
        hitpoint = "HitGlass3";
      };
      class HitGlass4 : HitGlass1 {
        hitpoint = "HitGlass4";
      };
      class HitGlass5 : HitGlass1 {
        hitpoint = "HitGlass5";
      };
      class HitGlass6 : HitGlass1 {
        hitpoint = "HitGlass6";
      };
      class HitGlass7 : HitGlass1 {
        hitpoint = "HitGlass7";
      };
      class HitGlass8 : HitGlass1 {
        hitpoint = "HitGlass8";
      };
      class HitGlass9 : HitGlass1 {
        hitpoint = "HitGlass9";
      };
      class HitGlass10 : HitGlass1 {
        hitpoint = "HitGlass10";
      };
      class HitGlass11 : HitGlass1 {
        hitpoint = "HitGlass11";
      };
      class HitGlass12 : HitGlass1 {
        hitpoint = "HitGlass12";
      };
    };
    class HitPoints {
      class HitGlass1 {
        armor = 0.3;
        material = -1;
        name = "sklo_p";
        visual = "sklo_p";
        passThrough = 0;
      };
      class HitGlass2 : HitGlass1 {
        name = "sklo_p1";
        visual = "sklo_p1";
      };
      class HitGlass3 : HitGlass1 {
        name = "sklo_p2";
        visual = "sklo_p2";
      };
      class HitGlass4 : HitGlass1 {
        name = "sklo_p3";
        visual = "sklo_p3";
      };
      class HitGlass5 : HitGlass1 {
        name = "sklo_l1";
        visual = "sklo_l1";
      };
      class HitGlass6 : HitGlass1 {
        name = "sklo_l2";
        visual = "sklo_l3";
      };
      class HitGlass7 : HitGlass1 {
        name = "sklo_l3";
        visual = "glass3";
      };
      class HitGlass8 : HitGlass1 {
        name = "sklo_z";
        visual = "sklo_z";
      };
      class HitGlass9 : HitGlass1 {
        name = "sklo_pp";
        visual = "sklo_pp";
      };
      class HitGlass10 : HitGlass1 {
        name = "sklo_pl";
        visual = "sklo_pl";
      };
      class HitGlass11 : HitGlass1 {
        name = "sklo_p4";
        visual = "sklo_p4";
      };
      class HitGlass12 : HitGlass1 {
        name = "sklo_l4";
        visual = "sklo_l4";
      };
      class HitLFWheel {
        armor = 0.25;
        material = -1;
        name = "levy predni tlumic";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel : HitLFWheel {
        name = "levy zadni tlumic";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "pravy predni tlumic";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "pravy zadni tlumic";
        visual = "";
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.5;
        material = -1;
        name = "palivo";
        passThrough = 0.5;
      };
      class HitRGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitEngine {
        armor = 0.6;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 0.2;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
    };
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_acceleration", 0.462341, 1};
        limit = "0.4";
        expression = "(engineOn*(1-camPos))*gmeterZ";
      };
      class AccelerationOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_acceleration", 0.462341, 1, 200};
        limit = "0.4";
        expression = "(engineOn*camPos)*gmeterZ";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_low1", 0.177828, 0.9, 100};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(camPos*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55])))*0.6";
      };
      class EngineHighOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_high1", 1, 0.8, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(camPos*engineOn*(rpm factor[0.6, 1.0]))*0.6";
      };
      class IdleOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_idle", 0.562341, 1, 100};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.5, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_low1", 0.316228, 0.7};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((1-camPos)*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55])))*0.6";
      };
      class EngineHighIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_high1", 1, 0.8};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((1-camPos)*engineOn*(rpm factor[0.6, 1.0]))*0.6";
      };
      class IdleIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_idle", 0.316228, 1};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.5, 0])*(1-camPos)";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2", 0.562341, 1};
        frequency = "1";
        volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
  };
  class ori_p85_originsmod_cucv_pickup : ori_p85_originsmod_CUCV {
    transportSoldier = 7;
    vehicleClass = "Car";
    faction = "rth_copter_class";
    displayName = "M1008 CUCV (Pickup)";
    icon = "\ori\vehicles\data\ico\ico_cucvp_ca.paa";
    picture = "\ori\vehicles\data\ico\pic_cucvp_ca.paa";
    mapSize = 7;
    model = "\ori\vehicles\p85_CUCV_pickup";
    class HitPoints {
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "sklo_p";
        visual = "sklo_p";
        passThrough = 0;
      };
      class HitGlass2 : HitGlass1 {
        name = "sklo_p1";
        visual = "sklo_p1";
      };
      class HitGlass3 : HitGlass1 {
        name = "sklo_p2";
        visual = "sklo_p2";
      };
      class HitGlass4 : HitGlass1 {
        name = "sklo_p3";
        visual = "sklo_p3";
      };
      class HitGlass5 : HitGlass1 {
        name = "sklo_l1";
        visual = "sklo_l1";
      };
      class HitGlass6 : HitGlass1 {
        name = "sklo_l2";
        visual = "sklo_l3";
      };
      class HitGlass7 : HitGlass1 {
        name = "sklo_l3";
        visual = "glass3";
      };
      class HitGlass8 : HitGlass1 {
        name = "sklo_z";
        visual = "sklo_z";
      };
      class HitGlass9 : HitGlass1 {
        name = "sklo_pp";
        visual = "sklo_pp";
      };
      class HitGlass10 : HitGlass1 {
        name = "sklo_pl";
        visual = "sklo_pl";
      };
      class HitGlass11 : HitGlass1 {
        name = "sklo_p4";
        visual = "sklo_p4";
      };
      class HitGlass12 : HitGlass1 {
        name = "sklo_l4";
        visual = "sklo_l4";
      };
      class HitLFWheel {
        armor = 0.35;
        material = -1;
        name = "levy predni tlumic";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel : HitLFWheel {
        name = "levy zadni tlumic";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "pravy predni tlumic";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "pravy zadni tlumic";
        visual = "";
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.5;
        material = -1;
        name = "palivo";
        passThrough = 0.5;
      };
      class HitRGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitEngine {
        armor = 0.6;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 0.2;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
    };
  };
  class ori_vil_truck_civ_base : Ural_Base {
    armor = 32;
    vehicleClass = "Car";
    faction = "rth_copter_class";
    armorWheels = 0.8;
    side = 2;
    scope = 1;
    crew = "";
    icon = "\ori\vehicles\data\ico\ico_truck_ca.paa";
    picture = "\ori\vehicles\data\ico\pic_truck_ca.paa";
    maxSpeed = 95;
    displayName = "STAR 944";
    hasGunner = 0;
    driverAction = "Kamaz_Driver";
    cargoAction[] = {"HMMWV_Cargo01"};
    class TransportMagazines {
    };
    transportSoldier = 12;
    class Library {
      libTextDesc = "STAR-944";
    };
    transportMaxMagazines = 200;
    transportMaxWeapons = 24;
    transportMaxBackpacks = 10;
    class AnimationSources {
      class pluhPredni {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class kolaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class oknaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class predniOknoOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
      class HitGlass1 {
        source = "Hit";
        hitpoint = "HitGlass1";
        raw = 1;
      };
      class HitGlass2 : HitGlass1 {
        hitpoint = "HitGlass2";
      };
      class HitGlass3 : HitGlass1 {
        hitpoint = "HitGlass3";
      };
      class HitGlass4 : HitGlass1 {
        hitpoint = "HitGlass4";
      };
      class HitGlass5 : HitGlass1 {
        hitpoint = "HitGlass5";
      };
      class HitGlass6 : HitGlass1 {
        hitpoint = "HitGlass6";
      };
      class HitGlass7 : HitGlass1 {
        hitpoint = "HitGlass7";
      };
      class HitGlass8 : HitGlass1 {
        hitpoint = "HitGlass8";
      };
    };
    class HitPoints {
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "sklo_p";
        visual = "sklo_p";
        passThrough = 0;
      };
      class HitGlass2 : HitGlass1 {
        name = "sklo_p1";
        visual = "sklo_p1";
      };
      class HitGlass3 : HitGlass1 {
        name = "sklo_p2";
        visual = "sklo_p2";
      };
      class HitGlass4 : HitGlass1 {
        name = "sklo_p3";
        visual = "sklo_p3";
      };
      class HitGlass5 : HitGlass1 {
        name = "sklo_l1";
        visual = "sklo_l1";
      };
      class HitGlass6 : HitGlass1 {
        name = "sklo_l2";
        visual = "sklo_l2";
      };
      class HitGlass7 : HitGlass1 {
        name = "sklo_l3";
        visual = "sklo_l3";
      };
      class HitGlass8 : HitGlass1 {
        name = "sklo_z";
        visual = "sklo_z";
      };
      class HitLFWheel {
        armor = 0.7;
        material = -1;
        name = "levy predni tlumic";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel : HitLFWheel {
        name = "levy zadni tlumic";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "pravy predni tlumic";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "pravy zadni tlumic";
        visual = "";
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.4;
        material = -1;
        name = "palivo";
        passThrough = 1;
      };
      class HitRGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitEngine {
        armor = 1.2;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 0.2;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
    };
    class Reflectors {
      class Left1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "L svetlo";
        direction = "konec svetla Pl";
        hitpoint = "L svetlo";
        selection = "L svetlo";
        size = 1;
        brightness = 0.8;
      };
      class Right1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "P svetlo";
        direction = "konec svetla Pp";
        hitpoint = "P svetlo";
        selection = "P svetlo";
        size = 1;
        brightness = 0.8;
      };
    };
    class Damage {
      tex[] = {"\vilas_cpl\glass\sklo_rysy.paa", "\vilas_cpl\glass\sklo_rysy_de.paa", "\vilas_cpl\glass\sklo_rysy_de.paa"};
      mat[] = {"ori\vehicles\data\944_sp.rvmat", "ori\vehicles\data\944_sp.rvmat", "ori\vehicles\data\944_sp_de.rvmat"};
    };
    hiddenSelections[] = {"main_body", "back_body"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\data\midlum_co.paa", "\ori\vehicles\data\s2000civ_co.paa"};
  };
  class ori_vil_originsmod_truck_civ : ori_vil_truck_civ_base {
    model = "\ori\vehicles\vil_truck_civ2.p3d";
    crew = "";
    faction = "rth_copter_class";
    side = 2;
    scope = 2;
    accuracy = 1000;
    transportSoldier = 1;
    vehicleClass = "car";
    displayName = "Ren truck";
    icon = "\ori\vehicles\data\ico\ico_truck_ca.paa";
    picture = "\ori\vehicles\data\ico\pic_truck_ca.paa";
    transportMaxMagazines = 200;
    transportMaxWeapons = 24;
    transportMaxBackpacks = 10;
    hiddenSelections[] = {"camo01", "camo02"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\data\truck_w_co.paa", "\ori\vehicles\data\s2000civ_co.paa"};
    class Damage {
      tex[] = {"ori\vehicles\data\sklo_rysy.paa", "ori\vehicles\data\sklo_rysy_de.paa", "ori\vehicles\data\sklo_rysy_de.paa"};
      mat[] = {"ori\vehicles\data\midlum.rvmat", "ori\vehicles\data\midlum.rvmat", "ori\vehicles\data\midlum_de.rvmat", "ori\vehicles\data\s2000civ.rvmat", "ori\vehicles\data\s2000civ.rvmat", "ori\vehicles\data\s2000civ_de.rvmat", "ori\vehicles\data\truck.rvmat", "ori\vehicles\data\truck.rvmat", "ori\vehicles\data\truck_de.rvmat"};
    };
  };
  class ori_vil_originsmod_volvo_fl290 : ori_vil_originsmod_truck_civ {
    model = "\ori\vehicles\vil_volvo_fl290";
    side = 3;
    accuracy = 1000;
    transportSoldier = 3;
    displayName = "Fire engine (Volvo)";
    icon = "\ori\vehicles\data\ico\ico_truck_ca.paa";
    picture = "\ori\vehicles\data\ico\pic_truck2_ca.paa";
    transportMaxMagazines = 180;
    transportMaxWeapons = 20;
    transportMaxBackpacks = 10;
    class Damage {
      tex[] = {};
      mat[] = {"ori\vehicles\data\volvo.rvmat", "ori\vehicles\data\volvo.rvmat", "ori\vehicles\data\midlum_de.rvmat"};
    };
    hiddenSelections[] = {"main_body"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\data\volvo_co.paa"};
  };
  class ori_vil_lada_2105_rust : Skodabase {
    vehicleClass = "car";
    faction = "rth_copter_class";
    displayName = "Lada 2105";
    model = "\ori\vehicles\vil_lada_2105_rust";
    transportSoldier = 3;
    scope = 2;
    armor = 24;
    terrainCoef = 4.5;
    driverAction = "HMMWV_Driver";
    cargoAction[] = {"HMMWV_Cargo01"};
    transportMaxMagazines = 80;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 6;
    hiddenSelections[] = {"camo01"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\data\lada5_co.paa"};
    class Damage {
      tex[] = {};
      mat[] = {"ori\vehicles\data\plate.rvmat", "ori\vehicles\data\plate.rvmat", "ori\vehicles\data\plate_de.rvmat", "ori\vehicles\data\lada5.rvmat", "ori\vehicles\data\lada5.rvmat", "ori\vehicles\data\lada5_de.rvmat"};
    };
    class Reflectors {
      class Front1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "p svetlo";
        direction = "konec p svetla";
        hitpoint = "p svetlo";
        selection = "p svetlo";
        size = 1;
        brightness = 1;
      };
      class Front2 : Front1 {
        position = "l svetlo";
        direction = "konec l svetla";
        hitpoint = "l svetlo";
        selection = "l svetlo";
      };
    };
    class AnimationSources {
      class pluhPredni {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class kolaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class oknaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class predniOknoOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
      class HitGlass1 {
        source = "Hit";
        hitpoint = "HitGlass1";
        raw = 1;
      };
      class HitGlass2 : HitGlass1 {
        hitpoint = "HitGlass2";
      };
      class HitGlass3 : HitGlass1 {
        hitpoint = "HitGlass3";
      };
      class HitGlass4 : HitGlass1 {
        hitpoint = "HitGlass4";
      };
      class HitGlass5 : HitGlass1 {
        hitpoint = "HitGlass5";
      };
      class HitGlass6 : HitGlass1 {
        hitpoint = "HitGlass6";
      };
      class Hitarmor1 {
        source = "Hit";
        hitpoint = "";
        raw = 1;
      };
      class Hitarmor2 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor3 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor4 : Hitarmor1 {
        hitpoint = "";
      };
      class hopa {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
      class doska {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
    };
    class HitPoints {
      class Hitarmor1 {
        armor = 1;
        material = -1;
        name = "pluhPredni";
        visual = "pluhPredni";
        passThrough = 0.2;
      };
      class Hitarmor2 : Hitarmor1 {
        name = "kolaOchrana";
        visual = "kolaOchrana";
      };
      class Hitarmor3 : Hitarmor1 {
        name = "oknaOchrana";
        visual = "oknaOchrana";
      };
      class Hitarmor4 : Hitarmor1 {
        name = "predniOknoOchrana";
        visual = "predniOknoOchrana";
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "sklo_p1";
        visual = "sklo_p1";
        passThrough = 0;
      };
      class HitGlass2 : HitGlass1 {
        name = "sklo_pl1";
        visual = "sklo_pl1";
      };
      class HitGlass3 : HitGlass1 {
        name = "sklo_pp1";
        visual = "sklo_pp1";
      };
      class HitGlass4 : HitGlass1 {
        name = "sklo_z1";
        visual = "sklo_z1";
      };
      class HitGlass5 : HitGlass1 {
        name = "sklo_zl1";
        visual = "sklo_zl1";
      };
      class HitGlass6 : HitGlass1 {
        name = "sklo_zp1";
        visual = "sklo_zp1";
      };
      class HitLFWheel {
        armor = 0.55;
        material = -1;
        name = "levy predni tlumic";
        visual = "";
        passThrough = 0.2;
      };
      class HitLBWheel : HitLFWheel {
        name = "levy zadni tlumic";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "pravy predni tlumic";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "pravy zadni tlumic";
        visual = "";
      };
      class HitEngine {
        armor = 0.5;
        material = -1;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
      class HitRGlass {
        armor = 0.5;
        material = 0;
        name = "sklo predni P";
        passThrough = 1;
      };
      class HitLGlass {
        armor = 0.5;
        material = 0;
        name = "sklo predni L";
        passThrough = 1;
      };
      class HitBody {
        armor = 0.6;
        material = -1;
        name = "karoserie";
        visual = "karoserie";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.7;
        material = -1;
        name = "palivo";
        passThrough = 1;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
    };
  };
  class ori_poldek : Skodabase {
    vehicleClass = "car";
    faction = "rth_copter_class";
    displayName = "Polonez 78 (Taxi)";
    model = "\ori\vehicles\vil_poldek_rust";
    scope = 2;
    armor = 22;
    transportSoldier = 3;
    insideSoundCoef = 0.8;
    driverAction = "HMMWV_Driver";
    cargoAction[] = {"HMMWV_Cargo01"};
    hiddenSelections[] = {"Camo01", "taxi"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\data\polonez_rust_co.paa", "\ori\vehicles\data\polonez_rust_co.paa"};
    transportMaxMagazines = 65;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 4;
    terrainCoef = 4.5;
    class Damage {
      tex[] = {};
      mat[] = {"ori\vehicles\data\plate.rvmat", "ori\vehicles\data\plate.rvmat", "ori\vehicles\data\plate_de.rvmat", "ori\vehicles\data\polonez.rvmat", "ori\vehicles\data\polonez.rvmat", "ori\vehicles\data\polonez_de.rvmat"};
    };
    class Reflectors {
      class Front1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "p svetlo";
        direction = "konec p svetla";
        hitpoint = "p svetlo";
        selection = "p svetlo";
        size = 1;
        brightness = 1;
      };
      class Front2 : Front1 {
        position = "l svetlo";
        direction = "konec l svetla";
        hitpoint = "l svetlo";
        selection = "l svetlo";
      };
    };
    class AnimationSources {
      class pluhPredni {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class kolaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class oknaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class predniOknoOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
      class HitGlass1 {
        source = "Hit";
        hitpoint = "HitGlass1";
        raw = 1;
      };
      class HitGlass2 : HitGlass1 {
        hitpoint = "HitGlass2";
      };
      class HitGlass3 : HitGlass1 {
        hitpoint = "HitGlass3";
      };
      class HitGlass4 : HitGlass1 {
        hitpoint = "HitGlass4";
      };
      class HitGlass5 : HitGlass1 {
        hitpoint = "HitGlass5";
      };
      class HitGlass6 : HitGlass1 {
        hitpoint = "HitGlass6";
      };
      class Hitarmor1 {
        source = "Hit";
        hitpoint = "";
        raw = 1;
      };
      class Hitarmor2 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor3 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor4 : Hitarmor1 {
        hitpoint = "";
      };
      class hopa {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
      class doska {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
    };
    class HitPoints {
      class Hitarmor1 {
        armor = 1;
        material = -1;
        name = "pluhPredni";
        visual = "pluhPredni";
        passThrough = 0.2;
      };
      class Hitarmor2 : Hitarmor1 {
        name = "kolaOchrana";
        visual = "kolaOchrana";
      };
      class Hitarmor3 : Hitarmor1 {
        name = "oknaOchrana";
        visual = "oknaOchrana";
      };
      class Hitarmor4 : Hitarmor1 {
        name = "predniOknoOchrana";
        visual = "predniOknoOchrana";
      };
      class HitGlass1 {
        armor = 0.4;
        material = -1;
        name = "sklo_p1";
        visual = "sklo_p1";
        passThrough = 0;
      };
      class HitGlass2 : HitGlass1 {
        name = "sklo_pl1";
        visual = "sklo_pl1";
      };
      class HitGlass3 : HitGlass1 {
        name = "sklo_pp1";
        visual = "sklo_pp1";
      };
      class HitGlass4 : HitGlass1 {
        name = "sklo_z1";
        visual = "sklo_z1";
      };
      class HitGlass5 : HitGlass1 {
        name = "sklo_zl1";
        visual = "sklo_zl1";
      };
      class HitGlass6 : HitGlass1 {
        name = "sklo_zp1";
        visual = "sklo_zp1";
      };
      class HitLFWheel {
        armor = 0.5;
        material = -1;
        name = "levy predni tlumic";
        visual = "";
        passThrough = 0.2;
      };
      class HitLBWheel : HitLFWheel {
        name = "levy zadni tlumic";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "pravy predni tlumic";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "pravy zadni tlumic";
        visual = "";
      };
      class HitEngine {
        armor = 0.6;
        material = -1;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
      class HitRGlass {
        armor = 0.5;
        material = 0;
        name = "sklo predni P";
        passThrough = 1;
      };
      class HitLGlass {
        armor = 0.5;
        material = 0;
        name = "sklo predni L";
        passThrough = 1;
      };
      class HitBody {
        armor = 0.5;
        material = -1;
        name = "karoserie";
        visual = "karoserie";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.7;
        material = -1;
        name = "palivo";
        passThrough = 1;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
    };
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Car\int\int-Car-acce-2", 0.216228, 1};
        limit = "0.5";
        expression = "(engineOn*(1-camPos))*gmeterZ";
      };
      class AccelerationOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Car\ext\ext-Car-acce-2", 0.316228, 1, 200};
        limit = "0.5";
        expression = "(engineOn*camPos)*gmeterZ";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\Car\ext\ext-car-low-4", 0.562341, 1, 250};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(engineOn*camPos*(rpm factor[0.7, 0.2]))*0.6";
      };
      class EngineHighOut {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\Car\ext\ext-car-high-4", 0.562341, 1.1, 350};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(engineOn*camPos*(rpm factor[0.5, 0.9]))*0.6";
      };
      class IdleOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Car\ext\ext-car-idle-2", 0.316228, 1, 150};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.3, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\int-noise3", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Car\int\int-car-low-4", 0.707946, 0.8};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(((engineOn*thrust) factor[0.65, 0.2])*(1-camPos))*0.6";
      };
      class EngineHighIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Car\int\int-car-high-4", 0.707946, 0.8};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(((engineOn*thrust) factor[0.55, 0.95])*(1-camPos))*0.6";
      };
      class IdleIn {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\Car\int\int-car-idle-1", 0.398107, 1};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.3, 0])*(1-camPos)";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2", 0.446684, 1};
        frequency = "1";
        volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
  };
  class ori_poldek_black : ori_poldek {
    displayName = "Polonez 78";
    hiddenSelections[] = {"Camo01", "taxi"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\data\polonez_rust_2_co.paa", ""};
  };
  class ori_survivorBus : Ori_car_turrets2 {
    vehicleClass = "car";
    faction = "rth_copter_class";
    displayName = "Scrap Bus";
    model = "\ori\vehicles\rth_scrapbus\rth_scrapbus_mg";
    icon = "\Ca\wheeled\data\map_ico\icomap_Bus_CA.paa";
    picture = "\Ca\wheeled\data\ico\bus_city_CA.paa";
    mapSize = 7;
    turnCoef = 3.7;
    steerAheadSimul = 0.5;
    steerAheadPlan = 0.38;
    hasGunner = 1;
    scope = 2;
    transportSoldier = 5;
    driverAction = "Ikarus_Driver";
    cargoAction[] = {"Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo01"};
    transportMaxMagazines = 180;
    transportMaxWeapons = 20;
    transportMaxBackpacks = 10;
    hiddenSelections[] = {"camo01"};
    damageResistance = 0.005;
    hiddenSelectionsTextures[] = {"\ori\vehicles\rth_scrapbus\data\bus_exterior_co.paa"};
    class Damage {
      tex[] = {"ori\vehicles\rth_scrapbus\data\bus_exterior_co.paa", "ori\vehicles\rth_scrapbus\data\bus_exterior_co.paa", "ori\vehicles\rth_scrapbus\data\damage_co.paa", "ori\vehicles\rth_scrapbus\data\partsdiff.paa", "ori\vehicles\rth_scrapbus\data\partsdiff.paa", "ori\vehicles\rth_scrapbus\data\damage_co.paa"};
      mat[] = {"ori\vehicles\rth_scrapbus\data\parts.rvmat", "ori\vehicles\rth_scrapbus\data\parts.rvmat", "ori\vehicles\rth_scrapbus\data\parts_destruct.rvmat", "ca\wheeled2\ikarus\data\bus_exterior.rvmat", "ca\wheeled2\ikarus\data\bus_exterior.rvmat", "ori\vehicles\rth_scrapbus\data\parts_destruct.rvmat"};
    };
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\int\int-bus-acce-1", "db-5", 1};
        limit = 0.15;
        expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
      class AccelerationOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\ext\ext-bus-acce-1", "db-5", 1, 280};
        limit = 0.15;
        expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\BUS\ext\ext-bus-low-2", "db0", 1, 350};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "engineOn*camPos*(thrust factor[0.7, 0.2])";
      };
      class EngineHighOut {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\BUS\ext\ext-bus-high-4", "db0", 1, 450};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "engineOn*camPos*(thrust factor[0.5, 0.9])";
      };
      class IdleOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\ext\ext-bus-idle-1", 0.316228, 1, 150};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.4, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.177828, 1, 30};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.177828, 1, 30};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.177828, 1, 30};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.177828, 1, 30};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.177828, 1, 30};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", "db-25", 1, 30};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\ext-noise3", 0.177828, 1, 30};
        frequency = "1";
        volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\int\int-bus-low-2", "db0", 1};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
      };
      class EngineHighIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\BUS\int\int-bus-high-4", "db0", 0.95};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((engineOn*thrust) factor[0.55, 1.0])*(1-camPos)";
      };
      class IdleIn {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\BUS\int\int-bus-idle-1", "db-5", 1};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.3, 0])*(1-camPos)";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\int-noise3", 0.316228, 1};
        frequency = "1";
        volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
    class AnimationSources {
      class platform_move {
        source = "user";
        animPeriod = 5;
        initPhase = 0;
      };
      class pluhPredni {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class kolaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class oknaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class predniOknoOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
      class HitGlass1 {
        source = "Hit";
        hitpoint = "HitGlass1";
        raw = 1;
      };
      class HitGlass2 : HitGlass1 {
        hitpoint = "HitGlass2";
      };
      class HitGlass3 : HitGlass1 {
        hitpoint = "HitGlass3";
      };
      class HitGlass4 : HitGlass1 {
        hitpoint = "HitGlass4";
      };
      class HitGlass5 : HitGlass1 {
        hitpoint = "HitGlass5";
      };
      class HitGlass6 : HitGlass1 {
        hitpoint = "HitGlass6";
      };
      class HitGlass7 : HitGlass1 {
        hitpoint = "HitGlass7";
      };
      class HitGlass8 : HitGlass1 {
        hitpoint = "HitGlass8";
      };
      class HitGlass9 : HitGlass1 {
        hitpoint = "HitGlass9";
      };
      class HitGlass10 : HitGlass1 {
        hitpoint = "HitGlass10";
      };
      class Hitarmor1 {
        source = "Hit";
        hitpoint = "";
        raw = 1;
      };
      class Hitarmor2 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor3 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor4 : Hitarmor1 {
        hitpoint = "";
      };
      class doska {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
    };
    class HitPoints {
      class Hitarmor1 {
        armor = 1;
        material = -1;
        name = "pluhPredni";
        visual = "pluhPredni";
        passThrough = 0.2;
      };
      class Hitarmor2 : Hitarmor1 {
        name = "kolaOchrana";
        visual = "kolaOchrana";
      };
      class Hitarmor3 : Hitarmor1 {
        name = "oknaOchrana";
        visual = "oknaOchrana";
      };
      class Hitarmor4 : Hitarmor1 {
        name = "predniOknoOchrana";
        visual = "predniOknoOchrana";
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "sklo_p";
        visual = "sklo_p";
        passThrough = 0;
      };
      class HitGlass2 : HitGlass1 {
        name = "sklo_p1";
        visual = "sklo_p1";
      };
      class HitGlass3 : HitGlass1 {
        name = "sklo_p2";
        visual = "sklo_p2";
      };
      class HitGlass4 : HitGlass1 {
        name = "sklo_p3";
        visual = "sklo_p3";
      };
      class HitGlass5 : HitGlass1 {
        name = "sklo_l1";
        visual = "sklo_l1";
      };
      class HitGlass6 : HitGlass1 {
        name = "sklo_l2";
        visual = "sklo_l3";
      };
      class HitGlass7 : HitGlass1 {
        name = "sklo_l3";
        visual = "glass3";
      };
      class HitGlass8 : HitGlass1 {
        name = "sklo_z";
        visual = "sklo_z";
      };
      class HitLFWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.2;
      };
      class HitLBWheel : HitLFWheel {
        name = "wheel_1_2_steering";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "wheel_2_1_steering";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "wheel_2_2_steering";
        visual = "";
      };
      class HitEngine {
        armor = 0.9;
        material = -1;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
      class HitRGlass {
        armor = 0.5;
        material = 0;
        name = "sklo predni P";
        passThrough = 1;
      };
      class HitLGlass {
        armor = 0.5;
        material = 0;
        name = "sklo predni L";
        passThrough = 1;
      };
      class HitBody {
        armor = 0.6;
        material = -1;
        name = "karoserie";
        visual = "karoserie";
        passThrough = 1;
      };
      class HitFuel {
        armor = 1;
        material = -1;
        name = "palivo";
        passThrough = 1;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
    };
    class Turrets : Turrets {
      class MainTurret : MainTurret {
        enableManualFire = 1;
        body = "mainTurret";
        gun = "mainGun";
        outGunnerMayFire = 1;
        forceHideGunner = 1;
        castGunnerShadow = 1;
        viewGunnerInExternal = 1;
        gunnerOpticsModel = "\ca\Weapons\optika_empty";
        gunnerForceOptics = 0;
        weapons[] = {"PKT"};
        soundServo[] = {};
        stabilizedInAxes = 0;
        magazines[] = {"100Rnd_762x54_PK", "100Rnd_762x54_PK"};
        gunnerAction = "Hilux_Gunner";
        gunnerInAction = "Hilux_Gunner";
        ejectDeadGunner = 1;
        minElev = -18;
        maxElev = 40;
        minTurn = -360;
        maxTurn = 360;
        initTurn = 0;
      };
    };
  };
  class ori_transit : Pickup_PK_base {
    vehicleClass = "car";
    faction = "rth_copter_class";
    displayName = "Ford Transit MG";
    model = "\ori\vehicles\vil_transit_mg";
    scope = 2;
    transportSoldier = 5;
    armor = 30;
    driverAction = "Skodovka_Driver";
    cargoAction[] = {"HMMWV_Cargo01"};
    transportMaxMagazines = 120;
    transportMaxWeapons = 16;
    transportMaxBackpacks = 8;
    damageResistance = 0.01821;
    terrainCoef = 3.5;
    hiddenSelections[] = {"Camo01", "Camo02"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\data\transit_pd2_co.paa", "\CA\wheeled_e\Ural\Data\ural_plachta_civil_co.paa"};
    class Damage {
      tex[] = {};
      mat[] = {"ori\vehicles\data\plate.rvmat", "ori\vehicles\data\plate.rvmat", "ori\vehicles\data\plate_de.rvmat", "ori\vehicles\data\transitt.rvmat", "ori\vehicles\data\transitt.rvmat", "ori\vehicles\data\transitt_de.rvmat", "ca\wheeled\data\detailmapy\ural_plachta.rvmat", "ca\wheeled\data\detailmapy\ural_plachta_damage.rvmat", "ca\wheeled\data\detailmapy\ural_plachta_destruct.rvmat"};
    };
    class Reflectors {
      class Front1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "p svetlo";
        direction = "konec p svetla";
        hitpoint = "p svetlo";
        selection = "p svetlo";
        size = 1;
        brightness = 1;
      };
      class Front2 : Front1 {
        position = "l svetlo";
        direction = "konec l svetla";
        hitpoint = "l svetlo";
        selection = "l svetlo";
      };
    };
    memoryPointsGetInGunner = "pos gunner";
    memoryPointsGetInGunnerDir = "pos gunner dir";
    class AnimationSources {
      class pluhPredni {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class kolaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class oknaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class predniOknoOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
      class HitGlass1 {
        source = "Hit";
        hitpoint = "HitGlass1";
        raw = 1;
      };
      class HitGlass2 : HitGlass1 {
        hitpoint = "HitGlass2";
      };
      class HitGlass3 : HitGlass1 {
        hitpoint = "HitGlass3";
      };
      class HitGlass4 : HitGlass1 {
        hitpoint = "HitGlass4";
      };
      class Hitarmor1 {
        source = "Hit";
        hitpoint = "";
        raw = 1;
      };
      class Hitarmor2 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor3 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor4 : Hitarmor1 {
        hitpoint = "";
      };
      class hopa {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
      class doska {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
    };
    class HitPoints {
      class Hitarmor1 {
        armor = 1;
        material = -1;
        name = "pluhPredni";
        visual = "pluhPredni";
        passThrough = 0.2;
      };
      class Hitarmor2 : Hitarmor1 {
        name = "kolaOchrana";
        visual = "kolaOchrana";
      };
      class Hitarmor3 : Hitarmor1 {
        name = "oknaOchrana";
        visual = "oknaOchrana";
      };
      class Hitarmor4 : Hitarmor1 {
        name = "predniOknoOchrana";
        visual = "predniOknoOchrana";
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "sklo_p1";
        visual = "sklo_p1";
        passThrough = 0;
      };
      class HitGlass2 : HitGlass1 {
        name = "sklo_pl1";
        visual = "sklo_pl1";
      };
      class HitGlass3 : HitGlass1 {
        name = "sklo_pp1";
        visual = "sklo_pp1";
      };
      class HitGlass4 : HitGlass1 {
        name = "sklo_z1";
        visual = "sklo_z1";
      };
      class HitLFWheel {
        armor = 0.5;
        material = -1;
        name = "levy predni tlumic";
        visual = "";
        passThrough = 0.2;
      };
      class HitLBWheel : HitLFWheel {
        name = "levy zadni tlumic";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "pravy predni tlumic";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "pravy zadni tlumic";
        visual = "";
      };
      class HitEngine {
        armor = 0.7;
        material = -1;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
      class HitRGlass {
        armor = 0.5;
        material = 0;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        armor = 0.5;
        material = 0;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 0.8;
        material = -1;
        name = "karoserie";
        visual = "karoserie";
        passThrough = 0.6;
      };
      class HitFuel {
        armor = 0.7;
        material = -1;
        name = "palivo";
        passThrough = 1;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
    };
  };
  class ori_excavator : Ori_car_turrets2 {
    vehicleClass = "car";
    faction = "rth_copter_class";
    displayName = "Excavator";
    model = "\ori\vehicles\vil_koparka";
    icon = "\ori\vehicles\data\ico_kopara_CA.paa";
    picture = "\Ca\wheeled\data\ico\bus_city_CA.paa";
    mapSize = 7;
    turnCoef = 3.7;
    armor = 55;
    damageResistance = 0.005;
    steerAheadSimul = 0.5;
    steerAheadPlan = 0.38;
    hasGunner = 1;
    scope = 2;
    transportSoldier = 0;
    transportMaxMagazines = 100;
    transportMaxWeapons = 15;
    transportMaxBackpacks = 5;
    driverAction = "Skodovka_Driver";
    gunnerAction = "Skodovka_Cargo01";
    memoryPointsGetInDriver = "pos driver";
    memoryPointsGetInDriverDir = "pos driver dir";
    memoryPointsGetInGunner = "pos gunner";
    memoryPointsGetInGunnerDir = "pos gunner dir";
    maxSpeed = 80;
    class Exhausts {
      class Exhaust1 {
        position = "vyfuk start";
        direction = "vyfuk konec";
        effect = "ExhaustsEffectBig";
      };
    };
    class Reflectors {
      class Left1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "L svetlo";
        direction = "konec L svetla";
        hitpoint = "L svetlo";
        selection = "L svetlo";
        size = 1;
        brightness = 0.8;
      };
      class Right1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "P svetlo";
        direction = "konec P svetla";
        hitpoint = "P svetlo";
        selection = "P svetlo";
        size = 1;
        brightness = 0.8;
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"ori\vehicles\data\koparka.rvmat", "ori\vehicles\data\koparka.rvmat", "ori\vehicles\data\koparka_de.rvmat"};
    };
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-acce-01", 0.562341, 1};
        limit = "0.15";
        expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
      class AccelerationOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-acce-01", 0.562341, 1, 300};
        limit = "0.15";
        expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-engine-02low", 1.41254, 1, 400};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "engineOn*camPos*(thrust factor[0.7, 0.2])";
      };
      class EngineHighOut {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-engine-02high", 1.41254, 1, 500};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "engineOn*camPos*(thrust factor[0.5, 0.9])";
      };
      class IdleOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-idle-02", 0.562341, 1, 200};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.4, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1, 50};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1, 50};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.316228, 1, 50};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1, 50};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1, 50};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1, 50};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise3", 0.562341, 1, 50};
        frequency = "1";
        volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-engine-02low", 1.41254, 1};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
      };
      class EngineHighIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-engine-02high", 1.41254, 0.8};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((engineOn*thrust) factor[0.55, 1.0])*(1-camPos)";
      };
      class IdleIn {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-idle-02", 0.398107, 1};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise4", 0.562341, 1};
        frequency = "1";
        volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
      };
    };
    class AnimationSources {
      class noga1 {
        source = "user";
        animPeriod = 5;
        initPhase = 0;
      };
      class noga2 {
        source = "user";
        animPeriod = 5;
        initPhase = 0;
      };
      class noga2stup {
        source = "user";
        animPeriod = 5;
        initPhase = 0;
      };
      class noga1stup {
        source = "user";
        animPeriod = 5;
        initPhase = 0;
      };
      class ramie1 {
        source = "user";
        animPeriod = 5;
        initPhase = 1;
      };
      class ramie2 {
        source = "user";
        animPeriod = 5;
        initPhase = 1;
      };
      class lyzka {
        source = "user";
        animPeriod = 5;
        initPhase = 1;
      };
      class lyzkaasist {
        source = "user";
        animPeriod = 5;
        initPhase = 1;
      };
      class silownik3 {
        source = "user";
        animPeriod = 5;
        initPhase = 1;
      };
      class silownik2 {
        source = "user";
        animPeriod = 5;
        initPhase = 1;
      };
      class silownik1 {
        source = "user";
        animPeriod = 5;
        initPhase = 1;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
      class HitGlass1 {
        source = "Hit";
        hitpoint = "HitGlass1";
        raw = 1;
      };
      class HitGlass2 : HitGlass1 {
        hitpoint = "HitGlass2";
      };
      class HitGlass3 : HitGlass1 {
        hitpoint = "HitGlass3";
      };
      class HitGlass5 : HitGlass1 {
        hitpoint = "HitGlass5";
      };
      class HitGlass6 : HitGlass1 {
        hitpoint = "HitGlass6";
      };
    };
    class Turrets : Turrets {
      class MainTurret : MainTurret {
        enableManualFire = 1;
        soundServo[] = {"\ca\Weapons\Data\Sound\gun_elevate", 0.001, 0.9};
        maxhorizontalrotspeed = 1.8;
        gunnerName = "Operator";
        body = "mainTurret";
        gun = "";
        outGunnerMayFire = 1;
        forceHideGunner = 1;
        castGunnerShadow = 1;
        viewGunnerInExternal = 1;
        gunnerOpticsModel = "\ca\Weapons\optika_empty";
        gunnerForceOptics = 1;
        weapons[] = {};
        stabilizedInAxes = 0;
        magazines[] = {};
        gunnerAction = "Skodovka_Driver";
        gunnerInAction = "Skodovka_Driver";
        ejectDeadGunner = 1;
        minElev = -18;
        maxElev = 40;
        minTurn = -360;
        maxTurn = 360;
        initTurn = 0;
        turretAxis = "OsaVeze";
      };
    };
    class HitPoints {
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "sklo_p";
        visual = "sklo_p";
        passThrough = 0;
      };
      class HitGlass2 : HitGlass1 {
        name = "sklo_p1";
        visual = "sklo_p1";
      };
      class HitGlass3 : HitGlass1 {
        name = "sklo_p2";
        visual = "sklo_p2";
      };
      class HitGlass5 : HitGlass1 {
        name = "sklo_l1";
        visual = "sklo_l1";
      };
      class HitGlass6 : HitGlass1 {
        name = "sklo_l2";
        visual = "sklo_l2";
      };
      class HitLFWheel {
        armor = 0.8;
        material = -1;
        name = "levy predni tlumic";
        visual = "";
        passThrough = 0.2;
      };
      class HitLBWheel : HitLFWheel {
        name = "levy zadni tlumic";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "pravy predni tlumic";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "pravy zadni tlumic";
        visual = "";
      };
      class HitEngine {
        armor = 1;
        material = -1;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
      class HitRGlass {
        armor = 0.5;
        material = 0;
        name = "sklo predni P";
        passThrough = 1;
      };
      class HitLGlass {
        armor = 0.5;
        material = 0;
        name = "sklo predni L";
        passThrough = 1;
      };
      class HitBody {
        armor = 0.4;
        material = -1;
        name = "karoserie";
        visual = "karoserie";
        passThrough = 1;
      };
      class HitFuel {
        armor = 1;
        material = -1;
        name = "palivo";
        passThrough = 1;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
    };
  };
  class SUV_Special : SUV_Base_EP1 {
    scope = 2;
    damageResistance = 0.014;
    model = "\ori\vehicles\suv\suv";
    faction = "rth_copter_class";
    displayName = "SUV Special";
    HiddenSelections[] = {"Camo01"};
    hiddenSelectionsTextures[] = {"\dayz\textures\suv\suv_body_special_co.paa"};
    transportMaxMagazines = 110;
    transportMaxWeapons = 16;
    transportMaxBackpacks = 6;
    class HitPoints {
      class Hitarmor1 {
        armor = 1;
        material = -1;
        name = "pluhPredni";
        visual = "pluhPredni";
        passThrough = 0.2;
      };
      class Hitarmor2 : Hitarmor1 {
        name = "kolaOchrana";
        visual = "kolaOchrana";
      };
      class Hitarmor3 : Hitarmor1 {
        name = "oknaOchrana";
        visual = "oknaOchrana";
      };
      class Hitarmor4 : Hitarmor1 {
        name = "predniOknoOchrana";
        visual = "predniOknoOchrana";
      };
      class HitEngine {
        armor = 0.7;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.7;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.4;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.4;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.4;
        material = -1;
        name = "sklo_p1";
        visual = "sklo_p1";
        passThrough = 0;
      };
      class HitGlass2 : HitGlass1 {
        name = "sklo_pl1";
        visual = "sklo_pl1";
      };
      class HitGlass3 : HitGlass1 {
        name = "sklo_pp1";
        visual = "sklo_pp1";
      };
      class HitGlass4 : HitGlass1 {
        name = "sklo_z1";
        visual = "sklo_z1";
      };
      class HitGlass5 : HitGlass1 {
        name = "sklo_zl1";
        visual = "sklo_zl1";
      };
      class HitGlass6 : HitGlass1 {
        name = "sklo_zp1";
        visual = "sklo_zp1";
      };
      class HitGlass7 : HitGlass1 {
        name = "sklo_ml1";
        visual = "sklo_ml1";
      };
      class HitGlass8 : HitGlass1 {
        name = "sklo_mp1";
        visual = "sklo_mp1";
      };
    };
    class Reflectors {
      class Front1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "p svetlo";
        direction = "konec p svetla";
        hitpoint = "p svetlo";
        selection = "p svetlo";
        size = 1;
        brightness = 1;
      };
      class Front2 : Front1 {
        position = "l svetlo";
        direction = "konec l svetla";
        hitpoint = "l svetlo";
        selection = "l svetlo";
      };
    };
    class AnimationSources {
      class pluhPredni {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class kolaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class oknaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class predniOknoOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
      class HitGlass1 {
        source = "Hit";
        hitpoint = "HitGlass1";
        raw = 1;
      };
      class HitGlass2 : HitGlass1 {
        hitpoint = "HitGlass2";
      };
      class HitGlass3 : HitGlass1 {
        hitpoint = "HitGlass3";
      };
      class HitGlass4 : HitGlass1 {
        hitpoint = "HitGlass4";
      };
      class HitGlass5 : HitGlass1 {
        hitpoint = "HitGlass5";
      };
      class HitGlass6 : HitGlass1 {
        hitpoint = "HitGlass6";
      };
      class HitGlass7 : HitGlass1 {
        hitpoint = "HitGlass7";
      };
      class HitGlass8 : HitGlass1 {
        hitpoint = "HitGlass8";
      };
      class Hitarmor1 {
        source = "Hit";
        hitpoint = "";
        raw = 1;
      };
      class Hitarmor2 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor3 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor4 : Hitarmor1 {
        hitpoint = "";
      };
      class hopa {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
      class doska {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
    };
  };
  class ArmoredSUV_Base_Ori : Car {
    scope = 1;
    htMin = 60;
    htMax = 1800;
    afMax = 200;
    mfMax = 100;
    mFact = 1;
    tBody = 200;
    expansion = 4;
    displayName = "$STR_PMC_DN_SUV_ARMORED";
    model = "\Ca\Wheeled_PMC\ArmoredSUV\armoredSUV_PMC.p3d";
    icon = "\ca\Wheeled_PMC\data\ui\Icon_suv_minigun_PMC.paa";
    picture = "\ca\Wheeled_PMC\data\ui\Picture_suv_minigun_PMC_ca.paa";
    mapSize = 7;
    maxSpeed = 230;
    accuracy = 0.2;
    armor = 40;
    damageResistance = 0.02099;
    transportSoldier = 3;
    fuelCapacity = 130;
    weapons[] = {"MiniCarHorn"};
    driverAction = "SUV_Driver_EP1";
    cargoAction[] = {"SUV_Cargo_EP1", "SUV_Cargo02_EP1", "SUV_Cargo01_EP1"};
    outsideSoundFilter = 1;
    insideSoundCoef = 0.8;
    soundGear[] = {"", 5.62341e-05, 1};
    soundGetIn[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door", 0.562341, 1};
    soundGetOut[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door", 0.562341, 1, 20};
    soundEngineOnInt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_start", 0.177828, 1};
    soundEngineOnExt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_start", 0.177828, 1, 100};
    soundEngineOffInt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_stop", 0.177828, 1};
    soundEngineOffExt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_stop", 0.177828, 1, 100};
    buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01", 0.707946, 1, 200};
    buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02", 0.707946, 1, 200};
    buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03", 0.707946, 1, 200};
    buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04", 0.707946, 1, 200};
    soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
    WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", 0.707946, 1, 200};
    WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", 0.707946, 1, 200};
    WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", 0.707946, 1, 200};
    WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", 0.707946, 1, 200};
    WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", 0.707946, 1, 200};
    WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", 0.707946, 1, 200};
    soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
    ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01", 0.707946, 1, 200};
    ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02", 0.707946, 1, 200};
    ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03", 0.707946, 1, 200};
    ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04", 0.707946, 1, 200};
    soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_accelerate_3_x", 0.562341, 1};
        limit = "0.4";
        expression = "(engineOn*(1-camPos))*gmeterZ";
      };
      class AccelerationOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_accelerate_3", 0.562341, 1, 200};
        limit = "0.4";
        expression = "(engineOn*camPos)*gmeterZ";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_low", 0.177828, 1.4, 100};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
      };
      class EngineHighOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_high", 1, 0.8, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
      };
      class IdleOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_idle", 0.562341, 1, 100};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.4, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_low_x", 0.316228, 1.4};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.45]))";
      };
      class EngineHighIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_high_x", 1, 0.8};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
      };
      class IdleIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_idle_x", 0.316228, 1};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2", 0.177828, 1};
        frequency = "1";
        volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
    class Turrets : Turrets {
      class MainTurret : Mainturret {
        class ViewOptics;
      };
    };
    class AnimationSources;
    class HitPoints : HitPoints {
      class HitBody : HitBody {
        armor = 0.8;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 0.4;
      };
      class HitLFWheel : HitLFWheel {
        armor = 0.4;
      };
      class HitLBWheel : HitLBWheel {
        armor = 0.4;
      };
      class HitRFWheel : HitRFWheel {
        armor = 0.4;
      };
      class HitRBWheel : HitRBWheel {
        armor = 0.4;
      };
      class HitFuel : HitFuel {
        armor = 1;
        passThrough = 1;
      };
      class HitEngine : HitEngine {
        armor = 1;
        passThrough = 1;
      };
      class HitGlass1 : HitGlass1 {
        armor = 0.4;
        passThrough = 0.01;
      };
      class HitGlass2 : HitGlass2 {
        armor = 0.4;
        passThrough = 0.4;
      };
      class HitGlass3 : HitGlass3 {
        armor = 0.4;
        passThrough = 0.4;
      };
      class HitGlass4 : HitGlass4 {
        armor = 0.4;
        passThrough = 0.4;
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"Ca\Wheeled_PMC\ArmoredSUV\data\SUV_body.rvmat", "Ca\Wheeled_PMC\ArmoredSUV\data\SUV_body_damage.rvmat", "Ca\Wheeled_PMC\ArmoredSUV\data\SUV_body_destruct.rvmat", "Ca\Wheeled_PMC\ArmoredSUV\data\SUV_chrom.rvmat", "Ca\Wheeled_PMC\ArmoredSUV\data\SUV_chrom_damage.rvmat", "Ca\Wheeled_PMC\ArmoredSUV\data\SUV_chrom_destruct.rvmat", "Ca\Wheeled_PMC\ArmoredSUV\data\SUV_glass.rvmat", "Ca\Wheeled_PMC\ArmoredSUV\data\SUV_glass_damage.rvmat", "Ca\Wheeled_PMC\ArmoredSUV\data\SUV_glass_destruct.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default_destruct.rvmat"};
    };
    class Library {
      libTextDesc = "$STR_PMC_LIB_ARMOREDSUV";
    };
  };
  class SUV_MG_Ori : ArmoredSUV_Base_Ori {
    scope = 2;
    side = 2;
    displayName = "SUV MG";
    faction = "rth_copter_class";
    crew = "";
    typicalCargo[] = {};
    damageResistance = 0.032;
    transportMaxMagazines = 90;
    transportMaxWeapons = 15;
    transportMaxBackpacks = 4;
    class Turrets : Turrets {
      class MainTurret : MainTurret {
        body = "mainTurret";
        gun = "mainGun";
        viewGunnerInExternal = 1;
        minElev = -30;
        maxElev = 45;
        initElev = 0;
        soundServo[] = {"", 0.01, 1};
        animationSourceHatch = "";
        stabilizedInAxes = "StabilizedInAxesNone";
        gunBeg = "muzzle_1";
        gunEnd = "chamber_1";
        weapons[] = {"PKT"};
        magazines[] = {"100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK"};
        maxHorizontalRotSpeed = 1.8;
        maxVerticalRotSpeed = 1.8;
        commanding = -2;
        gunnerAction = "ArmoredSUV_Gunner_PMC";
      };
    };
    class AnimationSources : AnimationSources {
      class Revolving {
        source = "revolving";
        weapon = "PKT";
      };
      class HideGun_01 {
        source = "user";
        initPhase = 0;
        animPeriod = 1.2;
      };
      class HideGun_02 : HideGun_01 {
      };
      class HideGun_03 : HideGun_01 {
      };
      class HideGun_04 : HideGun_01 {
      };
      class CloseCover1 {
        source = "user";
        initPhase = 0;
        animPeriod = 0.7;
      };
      class CloseCover2 : CloseCover1 {
      };
    };
  };
  class ori_ZAZ968M : Skodabase {
    vehicleClass = "car";
    faction = "rth_copter_class";
    displayName = "ZAZ968M";
    model = "\ori\vehicles\ZAZ968M\ZAZ968M.p3d";
    scope = 2;
    armor = 22;
    transportSoldier = 3;
    supplyRadius = 3;
    driverAction = "HMMWV_Driver";
    cargoAction[] = {"HMMWV_Cargo01"};
    hiddenSelections[] = {"Camo01"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\ZAZ968M\data\zazexter_co.paa"};
    transportMaxMagazines = 70;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 3;
    castCargoShadow = 0;
    castDriverShadow = 0;
    castCommanderShadow = 0;
    castGunnerShadow = 0;
    terrainCoef = 4;
    class Damage {
      tex[] = {};
      mat[] = {"ori\vehicles\ZAZ968M\data\zazexter.rvmat", "ori\vehicles\ZAZ968M\data\zazexter.rvmat", "ori\vehicles\ZAZ968M\data\zazexter_de.rvmat", "ori\vehicles\ZAZ968M\data\zazint.rvmat", "ori\vehicles\ZAZ968M\data\zazint.rvmat", "ori\vehicles\ZAZ968M\data\zazint_de.rvmat"};
    };
    class Reflectors {
      class Front1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "p svetlo";
        direction = "konec p svetla";
        hitpoint = "p svetlo";
        selection = "p svetlo";
        size = 1;
        brightness = 1;
      };
      class Front2 : Front1 {
        position = "l svetlo";
        direction = "konec l svetla";
        hitpoint = "l svetlo";
        selection = "l svetlo";
      };
    };
    class AnimationSources {
      class pluhPredni {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class kolaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class oknaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class predniOknoOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
      class HitGlass1 {
        source = "Hit";
        hitpoint = "HitGlass1";
        raw = 1;
      };
      class HitGlass2 : HitGlass1 {
        hitpoint = "HitGlass2";
      };
      class HitGlass3 : HitGlass1 {
        hitpoint = "HitGlass3";
      };
      class HitGlass4 : HitGlass1 {
        hitpoint = "HitGlass4";
      };
      class HitGlass5 : HitGlass1 {
        hitpoint = "HitGlass5";
      };
      class HitGlass6 : HitGlass1 {
        hitpoint = "HitGlass6";
      };
      class Hitarmor1 {
        source = "Hit";
        hitpoint = "";
        raw = 1;
      };
      class Hitarmor2 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor3 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor4 : Hitarmor1 {
        hitpoint = "";
      };
      class hopa {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
      class doska {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
    };
    class HitPoints {
      class Hitarmor1 {
        armor = 1;
        material = -1;
        name = "pluhPredni";
        visual = "pluhPredni";
        passThrough = 0.2;
      };
      class Hitarmor2 : Hitarmor1 {
        name = "kolaOchrana";
        visual = "kolaOchrana";
      };
      class Hitarmor3 : Hitarmor1 {
        name = "oknaOchrana";
        visual = "oknaOchrana";
      };
      class Hitarmor4 : Hitarmor1 {
        name = "predniOknoOchrana";
        visual = "predniOknoOchrana";
      };
      class HitGlass1 {
        armor = 0.4;
        material = -1;
        name = "sklo_p1";
        visual = "sklo_p1";
        passThrough = 0;
      };
      class HitGlass2 : HitGlass1 {
        name = "sklo_pl1";
        visual = "sklo_pl1";
      };
      class HitGlass3 : HitGlass1 {
        name = "sklo_pp1";
        visual = "sklo_pp1";
      };
      class HitGlass4 : HitGlass1 {
        name = "sklo_z1";
        visual = "sklo_z1";
      };
      class HitGlass5 : HitGlass1 {
        name = "sklo_zl1";
        visual = "sklo_zl1";
      };
      class HitGlass6 : HitGlass1 {
        name = "sklo_zp1";
        visual = "sklo_zp1";
      };
      class HitLFWheel {
        armor = 0.7;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.2;
      };
      class HitLBWheel : HitLFWheel {
        name = "wheel_1_2_steering";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "wheel_2_1_steering";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "wheel_2_2_steering";
        visual = "";
      };
      class HitEngine {
        armor = 0.9;
        material = -1;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "karoserie";
        passThrough = 0.4;
      };
      class HitFuel {
        armor = 0.9;
        material = -1;
        name = "palivo";
        passThrough = 1;
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-low-1", 0.398107, 1, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(camPos*engineOn*((rpm factor[0.21, 0.5]) min (rpm factor[0.7, 0.3])))*0.5";
      };
      class EngineHighOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-high-2", 0.398107, 1, 350};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(camPos*engineOn*(rpm factor[0.5, 0.85]))*0.5";
      };
      class IdleOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-idle-5", 0.223872, 1, 100};
        frequency = "1";
        volume = "camPos*engineOn*(rpm factor[0.4, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-noise", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-low-1", 0.562341, 1};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.7, 0.3])))*0.5";
      };
      class EngineHighIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-high-2", 0.562341, 1};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((1-camPos)*engineOn*(rpm factor[0.56, 0.8]))*0.5";
      };
      class IdleIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-idle-5", 0.398107, 1};
        frequency = "1";
        volume = "(1-camPos)*engineOn*(rpm factor[0.4, 0])";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-noise-1", 0.216228, 1};
        frequency = "1";
        volume = "((damper0 max 0.03)*(speed factor[0, 8])*(1-camPos))*0.8";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
  };
  class ori_taviander : ori_ZAZ968M {
    displayName = "Taviander";
    model = "ori\vehicles\taviander\taviander.p3d";
    transportSoldier = 1;
    hiddenSelections[] = {"Camo01"};
    hiddenSelectionsTextures[] = {"ori\vehicles\taviander\data\taviander_b_co.paa"};
    maxSpeed = 130;
    armor = 22;
    damageResistance = 0.01821;
    terrainCoef = 2.7;
    castCargoShadow = 0;
    castDriverShadow = 0;
    castCommanderShadow = 0;
    castGunnerShadow = 0;
    transportMaxMagazines = 75;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 4;
    class Damage {
      tex[] = {};
      mat[] = {"ori\vehicles\taviander\data\taviander.rvmat", "ori\vehicles\taviander\data\taviander.rvmat", "ori\vehicles\taviander\data\taviander_de.rvmat", "ori\vehicles\taviander\data\interior.rvmat", "ori\vehicles\taviander\data\interior.rvmat", "ori\vehicles\taviander\data\interior_de.rvmat"};
    };
    class Library {
      libTextDesc = "Taviander";
    };
    class Exhausts {
      class Exhaust1 {
        position = "vyfuk start";
        direction = "vyfuk konec";
        effect = "ExhaustsEffectBig";
      };
      class Exhaust2 {
        position = "vyfuk start2";
        direction = "vyfuk konec2";
        effect = "ExhaustsEffectBig";
      };
    };
    class Reflectors {
      class Front1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "p svetlo";
        direction = "konec p svetla";
        hitpoint = "p svetlo";
        selection = "p svetlo";
        size = 1;
        brightness = 1;
      };
      class Front2 : Front1 {
        position = "l svetlo";
        direction = "konec l svetla";
        hitpoint = "l svetlo";
        selection = "l svetlo";
      };
    };
    class AnimationSources {
      class pluhPredni {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class kolaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class oknaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class predniOknoOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
      class HitGlass1 {
        source = "Hit";
        hitpoint = "HitGlass1";
        raw = 1;
      };
      class HitGlass2 : HitGlass1 {
        hitpoint = "HitGlass2";
      };
      class HitGlass3 : HitGlass1 {
        hitpoint = "HitGlass3";
      };
      class HitGlass4 : HitGlass1 {
        hitpoint = "HitGlass4";
      };
      class Hitarmor1 {
        source = "Hit";
        hitpoint = "";
        raw = 1;
      };
      class Hitarmor2 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor3 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor4 : Hitarmor1 {
        hitpoint = "";
      };
      class hopa {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
      class doska {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
    };
    class HitPoints {
      class Hitarmor1 {
        armor = 1;
        material = -1;
        name = "pluhPredni";
        visual = "pluhPredni";
        passThrough = 0.2;
      };
      class Hitarmor2 : Hitarmor1 {
        name = "kolaOchrana";
        visual = "kolaOchrana";
      };
      class Hitarmor3 : Hitarmor1 {
        name = "oknaOchrana";
        visual = "oknaOchrana";
      };
      class Hitarmor4 : Hitarmor1 {
        name = "predniOknoOchrana";
        visual = "predniOknoOchrana";
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "sklo_p1";
        visual = "sklo_p1";
        passThrough = 0;
      };
      class HitGlass2 : HitGlass1 {
        name = "sklo_pl1";
        visual = "sklo_pl1";
      };
      class HitGlass3 : HitGlass1 {
        name = "sklo_pp1";
        visual = "sklo_pp1";
      };
      class HitGlass4 : HitGlass1 {
        name = "sklo_z1";
        visual = "sklo_z1";
      };
      class HitLFWheel {
        armor = 0.7;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.2;
      };
      class HitLBWheel : HitLFWheel {
        name = "wheel_1_2_steering";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "wheel_2_1_steering";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "wheel_2_2_steering";
        visual = "";
      };
      class HitEngine {
        armor = 1;
        material = -1;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "karoserie";
        passThrough = 0.4;
      };
      class HitFuel {
        armor = 1;
        material = -1;
        name = "palivo";
        passThrough = 1;
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_low", 0.177828, 1.4, 100};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
      };
      class EngineHighOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_high", 1, 0.8, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
      };
      class IdleOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_idle", 0.562341, 1, 100};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.4, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_low_x", 0.316228, 1.4};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.45]))";
      };
      class EngineHighIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_high_x", 1, 0.8};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
      };
      class IdleIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_idle_x", 0.316228, 1};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2", 0.177828, 1};
        frequency = "1";
        volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
  };
  class ori_buchanka : ori_ZAZ968M {
    displayName = "Buhanka";
    model = "ori\vehicles\buchanka\buhanka.p3d";
    transportSoldier = 7;
    driverAction = "Kamaz_Driver";
    cargoAction[] = {"HMMWV_Cargo01", "HMMWV_Cargo01", "HMMWV_Cargo01", "HMMWV_Cargo01", "HMMWV_Cargo01", "HMMWV_Cargo01"};
    Icon = "ori\vehicles\buchanka\data\map_ico\icon_buchanka_ca.paa";
    hiddenSelections[] = {"Camo01"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\buchanka\data\buchanka_co.paa"};
    castCargoShadow = 0;
    castDriverShadow = 0;
    castCommanderShadow = 0;
    castGunnerShadow = 0;
    maxSpeed = 110;
    terrainCoef = 2.5;
    transportMaxMagazines = 120;
    transportMaxWeapons = 16;
    transportMaxBackpacks = 10;
    class Damage {
      tex[] = {};
      mat[] = {"ori\vehicles\buchanka\data\buchanka.rvmat", "ori\vehicles\buchanka\data\buchanka.rvmat", "ori\vehicles\buchanka\data\buchanka_de.rvmat"};
    };
    class Library {
      libTextDesc = "Buhanka";
    };
    class Exhausts {
      class Exhaust1 {
        position = "vyfuk start";
        direction = "vyfuk konec";
        effect = "ExhaustsEffectBig";
      };
    };
    class Reflectors {
      class Front1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "p svetlo";
        direction = "konec p svetla";
        hitpoint = "p svetlo";
        selection = "p svetlo";
        size = 1;
        brightness = 1;
      };
      class Front2 : Front1 {
        position = "l svetlo";
        direction = "konec l svetla";
        hitpoint = "l svetlo";
        selection = "l svetlo";
      };
    };
    class AnimationSources {
      class pluhPredni {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class kolaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class oknaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class predniOknoOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
      class HitGlass1 {
        source = "Hit";
        hitpoint = "HitGlass1";
        raw = 1;
      };
      class HitGlass2 : HitGlass1 {
        hitpoint = "HitGlass2";
      };
      class HitGlass3 : HitGlass1 {
        hitpoint = "HitGlass3";
      };
      class HitGlass4 : HitGlass1 {
        hitpoint = "HitGlass4";
      };
      class HitGlass5 : HitGlass1 {
        hitpoint = "HitGlass5";
      };
      class HitGlass6 : HitGlass1 {
        hitpoint = "HitGlass6";
      };
      class Hitarmor1 {
        source = "Hit";
        hitpoint = "";
        raw = 1;
      };
      class Hitarmor2 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor3 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor4 : Hitarmor1 {
        hitpoint = "";
      };
      class hopa {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
      class doska {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
    };
    class HitPoints {
      class Hitarmor1 {
        armor = 1;
        material = -1;
        name = "pluhPredni";
        visual = "pluhPredni";
        passThrough = 0.2;
      };
      class Hitarmor2 : Hitarmor1 {
        name = "kolaOchrana";
        visual = "kolaOchrana";
      };
      class Hitarmor3 : Hitarmor1 {
        name = "oknaOchrana";
        visual = "oknaOchrana";
      };
      class Hitarmor4 : Hitarmor1 {
        name = "predniOknoOchrana";
        visual = "predniOknoOchrana";
      };
      class HitGlass1 {
        armor = 0.2;
        material = -1;
        name = "sklo_p1";
        visual = "sklo_p1";
        passThrough = 0;
      };
      class HitGlass2 : HitGlass1 {
        name = "sklo_pl1";
        visual = "sklo_pl1";
      };
      class HitGlass3 : HitGlass1 {
        name = "sklo_pp1";
        visual = "sklo_pp1";
      };
      class HitGlass4 : HitGlass1 {
        name = "sklo_z1";
        visual = "sklo_z1";
      };
      class HitGlass5 : HitGlass1 {
        name = "sklo_zl1";
        visual = "sklo_zl1";
      };
      class HitGlass6 : HitGlass1 {
        name = "sklo_zp1";
        visual = "sklo_zp1";
      };
      class HitLFWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.2;
      };
      class HitLBWheel : HitLFWheel {
        name = "wheel_1_2_steering";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "wheel_2_1_steering";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "wheel_2_2_steering";
        visual = "";
      };
      class HitEngine {
        armor = 1.2;
        material = -1;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
      class HitBody {
        armor = 0.9;
        material = 51;
        name = "karoserie";
        visual = "karoserie";
        passThrough = 0.5;
      };
      class HitFuel {
        armor = 1.2;
        material = -1;
        name = "palivo";
        passThrough = 1;
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
    };
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\int\int-uaz-acceleration1", 0.562341, 1};
        limit = "0.15";
        expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
      class AccelerationOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-acceleration", 0.562341, 1, 200};
        limit = "0.15";
        expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engine-low", 1, 1, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*((rpm factor[0.5, 0.7]) min (rpm factor[0.7, 0.5]))";
      };
      class EngineHighOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engine-high-1", 0.794328, 1, 400};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*(rpm factor[0.4, 0.9])";
      };
      class IdleOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-idle", 0.562341, 1, 100};
        frequency = "1";
        volume = "camPos*engineOn*(rpm factor[0.4, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.177828, 1, 30};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.177828, 1, 30};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.177828, 1, 30};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.177828, 1, 30};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.177828, 1, 30};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.158489, 1, 30};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-noise", 0.177828, 1, 30};
        frequency = "1";
        volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\int\int-uaz-engine-low", 0.562341, 1};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.7, 0.5]))";
      };
      class EngineHighIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\int\int-uaz-engine-high", 0.562341, 1};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
      };
      class IdleIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\int\int-uaz-idle", 0.501187, 1};
        frequency = "1";
        volume = "(1-camPos)*engineOn*(rpm factor[0.35, 0])";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\int\int-noise", 0.112202, 1};
        frequency = "1";
        volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
  };
  class ori_m3 : ori_ZAZ968M {
    displayName = "Bimmer M3";
    model = "\ori\vehicles\m3\m3.p3d";
    hiddenSelections[] = {"Camo01"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\m3\data\m3body_co.paa"};
    maxSpeed = 150;
    terrainCoef = 3;
    transportMaxMagazines = 65;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 3;
    class Damage {
      tex[] = {};
      mat[] = {"ori\vehicles\m3\data\m3body.rvmat", "ori\vehicles\m3\data\m3body.rvmat", "ori\vehicles\m3\data\m3body_de.rvmat", "ori\vehicles\m3\data\interior.rvmat", "ori\vehicles\m3\data\interior.rvmat", "ori\vehicles\m3\data\m3body_de.rvmat"};
    };
    class Sounds {
      class Engine {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_low", 0.177828, 1.4, 100};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
      };
      class EngineHighOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_high", 1, 0.8, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
      };
      class IdleOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_idle", 0.562341, 1, 100};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.4, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_low_x", 0.316228, 1.4};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.45]))";
      };
      class EngineHighIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_high_x", 1, 0.8};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
      };
      class IdleIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_idle_x", 0.316228, 1};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2", 0.177828, 1};
        frequency = "1";
        volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
    class HitPoints {
      class Hitarmor1 {
        armor = 1;
        material = -1;
        name = "pluhPredni";
        visual = "pluhPredni";
        passThrough = 0.2;
      };
      class Hitarmor2 : Hitarmor1 {
        name = "kolaOchrana";
        visual = "kolaOchrana";
      };
      class Hitarmor3 : Hitarmor1 {
        name = "oknaOchrana";
        visual = "oknaOchrana";
      };
      class Hitarmor4 : Hitarmor1 {
        name = "predniOknoOchrana";
        visual = "predniOknoOchrana";
      };
      class HitGlass1 {
        armor = 0.2;
        material = -1;
        name = "sklo_p1";
        visual = "sklo_p1";
        passThrough = 0;
      };
      class HitGlass2 : HitGlass1 {
        name = "sklo_pl1";
        visual = "sklo_pl1";
      };
      class HitGlass3 : HitGlass1 {
        name = "sklo_pp1";
        visual = "sklo_pp1";
      };
      class HitGlass4 : HitGlass1 {
        name = "sklo_z1";
        visual = "sklo_z1";
      };
      class HitGlass5 : HitGlass1 {
        name = "sklo_zl1";
        visual = "sklo_zl1";
      };
      class HitGlass6 : HitGlass1 {
        name = "sklo_zp1";
        visual = "sklo_zp1";
      };
      class HitLFWheel {
        armor = 0.5;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.2;
      };
      class HitLBWheel : HitLFWheel {
        name = "wheel_1_2_steering";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "wheel_2_1_steering";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "wheel_2_2_steering";
        visual = "";
      };
      class HitEngine {
        armor = 1.2;
        material = -1;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
      class HitBody {
        armor = 0.5;
        material = 51;
        name = "karoserie";
        visual = "karoserie";
        passThrough = 0.5;
      };
      class HitFuel {
        armor = 1.2;
        material = -1;
        name = "palivo";
        passThrough = 1;
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
    };
    class Library {
      libTextDesc = "Bimmer M3";
    };
    class Exhausts {
      class Exhaust1 {
        position = "vyfuk start";
        direction = "vyfuk konec";
        effect = "ExhaustsEffectBig";
      };
      class Exhaust2 {
        position = "vyfuk start2";
        direction = "vyfuk konec2";
        effect = "ExhaustsEffectBig";
      };
    };
    class Reflectors {
      class Front1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "p svetlo";
        direction = "konec p svetla";
        hitpoint = "p svetlo";
        selection = "p svetlo";
        size = 1;
        brightness = 1;
      };
      class Front2 : Front1 {
        position = "l svetlo";
        direction = "konec l svetla";
        hitpoint = "l svetlo";
        selection = "l svetlo";
      };
    };
  };
  class ori_maniac : ori_ZAZ968M {
    displayName = "Maniac Truck";
    weapons[] = {"ManiacHorn"};
    model = "\ori\vehicles\maniac\maniactruck.p3d";
    hiddenSelections[] = {"Camo01"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\maniac\data\maniacBody_co.paa"};
    icon = "\ca\wheeled2\data\UI\Icon_V3S_CA.paa";
    transportSoldier = 3;
    driverAction = "Kamaz_Driver";
    cargoAction[] = {"HMMWV_Cargo01", "HMMWV_Cargo01", "HMMWV_Cargo01"};
    castCargoShadow = 0;
    castDriverShadow = 0;
    castCommanderShadow = 0;
    castGunnerShadow = 0;
    maxSpeed = 110;
    terrainCoef = 2.5;
    transportMaxMagazines = 180;
    transportMaxWeapons = 35;
    transportMaxBackpacks = 10;
    insideSoundCoef = 0.9;
    armor = 24;
    soundEngineOnInt[] = {"ca\sounds\vehicles\Wheeled\V3S\int\int-V3S-start-1", 0.562341, 1};
    soundEngineOnExt[] = {"ca\sounds\vehicles\Wheeled\V3S\ext\ext-V3S-start-1", 0.562341, 1, 300};
    soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\V3S\int\int-V3S-stop-1", 0.562341, 1};
    soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\V3S\ext\ext-V3S-stop-1", 0.562341, 1, 300};
    soundGetIn[] = {"ca\sounds\vehicles\Wheeled\V3S\ext\ext-V3S-getout-1", 0.446684, 1};
    soundGetOut[] = {"ca\sounds\vehicles\Wheeled\V3S\ext\ext-V3S-getout-1", 0.446684, 1, 40};
    buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01", 0.707946, 1, 200};
    buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02", 0.707946, 1, 200};
    buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03", 0.707946, 1, 200};
    buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04", 0.707946, 1, 200};
    soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
    WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", 0.707946, 1, 200};
    WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", 0.707946, 1, 200};
    WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", 0.707946, 1, 200};
    WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", 0.707946, 1, 200};
    WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", 0.707946, 1, 200};
    WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", 0.707946, 1, 200};
    soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
    ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01", 0.707946, 1, 200};
    ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02", 0.707946, 1, 200};
    ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03", 0.707946, 1, 200};
    ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04", 0.707946, 1, 200};
    soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
    class HitPoints {
      class Hitarmor1 {
        armor = 1;
        material = -1;
        name = "pluhPredni";
        visual = "pluhPredni";
        passThrough = 0.2;
      };
      class Hitarmor2 : Hitarmor1 {
        name = "kolaOchrana";
        visual = "kolaOchrana";
      };
      class Hitarmor3 : Hitarmor1 {
        name = "oknaOchrana";
        visual = "oknaOchrana";
      };
      class Hitarmor4 : Hitarmor1 {
        name = "predniOknoOchrana";
        visual = "predniOknoOchrana";
      };
      class HitGlass1 {
        armor = 0.2;
        material = -1;
        name = "sklo_p1";
        visual = "sklo_p1";
        passThrough = 0;
      };
      class HitGlass2 : HitGlass1 {
        name = "sklo_pl1";
        visual = "sklo_pl1";
      };
      class HitGlass3 : HitGlass1 {
        name = "sklo_pp1";
        visual = "sklo_pp1";
      };
      class HitGlass4 : HitGlass1 {
        name = "sklo_z1";
        visual = "sklo_z1";
      };
      class HitGlass5 : HitGlass1 {
        name = "sklo_zl1";
        visual = "sklo_zl1";
      };
      class HitGlass6 : HitGlass1 {
        name = "sklo_zp1";
        visual = "sklo_zp1";
      };
      class HitLFWheel {
        armor = 0.8;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.2;
      };
      class HitLBWheel : HitLFWheel {
        name = "wheel_1_2_steering";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "wheel_2_1_steering";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "wheel_2_2_steering";
        visual = "";
      };
      class HitEngine {
        armor = 1.2;
        material = -1;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
      class HitBody {
        armor = 1.5;
        material = -1;
        name = "karoserie";
        visual = "karoserie";
        passThrough = 0.1;
      };
      class HitFuel {
        armor = 1.2;
        material = -1;
        name = "palivo";
        passThrough = 1;
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"ori\vehicles\maniac\data\maniacBody.rvmat", "ori\vehicles\maniac\data\maniacBody.rvmat", "ori\vehicles\maniac\data\maniacInterior_de.rvmat", "ori\vehicles\maniac\data\maniacInterior.rvmat", "ori\vehicles\maniac\data\maniacInterior.rvmat", "ori\vehicles\maniac\data\maniacInterior_de.rvmat"};
    };
    class Exhausts {
      class Exhaust1 {
        position = "vyfuk start";
        direction = "vyfuk konec";
        effect = "ExhaustsEffectBig";
      };
      class Exhaust2 {
        position = "vyfuk start2";
        direction = "vyfuk konec2";
        effect = "ExhaustsEffectBig";
      };
    };
    class Reflectors {
      class Front1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "p svetlo";
        direction = "konec p svetla";
        hitpoint = "p svetlo";
        selection = "p svetlo";
        size = 1;
        brightness = 1;
      };
      class Front2 : Front1 {
        position = "l svetlo";
        direction = "konec l svetla";
        hitpoint = "l svetlo";
        selection = "l svetlo";
      };
    };
    class AnimationSources {
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
      class HitGlass1 {
        source = "Hit";
        hitpoint = "HitGlass1";
        raw = 1;
      };
      class HitGlass2 : HitGlass1 {
        hitpoint = "HitGlass2";
      };
      class HitGlass3 : HitGlass1 {
        hitpoint = "HitGlass3";
      };
      class Hitarmor1 {
        source = "Hit";
        hitpoint = "";
        raw = 1;
      };
      class Hitarmor2 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor3 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor4 : Hitarmor1 {
        hitpoint = "";
      };
      class hopa {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
      class doska {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
    };
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\V3S\int\int-V3S-acce-1", 0.794328, 1};
        limit = "0.15";
        expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
      class AccelerationOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\V3S\ext\ext-V3S-acce-1", 0.794328, 1, 350};
        limit = "0.15";
        expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\URAL\ext\ext-URAL-low", 1, 1, 400};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*((rpm factor[0.15, 0.4]) min (rpm factor[0.7, 0.5]))";
      };
      class EngineHighOut {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\URAL\ext\ext-URAL-high", 1, 1, 500};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
      };
      class IdleOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\URAL\ext\ext-URAL-idle", 0.446684, 1, 200};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.4, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1, 40};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1, 40};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.316228, 1, 40};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1, 40};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1, 40};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1, 40};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise3", 0.316228, 1, 40};
        frequency = "1";
        volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\URAL\int\int-URAL-low", 1, 1};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.8, 0.6]))";
      };
      class EngineHighIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\URAL\int\int-URAL-high", 1, 1};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*(rpm factor[0.5, 1.0])";
      };
      class IdleIn {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\URAL\int\int-URAL-idle", 0.398107, 1};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise4", 0.316228, 1};
        frequency = "1";
        volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
  };
  class ori_KaTransp : Kamaz_Base {
    displayName = "Beast";
    model = "ori\vehicles\kamaz\kamaz_origins.p3d";
    scope = 2;
    side = 2;
    faction = "rth_copter_class";
    crew = "";
    typicalCargo[] = {};
    weapons[] = {"TruckHorn"};
    magazines[] = {};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    picture = "\Ca\wheeled2\data\ui\Picture_kamaz_open_CA.paa";
    Icon = "ori\vehicles\data\map_ico\ico_KamazTransp_ca.paa";
    castCargoShadow = 0;
    transportMaxMagazines = 100;
    transportMaxWeapons = 15;
    transportMaxBackpacks = 5;
    armor = 50;
    damageResistance = 0.00643;
    transportSoldier = 2;
    terrainCoef = 1;
    maxSpeed = 100;
    wheelCircumference = 3.576;
    turnCoef = 5;
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\ca\wheeled2\kamaz\data\kamaz_kab_co.paa"};
    class Exhausts {
      class Exhaust1 {
        position = "vyfuk start";
        direction = "vyfuk konec";
        effect = "ExhaustsEffectBig";
      };
    };
    class AnimationSources {
      class Trap1 {
        AnimPeriod = 3;
        source = "Trap1";
        InitPhase = 0;
      };
      class hopa {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
      class doska {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
        armor = 0.6;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
      class HitLF2Wheel : HitLFWheel {
        hitpoint = "HitLF2Wheel";
      };
      class HitRF2Wheel : HitLFWheel {
        hitpoint = "HitRF2Wheel";
      };
      class HitLMWheel : HitLFWheel {
        hitpoint = "HitLMWheel";
      };
      class HitRMWheel : HitLFWheel {
        hitpoint = "HitRMWheel";
      };
      class HitGlass1 {
        source = "Hit";
        hitpoint = "HitGlass1";
        raw = 1;
      };
      class HitGlass2 : HitGlass1 {
        hitpoint = "HitGlass2";
      };
      class HitGlass3 : HitGlass1 {
        hitpoint = "HitGlass3";
      };
      class HitGlass4 : HitGlass1 {
        hitpoint = "HitGlass4";
      };
      class oknaOchrana {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 1;
      };
      class kolaOchrana {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 1;
      };
      class predniOknoOchrana {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 1;
      };
    };
  };
  class ori_ScrapRaft : PBX {
    scope = 2;
    displayName = "Scrap Ferry";
    vehicleClass = "Ship";
    accuracy = 0.5;
    crew = "";
    faction = "rth_copter_class";
    side = 3;
    typicalCargo[] = {};
    model = "\ori\vehicles\ferry\ferry.p3d";
    Icon = "ori\vehicles\ferry\data\ico_map\ferry_ico.paa";
    mapSize = 8;
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    unitInfoType = "UnitInfoShip";
    soundEnviron[] = {"", 0.0562341, 0.9};
    crewVulnerable = 1;
    transportMaxMagazines = 120;
    transportMaxWeapons = 15;
    transportMaxBackpacks = 5;
    armor = 15;
    class Damage {
      tex[] = {};
      mat[] = {"ori\vehicles\rth_raft\data\metal.rvmat", "ori\vehicles\rth_raft\data\metal.rvmat", "ori\vehicles\rth_raft\data\metal_destruct.rvmat", "ca\misc\data\detailmapy\barel.rvmat", "ca\misc\data\detailmapy\barel.rvmat", "ori\vehicles\rth_raft\data\metal_destruct.rvmat", "ca\water\data\pbx_engine.rvmat", "ca\water\data\pbx_engine.rvmat", "ori\vehicles\rth_raft\data\metal_destruct.rvmat", "ca\buildings2\barn_metal\data\barn_001.rvmat", "ca\buildings2\barn_metal\data\barn_001.rvmat", "ori\vehicles\rth_raft\data\metal_destruct.rvmat"};
    };
    class SoundEvents {
    };
    insideSoundCoef = 1;
    soundEngineOnInt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-start-01", 0.1, 1};
    soundEngineOnExt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-start-01", 1, 1, 150};
    soundEngineOffInt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-stop-01", 0.1, 1};
    soundEngineOffExt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-stop-01", 1, 1, 150};
    class Sounds {
      class Engine {
        sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-low-01", 1, 0.9, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "engineOn*(rpm factor[0.5, 0.1])";
      };
      class EngineHighOut {
        sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-high-01", 1, 0.8, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "engineOn*(rpm factor[0.4, 1.3])";
      };
      class IdleOut {
        sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-idle-03", 0.562341, 1, 150};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.3, 0])";
      };
      class WaternoiseOutW0 {
        sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-water-noise-nospeed", 0.398107, 1, 100};
        frequency = "1";
        volume = "(speed factor[7, 0])";
      };
      class WaternoiseOutW1 {
        sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-lospd-noise-02", 0.398107, 1, 100};
        frequency = "1";
        volume = "((speed factor[2, 12]) min (speed factor[12, 2]))";
      };
      class WaternoiseOutW2 {
        sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-hispd-noise-02", 0.398107, 1, 100};
        frequency = "1";
        volume = "(speed factor[9, 18.7])";
      };
    };
    driverAction = "Golf_Driver";
    cargoAction[] = {"Truck_Cargo02", "Truck_Cargo02"};
    getInAction = "GetInMedium";
    getOutAction = "GetOutMedium";
    cargoGetInAction[] = {"GetInMedium"};
    cargoGetOutAction[] = {"GetOutMedium"};
    castDriverShadow = 0;
    castCargoShadow = 0;
    maxSpeed = 71;
    enableGPS = 0;
    transportSoldier = 2;
    supplyRadius = 1;
    hasGunner = 0;
    enableManualFire = 0;
    weapons[] = {};
    magazines[] = {};
    class Turrets {
    };
    memoryPointsGetInDriver = "pos driver";
    memoryPointsGetInDriverDir = "pos driver dir";
    memoryPointsGetInCargo = "pos cargo";
    memoryPointsGetInCargoDir = "pos cargo dir";
    class Library {
      libTextDesc = "Homemade ferry";
    };
    class Exhausts {
      class Exhaust1 {
        position = "vyfuk start";
        direction = "vyfuk konec";
        effect = "";
      };
    };
    extCameraPosition[] = {0, 4, -14};
    class AnimationSources {
      class dver {
        AnimPeriod = 3;
        source = "user";
        InitPhase = 0;
      };
      class doska {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
      class ani_grade {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 1;
      };
    };
  };
  class ori_bike_d2 : Bicycle {
    expansion = 1;
    faction = "rth_copter_class";
    htMin = 60;
    htMax = 1800;
    afMax = 100;
    mfMax = 80;
    mFact = 0;
    tBody = 0;
    scope = 2;
    damageResistance = 0.008;
    weapons[] = {"BikeHorn"};
    crew = "";
    wheelCircumference = 2.28;
    model = "\ori\vehicles\ori_old_bike.p3d";
    displayName = "Old Bike";
    vehicleClass = "Car";
    rarityUrban = -1;
    class DestructionEffects {
    };
    Picture = "\Ca\wheeled2\data\UI\Picture_MMT_CA.paa";
    Icon = "\Ca\wheeled2\data\UI\Icon_MMT_CA.paa";
    mapSize = 3;
    maxSpeed = 35;
    isBicycle = 1;
    extCameraPosition[] = {0, 0, -3};
    class HitPoints {
      class HitRGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = 51;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.3;
        material = 51;
        name = "palivo";
        passThrough = 0;
      };
      class HitFWheel {
        armor = 1;
        material = -1;
        name = "Hit_wheel_1";
        visual = "wheel_1";
        passThrough = 0;
      };
      class HitBWheel {
        armor = 1;
        material = -1;
        name = "Hit_wheel_2";
        visual = "wheel_2";
        passThrough = 0;
      };
      class HitEngine {
        armor = 0.4;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 0;
      };
    };
    class AnimationSources {
      class Hit_wheel_1 {
        source = "Hit";
        hitpoint = "HitFWheel";
        raw = 1;
      };
      class Hit_wheel_2 : Hit_wheel_1 {
        hitpoint = "HitBWheel";
      };
      class hopa {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
      class doska {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
    };
    threat[] = {0, 0, 0};
    armor = 20;
    turnCoef = 2;
    driverAction = "MMT_Driver";
    transportSoldier = 1;
    driverInAction = "MMT_Driver";
    cargoAction[] = {"Truck_Cargo02"};
    secondaryExplosion = 0;
    leftDustEffect = "NoDust";
    rightDustEffect = "NoDust";
    outsideSoundFilter = 0;
    soundGear[] = {"", "db-65", 1};
    SoundGetIn[] = {"", "db-35", 1};
    SoundGetOut[] = {"", "db-35", 1};
    soundEngineOnInt[] = {"", "db-9", 1};
    soundEngineOnExt[] = {"", "db-9", 1};
    soundEngineOffInt[] = {"", "db-9", 1};
    soundEngineOffExt[] = {"", "db-9", 1};
    buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_bicycle_01", "db-3", 1, 40};
    buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_bicycle_02", "db-3", 1, 40};
    buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_bicycle_03", "db-3", 1, 40};
    buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_bicycle_04", "db-3", 1, 40};
    soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
    WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_wood_small_01", "db-3", 1, 40};
    WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_wood_small_02", "db-3", 1, 40};
    WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_wood_small_03", "db-3", 1, 40};
    WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_wood_small_04", "db-3", 1, 40};
    soundWoodCrash[] = {"woodCrash0", 0.25, "woodCrash1", 0.25, "woodCrash2", 0.25, "woodCrash3", 0.25};
    ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_bicycle_06", "db-3", 1, 40};
    ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_bicycle_05", "db-3", 1, 40};
    ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_bicycle_04", "db-3", 1, 40};
    ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_bicycle_03", "db-3", 1, 40};
    soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"", "db-5", 1};
        limit = "0.2";
        expression = "(engineOn*(1-camPos))*thrust";
      };
      class AccelerationOut {
        sound[] = {"", "db-5", 1};
        limit = "0.2";
        expression = "(engineOn*camPos)*thrust";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"Ca\sounds\Vehicles\Wheeled\MMT\low1", "db-15", 1, 35};
        frequency = "(randomizer*0.01+1.0)*rpm";
        volume = "camPos*engineOn*((speed factor[0.1, 0.6]) min (speed factor[0.6, 0.1]))";
      };
      class EngineHighOut {
        sound[] = {"Ca\sounds\Vehicles\Wheeled\MMT\high1", "db-15", 1, 50};
        frequency = "(randomizer*0.05+1.0)*rpm";
        volume = "camPos*engineOn*(speed factor[0.4, 0.9])";
      };
      class IdleOut {
        sound[] = {"Ca\sounds\Vehicles\Wheeled\MMT\idle", "db-15", 1, 35};
        frequency = "1";
        volume = "camPos*engineOn*(speed factor[0.05, 0.9])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", "db-30", 1, 8};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", "db-30", 1, 8};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", "db-30", 1, 8};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", "db-30", 1, 8};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", "db-30", 1, 8};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", "db-30", 1, 8};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\ext\noise2", "db-60", 1, 8};
        frequency = "1";
        volume = "camPos*(damper0 max 0.036)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"Ca\sounds\Vehicles\Wheeled\MMT\low1", "db-10", 1};
        frequency = "(randomizer*0.1+1)*speed";
        volume = "(1-camPos)*engineOn*((speed factor[0.1, 0.6]) min (speed factor[0.6, 0.1]))";
      };
      class EngineHighIn {
        sound[] = {"Ca\sounds\Vehicles\Wheeled\MMT\high1", "db-10", 1};
        frequency = "(randomizer*0.05+1.0)*rpm";
        volume = "(1-camPos)*engineOn*(speed factor[0.4, 0.9])";
      };
      class IdleIn {
        sound[] = {"Ca\sounds\Vehicles\Wheeled\MMT\idle", "db-10", 1};
        frequency = "1";
        volume = "(1-camPos)*engineOn*(speed factor[0.05, 0.9])";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", "db-30", 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", "db-30", 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", "db-30", 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", "db-30", 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", "db-30", 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", "db-30", 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\ext\noise2", "db-60", 1};
        frequency = "1";
        volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
    soundEngine[] = {"", 1, 1};
    soundEnviron[] = {"", 1, 1};
    transportMaxMagazines = 0;
    transportMaxWeapons = 0;
    class Reflectors {
    };
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {"ca\wheeled_e\old_bike\data\old_bike_co.paa", "ca\wheeled_e\old_bike\data\old_bike_alfa_co.paa"};
  };
  class StaticWeapon : LandVehicle {
    class Turrets;
  };
  class StaticMGWeapon : StaticWeapon {
    class AnimationSources;
    class Turrets : Turrets {
      class MainTurret;
    };
  };
  class SectorMG_Ori : StaticMGWeapon {
    displayName = "Sector MG";
    armor = 90;
    scope = 2;
    model = "ori\weapons\ori_m2\ori_M2_mg.p3d";
    side = 0;
    faction = "rth_copter_class";
    crew = "";
    typicalCargo[] = {""};
    turnCoef = 1;
    aiRateOfFire = 0.2;
    aiRateOfFireDistance = 1000;
    ejectDeadGunner = 1;
    picture = "\ca\Weapons\data\ico\m2_mg_CA.paa";
    icon = "\Ca\weapons\Data\map_ico\icomap_M2_CA.paa";
    mapSize = 3;
    begin1[] = {"ca\sounds\Weapons\machineguns\M2_single_1", 1.77828, 1, 1400};
    begin2[] = {"ca\sounds\Weapons\machineguns\M2_single_2", 1.77828, 1, 1400};
    soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
    reloadMagazineSound[] = {"\Ca\sounds\Weapons\rifles\reload-belt-1", 0.0562341, 1, 40};
    bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01", 0.0707946, 1, 25};
    bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03", 0.0707946, 1, 25};
    bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02", 0.0707946, 1, 25};
    bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01", 0.0707946, 1, 25};
    bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01", 0.0707946, 1, 25};
    bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02", 0.0707946, 1, 25};
    bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03", 0.0707946, 1, 25};
    bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04", 0.0707946, 1, 25};
    bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01", 0.0707946, 1, 25};
    bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02", 0.0707946, 1, 25};
    bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03", 0.0707946, 1, 25};
    bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04", 0.0707946, 1, 25};
    soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
    class Turrets : Turrets {
      class MainTurret : MainTurret {
        minElev = -20;
        weapons[] = {"M2_Ori"};
        magazines[] = {"100Rnd_127x99_M2", "100Rnd_127x99_M2", "100Rnd_127x99_M2", "100Rnd_127x99_M2", "100Rnd_127x99_M2"};
        gunnerAction = "M2_Gunner";
      };
    };
    class AnimationSources {
      class ReloadAnim {
        source = "reload";
        weapon = "M2";
      };
      class ReloadMagazine {
        source = "reloadmagazine";
        weapon = "M2";
      };
      class Revolving {
        source = "revolving";
        weapon = "M2";
      };
    };
    soundGetOut[] = {"Ca\sounds\Weapons\machineguns\m2gun_inout", 0.001, 1, 45};
    soundGetIn[] = {"Ca\sounds\Weapons\machineguns\m2gun_inout", 0.000316228, 1, 45};
    armorStructural = 10;
    class Library {
      libTextDesc = "The Browning M2 .50 caliber Machine Gun, is a World War II era automatic, crew-operated machine gun. The very versatile M2 has served on a wide variety of ground vehicles, aircraft and ships over the years, and is still widely used around the world. This weapon can be used effectively against infantry, light armored vehicles, slow flying aircraft and small boats.";
    };
    htMin = 1;
    htMax = 480;
    afMax = 0;
    mfMax = 0;
    mFact = 1;
    tBody = 100;
  };
  class SectorMG2_Ori : SectorMG_Ori {
    model = "ca\weapons_E\M2\M2_mg";
  };
  class car_hatchback_ori : SkodaBase {
    scope = 2;
    faction = "rth_copter_class";
    maxSpeed = 125;
    model = "\ca\Wheeled\car_hatchback";
    picture = "\Ca\wheeled\data\ico\car_hatchback_CA.paa";
    Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
    mapSize = 6;
    typicalCargo[] = {};
    weapons[] = {"SportCarHorn"};
    magazines[] = {};
    transportMaxMagazines = 65;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 4;
    crew = "";
    insideSoundCoef = 0.8;
    terrainCoef = 4.5;
    displayName = "$STR_DN_HATCHBACK";
    driverAction = "Hatchback_Driver";
    wheelCircumference = 2.148;
    soundGear[] = {"", 5.62341e-05, 1};
    soundGetIn[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedna-getout-1", 0.316228, 1};
    soundGetOut[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-getout-2", 0.316228, 1, 30};
    soundEngineOnInt[] = {"ca\sounds\vehicles\Wheeled\sedan\int\int-sedan-start-1", 0.398107, 1};
    soundEngineOnExt[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-start-1", 0.398107, 1, 250};
    soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\sedan\int\int-sedan-stop-1", 0.398107, 1};
    soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-stop-1", 0.398107, 1, 250};
    buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01", 0.707946, 1, 200};
    buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02", 0.707946, 1, 200};
    buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03", 0.707946, 1, 200};
    buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04", 0.707946, 1, 200};
    soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
    WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", 0.707946, 1, 200};
    WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", 0.707946, 1, 200};
    WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", 0.707946, 1, 200};
    WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", 0.707946, 1, 200};
    WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", 0.707946, 1, 200};
    WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", 0.707946, 1, 200};
    soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
    ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01", 0.707946, 1, 200};
    ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02", 0.707946, 1, 200};
    ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03", 0.707946, 1, 200};
    ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04", 0.707946, 1, 200};
    soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-acce-1", 0.258107, 1};
        limit = "0.5";
        expression = "(engineOn*(1-camPos))*gmeterZ";
      };
      class AccelerationOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\ext\ext-sedan-acce-1", 0.258107, 1, 250};
        limit = "0.5";
        expression = "(engineOn*camPos)*gmeterZ";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\sedan\ext\ext-sedan-low-1", 0.298107, 0.9, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(engineOn*camPos*(rpm factor[0.6, 0.2]))*0.5";
      };
      class EngineHighOut {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\sedan\ext\ext-sedan-high-1", 0.298107, 0.8, 380};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(engineOn*camPos*(rpm factor[0.45, 0.9]))*0.5";
      };
      class IdleOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\ext\ext-sedan-idle-1", 0.281838, 1, 200};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.3, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\int-noise3", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-low-1", 0.562341, 0.8};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(((engineOn*thrust) factor[0.65, 0.2])*(1-camPos))*0.5";
      };
      class EngineHighIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-high-1", 0.562341, 0.8};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(((engineOn*thrust) factor[0.55, 0.95])*(1-camPos))*0.5";
      };
      class IdleIn {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\sedan\int\int-sedan-idle-1", 0.316228, 1};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.3, 0])*(1-camPos)";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2", 0.446684, 1};
        frequency = "1";
        volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"ca\wheeled\data\hatchback.rvmat", "ca\wheeled\data\hatchback.rvmat", "ca\wheeled\data\hatchback_destruct.rvmat", "ca\wheeled\data\hatchback.rvmat", "ca\wheeled\data\hatchback.rvmat", "ca\wheeled\data\hatchback_destruct.rvmat", "ca\wheeled\data\detailmapy\auta_skla.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
    };
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\ca\wheeled\data\hatchback_co.paa"};
    cargoAction[] = {"Hatchback_Cargo01"};
    cargoIsCoDriver[] = {1, 0};
    class Library {
      libTextDesc = "$STR_LIB_HATCHBACK";
    };
    rarityUrban = 0.6;
    class HitPoints {
      class HitEngine {
        armor = 0.6;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 0.8;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 0.7;
      };
      class HitFuel {
        armor = 0.6;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.4;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.4;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class car_sedan_ori : SkodaBase {
    scope = 2;
    faction = "rth_copter_class";
    maxSpeed = 125;
    armor = 22;
    model = "\ca\Wheeled\car_sedan";
    picture = "\Ca\wheeled\data\ico\car_sedan_CA.paa";
    Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
    mapSize = 6;
    typicalCargo[] = {};
    weapons[] = {"SportCarHorn"};
    magazines[] = {};
    transportMaxMagazines = 65;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 4;
    terrainCoef = 4.5;
    crew = "";
    displayName = "$STR_DN_SEDAN";
    driverAction = "Sedan_Driver";
    wheelCircumference = 1.947;
    insideSoundCoef = 0.8;
    soundGear[] = {"", 5.62341e-05, 1};
    soundGetIn[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedna-getout-1", 0.316228, 1};
    soundGetOut[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-getout-2", 0.316228, 1, 30};
    soundEngineOnInt[] = {"ca\sounds\vehicles\Wheeled\sedan\int\int-sedan-start-1", 0.398107, 1};
    soundEngineOnExt[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-start-1", 0.398107, 1, 250};
    soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\sedan\int\int-sedan-stop-1", 0.398107, 1};
    soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-stop-1", 0.398107, 1, 250};
    buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01", 0.707946, 1, 200};
    buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02", 0.707946, 1, 200};
    buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03", 0.707946, 1, 200};
    buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04", 0.707946, 1, 200};
    soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
    WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", 0.707946, 1, 200};
    WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", 0.707946, 1, 200};
    WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", 0.707946, 1, 200};
    WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", 0.707946, 1, 200};
    WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", 0.707946, 1, 200};
    WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", 0.707946, 1, 200};
    soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
    ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01", 0.707946, 1, 200};
    ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02", 0.707946, 1, 200};
    ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03", 0.707946, 1, 200};
    ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04", 0.707946, 1, 200};
    soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-acce-2", 0.258107, 1};
        limit = "0.5";
        expression = "(engineOn*(1-camPos))*gmeterZ";
      };
      class AccelerationOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\ext\ext-sedan-acce-2", 0.258107, 1, 250};
        limit = "0.5";
        expression = "(engineOn*camPos)*gmeterZ";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\sedan\ext\ext-sedan-low-1", 0.562341, 0.95, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(engineOn*camPos*(rpm factor[0.6, 0.2]))*0.5";
      };
      class EngineHighOut {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\sedan\ext\ext-sedan-high-1", 0.562341, 0.95, 399};
        frequency = "(randomizer*0.05+0.98)*rpm";
        volume = "(engineOn*camPos*(rpm factor[0.45, 0.9]))*0.5";
      };
      class IdleOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\ext\ext-sedan-idle-1", 0.354813, 1, 200};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.3, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\int-noise3", 0.1, 1, 30};
        frequency = "1";
        volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-low-1", 0.562341, 0.95};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(((engineOn*thrust) factor[0.65, 0.2])*(1-camPos))*0.5";
      };
      class EngineHighIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\sedan\int\int-sedan-high-1", 0.562341, 0.95};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(((engineOn*thrust) factor[0.55, 0.95])*(1-camPos))*0.5";
      };
      class IdleIn {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\sedan\int\int-sedan-idle-1", 0.354813, 1};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.3, 0])*(1-camPos)";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2", 0.446684, 1};
        frequency = "1";
        volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
    class Library {
      libTextDesc = "$STR_LIB_SEDAN";
    };
    class Damage {
      tex[] = {};
      mat[] = {"ca\wheeled\data\sedan_ext.rvmat", "ca\wheeled\data\sedan_ext.rvmat", "ca\wheeled\data\sedan_ext_destruct.rvmat", "ca\wheeled\data\sedan_int.rvmat", "ca\wheeled\data\sedan_int.rvmat", "ca\wheeled\data\sedan_int_destruct.rvmat", "ca\wheeled\data\detailmapy\auta_skla.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
    };
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\ca\wheeled\data\sedan_ext_co.paa"};
    rarityUrban = 0.6;
    class HitPoints {
      class HitEngine {
        armor = 0.45;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.5;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class datsun1_civil_1_open_ori : SkodaBase {
    scope = 2;
    faction = "rth_copter_class";
    model = "\ca\Wheeled\datsun1_civil_1_open";
    picture = "\Ca\wheeled\data\ico\datsun1_civil_1_open_CA.paa";
    Icon = "\Ca\wheeled\data\map_ico\icomap_datsun_CA.paa";
    mapSize = 7;
    wheelCircumference = 2.199;
    crew = "";
    typicalCargo[] = {};
    weapons[] = {"SportCarHorn"};
    magazines[] = {};
    transportMaxMagazines = 80;
    transportMaxWeapons = 16;
    transportMaxBackpacks = 5;
    displayName = "Pick-Up";
    maxSpeed = 125;
    turnCoef = 2.5;
    armor = 22;
    terrainCoef = 3;
    steerAheadPlan = 0.15;
    insideSoundCoef = 0.8;
    soundGear[] = {"", 0.000562341, 1};
    SoundGetIn[] = {"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1", 0.251189, 1};
    SoundGetOut[] = {"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1", 0.251189, 1, 30};
    soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-start-1", 0.316228, 1};
    soundEngineOnExt[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-start-1", 0.316228, 1, 250};
    soundEngineOffInt[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-stop-1", 0.316228, 1};
    soundEngineOffExt[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-stop-1", 0.316228, 1, 250};
    buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01", 0.707946, 1, 200};
    buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02", 0.707946, 1, 200};
    buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03", 0.707946, 1, 200};
    buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04", 0.707946, 1, 200};
    soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
    WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", 0.707946, 1, 200};
    WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", 0.707946, 1, 200};
    WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", 0.707946, 1, 200};
    WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", 0.707946, 1, 200};
    WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", 0.707946, 1, 200};
    WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", 0.707946, 1, 200};
    soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
    ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01", 0.707946, 1, 200};
    ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02", 0.707946, 1, 200};
    ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03", 0.707946, 1, 200};
    ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04", 0.707946, 1, 200};
    soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-acce-1", 0.216228, 1};
        limit = "0.7";
        expression = "(engineOn*(1-camPos))*gmeterZ*(speed factor[2.5, 4])";
      };
      class AccelerationOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-acce-1", 0.216228, 1, 250};
        limit = "0.7";
        expression = "(engineOn*camPos)*gmeterZ*(speed factor[2.5, 4])";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-low-1", 0.398107, 1, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(camPos*engineOn*((rpm factor[0.21, 0.5]) min (rpm factor[0.7, 0.3])))*0.7";
      };
      class EngineHighOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-high-2", 0.398107, 1, 350};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(camPos*engineOn*(rpm factor[0.5, 0.85]))*0.7";
      };
      class IdleOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-idle-5", 0.223872, 1, 100};
        frequency = "1";
        volume = "camPos*engineOn*(rpm factor[0.4, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-noise", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-low-1", 0.562341, 1};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.7, 0.3])))*0.7";
      };
      class EngineHighIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-high-2", 0.562341, 1};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((1-camPos)*engineOn*(rpm factor[0.56, 0.8]))*0.7";
      };
      class IdleIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-idle-5", 0.398107, 1};
        frequency = "1";
        volume = "(1-camPos)*engineOn*(rpm factor[0.4, 0])";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-noise-1", 0.316228, 1};
        frequency = "1";
        volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
    transportSoldier = 1;
    driverAction = "datsun_driver";
    cargoAction[] = {"Hilux_cargo01"};
    class Library {
      libTextDesc = "A pickup truck which was very popular in the United States in the 1970s.";
    };
    class Damage {
      tex[] = {};
      mat[] = {"ca\wheeled\data\detailmapy\datsun_interier.rvmat", "ca\wheeled\data\detailmapy\datsun_interier.rvmat", "ca\wheeled\data\detailmapy\datsun_interier_destruct.rvmat", "ca\wheeled\data\detailmapy\datsun_trup.rvmat", "ca\wheeled\data\detailmapy\datsun_trup.rvmat", "ca\wheeled\data\detailmapy\datsun_trup_destruct.rvmat", "ca\wheeled\data\detailmapy\auta_skla.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
    };
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\ca\wheeled\data\datsun_trup1_co.paa"};
    rarityUrban = 0.25;
    brakeDistance = 10.5;
    class HitPoints {
      class HitEngine {
        armor = 0.6;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.5;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.5;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.5;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.5;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.5;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class Skoda_ori : SkodaBase {
    scope = 2;
    accuracy = 1000;
    crew = "";
    armor = 22;
    faction = "rth_copter_class";
    insideSoundCoef = 0.8;
    typicalCargo[] = {};
    weapons[] = {"SportCarHorn"};
    magazines[] = {};
    model = "\ca\wheeled\skodovka";
    picture = "\Ca\wheeled\data\ico\skodovka_CA.paa";
    Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
    mapSize = 6;
    displayName = "Car (white)";
    displayNameShort = "Car";
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\ca\wheeled\data\skodovka_bila_co.paa", "\ca\wheeled\data\skodovka_int_co.paa"};
    transportMaxMagazines = 65;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 3;
    terrainCoef = 4.5;
    class Damage {
      tex[] = {};
      mat[] = {"ca\wheeled\data\skodovka.rvmat", "ca\wheeled\data\skodovka.rvmat", "ca\wheeled\data\skodovka_destruct.rvmat", "ca\wheeled\data\detailmapy\auta_skla.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
    };
    rarityUrban = 0.25;
    class Sounds {
      class Engine {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-low-1", 0.398107, 1, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(camPos*engineOn*((rpm factor[0.21, 0.5]) min (rpm factor[0.7, 0.3])))*0.5";
      };
      class EngineHighOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-high-2", 0.398107, 1, 350};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(camPos*engineOn*(rpm factor[0.5, 0.85]))*0.5";
      };
      class IdleOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-idle-5", 0.223872, 1, 100};
        frequency = "1";
        volume = "camPos*engineOn*(rpm factor[0.4, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-noise", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-low-1", 0.562341, 1};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.7, 0.3])))*0.5";
      };
      class EngineHighIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-high-2", 0.562341, 1};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((1-camPos)*engineOn*(rpm factor[0.56, 0.8]))*0.5";
      };
      class IdleIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-idle-5", 0.398107, 1};
        frequency = "1";
        volume = "(1-camPos)*engineOn*(rpm factor[0.4, 0])";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-noise-1", 0.216228, 1};
        frequency = "1";
        volume = "((damper0 max 0.03)*(speed factor[0, 8])*(1-camPos))*0.8";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
    class HitPoints {
      class HitEngine {
        armor = 0.8;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 0.2;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1.2;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.6;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 0.5;
      };
      class HitLFWheel {
        armor = 0.35;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.35;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.35;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.35;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.35;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.35;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class SkodaBlue_ori : Skoda_ori {
    scope = 2;
    model = "\ca\wheeled\skodovka_blue";
    picture = "\Ca\wheeled\data\ico\skodovka_CA.paa";
    Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
    mapSize = 6;
    displayName = "Car (blue)";
    displayNameShort = "Car";
    class Damage {
      tex[] = {};
      mat[] = {"ca\wheeled\data\skodovka_modra.rvmat", "ca\wheeled\data\skodovka_modra.rvmat", "ca\wheeled\data\skodovka_destruct.rvmat", "ca\wheeled\data\detailmapy\auta_skla.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
    };
    rarityUrban = 0.25;
  };
  class SkodaRed_ori : Skoda_ori {
    scope = 2;
    model = "\ca\wheeled\skodovka_red";
    picture = "\Ca\wheeled\data\ico\skodovka_CA.paa";
    Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
    mapSize = 6;
    displayName = "Car (red)";
    displayNameShort = "Car";
    class Damage {
      tex[] = {};
      mat[] = {"ca\wheeled\data\skodovka.rvmat", "ca\wheeled\data\skodovka.rvmat", "ca\wheeled\data\skodovka_destruct.rvmat", "ca\wheeled\data\detailmapy\auta_skla.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
    };
  };
  class SkodaGreen_ori : Skoda_ori {
    scope = 2;
    model = "\ca\wheeled\skodovka_green";
    picture = "\Ca\wheeled\data\ico\skodovka_CA.paa";
    Icon = "\Ca\wheeled\data\map_ico\icomap_skoda_CA.paa";
    mapSize = 6;
    displayName = "Car (green)";
    displayNameShort = "Car";
    class Damage {
      tex[] = {};
      mat[] = {"ca\wheeled\data\skodovka_zelena.rvmat", "ca\wheeled\data\skodovka_zelena.rvmat", "ca\wheeled\data\skodovka_destruct.rvmat", "ca\wheeled\data\detailmapy\auta_skla.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
    };
  };
  class UAZ_RU_ori : UAZ_Unarmed_Base {
    scope = 2;
    side = 0;
    armor = 40;
    damageResistance = 0.01821;
    faction = "rth_copter_class";
    insideSoundCoef = 0.8;
    transportMaxMagazines = 110;
    transportMaxWeapons = 18;
    transportMaxBackpacks = 6;
    terrainCoef = 2;
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    weapons[] = {"CarHorn"};
    magazines[] = {};
    crew = "";
    typicalCargo[] = {};
    hiddenSelectionsTextures[] = {"\ca\wheeled\data\Uaz_main_CO.paa"};
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_acceleration", 0.462341, 1};
        limit = "0.4";
        expression = "(engineOn*(1-camPos))*gmeterZ";
      };
      class AccelerationOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_acceleration", 0.562341, 1, 200};
        limit = "0.4";
        expression = "(engineOn*camPos)*gmeterZ";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_low1", 0.177828, 0.9, 100};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(camPos*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55])))*0.6";
      };
      class EngineHighOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_high1", 1, 0.8, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(camPos*engineOn*(rpm factor[0.6, 1.0]))*0.6";
      };
      class IdleOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_idle", 0.562341, 1, 100};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.5, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_low1", 0.316228, 0.7};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((1-camPos)*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55])))*0.6";
      };
      class EngineHighIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_high1", 1, 0.8};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((1-camPos)*engineOn*(rpm factor[0.6, 1.0]))*0.5";
      };
      class IdleIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_idle", 0.316228, 1};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.5, 0])*(1-camPos)";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2", 0.362341, 1};
        frequency = "1";
        volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
    class HitPoints {
      class HitEngine {
        armor = 0.4;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 0.2;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.3;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 0.5;
      };
      class HitLFWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.35;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.35;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class UAZ_MG_Ori : UAZ_MG_Base {
    scope = 2;
    side = 2;
    displayName = "UAZ MG";
    faction = "rth_copter_class";
    crew = "";
    typicalCargo[] = {};
    weapons[] = {"CarHorn"};
    magazines[] = {};
    gunnerHasFlares = 0;
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    hiddenSelectionsTextures[] = {"\ca\wheeled\data\Uaz_main_002_CO.paa", "\ca\wheeled\data\uaz_mount_002_co.paa"};
    terrainCoef = 2;
    transportMaxMagazines = 90;
    transportMaxWeapons = 14;
    transportMaxBackpacks = 4;
    damageResistance = 0.01821;
    armor = 30;
    class HitPoints {
      class HitEngine {
        armor = 0.4;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 0.2;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.3;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 0.5;
      };
      class HitLFWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.35;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.35;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_acceleration", 0.362341, 1};
        limit = "0.4";
        expression = "(engineOn*(1-camPos))*gmeterZ";
      };
      class AccelerationOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_acceleration", 0.462341, 1, 200};
        limit = "0.4";
        expression = "(engineOn*camPos)*gmeterZ";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_low1", 0.177828, 0.9, 100};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(camPos*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55])))*0.6";
      };
      class EngineHighOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_high1", 1, 0.8, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(camPos*engineOn*(rpm factor[0.6, 1.0]))*0.6";
      };
      class IdleOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_idle", 0.562341, 1, 100};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.5, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2", 0.316228, 1, 30};
        frequency = "1";
        volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_low1", 0.316228, 0.7};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((1-camPos)*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.55])))*0.6";
      };
      class EngineHighIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_high1", 1, 0.8};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((1-camPos)*engineOn*(rpm factor[0.6, 1.0]))*0.6";
      };
      class IdleIn {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_idle", 0.316228, 1};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.5, 0])*(1-camPos)";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2", 0.362341, 1};
        frequency = "1";
        volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
  };
  class Volha_TK_CIV_Base_EP1;
  class Volha_2_TK_CIV_EP1_ori : Volha_TK_CIV_Base_EP1 {
    scope = 2;
    accuracy = 1000;
    insideSoundCoef = 0.8;
    displayname = "GAZ (grey)";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"ca\wheeled_E\Volha\Data\Volha_Gray_ECIV_CO"};
    terrainCoef = 4.5;
    weapons[] = {"SportCarHorn"};
    magazines[] = {};
    faction = "rth_copter_class";
    crew = "";
    typicalCargo[] = {};
    transportMaxMagazines = 65;
    transportMaxWeapons = 14;
    transportMaxBackpacks = 4;
    armor = 27;
    damageResistance = 0.01713;
    class HitPoints {
      class HitEngine {
        armor = 0.8;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.7;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.4;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.4;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class ATV_Base_EP1;
  class ATV_Ori : ATV_Base_EP1 {
    scope = 2;
    side = 2;
    displayName = "ATV";
    faction = "rth_copter_class";
    crew = "";
    typicalCargo[] = {};
    weapons[] = {};
    magazines[] = {};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    transportMaxMagazines = 20;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 2;
  };
  class hilux1_civil_1_open;
  class hilux1_civil_1_open_ori : hilux1_civil_1_open {
    scope = 2;
    faction = "rth_copter_class";
    maxSpeed = 125;
    damageResistance = 0.01821;
    armor = 22;
    typicalCargo[] = {};
    crew = "";
    transportMaxMagazines = 80;
    transportMaxWeapons = 16;
    transportMaxBackpacks = 5;
    class HitPoints {
      class HitEngine {
        armor = 0.55;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.5;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.75;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.75;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.75;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.75;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.45;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.45;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class hilux1_civil_3_open_EP1;
  class hilux1_civil_3_open_EP1_ori : hilux1_civil_3_open_EP1 {
    scope = 2;
    faction = "rth_copter_class";
    maxSpeed = 125;
    typicalCargo[] = {};
    crew = "";
    transportMaxMagazines = 80;
    transportMaxWeapons = 16;
    transportMaxBackpacks = 5;
    damageResistance = 0.01821;
    armor = 22;
    class HitPoints {
      class HitEngine {
        armor = 0.6;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.5;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.75;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.75;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.75;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.75;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.45;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.45;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class HMMWV_Base;
  class HMMWV_Ori : HMMWV_Base {
    scope = 2;
    accuracy = 0.02;
    faction = "rth_copter_class";
    camouflage = 2;
    picture = "\Ca\wheeled\data\ico\HMMWV_CA.paa";
    Icon = "\Ca\wheeled\data\map_ico\icomap_hmwv_CA.paa";
    mapSize = 5;
    displayName = "HMMWV US";
    hasGunner = 0;
    armor = 50;
    class Turrets {
    };
    class Damage {
      tex[] = {};
      mat[] = {"ca\wheeled\hmmwv\data\hmmwv_details.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_details_damage.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_details_destruct.rvmat", "ca\wheeled\hmmwv\data\hmmwv_body.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_body_damage.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_body_destruct.rvmat", "ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat", "ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat", "ca\wheeled\data\hmmwv_clocks_destruct.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"};
    };
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\skins1\hmmwv\hmmwv_telo_co.paa"};
    crew = "";
    typicalCargo[] = {};
    weapons[] = {"CarHorn"};
    magazines[] = {};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    transportMaxMagazines = 150;
    transportMaxWeapons = 20;
    transportMaxBackpacks = 5;
    model = "ca\wheeled_E\HMMWV\HMMWV";
    class HitPoints {
      class HitEngine {
        armor = 0.6;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 1;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 1;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1.3;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.4;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.45;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.45;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class Kamaz_Ori : Kamaz_Base {
    scope = 2;
    side = 2;
    displayName = "$STR_DN_KAMAZ";
    faction = "rth_copter_class";
    crew = "";
    typicalCargo[] = {};
    weapons[] = {"TruckHorn"};
    armor = 32;
    damageResistance = 0.00343;
    fuelCapacity = 200;
    magazines[] = {};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    model = "\ca\wheeled2\Kamaz\Kamaz";
    cargoAction[] = {"Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo02", "Truck_Cargo03", "Truck_Cargo02", "Truck_Cargo02", "Truck_Cargo03", "Truck_Cargo02", "Truck_Cargo03", "Truck_Cargo02", "Truck_Cargo02", "Truck_Cargo03"};
    transportMaxMagazines = 260;
    transportMaxWeapons = 50;
    transportMaxBackpacks = 15;
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\skins1\kamaz\kamaz_blue_co.paa", "\ori\vehicles\skins1\kamaz\kamaz_back_white_co.paa"};
    class HitPoints {
      class HitEngine {
        armor = 0.4;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.7;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class KamazOpen_Ori : Kamaz_Base {
    scope = 2;
    side = 2;
    displayName = "$STR_DN_KAMAZ_OPEN";
    faction = "rth_copter_class";
    crew = "";
    typicalCargo[] = {};
    weapons[] = {"TruckHorn"};
    armor = 32;
    damageResistance = 0.00343;
    fuelCapacity = 200;
    magazines[] = {};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    model = "\ca\wheeled2\Kamaz\Kamaz_Open";
    picture = "\Ca\wheeled2\data\ui\Picture_kamaz_open_CA.paa";
    Icon = "\Ca\wheeled2\data\ui\Icon_kamaz_open_CA.paa";
    castCargoShadow = 1;
    transportMaxMagazines = 260;
    transportMaxWeapons = 50;
    transportMaxBackpacks = 15;
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\skins1\kamaz\kamaz_blue_co.paa", "\ori\vehicles\skins1\kamaz\kamaz_back_white_co.paa"};
    class Library {
      libTextDesc = "$STR_LIB_KAMAZ_OPEN";
    };
    class HitPoints {
      class HitEngine {
        armor = 0.4;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.7;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class Lada_base;
  class Lada1_ori : Lada_base {
    scope = 2;
    displayname = "$STR_DN_LADA_WHITE";
    accuracy = 1000;
    faction = "rth_copter_class";
    weapons[] = {"CarHorn"};
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\ca\wheeled2\Lada\Data\lada_white_co.paa"};
    rarityUrban = 0.6;
    terrainCoef = 4.5;
    transportMaxMagazines = 65;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 4;
    armor = 23;
    class HitPoints {
      class HitEngine {
        armor = 0.5;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.5;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.45;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.45;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class Lada2_TK_CIV_EP1_ori : Lada_base {
    scope = 2;
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\CA\wheeled_E\Lada\Data\Lada_ECIV2_CO.paa", "\Ca\wheeled_E\Lada\Data\Lada_glass_ECIV2_CA.paa"};
    displayname = "Lada (decorated)";
    armor = 22;
    class HitPoints {
      class HitEngine {
        armor = 0.5;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.5;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.45;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.45;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.45;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class LadaLM_ori : Lada_base {
    scope = 2;
    faction = "rth_copter_class";
    model = "\CA\wheeled2\Lada\Lada_LM.p3d";
    displayname = "UAZ (Militia)";
    terrainCoef = 4.5;
    weapons[] = {"CarHorn"};
    transportMaxMagazines = 65;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 4;
    armor = 21;
    class HitPoints {
      class HitEngine {
        armor = 0.5;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.5;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.5;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.5;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.5;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.5;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.4;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.4;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
    class Reflectors {
      class Left {
        color[] = {0.9, 0.8, 0.8, 1};
        ambient[] = {0.1, 0.1, 0.1, 1};
        position = "L svetlo";
        direction = "konec L svetla";
        hitpoint = "L svetlo";
        selection = "L svetlo";
        size = 0.5;
        brightness = 0.5;
      };
      class Right {
        color[] = {0.9, 0.8, 0.8, 1};
        ambient[] = {0.1, 0.1, 0.1, 1};
        position = "P svetlo";
        direction = "konec P svetla";
        hitpoint = "P svetlo";
        selection = "P svetlo";
        size = 0.5;
        brightness = 0.5;
      };
      class Majak1 {
        color[] = {0.1, 0.2, 0.8, 1};
        ambient[] = {0.01, 0.01, 0.1, 1};
        position = "majak ligth 1 start";
        direction = "majak ligth 1 end";
        hitpoint = "";
        selection = "";
        size = 0.5;
        brightness = 0.5;
      };
      class Majak2 : Majak1 {
        position = "majak ligth 2 start";
        direction = "majak ligth 2 end";
        hitpoint = "";
        selection = "";
      };
    };
    class Library {
      libTextDesc = "The Lada Riva 1500 is a medium-size Russian-made family car that also (as in this case) saw service with Soviet militia forces.";
    };
  };
  class LandRover_Base_Ori : Car {
    brakeDistance = 12.5;
    expansion = 1;
    enableManualFire = 0;
    htMin = 60;
    htMax = 1800;
    afMax = 100;
    mfMax = 80;
    mFact = 1;
    tBody = 250;
    scope = 0;
    displayname = "$STR_EP1_DN_LandRover_Base";
    maxSpeed = 150;
    terrainCoef = 3;
    turnCoef = 3;
    armor = 30;
    damageResistance = 0.00719;
    model = "\ca\wheeled_E\LR\LR";
    Picture = "\CA\wheeled_e\Data\UI\Picture_lr_CA.paa";
    Icon = "\CA\wheeled_e\Data\UI\Icon_lr_transport_CA.paa";
    MapSize = 6;
    outsideSoundFilter = 1;
    insideSoundCoef = 0.9;
    soundGear[] = {"", 5.62341e-05, 1};
    soundGetIn[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_door", 1, 1, 30};
    soundGetOut[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_door", 1, 1, 30};
    soundEngineOnInt[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_start", 1, 1};
    soundEngineOnExt[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_start", 1, 1, 100};
    soundEngineOffInt[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_stop", 1, 1};
    soundEngineOffExt[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_stop", 1, 1, 100};
    buildCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_building_01", 0.707946, 1, 150};
    buildCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_building_02", 0.707946, 1, 150};
    buildCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_building_03", 0.707946, 1, 150};
    buildCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_building_04", 0.707946, 1, 150};
    soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
    WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_wood_01", 0.707946, 1, 150};
    WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_wood_02", 0.707946, 1, 150};
    WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_wood_03", 0.707946, 1, 150};
    WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_wood_04", 0.707946, 1, 150};
    soundWoodCrash[] = {"woodCrash0", 0.25, "woodCrash1", 0.25, "woodCrash2", 0.25, "woodCrash3", 0.25};
    ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_01", 0.707946, 1, 150};
    ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_02", 0.707946, 1, 150};
    ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_03", 0.707946, 1, 150};
    ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_04", 0.707946, 1, 150};
    soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_acceleration", 0.562341, 1};
        limit = 0.15;
        expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
      class AccelerationOut {
        sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_acceleration", 0.562341, 1, 300};
        limit = 0.15;
        expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_low", 1.41254, 0.6, 200};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
      };
      class EngineHighOut {
        sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_high", 1.41254, 0.6, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
      };
      class IdleOut {
        sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_idle", 0.562341, 1, 100};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.4, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise3", 0.562341, 1, 50};
        frequency = "1";
        volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_low", 1.41254, 0.6};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
      };
      class EngineHighIn {
        sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_high", 1.41254, 0.6};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
      };
      class IdleIn {
        sound[] = {"\ca\Sounds_E\Wheeled_E\LandRover\LRover_int_idle", 0.794328, 1};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.1, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise4", 0.316228, 1};
        frequency = "1";
        volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
    class Library {
      libTextDesc = "$STR_EP1_LIB_LandRover";
    };
    transportSoldier = 7;
    driverAction = "LR_Driver_EP1";
    cargoAction[] = {"LR_Cargo01_EP1", "LR_Cargo02_EP1", "LR_Cargo03_EP1", "LR_Cargo05_EP1", "LR_Cargo04_EP1", "LR_Cargo02_EP1", "LR_Cargo03_EP1"};
    cargoIsCoDriver[] = {1, 0};
    class HitPoints : HitPoints {
      class HitEngine {
        armor = 2;
        material = -1;
        name = "motor";
        passThrough = 0;
      };
      class HitFuel {
        armor = 1;
        material = -1;
        name = "palivo";
        passThrough = 0;
      };
      class HitLFWheel : HitLFWheel {
        armor = 0.5;
      };
      class HitLBWheel : HitLBWheel {
        armor = 0.5;
      };
      class HitRFWheel : HitRFWheel {
        armor = 0.5;
      };
      class HitRBWheel : HitRBWheel {
        armor = 0.5;
      };
    };
    threat[] = {0, 0, 0};
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\ca\wheeled_e\lr\data\lr_base_ind_co.paa"};
  };
  class LandRover_MG_Ori : LandRover_Base_Ori {
    scope = 2;
    side = 2;
    faction = "rth_copter_class";
    model = "\ori\vehicles\LR\LR_MG.p3d";
    Picture = "\CA\wheeled_e\Data\UI\Picture_lr_mg_CA.paa";
    Icon = "\CA\wheeled_e\Data\UI\Icon_lr_mg_CA.paa";
    transportSoldier = 1;
    cargoAction[] = {"LR_Cargo01_EP1"};
    threat[] = {1, 0.1, 0.1};
    terrainCoef = 2;
    transportMaxMagazines = 80;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 4;
    class Damage {
      tex[] = {};
      mat[] = {"ca\wheeled_E\LR\Data\LR_base.rvmat", "ca\wheeled_E\LR\Data\LR_base_damage.rvmat", "ca\wheeled_E\LR\Data\LR_base_destruct.rvmat", "ca\wheeled_E\LR\Data\LR_glass.rvmat", "ca\wheeled_E\LR\Data\LR_glass_damage.rvmat", "ca\wheeled_E\LR\Data\LR_glass_destruct.rvmat", "ca\wheeled_E\LR\Data\LR_MG-SPG9.rvmat", "ca\wheeled_E\LR\Data\LR_MG-SPG9_damage.rvmat", "ca\wheeled_E\LR\Data\LR_MG-SPG9_destruct.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default_destruct.rvmat"};
    };
    crew = "";
    typicalCargo[] = {};
    weapons[] = {"CarHorn"};
    magazines[] = {};
    displayName = "LandRover MG";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\ca\wheeled_e\lr\data\lr_base_ind_co.paa"};
    class Turrets : Turrets {
      class MainTurret : MainTurret {
        body = "mainTurret";
        gun = "mainGun";
        hasGunner = 1;
        weapons[] = {"M2"};
        minElev = -25;
        maxElev = 60;
        soundServo[] = {"\ca\wheeled\Data\Sound\servo3", 1e-06, 1};
        magazines[] = {"100Rnd_127x99_M2", "100Rnd_127x99_M2", "100Rnd_127x99_M2"};
        gunnerAction = "LR_Gunner_EP1";
        ejectDeadGunner = 1;
        castGunnerShadow = 1;
        stabilizedInAxes = "StabilizedInAxesNone";
      };
    };
    class AnimationSources : AnimationSources {
      class ReloadAnim {
        source = "reload";
        weapon = "M2";
      };
      class ReloadMagazine {
        source = "reloadmagazine";
        weapon = "M2";
      };
      class Revolving {
        source = "revolving";
        weapon = "M2";
      };
      class oknaOchrana {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0.4;
      };
      class kolaOchrana {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0.4;
      };
      class predniOknoOchrana {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0.4;
      };
      class pluhPredni {
        source = "user";
        animPeriod = 0;
        initPhase = 0.4;
      };
      class hopa {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
    };
  };
  class LandRover_Ori : LandRover_Base_Ori {
    scope = 2;
    side = 2;
    faction = "rth_copter_class";
    crew = "";
    displayName = "LandRover";
    typicalCargo[] = {};
    weapons[] = {"CarHorn"};
    magazines[] = {};
    class Turrets {
    };
    class HitPoints : HitPoints {
      class HitGlass1 : HitGlass1 {
        armor = 0.15;
      };
      class HitGlass2 : HitGlass2 {
        armor = 0.1;
      };
      class HitGlass3 : HitGlass3 {
        armor = 0.1;
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"ca\wheeled_E\LR\Data\LR_base.rvmat", "ca\wheeled_E\LR\Data\LR_base_damage.rvmat", "ca\wheeled_E\LR\Data\LR_base_destruct.rvmat", "ca\wheeled_E\LR\Data\LR_glass.rvmat", "ca\wheeled_E\LR\Data\LR_glass_damage.rvmat", "ca\wheeled_E\LR\Data\LR_glass_destruct.rvmat", "ca\wheeled_E\LR\Data\LR_Special.rvmat", "ca\wheeled_E\LR\Data\LR_Special_damage.rvmat", "ca\wheeled_E\LR\Data\LR_Special_destruct.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default_destruct.rvmat"};
    };
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    class NVGMarkers {
      class NVGMarker01 {
        name = "nvg_marker";
        color[] = {0.03, 0.003, 0.003, 1};
        ambient[] = {0.003, 0.0003, 0.0003, 1};
        brightness = 0.001;
        blinking = 1;
      };
    };
    terrainCoef = 2;
    transportMaxMagazines = 120;
    transportMaxWeapons = 16;
    transportMaxBackpacks = 6;
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\ca\wheeled_e\lr\data\lr_base_ind_co.paa"};
  };
  class Offroad_DSHKM_base;
  class Offroad_MG_Ori : Offroad_DSHKM_base {
    htMin = 60;
    htMax = 1800;
    afMax = 200;
    mfMax = 100;
    mFact = 1;
    tBody = 250;
    expansion = 1;
    scope = 2;
    side = 2;
    armor = 24;
    damageResistance = 0.01821;
    faction = "rth_copter_class";
    crew = "";
    typicalCargo[] = {};
    weapons[] = {"CarHorn"};
    magazines[] = {};
    displayName = "Offroad MG";
    hiddenSelectionsTextures[] = {"\CA\wheeled_E\Hilux_Armed\Data\coyota_trup1_EINS_CO.paa"};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    terrainCoef = 2.5;
    transportMaxMagazines = 90;
    transportMaxWeapons = 16;
    transportMaxBackpacks = 4;
    class HitPoints {
      class HitEngine {
        armor = 0.5;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.4;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class RHIB_Ori : Boat {
    scope = 2;
    displayName = "RHIB";
    vehicleClass = "Ship";
    accuracy = 0.5;
    faction = "rth_copter_class";
    crew = "";
    typicalCargo[] = {};
    weapons[] = {};
    magazines[] = {};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    transportMaxMagazines = 200;
    transportMaxWeapons = 60;
    transportMaxBackpacks = 8;
    damageResistance = 0.01821;
    side = 2;
    model = "\ca\water\rhib";
    picture = "\ca\water\data\ico\rhib_CA.paa";
    Icon = "\Ca\water\Data\map_ico\icomap_RHIB_CA.paa";
    mapSize = 8;
    unitInfoType = "UnitInfoShip";
    soundEnviron[] = {"", 0.0562341, 0.9};
    precision = 6;
    brakeDistance = 20;
    class SoundEvents {
    };
    insideSoundCoef = 1;
    soundEngineOnInt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-start-01", 0.1, 1};
    soundEngineOnExt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-start-01", 1, 1, 150};
    soundEngineOffInt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-stop-01", 0.1, 1};
    soundEngineOffExt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-stop-01", 1, 1, 150};
    class Sounds {
      class Engine {
        sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-low-01", 1, 0.9, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "engineOn*(rpm factor[0.5, 0.1])";
      };
      class EngineHighOut {
        sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-high-01", 1, 0.8, 300};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "engineOn*(rpm factor[0.4, 1.3])";
      };
      class IdleOut {
        sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-idle-03", 0.562341, 1, 150};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.3, 0])";
      };
      class WaternoiseOutW0 {
        sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-water-noise-nospeed", 0.398107, 1, 100};
        frequency = "1";
        volume = "(speed factor[7, 0])";
      };
      class WaternoiseOutW1 {
        sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-lospd-noise-02", 0.398107, 1, 100};
        frequency = "1";
        volume = "((speed factor[2, 12]) min (speed factor[12, 2]))";
      };
      class WaternoiseOutW2 {
        sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-hispd-noise-02", 0.398107, 1, 100};
        frequency = "1";
        volume = "(speed factor[9, 18.7])";
      };
    };
    driverAction = "RHIB_Driver";
    cargoAction[] = {"RHIB_Cargo"};
    getInAction = "GetInMedium";
    getOutAction = "GetOutMedium";
    cargoGetInAction[] = {"GetInMedium"};
    cargoGetOutAction[] = {"GetOutMedium"};
    castDriverShadow = 1;
    castCargoShadow = 1;
    gunnerHasFlares = 0;
    maxSpeed = 60;
    enableGPS = 1;
    transportSoldier = 10;
    supplyRadius = 3;
    class Exhausts {
      class Exhaust1 {
        position = "vyfuk start";
        direction = "vyfuk konec";
        effect = "";
      };
    };
    cost = 10000;
    armor = 30;
    class AnimationSources {
      class ReloadAnim {
        source = "reload";
        weapon = "M2";
      };
      class ReloadMagazine {
        source = "reloadmagazine";
        weapon = "M2";
      };
      class Revolving {
        source = "revolving";
        weapon = "M2";
      };
    };
    class Turrets : Turrets {
      class MainTurret : NewTurret {
        class HitPoints {
          class HitTurret {
            armor = 0.8;
            material = 60;
            name = "vez";
            visual = "vez";
            passThrough = 1;
          };
          class HitGun {
            armor = 0.6;
            material = 60;
            name = "zbran";
            visual = "zbran";
            passThrough = 1;
          };
        };
        stabilizedInAxes = 0;
        body = "MainTurret";
        gun = "MainGun";
        animationSourceBody = "mainTurret";
        animationSourceGun = "mainGun";
        gunnerAction = "RHIB_Gunner";
        gunnerGetInAction = "GetInMedium";
        gunnerGetOutAction = "GetOutMedium";
        ejectDeadGunner = 1;
        outGunnerMayFire = 1;
        inGunnerMayFire = 0;
        minElev = -25;
        maxElev = 60;
        initElev = 5;
        minTurn = -135;
        maxTurn = 135;
        initTurn = 0;
        soundServo[] = {"\ca\sounds\vehicles\servos\turret-1", 0.00562341, 1};
        gunBeg = "usti hlavne";
        gunEnd = "konec hlavne";
        weapons[] = {"M2"};
        magazines[] = {"100Rnd_127x99_M2", "100Rnd_127x99_M2", "100Rnd_127x99_M2"};
        gunnerName = "front gunner";
        gunnerOpticsModel = "\ca\weapons\optika_empty";
        gunnerForceOptics = 0;
        startEngine = 0;
        commanding = 2;
        primaryGunner = 0;
        primaryObserver = 1;
        class ViewOptics {
          initAngleX = 0;
          minAngleX = -30;
          maxAngleX = 30;
          initAngleY = 0;
          minAngleY = -100;
          maxAngleY = 100;
          initFov = 0.7;
          minFov = 0.25;
          maxFov = 1.1;
        };
        class ViewGunner {
          initAngleX = 5;
          minAngleX = -65;
          maxAngleX = 85;
          initAngleY = 0;
          minAngleY = -150;
          maxAngleY = 150;
          initFov = 0.7;
          minFov = 0.25;
          maxFov = 1.1;
        };
      };
    };
    class Library {
      libTextDesc = "The Naval Special Warfare Rigid Hull Inflatable Boat is a fast, high-buoyancy all weather boat designed to transport a fully equipped team of eight-men and three crew members. It is also fully transportable by C-130 Hercules.";
    };
    extCameraPosition[] = {0, 4, -14};
    class Damage {
      tex[] = {};
      mat[] = {"ca\water\data\rhib.rvmat", "ca\water\data\rhib.rvmat", "ca\water\data\rhib_destruct.rvmat", "ca\water\data\rhib_dash.rvmat", "ca\water\data\rhib_dash.rvmat", "ca\water\data\rhib_dash_destruct.rvmat"};
    };
  };
  class S1203_TK_CIV_EP1;
  class S1203_TK_CIV_EP1_ori : S1203_TK_CIV_EP1 {
    scope = 2;
    crew = "";
    faction = "rth_copter_class";
    typicalCargo[] = {};
    fuelCapacity = 90;
    transportMaxMagazines = 120;
    transportMaxWeapons = 20;
    transportMaxBackpacks = 6;
    damageResistance = 0.01821;
    armor = 25;
    class HitPoints {
      class HitEngine {
        armor = 0.65;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.6;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.6;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class Tractor;
  class Tractor_ori : Tractor {
    scope = 2;
    model = "\ori\vehicles\tractor_2.p3d";
    displayName = "Tractor";
    maxSpeed = 50;
    fuelCapacity = 100;
    transportSoldier = 1;
    cargoAction[] = {"Truck_Cargo02"};
    crew = "";
    faction = "rth_copter_class";
    typicalCargo[] = {};
    transportMaxMagazines = 50;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 2;
    damageResistance = 0.01821;
    armor = 30;
    class HitPoints {
      class HitEngine {
        armor = 1;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 0.2;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 1;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 0.5;
      };
      class HitLFWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_1_damper";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_1_damper";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.15;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_2_damper";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_2_damper";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class TT650_Base;
  class TT650_Civ_ori : TT650_Base {
    scope = 2;
    maxSpeed = 70;
    crew = "";
    model = "\ori\vehicles\TT650.p3d";
    faction = "rth_copter_class";
    typicalCargo[] = {};
    transportMaxMagazines = 7;
    transportMaxWeapons = 1;
    transportMaxBackpacks = 0;
    damageResistance = 0.01821;
    armor = 60;
    fuelCapacity = 70;
    terrainCoef = 2.5;
  };
  class TT650_Gue_ori : TT650_Civ_ori {
    scope = 2;
    hiddenSelectionsTextures[] = {"\ca\wheeled3\tt650\data\Yam650_skin1_CO.paa"};
  };
  class TT650_TK_CIV_EP1_ori : TT650_Civ_ori {
    scope = 2;
    expansion = 1;
    typicalCargo[] = {};
    hiddenSelectionsTextures[] = {"\CA\wheeled_E\TT650\Data\TT650_ECIV_CO.paa"};
  };
  class Old_moto_base;
  class Old_moto_ori : Old_moto_base {
    scope = 2;
    side = 2;
    displayName = "Old moto";
    model = "\ori\vehicles\Old_moto.p3d";
    faction = "rth_copter_class";
    crew = "";
    typicalCargo[] = {};
    weapons[] = {"MiniCarHorn"};
    fuelCapacity = 70;
    terrainCoef = 2.5;
    armor = 50;
    transportMaxMagazines = 7;
    transportMaxWeapons = 1;
    transportMaxBackpacks = 0;
  };
  class UralCivil_ori : Ural_Base {
    scope = 2;
    side = 3;
    maxSpeed = 82;
    fuelCapacity = 200;
    faction = "rth_copter_class";
    displayName = "Ural (Civil)";
    vehicleClass = "Car";
    crew = "";
    typicalCargo[] = {};
    weapons[] = {"TruckHorn"};
    magazines[] = {};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    model = "\ca\wheeled\ural";
    picture = "\Ca\wheeled\data\ico\ural_civil1_CA.paa";
    rarityUrban = 0.3;
    accuracy = 0.22;
    hiddenSelectionsTextures[] = {"\ca\wheeled\data\ural_kabina_civ1_co.paa", "\ca\wheeled\data\ural_plachta_civ1_co.paa"};
    soundGetIn[] = {"\ca\sounds\vehicles\Wheeled\URAL\ext\ext-ural-getout", 0.4, 1};
    soundGetOut[] = {"\ca\sounds\vehicles\Wheeled\URAL\ext\ext-ural-getout", 0.4, 1, 80};
    transportMaxMagazines = 250;
    transportMaxWeapons = 50;
    transportMaxBackpacks = 15;
    damageResistance = 0.00293;
    armor = 32;
    class HitPoints {
      class HitEngine {
        armor = 0.8;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 0.2;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.1;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.1;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.5;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 0.5;
      };
      class HitLFWheel {
        armor = 0.5;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.1;
      };
      class HitRFWheel {
        armor = 0.5;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.1;
      };
      class HitLF2Wheel {
        armor = 0.5;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.1;
      };
      class HitRF2Wheel {
        armor = 0.5;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.1;
      };
      class HitLMWheel {
        armor = 0.5;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.1;
      };
      class HitRMWheel {
        armor = 0.5;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.1;
      };
      class HitLBWheel {
        armor = 0.5;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.1;
      };
      class HitRBWheel {
        armor = 0.5;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.1;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class UralOpen_Base;
  class UralCivil2_ori : UralOpen_Base {
    scope = 2;
    side = 3;
    maxSpeed = 82;
    fuelCapacity = 200;
    faction = "rth_copter_class";
    displayName = "Ural (Civil 2)";
    model = "\ca\wheeled\Ural_Open";
    accuracy = 0.22;
    vehicleClass = "Car";
    crew = "";
    typicalCargo[] = {};
    weapons[] = {"TruckHorn"};
    magazines[] = {};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    picture = "\Ca\wheeled\data\ico\ural_civil1_CA.paa";
    rarityUrban = 0.22;
    hiddenSelectionsTextures[] = {"\ca\wheeled\data\ural_kabina_civ2_co.paa", "\ca\wheeled\data\ural_korba_civ2_co.paa"};
    transportMaxMagazines = 250;
    transportMaxWeapons = 50;
    transportMaxBackpacks = 15;
    damageResistance = 0.00293;
    soundGetIn[] = {"\ca\sounds\vehicles\Wheeled\URAL\ext\ext-ural-getout", 0.4, 1};
    soundGetOut[] = {"\ca\sounds\vehicles\Wheeled\URAL\ext\ext-ural-getout", 0.4, 1, 80};
    armor = 32;
    class HitPoints {
      class HitEngine {
        armor = 0.75;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 0.2;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.5;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 0.5;
      };
      class HitLFWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.1;
      };
      class HitRFWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.1;
      };
      class HitLF2Wheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.1;
      };
      class HitRF2Wheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.1;
      };
      class HitLMWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.1;
      };
      class HitRMWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.1;
      };
      class HitLBWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.1;
      };
      class HitRBWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.1;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class V3S_Base;
  class V3S_Civ_ori : V3S_Base {
    scope = 2;
    side = 3;
    maxSpeed = 82;
    fuelCapacity = 170;
    faction = "rth_copter_class";
    crew = "";
    typicalCargo[] = {};
    weapons[] = {"TruckHorn"};
    magazines[] = {};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    class Library {
      libTextDesc = "The V3S is a Czech-made military 6x6 cargo truck capable of carrying cargo up to 5 tons, or up to 3 tons in rough terrain.<br/>This one is a harmless civilian vehicle.";
    };
    rarityUrban = 0.3;
    transportMaxMagazines = 220;
    transportMaxWeapons = 50;
    transportMaxBackpacks = 15;
    damageResistance = 0.00293;
    armor = 45;
    soundGetIn[] = {"ca\sounds\vehicles\Wheeled\V3S\ext\ext-V3S-getout-1", 0.346684, 1};
    soundGetOut[] = {"ca\sounds\vehicles\Wheeled\V3S\ext\ext-V3S-getout-1", 0.246684, 1, 40};
  };
  class VWGolf_Ori : Car {
    class HitPoints {
      class HitEngine {
        armor = 0.7;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.6;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.5;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.2;
      };
      class HitRFWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.2;
      };
      class HitLF2Wheel {
        armor = 0.4;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.4;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.5;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.2;
      };
      class HitRBWheel {
        armor = 0.3;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.2;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
    wheelCircumference = 2.02;
    scope = 2;
    model = "\ca\wheeled2\VWGOLF\vwgolf.p3d";
    icon = "\ca\wheeled2\data\UI\Icon_VWGolf_CA.paa";
    picture = "\ca\wheeled2\data\UI\Picture_VWGolf_CA.paa";
    displayname = "VW-Golf";
    class Library {
      libTextDesc = "The Wolkie is a German-made small family car, sold in US as the Bunny.";
    };
    side = 3;
    vehicleClass = "Car";
    faction = "rth_copter_class";
    crew = "";
    typicalCargo[] = {};
    transportMaxMagazines = 65;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 4;
    maxSpeed = 241;
    turnCoef = 2;
    steerAheadPlan = 0.15;
    transportSoldier = 4;
    weapons[] = {"SportCarHorn"};
    magazines[] = {};
    class Turrets {
    };
    armor = 25;
    damageResistance = 0.01611;
    cost = 5000;
    terrainCoef = 5;
    fuelCapacity = 70;
    memoryPointsGetInCargo[] = {"pos cargo 1", "pos cargo 2", "pos cargo 3", "pos cargo 4"};
    memoryPointsGetInCargoDir[] = {"pos cargo dir 1", "pos cargo dir 2", "pos cargo dir 3", "pos cargo dir 4"};
    DriverAction = "Golf_Driver";
    cargoAction[] = {"Golf_Cargo01", "Golf_Cargo02", "Golf_Cargo02", "Golf_Cargo03"};
    cargoIsCoDriver[] = {0};
    soundGear[] = {"", 0.000177828, 1};
    insideSoundCoef = 0.9;
    SoundGetIn[] = {"ca\sounds\Vehicles\wheeled\GOLF\ext\ext-golf-getout", 0.562341, 1};
    SoundGetOut[] = {"ca\sounds\Vehicles\wheeled\GOLF\ext\ext-golf-getout", 0.562341, 1, 40};
    soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-start-1", 0.562341, 1};
    soundEngineOnExt[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-start-1", 0.562341, 1, 250};
    soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\GOLF\int\int-golf-stop-1", 0.562341, 1};
    soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\GOLF\ext\ext-golf-stop-1", 0.562341, 1, 250};
    buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01", 0.707946, 1, 200};
    buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02", 0.707946, 1, 200};
    buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03", 0.707946, 1, 200};
    buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04", 0.707946, 1, 200};
    soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
    WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", 0.707946, 1, 200};
    WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", 0.707946, 1, 200};
    WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", 0.707946, 1, 200};
    WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", 0.707946, 1, 200};
    WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", 0.707946, 1, 200};
    WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", 0.707946, 1, 200};
    soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
    ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01", 0.707946, 1, 200};
    ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02", 0.707946, 1, 200};
    ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03", 0.707946, 1, 200};
    ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04", 0.707946, 1, 200};
    soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-acce-1", 0.891251, 1};
        limit = "0.15";
        expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
      class AccelerationOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-acce-1", 0.562341, 1, 250};
        limit = "0.15";
        expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-low-1", 0.398107, 1, 300};
        frequency = "(randomizer*0.05+1.25)*rpm";
        volume = "camPos*engineOn*((rpm factor[0.25, 0.4]) min (rpm factor[0.6, 0.45]))";
      };
      class EngineHighOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-high-1", 0.398107, 0.8, 450};
        frequency = "(randomizer*0.05+1.1)*rpm";
        volume = "camPos*engineOn*(rpm factor[0.5, 0.9])";
      };
      class IdleOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-idle-1", 0.316228, 1, 100};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.4, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.0562341, 1, 40};
        frequency = "1";
        volume = "camPos*rock*(speed factor[4, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.0562341, 1, 40};
        frequency = "1";
        volume = "camPos*sand*(speed factor[4, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.0562341, 1, 40};
        frequency = "1";
        volume = "camPos*grass*(speed factor[4, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.0562341, 1, 40};
        frequency = "1";
        volume = "camPos*mud*(speed factor[4, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.0562341, 1, 40};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[4, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.0562341, 1, 40};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[4, 20])";
      };
      class NoiseOut {
        sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\ext\noise2", 0.0562341, 1, 40};
        frequency = "1";
        volume = "camPos*(damper0 max 0.036)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-low-1", 0.707946, 1};
        frequency = "(randomizer*0.05+1.3)*rpm";
        volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.52]))";
      };
      class EngineHighIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-high-1", 0.707946, 0.95};
        frequency = "(randomizer*0.05+1.2)*rpm";
        volume = "(1-camPos)*engineOn*(rpm factor[0.6, 1.0])";
      };
      class IdleIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-idle-1", 0.562341, 1};
        frequency = "1";
        volume = "(1-camPos)*engineOn*(rpm factor[0.4, 0])";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.0707946, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.0707946, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.0707946, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.0707946, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.0707946, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.0562341, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\int\int-noise2", 0.1, 1};
        frequency = "1";
        volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"ca\wheeled2\VWGOLF\Data\VWgolf_body.rvmat", "ca\wheeled2\VWGOLF\Data\vwgolf_body_damage.rvmat", "ca\wheeled2\VWGOLF\Data\VWgolf_body_destruct.rvmat", "ca\wheeled2\VWGOLF\Data\VWGolf_carriage.rvmat", "ca\wheeled2\VWGOLF\Data\VWGolf_carriage.rvmat", "ca\wheeled2\VWGOLF\Data\VWGolf_carriage_destruct.rvmat", "ca\wheeled2\VWGOLF\Data\VWgolf_interier2.rvmat", "ca\wheeled2\VWGOLF\Data\VWgolf_interier2.rvmat", "ca\wheeled2\VWGOLF\Data\VWgolf_interier2_destruct.rvmat", "ca\wheeled2\VWGOLF\Data\VWgolf_interier.rvmat", "ca\wheeled2\VWGOLF\Data\VWgolf_interier.rvmat", "ca\wheeled2\VWGOLF\Data\VWgolf_interier_destruct.rvmat", "ca\wheeled2\VWGOLF\Data\VWgolf_sklo.rvmat", "ca\wheeled2\VWGOLF\Data\VWgolf_sklo_damage.rvmat", "ca\wheeled2\VWGOLF\Data\VWgolf_sklo_damage.rvmat", "ca\wheeled2\VWGOLF\Data\VWgolf_sklo_in.rvmat", "ca\wheeled2\VWGOLF\Data\VWgolf_sklo_in_damage.rvmat", "ca\wheeled2\VWGOLF\Data\VWgolf_sklo_in_damage.rvmat", "ca\wheeled2\VWGOLF\Data\vwgolf_wheels.rvmat", "ca\wheeled2\VWGOLF\Data\vwgolf_wheels.rvmat", "ca\wheeled2\VWGOLF\Data\vwgolf_wheels_destruct.rvmat"};
    };
    hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
    hiddenSelectionsTextures[] = {"\ca\wheeled2\vwgolf\data\vwgolf_body_co.paa", "\ca\wheeled2\vwgolf\data\vwgolf_carriage_co.paa", "\ca\wheeled2\vwgolf\data\vwgolf_interier_co.paa", "\ca\wheeled2\vwgolf\data\vwgolf_interier2_co.paa"};
    dammageHalf[] = {};
    dammageFull[] = {};
    rarityUrban = 0.9;
    brakeDistance = 20;
  };
  class Zodiac;
  class Zodiac_Ori : Zodiac {
    scope = 2;
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    transportMaxMagazines = 50;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 1;
    weapons[] = {};
    magazines[] = {};
    faction = "rth_copter_class";
    crew = "";
    typicalCargo[] = {};
  };
  class PBX_Ori : PBX {
    scope = 2;
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    transportMaxMagazines = 50;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 1;
    weapons[] = {};
    magazines[] = {};
    faction = "rth_copter_class";
    crew = "";
    typicalCargo[] = {};
  };
  class Pickup_PK_Ori : Pickup_PK_base {
    scope = 2;
    side = 2;
    displayName = "Pickup PK";
    faction = "rth_copter_class";
    damageResistance = 0.01821;
    terrainCoef = 3;
    crew = "";
    typicalCargo[] = {};
    weapons[] = {"CarHorn"};
    magazines[] = {};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    hiddenSelectionsTextures[] = {"\ca\wheeled\datsun_armed\data\datsun_trup3_CO.paa"};
    transportMaxMagazines = 110;
    transportMaxWeapons = 16;
    transportMaxBackpacks = 4;
    class Damage {
      tex[] = {};
      mat[] = {"ca\wheeled\hilux_armed\data\detailmapy\coyota_armed.rvmat", "ca\wheeled\hilux_armed\data\detailmapy\coyota_armed.rvmat", "ca\wheeled\hilux_armed\data\detailmapy\coyota_armed_destruct.rvmat", "ca\weapons\data\dshk.rvmat", "ca\weapons\data\dshk.rvmat", "ca\weapons\data\dshk_destruct.rvmat", "ca\weapons\data\tripod_dshk.rvmat", "ca\weapons\data\tripod_dshk.rvmat", "ca\wheeled\hilux_armed\data\detailmapy\tripod_dshk_destruct.rvmat", "ca\weapons\data\pkm.rvmat", "ca\weapons\data\pkm.rvmat", "ca\weapons\data\pkm_destruct.rvmat", "ca\wheeled\data\detailmapy\datsun_interier.rvmat", "ca\wheeled\data\detailmapy\datsun_interier.rvmat", "ca\wheeled\data\detailmapy\datsun_interier_destruct.rvmat", "ca\wheeled\datsun_armed\data\detailmapy\datsun_trup.rvmat", "ca\wheeled\datsun_armed\data\detailmapy\datsun_trup.rvmat", "ca\wheeled\datsun_armed\data\detailmapy\datsun_trup_destruct.rvmat", "ca\wheeled\datsun_armed\data\detailmapy\datsun_trup_b.rvmat", "ca\wheeled\datsun_armed\data\detailmapy\datsun_trup_b.rvmat", "ca\wheeled\datsun_armed\data\detailmapy\datsun_trupb_destruct.rvmat", "ca\wheeled\data\detailmapy\coyota_kola.rvmat", "ca\wheeled\data\detailmapy\coyota_kola.rvmat", "ca\wheeled\data\detailmapy\coyota_kola_destruct.rvmat", "ca\wheeled\data\detailmapy\coyota_interier.rvmat", "ca\wheeled\data\detailmapy\coyota_interier.rvmat", "ca\wheeled\data\detailmapy\coyota_interier_destruct.rvmat", "ca\wheeled\data\detailmapy\auta_skla.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat", "ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
    };
    class HitPoints {
      class HitEngine {
        armor = 0.6;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 1;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.2;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.6;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.65;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.65;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLF2Wheel {
        armor = 0.4;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.4;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.4;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.65;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.65;
        material = -1;
        name = "wheel_2_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitGlass1 {
        armor = 0.1;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.1;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.1;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.1;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
    };
  };
  class ori_col_truck_fuel : UralOpen_Base {
    armor = 32;
    mapSize = 6;
    faction = "rth_copter_class";
    vehicleClass = "Car";
    scope = 2;
    side = 3;
    maxSpeed = 87;
    fuelCapacity = 200;
    icon = "\ca\wheeled2\data\UI\Icon_V3S_CA.paa";
    picture = "\ori\vehicles\data\ico\pic_van_ca.paa";
    attendant = 0;
    DriverAction = "V3S_Driver";
    model = "\ori\vehicles\col_truck\ori_col_truck_fuel.p3d";
    transportSoldier = 2;
    displayName = "Colonel Truck (Fuel)";
    cargoAction[] = {"V3S_Cargo01", "V3S_Cargo01"};
    turnCoef = 4;
    damperSize = 0.2;
    damperForce = 1;
    damperDamping = 1;
    steerAheadSimul = 0.2;
    steerAheadPlan = 0.3;
    predictTurnSimul = 0.9;
    predictTurnPlan = 1;
    terrainCoef = 2.5;
    brakeDistance = 7;
    crew = "";
    hasGunner = 0;
    weapons[] = {"TruckHorn"};
    typicalCargo[] = {};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    transportMaxMagazines = 180;
    transportMaxWeapons = 25;
    transportMaxBackpacks = 7;
    damageResistance = 0.00293;
    hiddenSelections[] = {"camo01", "camo02"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\col_truck\data\Cabin_co.paa", "\ori\vehicles\col_truck\data\Platform.paa"};
    getInAction = "GetInHigh";
    getOutAction = "GetOutHigh";
    insideSoundCoef = 0.9;
    soundGear[] = {"", 5.62341e-05, 1};
    soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\MTVR\int\int-mtvr-start", 0.562341, 1};
    soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Wheeled\MTVR\ext\ext-mtvr-start1", 0.562341, 1, 350};
    soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\MTVR\int\int-mtvr-stop", 0.562341, 1};
    soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\MTVR\ext\ext-truck-stop", 0.562341, 1, 350};
    soundGetIn[] = {"ca\sounds\vehicles\Wheeled\MTVR\ext\ext-truck-getin", 0.707946, 1};
    soundGetOut[] = {"ca\sounds\vehicles\Wheeled\MTVR\ext\ext-truck-getout", 0.562341, 1, 50};
    buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01", 0.707946, 1, 200};
    buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02", 0.707946, 1, 200};
    buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03", 0.707946, 1, 200};
    buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04", 0.707946, 1, 200};
    soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
    WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", 0.707946, 1, 200};
    WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", 0.707946, 1, 200};
    WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", 0.707946, 1, 200};
    WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", 0.707946, 1, 200};
    WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", 0.707946, 1, 200};
    WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", 0.707946, 1, 200};
    soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
    ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01", 0.707946, 1, 200};
    ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02", 0.707946, 1, 200};
    ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03", 0.707946, 1, 200};
    ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04", 0.707946, 1, 200};
    soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
    class SoundEvents {
      class AccelerationIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\MTVR\int\int-mtvr-acceleration1", 0.398107, 1};
        limit = "0.15";
        expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
      class AccelerationOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\MTVR\ext\ext-mtvr-acceleration1", 0.562341, 1, 390};
        limit = "0.15";
        expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\MTVR\ext\ext-truck-low2", 1, 1, 450};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "engineOn*camPos*(thrust factor[0.7, 0.2])";
      };
      class EngineHighOut {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\MTVR\ext\ext-truck-high", 1, 0.9, 550};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "engineOn*camPos*(thrust factor[0.5, 0.95])";
      };
      class IdleOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\MTVR\ext\ext-mtvr-idle", 0.562341, 1, 350};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.4, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2", 0.1, 1, 50};
        frequency = "1";
        volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\MTVR\int\int-mtvr-low2", 1, 1};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
      };
      class EngineHighIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\MTVR\int\int-mtvr-high2", 1, 0.9};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((engineOn*thrust) factor[0.4, 1.0])*(1-camPos)";
      };
      class IdleIn {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\MTVR\int\int-mtvr-idle1", 0.398107, 1};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.3, 0])*(1-camPos)";
      };
      class TiresRockIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*rock*(speed factor[2, 20])";
      };
      class TiresSandIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*sand*(speed factor[2, 20])";
      };
      class TiresGrassIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*grass*(speed factor[2, 20])";
      };
      class TiresMudIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*mud*(speed factor[2, 20])";
      };
      class TiresGravelIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.177828, 1};
        frequency = "1";
        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
      };
      class NoiseIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2", 0.177828, 1};
        frequency = "1";
        volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
    };
    class Reflectors {
      class Front1 {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "p svetlo";
        direction = "konec p svetla";
        hitpoint = "p svetlo";
        selection = "p svetlo";
        size = 1;
        brightness = 1;
      };
      class Front2 : Front1 {
        position = "l svetlo";
        direction = "konec l svetla";
        hitpoint = "l svetlo";
        selection = "l svetlo";
      };
    };
    class Exhausts {
      class Exhaust1 {
        position = "vyfuk start1";
        direction = "vyfuk konec1";
        effect = "ExhaustsEffect";
      };
      class Exhaust2 {
        position = "vyfuk start2";
        direction = "vyfuk konec2";
        effect = "ExhaustsEffect";
      };
    };
    class AnimationSources {
      class dvere_PP {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class dvere_LP {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class kapot {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class ruka_teplota {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class ruka_olej {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class pluhPredni {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class kolaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class oknaOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class predniOknoOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        hitpoint = "HitRBWheel";
      };
      class HitRMWheel : HitLFWheel {
        hitpoint = "HitRMWheel";
      };
      class HitLMWheel : HitLFWheel {
        hitpoint = "HitLMWheel";
      };
      class HitEngine {
        armor = 1.2;
        material = -1;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
      class HitBody {
        armor = 1.5;
        material = -1;
        name = "karoserie";
        visual = "karoserie";
        passThrough = 0.1;
      };
      class HitFuel {
        armor = 1.2;
        material = -1;
        name = "palivo";
        passThrough = 1;
      };
      class hopa {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
      class doska {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
      class HitGlass1 {
        source = "Hit";
        hitpoint = "HitGlass1";
        raw = 1;
      };
      class HitGlass2 : HitGlass1 {
        hitpoint = "HitGlass2";
      };
      class HitGlass3 : HitGlass1 {
        hitpoint = "HitGlass3";
      };
      class HitGlass4 : HitGlass1 {
        hitpoint = "HitGlass4";
      };
      class HitGlass5 : HitGlass1 {
        hitpoint = "HitGlass5";
      };
      class HitGlass6 : HitGlass1 {
        hitpoint = "HitGlass6";
      };
      class Hitarmor1 {
        source = "Hit";
        hitpoint = "";
        raw = 1;
      };
      class Hitarmor2 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor3 : Hitarmor1 {
        hitpoint = "";
      };
      class Hitarmor4 : Hitarmor1 {
        hitpoint = "";
      };
    };
    class HitPoints {
      class Hitarmor1 {
        armor = 1;
        material = -1;
        name = "pluhPredni";
        visual = "pluhPredni";
        passThrough = 0.2;
      };
      class Hitarmor2 : Hitarmor1 {
        name = "kolaOchrana";
        visual = "kolaOchrana";
      };
      class Hitarmor3 : Hitarmor1 {
        name = "oknaOchrana";
        visual = "oknaOchrana";
      };
      class Hitarmor4 : Hitarmor1 {
        name = "predniOknoOchrana";
        visual = "predniOknoOchrana";
      };
      class HitGlass1 {
        armor = 0.35;
        material = -1;
        name = "sklo_p1";
        visual = "sklo_p1";
        passThrough = 0;
      };
      class HitGlass2 : HitGlass1 {
        name = "sklo_pl1";
        visual = "sklo_pl1";
      };
      class HitGlass3 : HitGlass1 {
        name = "sklo_pp1";
        visual = "sklo_pp1";
      };
      class HitGlass4 : HitGlass1 {
        name = "sklo_z1";
        visual = "sklo_z1";
      };
      class HitLFWheel {
        armor = 1;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.1;
      };
      class HitLBWheel : HitLFWheel {
        name = "wheel_1_2_steering";
        visual = "";
      };
      class HitRFWheel : HitLFWheel {
        name = "wheel_2_1_steering";
        visual = "";
      };
      class HitRBWheel : HitLFWheel {
        name = "wheel_2_2_steering";
        visual = "";
      };
      class HitEngine {
        armor = 0.9;
        material = -1;
        name = "motor";
        visual = "motor";
        passThrough = 0.5;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "karoserie";
        passThrough = 0.6;
      };
      class HitFuel {
        armor = 0.6;
        material = -1;
        name = "palivo";
        passThrough = 0.5;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        visual = "";
        armor = 0.3;
        material = -1;
        name = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        visual = "";
        armor = 0.3;
        material = -1;
        name = "sklo predni L";
        passThrough = 0;
      };
      class HitLF2Wheel {
        armor = 0.8;
        material = -1;
        name = "wheel_1_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRF2Wheel {
        armor = 0.8;
        material = -1;
        name = "wheel_2_4_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLMWheel {
        armor = 1;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 1;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"ori\vehicles\col_truck\data\cabin.rvmat", "ori\vehicles\col_truck\data\cabin.rvmat", "ori\vehicles\col_truck\data\cabin_de.rvmat", "ori\vehicles\col_truck\data\platform.rvmat", "ori\vehicles\col_truck\data\platform.rvmat", "ori\vehicles\col_truck\data\platform_de.rvmat"};
    };
  };
  class ori_col_truck_tent : ori_col_truck_fuel {
    model = "\ori\vehicles\col_truck\ori_col_truck_tent.p3d";
    transportSoldier = 12;
    displayName = "Colonel Truck (Tent)";
    cargoAction[] = {"V3S_Cargo01", "V3S_Cargo01", "Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo04", "Truck_Cargo02", "Truck_Cargo02", "Truck_Cargo04", "Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo02"};
    hiddenSelections[] = {"camo01", "camo02"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\col_truck\data\Cabin_2.paa", "\ori\vehicles\col_truck\data\Platform_2.paa"};
  };
};
