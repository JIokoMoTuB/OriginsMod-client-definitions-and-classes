class CfgPatches {
  class ori_bigRaft {
    units[] = {"ori_bigRaft"};
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
  class ori_bigRaft : Boat {
    scope = 2;
    displayName = "Raft";
    vehicleClass = "Ship";
    accuracy = 0.5;
    crew = "";
    faction = "rth_copter_class";
    side = 3;
    model = "\ori\vehicles\rth_raft\raft.p3d";
    picture = "\ori\vehicles\rth_raft\data\ico\raft_ico_ca.paa";
    Icon = "\ori\vehicles\rth_raft\data\ico_map\raft_map_ca.paa";
    mapSize = 8;
    unitInfoType = "UnitInfoShip";
    soundEnviron[] = {"", 0.0562341, 0.9};
    crewVulnerable = 1;
    transportMaxMagazines = 200;
    transportMaxWeapons = 50;
    transportMaxBackpacks = 10;
    armor = 20;
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
    driverAction = "PBX_Driver";
    cargoAction[] = {"PBX_Cargo01", "PBX_Cargo01", "PBX_Cargo02", "PBX_Cargo03"};
    getInAction = "GetInMedium";
    getOutAction = "GetOutMedium";
    cargoGetInAction[] = {"GetInMedium"};
    cargoGetOutAction[] = {"GetOutMedium"};
    castDriverShadow = 0;
    castCargoShadow = 0;
    maxSpeed = 59;
    enableGPS = 0;
    transportSoldier = 4;
    typicalCargo[] = {"Pilot"};
    supplyRadius = 5;
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
      libTextDesc = "Homemade raft";
    };
    extCameraPosition[] = {0, 4, -14};
    class AnimationSources {
      class doska {
        AnimPeriod = 0;
        source = "user";
        InitPhase = 0;
      };
    };
  };
};
