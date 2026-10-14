class CfgPatches {
  class ori_submarine {
    units[] = {"ori_submarine"};
    weapons[] = {};
    requiredAddons[] = {"CAWater2"};
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
class cfgVehicles {
  class Boat;
  class ori_submarine : Boat {
    scope = 2;
    displayName = "Nautilus";
    vehicleClass = "Ship";
    accuracy = 0.5;
    crew = "";
    brakeDistance = 1;
    faction = "rth_copter_class";
    side = 3;
    model = "\ori\vehicles\submarine\ori_submarine.p3d";
    Icon = "\ori\vehicles\submarine\data\ico\sub_ico_ca.paa";
    mapSize = 8;
    unitInfoType = "UnitInfoShip";
    soundEnviron[] = {"", 0.0562341, 0.9};
    crewVulnerable = 0;
    transportMaxMagazines = 300;
    transportMaxWeapons = 50;
    transportMaxBackpacks = 7;
    armor = 40;
    class Damage {
      tex[] = {};
      mat[] = {"ca\buildings2\ind_tank\data\ind_tanksmall.rvmat", "ca\buildings2\ind_tank\data\ind_tanksmall.rvmat", "ori\vehicles\submarine\data\ind_tanksmall_de.rvmat"};
    };
    class SoundEvents {
    };
    soundEngineOnInt[] = {"\ca\sounds\Vehicles\Water\FISHING_BOAT\ext-slowboat-engine-start-02", 0.177828, 1, 100};
    soundEngineOnExt[] = {"\ca\sounds\Vehicles\Water\FISHING_BOAT\ext-slowboat-engine-start-02", 0.177828, 1, 100};
    soundEngineOffInt[] = {"ca\sounds\vehicles\Water\FISHING_BOAT\ext-slowboat-engine-stop-02", 0.177828, 1, 100};
    soundEngineOffExt[] = {"ca\sounds\vehicles\Water\FISHING_BOAT\ext-slowboat-engine-stop-02", 0.177828, 1, 100};
    class Sounds {
      class Engine {
        sound[] = {"ca\sounds\vehicles\water\fishing_boat\ext-slowboat-engine-low-05", "db0", 1, 250};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "engineOn*(rpm factor[0.6, 0.1])";
      };
      class EngineHighOut {
        sound[] = {"ca\sounds\vehicles\water\fishing_boat\ext-slowboat-engine-hi-04", "db0", 1, 350};
        frequency = "(randomizer*0.05+0.95)*rpm";
        volume = "engineOn*(rpm factor[0.4, 1.5])";
      };
      class IdleOut {
        sound[] = {"ca\sounds\vehicles\water\fishing_boat\ext-slowboat-engine-idle-03", 0.1, 1, 130};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.3, 0])";
      };
      class WaternoiseOutW0 {
        sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-water-noise-nospeed", "db-12", 1, 100};
        frequency = "1";
        volume = "((speed factor[0, 8]) min (speed factor[8, 0]))";
      };
      class WaternoiseOutW1 {
        sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-lospd-noise-02", "db-10", 1, 100};
        frequency = "1";
        volume = "((speed factor[2, 12]) min (speed factor[12, 2]))";
      };
      class WaternoiseOutW2 {
        sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-hispd-noise-02", 0.398107, 1, 100};
        frequency = "1";
        volume = "((speed factor[9, 18.7]) min (speed factor[18.7, 9]))";
      };
    };
    driverAction = "PBX_Driver";
    driverForceOptics = 1;
    driverOpticsModel = "\ori\vehicles\submarine\optic\optika_sub_driver.p3d";
    cargoAction[] = {"BRDM2_Cargo01", "BRDM2_Cargo01", "BRDM2_Cargo01", "BRDM2_Cargo01", "BRDM2_Cargo01", "BRDM2_Cargo01"};
    getInAction = "GetInMedium";
    getOutAction = "GetOutMedium";
    cargoGetInAction[] = {"GetInMedium"};
    cargoGetOutAction[] = {"GetOutMedium"};
    castDriverShadow = 0;
    castCargoShadow = 0;
    maxSpeed = 80;
    enableGPS = 1;
    transportSoldier = 6;
    typicalCargo[] = {"Pilot"};
    supplyRadius = 3;
    hasGunner = 0;
    enableManualFire = 0;
    memoryPointsGetInDriver = "pos driver";
    memoryPointsGetInDriverDir = "pos driver dir";
    memoryPointsGetInCargo = "pos cargo";
    memoryPointsGetInCargoDir = "pos cargo dir";
    weapons[] = {};
    magazines[] = {};
    class Turrets {
    };
    class AnimationSources {
      class sink {
        source = "user";
        animPeriod = 5;
        initPhase = 0;
      };
      class periskop {
        source = "user";
        animPeriod = 5;
        initPhase = 0;
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
      class HitEngine {
        armor = 1.2;
        material = -1;
        name = "motor";
        visual = "";
        passThrough = 0;
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
        brightness = 4;
      };
    };
    class Library {
      libTextDesc = "Nautilus";
    };
    extCameraPosition[] = {0, 4, -14};
  };
};
