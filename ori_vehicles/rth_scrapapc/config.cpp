class CfgPatches {
  class ori_scrapTank {
    units[] = {"ori_scrapTank"};
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
  class ori_scrapTank : Car {
    armor = 50;
    weapons[] = {};
    faction = "rth_copter_class";
    scope = 2;
    side = 3;
    vehicleClass = "Armored";
    model = "ori\vehicles\rth_scrapapc\rth_scrapapc.p3d";
    icon = "ori\vehicles\rth_scrapapc\data\map_ico\rth_scrapapc_ca.paa";
    picture = "ori\vehicles\rth_scrapapc\data\ico\scrapApc_ico_ca.paa";
    mapSize = 5;
    crew = "";
    typicalCargo[] = {};
    displayName = "Scrap APC";
    damperSize = 0.1;
    damperForce = 2;
    damperDamping = 5;
    steerAheadSimul = 0.2;
    steerAheadPlan = 0.3;
    predictTurnSimul = 0.9;
    predictTurnPlan = 1;
    fuelCapacity = 200;
    memoryPointsGetInDriver = "pos driver";
    memoryPointsGetInDriverDir = "pos driver dir";
    memoryPointsGetInCargo = "pos cargo";
    memoryPointsGetInCargoDir = "pos cargo dir";
    leftDustEffect = "LDustEffects";
    rightDustEffect = "RDustEffects";
    preferRoads = 0;
    crewVulnerable = 1;
    class Exhausts {
      class Exhaust1 {
        position = "vyfuk start";
        direction = "vyfuk finish";
        effect = "ExhaustsEffectBig";
      };
    };
    wheelCircumference = 2.06089;
    maxSpeed = 50;
    driverAction = "V3S_Driver";
    transportSoldier = 5;
    cargoAction[] = {"Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo04", "Truck_Cargo01", "Truck_Cargo01"};
    hasGunner = 0;
    damageResistance = 0.01;
    terrainCoef = 2;
    turnCoef = 1.5;
    class Turrets {
    };
    rarityUrban = 0.9;
    transportMaxMagazines = 120;
    transportMaxWeapons = 24;
    transportMaxBackpacks = 7;
    viewCargoShadow = 0;
    viewDriverShadow = 1;
    hiddenSelections[] = {"camo01", "main_body", "pluhPredni"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\rth_scrapapc\data\diffuse.paa", "\ori\vehicles\rth_scrapapc\data\diffuse.paa", "\ori\vehicles\rth_scrapbuggy\data\partsdiffuse.paa"};
    class Damage {
      tex[] = {"ori\vehicles\rth_scrapapc\data\diffuse.paa", "ori\vehicles\rth_scrapapc\data\diffuse.paa", "ori\vehicles\rth_scrapapc\data\damage_co.paa"};
      mat[] = {"ori\vehicles\rth_scrapapc\data\shader.rvmat", "ori\vehicles\rth_scrapapc\data\shader.rvmat", "ori\vehicles\rth_scrapapc\data\shader_destruct.rvmat"};
    };
    soundGear[] = {"", 5.62341e-05, 1};
    soundEngineOnInt[] = {"ca\sounds\vehicles\Wheeled\V3S\int\int-V3S-start-1", 0.562341, 1};
    soundEngineOnExt[] = {"ca\sounds\vehicles\Wheeled\V3S\ext\ext-V3S-start-1", 0.562341, 1, 100};
    soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\V3S\int\int-V3S-stop-1", 0.562341, 1};
    soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\V3S\ext\ext-V3S-stop-1", 0.562341, 1, 100};
    soundGetIn[] = {"ca\sounds\vehicles\Wheeled\V3S\ext\ext-V3S-getout-1", 0.346684, 1};
    soundGetOut[] = {"ca\sounds\vehicles\Wheeled\V3S\ext\ext-V3S-getout-1", 0.246684, 1, 40};
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
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\V3S\int\int-V3S-acce-1", 0.594328, 1};
        limit = 0.15;
        expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
      class AccelerationOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\V3S\ext\ext-V3S-acce-1", 0.594328, 1, 350};
        limit = 0.15;
        expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\V3S\ext\ext-V3S-low-1", 0.707946, 1, 400};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(camPos*engineOn*((rpm factor[0.2, 0.6]) min (rpm factor[0.6, 0.2])))*0.6";
      };
      class EngineHighOut {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\V3S\ext\ext-V3S-high-1", 0.707946, 0.9, 500};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "(camPos*engineOn*(rpm factor[0.5, 0.9]))*0.6";
      };
      class IdleOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\V3S\ext\ext-V3S-idle-2", 0.707946, 1, 200};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.4, 0])";
      };
      class TiresRockOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.1, 1, 40};
        frequency = "1";
        volume = "camPos*rock*(speed factor[2, 20])";
      };
      class TiresSandOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.1, 1, 40};
        frequency = "1";
        volume = "camPos*sand*(speed factor[2, 20])";
      };
      class TiresGrassOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.1, 1, 40};
        frequency = "1";
        volume = "camPos*grass*(speed factor[2, 20])";
      };
      class TiresMudOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.1, 1, 40};
        frequency = "1";
        volume = "camPos*mud*(speed factor[2, 20])";
      };
      class TiresGravelOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.1, 1, 40};
        frequency = "1";
        volume = "camPos*gravel*(speed factor[2, 20])";
      };
      class TiresAsphaltOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.1, 1, 40};
        frequency = "1";
        volume = "camPos*asphalt*(speed factor[2, 20])";
      };
      class NoiseOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2", 0.1, 1, 40};
        frequency = "1";
        volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\V3S\int\int-V3S-low-1", 0.398107, 1};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.7, 0.5])))*0.6";
      };
      class EngineHighIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\V3S\int\int-V3S-high-1", 0.398107, 0.8};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((1-camPos)*engineOn*(rpm factor[0.5, 0.8]))*0.6";
      };
      class IdleIn {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\V3S\int\int-V3S-idle-2", 0.398107, 1};
        frequency = "1";
        volume = "(1-camPos)*engineOn*(rpm factor[0.35, 0])";
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
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2", 0.1, 1};
        frequency = "1";
        volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
      };
      class Movement {
        sound = "soundEnviron";
        frequency = "1";
        volume = "0";
      };
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
        armor = 0.6;
        material = -1;
        name = "karoserie";
        visual = "";
        passThrough = 1;
      };
      class HitFuel {
        armor = 0.8;
        material = -1;
        name = "palivo";
        visual = "";
        passThrough = 1;
      };
      class HitLFWheel {
        armor = 0.8;
        material = -1;
        name = "wheel_1_1_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRFWheel {
        armor = 0.8;
        material = -1;
        name = "wheel_2_1_steering";
        visual = "";
        passThrough = 0.3;
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
        armor = 0.8;
        material = -1;
        name = "wheel_1_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRMWheel {
        armor = 0.8;
        material = -1;
        name = "wheel_2_3_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitLBWheel {
        armor = 0.8;
        material = -1;
        name = "wheel_1_2_steering";
        visual = "";
        passThrough = 0.3;
      };
      class HitRBWheel {
        armor = 0.8;
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
};
