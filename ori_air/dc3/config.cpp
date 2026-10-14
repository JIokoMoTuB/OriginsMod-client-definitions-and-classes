class CfgPatches {
  class ori_dc3 {
    units[] = {"ori_dc3"};
    weapons[] = {};
    requiredVersion = 1;
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
class CfgVehicles {
  class An2_Base_EP1;
  class ori_dc3 : An2_Base_EP1 {
    scope = 2;
    faction = "rth_copter_class";
    displayName = "Plane";
    gearRetracting = 1;
    model = "\ori\air\dc3\DC3.p3d";
    destrType = "DestructBuilding";
    driverAction = "C130_Pilot";
    transportSoldier = 15;
    mapSize = 30;
    icon = "\ori\air\dc3\Data\icomap_DC3_CA.paa";
    picture = "\ori\air\dc3\Data\DC3_CA.paa";
    transportMaxMagazines = 500;
    transportMaxWeapons = 150;
    transportMaxBackpacks = 150;
    class Sounds {
      class EngineLowOut {
        sound[] = {"ori\air\dc3\Data\Sound\dakota_env01.ogg", 2.23872, 1.2, 700};
        frequency = "1.0 min (rpm + 0.5)";
        volume = "engineOn*(rpm factor[0.85, 0])";
      };
      class EngineHighOut {
        sound[] = {"ori\air\dc3\Data\Sound\dakota_engine01.ogg", 2.23872, 1.6, 700};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.55, 1.0])";
      };
      class EngineLowIn {
        sound[] = {"ori\air\dc3\Data\Sound\dakota_env01.ogg", 0.316228, 1};
        frequency = "1.0 min (rpm + 0.5)";
        volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
      };
      class EngineHighIn {
        sound[] = {"ori\air\dc3\Data\Sound\dakota_engine01.ogg", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
      };
    };
    soundEngine[] = {"\ori\air\dc3\Data\Sound\dakota_engine01.ogg", 31.6228, 1};
    soundEnviron[] = {"\ori\air\dc3\Data\Sound\dakota_env01.ogg", 0.0316228, 1};
    side = 3;
    crew = "";
    typicalCargo[] = {};
    cargoAction[] = {"HMMWV_Cargo01", "HMMWV_Cargo01", "UAZ_Cargo01", "HMMWV_Cargo01", "HMMWV_Cargo01", "UAZ_Cargo01", "HMMWV_Cargo01", "HMMWV_Cargo01", "UAZ_Cargo01", "HMMWV_Cargo01", "HMMWV_Cargo01", "UAZ_Cargo01", "HMMWV_Cargo01", "HMMWV_Cargo01", "UAZ_Cargo01"};
    driverCompartments = "Compartment1";
    cargoCompartments[] = {"Compartment1"};
    camouflage = 10;
    audible = 8;
    accuracy = 0.2;
    maxSpeed = 380;
    supplyRadius = 8;
    laserScanner = 1;
    minFireTime = 10;
    gunAimDown = 0.05;
    weapons[] = {};
    magazines[] = {};
    extCameraPosition[] = {0, 5, -20};
    threat[] = {0, 0, 0};
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
      class Right {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "P svetlo";
        direction = "konec P svetla";
        hitpoint = "P svetlo";
        selection = "P svetlo";
        size = 1;
        brightness = 1;
      };
    };
    armor = 5;
    armorStructured = 0;
    envelope[] = {0, 0.1, 0.5, 1.5, 3.1, 4.3, 4.9, 5, 4.4, 2.8, 1.6, 0.8, 0};
    landingSpeed = 145;
    landingAoa = "3.5*3.1415/180";
    flapsFrictionCoef = 2;
    wheelSteeringSensitivity = 0.5;
    aileronSensitivity = 1;
    elevatorSensitivity = 1;
    noseDownCoef = 1;
    gearUpTime = 4.5;
    gearDownTime = 3;
    memoryPointsGetInDriver = "pos driver";
    memoryPointsGetInDriverDir = "pos driver dir";
    memoryPointsGetInCargo[] = {"pos cargo"};
    memoryPointsGetInCargoDir[] = {"pos cargo dir"};
    class Damage {
      tex[] = {};
      mat[] = {"ori\air\dc3\data\DC3_body_01.rvmat", "ori\air\dc3\data\DC3_body_01.rvmat", "ori\air\dc3\data\DC3_body_01_destruct.rvmat", "ori\air\dc3\data\DC3_body_02.rvmat", "ori\air\dc3\data\DC3_body_02.rvmat", "ori\air\dc3\data\DC3_body_02_destruct.rvmat", "ori\air\dc3\data\DC3_cockpit.rvmat", "ori\air\dc3\data\DC3_cockpit.rvmat", "ori\air\dc3\data\DC3_cockpit_destruct.rvmat"};
    };
  };
};
