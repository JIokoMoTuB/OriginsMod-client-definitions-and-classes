class CfgPatches {
  class ori_pragaCopter {
    units[] = {"ori_pragaCopter_green", "ori_pragaCopter_yellow"};
    weapons[] = {};
    requiredAddons[] = {"CAAir"};
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
  class Helicopter;
  class ori_pragaCopter_green : Helicopter {
    scope = 2;
    canfloat = 1;
    icon = "\ori\air\rth_copter\data\ico_map\copter_map_ca.paa";
    picture = "\ori\air\rth_copter\data\ico\copter_ico_ca.paa";
    model = "\ori\air\rth_copter\copter.p3d";
    faction = "rth_copter_class";
    displayName = "Praga copter (Green)";
    vehicleClass = "Air";
    transportSoldier = 3;
    ejectDamageLimit = 0.85;
    fuelCapacity = 700;
    transportMaxMagazines = 140;
    transportMaxWeapons = 20;
    transportMaxBackpacks = 6;
    cargoIsCoDriver[] = {1, 0};
    side = 3;
    radartype = 0;
    crew = "";
    DriverAction = "Mi8_Pilot";
    cargoAction[] = {"V3S_Cargo01", "Truck_Cargo01", "Truck_Cargo01"};
    maxSpeed = 290;
    armor = 30;
    gearRetracting = 0;
    cost = 500000;
    crewVulnerable = 1;
    hasGunner = 0;
    typicalCargo[] = {};
    weapons[] = {"TruckHorn"};
    magazines[] = {};
    supplyRadius = 2.5;
    type = 2;
    enableManualFire = 0;
    viewCargoShadow = 0;
    viewDriverShadow = 0;
    class Turrets {
    };
    memoryPointsGetInDriver = "pos driver";
    memoryPointsGetInDriverDir = "pos driver dir";
    memoryPointsGetInCargo = "pos cargo";
    memoryPointsGetInCargoDir = "pos cargo dir";
    soundGetIn[] = {"ca\sounds\Air\Mi17\ext\ext-Mi17-getin-01", 1, 1};
    soundGetOut[] = {"ca\sounds\Air\Mi17\ext\ext-Mi17-getout-01", 1, 1, 50};
    soundDammage[] = {"ca\sounds\Air\Mi17\int\alarm_loop1", 0.001, 1};
    soundEngineOnInt[] = {"ca\sounds\Air\Mi17\int\int-Mi17-start-1a", 0.562341, 1};
    soundEngineOnExt[] = {"ca\sounds\Air\Mi17\ext\ext-Mi17-start-01a", 0.794328, 1, 300};
    soundEngineOffInt[] = {"ca\sounds\Air\Mi17\int\int-Mi17-stop-1a", 0.562341, 1};
    soundEngineOffExt[] = {"ca\sounds\Air\Mi17\ext\ext-Mi17-stop-01a", 0.794328, 1, 300};
    class Exhausts {
      class Exhaust1 {
        position = "vyfuk start";
        direction = "vyfuk end";
        effect = "ExhaustsEffectBig";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"ca\sounds\air\Mi17\ext\ext-sovietheli-engine-6", 5.62341, 1, 300};
        frequency = "rotorSpeed";
        volume = "camPos*((rotorSpeed-0.72)*4)";
      };
      class RotorLowOut {
        sound[] = {"ca\sounds\air\Mi17\ext\ext-Mi17-rotor-low-2", 1.77828, 1, 300};
        frequency = "rotorSpeed";
        volume = "camPos*(0 max (rotorSpeed-0.1))";
        cone[] = {1.6, 3.14, 2, 0.95};
      };
      class RotorHighOut {
        sound[] = {"ca\sounds\air\Mi17\ext\ext-Mi17-rotor-high-2", 3.16228, 1, 300};
        frequency = "rotorSpeed";
        volume = "camPos*10*(0 max (rotorThrust-0.9))";
        cone[] = {1.6, 3.14, 2, 0.95};
      };
      class EngineIn {
        sound[] = {"ca\sounds\air\Mi17\int\int-sovietheli-engine-3", 1, 1};
        frequency = "rotorSpeed";
        volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
      };
      class RotorLowIn {
        sound[] = {"ca\sounds\air\Mi17\int\int-Mi17-rotor-low-2", 1.77828, 1};
        frequency = "rotorSpeed";
        volume = "(1-camPos)*(0 max (rotorSpeed-0.1))";
      };
      class RotorHighIn {
        sound[] = {"ca\sounds\air\Mi17\int\int-Mi17-rotor-high-2", 1.77828, 1};
        frequency = "rotorSpeed";
        volume = "(1-camPos)*3*(rotorThrust-0.9)";
      };
    };
    class Damage {
      tex[] = {"ca\wheeled2\v3s\data\v3s_kabpar_co.paa", "ca\wheeled2\v3s\data\v3s_kabpar_co.paa", "ori\air\rth_copter\data\damage_co.paa", "ca\misc\data\barel_06_co.paa", "ca\misc\data\barel_06_co.paa", "ori\air\rth_copter\data\damage_co.paa", "ca\misc\data\barel_05_co.paa", "ca\misc\data\barel_05_co.paa", "ori\air\rth_copter\data\damage_co.paa", "ca\misc\data\barel_02_co.paa", "ca\misc\data\barel_02_co.paa", "ori\air\rth_copter\data\damage_co.paa"};
      mat[] = {"ca\misc\data\detailmapy\barel.rvmat", "ca\misc\data\detailmapy\barel.rvmat", "ori\air\rth_copter\data\shader_destruct.rvmat", "ca\wheeled2\v3s\data\v3s_kabpar.rvmat", "ca\wheeled2\v3s\data\v3s_kabpar.rvmat", "ca\wheeled2\v3s\data\v3s_kabpar_destruct.rvmat"};
    };
    class Library {
      libTextDesc = "Homemade helicopter";
    };
    hiddenSelections[] = {"kabina"};
    hiddenSelectionsTextures[] = {"ori\air\rth_copter\data\v3s_kabpar_co.paa"};
  };
  class ori_pragaCopter_yellow : ori_pragaCopter_green {
    hiddenSelections[] = {"kabina"};
    hiddenSelectionsTextures[] = {"ori\air\rth_copter\data\v3s_kabpar_eciv_co.paa"};
    displayName = "Praga copter (Yellow)";
  };
};
