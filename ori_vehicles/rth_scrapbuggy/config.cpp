class CfgPatches {
  class ori_ScrapBuggy {
    units[] = {"ori_ScrapBuggy"};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"CAWheeled"};
    magazines[] = {};
    ammo[] = {};
  };
};
class CfgFactionClasses {
  class rth_copter_class {
    displayName = "Origins Mod";
    priority = 0;
    side = 1;
  };
};
class CfgVehicles {
  class Car;
  class ori_ScrapBuggy : Car {
    weapons[] = {};
    faction = "rth_copter_class";
    scope = 2;
    side = 3;
    vehicleClass = "Car";
    model = "ori\vehicles\rth_scrapbuggy\scrapbuggy.p3d";
    icon = "ori\vehicles\rth_scrapbuggy\data\map_ico\rth_buggy_map_ico_ca.paa";
    picture = "ori\vehicles\rth_scrapbuggy\data\ico\rth_buggy_ico_ca.paa";
    mapSize = 7;
    crew = "";
    typicalCargo[] = {};
    displayName = "Scrap Buggy";
    armor = 30;
    damperSize = 0.2;
    damperForce = 1;
    damperDamping = 1;
    steerAheadSimul = 0.2;
    steerAheadPlan = 0.3;
    predictTurnSimul = 0.9;
    predictTurnPlan = 1;
    fuelCapacity = 100;
    preferRoads = 0;
    crewVulnerable = 1;
    damageResistance = 0.01821;
    class Exhausts {
      class Exhaust1 {
        position = "vyfuk start";
        direction = "vyfuk finish";
        effect = "ExhaustsEffect";
      };
    };
    wheelCircumference = 2.06089;
    maxSpeed = 90;
    driverAction = "Golf_Driver";
    transportSoldier = 1;
    cargoAction[] = {"Golf_Cargo01"};
    hasGunner = 0;
    terrainCoef = 2;
    turnCoef = 1;
    class Turrets {
    };
    rarityUrban = 0.9;
    transportMaxMagazines = 100;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 6;
    viewCargoShadow = 1;
    viewDriverShadow = 1;
    insideSoundCoef = 0.85;
    soundGear[] = {"", 5.62341e-05, 1};
    soundGetIn[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door", 0.562341, 1};
    soundGetOut[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door", 0.562341, 1, 20};
    soundEngineOnInt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_start1", 0.177828, 1};
    soundEngineOnExt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_start1", 0.177828, 1, 100};
    soundEngineOffInt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_stop1", 0.177828, 1};
    soundEngineOffExt[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_stop1", 0.177828, 1, 100};
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
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_int_acceleration", 0.562341, 1};
        limit = 0.4;
        expression = "(engineOn*(1-camPos))*gmeterZ";
      };
      class AccelerationOut {
        sound[] = {"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_acceleration", 0.562341, 1, 200};
        limit = 0.4;
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
    class AnimationSources {
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
      class pluhPredni {
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
      class HideRightWingSrc {
        source = "user";
        animPeriod = 0;
        initPhase = 0;
      };
      class HideLeftWingSrc {
        source = "user";
        animPeriod = 0;
        initPhase = 0;
      };
      class HideHoodSrc {
        source = "user";
        animPeriod = 0;
        initPhase = 0;
      };
      class EngineRotorShowSrc {
        source = "user";
        animPeriod = 0;
        initPhase = 0;
      };
      class EngineRotorShowStaticSrc {
        source = "user";
        animPeriod = 0;
        initPhase = 0;
      };
      class HitLFWheel {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class HitRFWheel : HitLFWheel {
        source = "Hit";
        hitpoint = "HitRFWheel";
      };
      class HitLBWheel : HitLFWheel {
        source = "Hit";
        hitpoint = "HitLBWheel";
      };
      class HitRBWheel : HitLFWheel {
        source = "Hit";
        hitpoint = "HitRBWheel";
      };
    };
    class HitPoints {
      class HitEngine {
        armor = 0.9;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 0;
      };
      class HitBody {
        armor = 1;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 0;
      };
      class HitFuel {
        armor = 0.8;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 0;
      };
      class HitLFWheel {
        armor = 0.3;
        material = -1;
        name = "levy predni tlumic";
        visual = "";
        passThrough = 0;
      };
      class HitLBWheel {
        armor = 0.3;
        material = -1;
        name = "levy zadni tlumic";
        visual = "";
        passThrough = 0;
      };
      class HitRFWheel {
        armor = 0.3;
        material = -1;
        name = "pravy predni tlumic";
        visual = "";
        passThrough = 0;
      };
      class HitRBWheel {
        armor = 0.3;
        material = -1;
        name = "pravy zadni tlumic";
        visual = "";
        passThrough = 0;
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
      tex[] = {"ori\vehicles\rth_scrapbuggy\data\partsdiffuse.paa", "ori\vehicles\rth_scrapbuggy\data\partsdiffuse.paa", "ori\vehicles\rth_scrapbuggy\data\damage_co.paa", "ori\vehicles\rth_scrapbuggy\data\framediffuse.paa", "ori\vehicles\rth_scrapbuggy\data\framediffuse.paa", "ori\vehicles\rth_scrapbuggy\data\damage_co.paa"};
      mat[] = {"ori\vehicles\rth_scrapbuggy\data\parts.rvmat", "ori\vehicles\rth_scrapbuggy\data\parts.rvmat", "ori\vehicles\rth_scrapbuggy\data\parts_destruct.rvmat", "ori\vehicles\rth_scrapbuggy\data\frame.rvmat", "ori\vehicles\rth_scrapbuggy\data\frame.rvmat", "ori\vehicles\rth_scrapbuggy\data\frame_destruct.rvmat"};
    };
    hiddenSelections[] = {"main_body", "back_body"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\rth_scrapbuggy\data\partsdiffuse.paa", "\ori\vehicles\rth_scrapbuggy\data\framediffuse.paa"};
  };
};
