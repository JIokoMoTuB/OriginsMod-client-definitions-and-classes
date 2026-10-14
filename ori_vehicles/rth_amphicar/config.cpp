class CfgPatches {
  class ori_titanic {
    units[] = {"ori_titanic"};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"CAWater2", "CAWheeled", "CAWheeled_E"};
    magazines[] = {};
    ammo[] = {};
  };
};
class CfgFactionClasses {
  class rth_copter_class {
    displayName = "Origins Mod";
    priority = 0;
    side = 3;
  };
};
class CfgVehicles {
  class Land;
  class Car;
  class ori_titanic : Car {
    weapons[] = {"TruckHorn"};
    displayName = "Wheeled Titanic";
    side = 3;
    scope = 2;
    faction = "rth_copter_class";
    vehicleClass = "Car";
    picture = "ca\water2\data\ui\picture_fishboat_CA.paa";
    Icon = "Ca\water2\Data\UI\icon_fishboat_ca.paa";
    model = "\ori\vehicles\rth_amphicar\rth_amphicar.p3d";
    driverAction = "FB_Driver";
    cargoAction[] = {"FB_Cargo01", "FB_Cargo02", "FB_Cargo03", "FB_Cargo03", "FB_Cargo03", "FB_Cargo03", "FB_Cargo04"};
    cargoIsCoDriver[] = {0};
    crewVulnerable = 1;
    hideProxyInCombat = 0;
    viewDriverInExternal = 1;
    viewGunnerInExternal = 1;
    viewCargoInExternal = 1;
    radarType = 0;
    commanderCanSee = 31;
    gunnerCanSee = 31;
    driverCanSee = 31;
    waterSpeedFactor = 0.7;
    maxSpeed = 140;
    transportSoldier = 7;
    cost = 10000;
    armor = 27;
    damageResistance = 0.00228;
    accuracy = 0.5;
    insideSoundCoef = 1;
    transportMaxMagazines = 150;
    transportMaxWeapons = 20;
    transportMaxBackpacks = 10;
    supplyRadius = 3;
    class Sounds {
      class Engine {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-engine-02low", 2.51189, 1, 400};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "engineOn*camPos*(thrust factor[0.7, 0.2])";
      };
      class EngineHighOut {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-engine-02high", 2.51189, 1, 500};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "engineOn*camPos*(thrust factor[0.5, 0.9])";
      };
      class IdleOut {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-idle-02", 1, 1, 200};
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
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise3", 0.316228, 1, 50};
        frequency = "1";
        volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
      };
      class EngineLowIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-engine-02low", 1, 1};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
      };
      class EngineHighIn {
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-engine-02high", 1, 0.8};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "((engineOn*thrust) factor[0.55, 1.0])*(1-camPos)";
      };
      class IdleIn {
        sound[] = {"\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-idle-02", 0.398107, 1};
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
        sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise4", 0.562341, 1};
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
        position = "vyfuk start";
        direction = "vyfuk konec";
        effect = "ExhaustsEffectBig";
      };
    };
    class Reflectors {
      class Middle {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "svetlo";
        direction = "svetlo konec";
        hitpoint = "svetlo";
        selection = "svetlo";
        size = 1;
        brightness = 1;
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"ca\water2\fishing_boat\data\fishboat_001.rvmat", "ca\water2\fishing_boat\data\fishboat_001_damage.rvmat", "ca\water2\fishing_boat\data\fishboat_001_destruct.rvmat", "ca\water2\fishing_boat\data\fishboat_002.rvmat", "ca\water2\fishing_boat\data\fishboat_002_damage.rvmat", "ca\water2\fishing_boat\data\fishboat_002_destruct.rvmat"};
    };
    extCameraPosition[] = {0, 4, -15};
    class Turrets {
    };
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    hiddenSelections[] = {"amphi_tex", "boat1_tex", "boat2_tex", "clan"};
    hiddenSelectionsTextures[] = {"\ori\vehicles\rth_amphicar\data\amphi_co.paa", "ca\water2\fishing_boat\data\fishboat_001_co.paa", "ca\water2\fishing_boat\data\fishboat_002_co.paa"};
    canFloat = 1;
    damperSize = 0.1;
    damperForce = 3;
    damperDamping = 8;
    wheelCircumference = 3.78249;
    class HitPoints {
      class HitLFWheel {
        armor = 0.8;
        name = "LF_hit";
        passThrough = 0.4;
        material = -1;
        visual = "";
      };
      class HitLMWheel : HitLFWheel {
        name = "LM_hit";
      };
      class HitLBWheel : HitLFWheel {
        name = "LB_hit";
      };
      class HitRFWheel : HitLFWheel {
        name = "RF_hit";
      };
      class HitRMWheel : HitLFWheel {
        name = "RM_hit";
      };
      class HitRBWheel : HitLFWheel {
        name = "RB_hit";
      };
      class HitEngine {
        armor = 0.8;
        material = 51;
        name = "motor";
        visual = "";
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
        passThrough = 0;
      };
      class HitBody {
        armor = 0.7;
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
    };
    armorWheels = 0.3;
    class AnimationSources {
      class LF_wheelHit {
        source = "Hit";
        hitpoint = "HitLFWheel";
        raw = 1;
      };
      class LM_wheelHit : LF_wheelHit {
        hitpoint = "HitLMWheel";
      };
      class LB_wheelHit : LF_wheelHit {
        hitpoint = "HitLBWheel";
      };
      class RF_wheelHit : LF_wheelHit {
        hitpoint = "HitRFWheel";
      };
      class RM_wheelHit : LF_wheelHit {
        hitpoint = "HitRMWheel";
      };
      class RB_wheelHit : LF_wheelHit {
        hitpoint = "HitRBWheel";
      };
    };
    turnCoef = 20;
    terrainCoef = 3;
    brakeDistance = 20;
    precision = 150;
  };
};
