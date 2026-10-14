class CfgPatches {
  class ori_air {
    units[] = {"vil_ori_autogyro", "AH6X_Ori", "MH6J_Ori", "AN2_Ori", "HC3_Merlin_Ori", "Ka60c_Ori", "MH60S_Ori", "Mi17_Ori", "Mi17_Civilian_Ori", "Mi171ShCZ_Ori", "UH1H_Ori", "CYBP_Camel_us_ori", "CYBP_Camel_rus_ori", "mig15bis_wreck", "mig15bis_ori", "yak42", "L39_Ori"};
    weapons[] = {"TwinVickers", "CamelPods", "VickerMGs", "CamelGrenades"};
    requiredAddons[] = {"CAAir"};
    magazines[] = {"3Rnd_Grenade_Camel", "100Rnd_TwinVickers"};
    ammo[] = {"CamelRCore", "B_77x56_Ball", "G_Camel_HE"};
  };
};
class CfgFactionClasses {
  class rth_copter_class {
    displayName = "Origins Mod";
    priority = 0;
    side = 1;
  };
};
class AirplaneHUD;
class CfgMovesBasic {
  class DefaultDie;
  class ManActions {
    Camel_a2_Pilot = "Camel_a2_Pilot";
    MiG15_Pilot = "MiG15_Pilot";
  };
};
class CfgMovesMaleSdr : CfgMovesBasic {
  class States {
    class Crew;
    class KIA_Camel_Pilot;
    class Camel_a2_Pilot : Crew {
      file = "\ori\air\camels\Data\Anim\Pilot_a2.rtm";
      interpolateTo[] = {"KIA_Camel_Pilot", 1};
    };
    class KIA_AV8B_Pilot;
    class MiG15_Pilot : Crew {
      file = "\ori\air\mig15bis\anim\mig15pilot.rtm";
      interpolateTo[] = {"KIA_AV8B_Pilot", 1};
    };
  };
};
class cfgVehicles {
  class AllVehicles;
  class Air : AllVehicles {
    class NewTurret;
    class ViewPilot;
    class AnimationSources;
  };
  class Helicopter : Air {
    class HitPoints {
      class HitGlass1;
      class HitGlass2;
      class HitGlass3;
      class HitGlass4;
      class HitGlass5;
      class HitGlass6;
      class HitVRotor;
      class HitHRotor;
      class HitEngine;
    };
    class Turrets {
      class MainTurret : NewTurret {
        class Turrets;
      };
    };
    class AnimationSources;
    driverCompartments = "Compartment1";
    cargoCompartments[] = {"Compartment1"};
    ejectDeadGunner = 1;
    ejectDeadCargo = 1;
    ejectDeadDriver = 1;
    ejectDeadCommander = 1;
  };
  class vil_ori_autogyro : Helicopter {
    scope = 2;
    canfloat = 1;
    icon = "\ori\air\data\map_ico\gyro_copter_map_ca.paa";
    picture = "ori\air\rth_copter\data\ico\copter_ico_ca.paa";
    model = "\ori\air\vil_ori_autogyro.p3d";
    faction = "rth_copter_class";
    displayName = "Uni Copter";
    vehicleClass = "Air";
    transportSoldier = 0;
    ejectDamageLimit = 0.85;
    fuelCapacity = 300;
    transportMaxMagazines = 80;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 2;
    cargoIsCoDriver[] = {1, 0};
    side = 2;
    radartype = 0;
    crew = "";
    DriverAction = "Mi8_Pilot";
    maxSpeed = 220;
    armor = 27;
    gearRetracting = 0;
    cost = 500000;
    hasGunner = 0;
    typicalCargo[] = {};
    weapons[] = {};
    magazines[] = {};
    supplyRadius = 2.5;
    type = 2;
    enableManualFire = 0;
    viewCargoShadow = 0;
    viewDriverShadow = 0;
    threat[] = {1, 1, 1};
    crewVulnerable = 1;
    class Turrets {
    };
    memoryPointsGetInDriver = "pos driver";
    memoryPointsGetInDriverDir = "pos driver dir";
    soundGetIn[] = {"ca\sounds\Air\Mi17\ext\ext-Mi17-getin-01", "db0", 1, 50};
    soundGetOut[] = {"ca\sounds\Air\Mi17\ext\ext-Mi17-getout-01", "db0", 1, 50};
    soundDammage[] = {"ca\sounds\Air\Mi17\int\alarm_loop1", 0.001, 1, 100};
    soundEngineOnInt[] = {"ca\sounds\Air\Mi17\int\int-Mi17-start-1a", 0.562341, 1, 180};
    soundEngineOnExt[] = {"ca\sounds\Air\Mi17\ext\ext-Mi17-start-01a", 0.794328, 1, 180};
    soundEngineOffInt[] = {"ca\sounds\Air\Mi17\int\int-Mi17-stop-1a", 0.562341, 1, 180};
    soundEngineOffExt[] = {"ca\sounds\Air\Mi17\ext\ext-Mi17-stop-01a", 0.794328, 1, 180};
    class Exhausts {
      class Exhaust1 {
        position = "vyfuk start";
        direction = "vyfuk end";
        effect = "ExhaustsEffectBig";
      };
      class Exhaust2 {
        position = "vyfuk start1";
        direction = "vyfuk end1";
        effect = "ExhaustsEffectBig";
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_engine_ext_1", "db10", 1, 180};
        frequency = "rotorSpeed";
        volume = "camPos*((rotorSpeed-0.72)*4)";
      };
      class RotorLowOut {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_rotor_ext_1", "db10", 1, 180};
        frequency = "rotorSpeed";
        volume = "camPos*(0 max (rotorSpeed-0.1))";
        cone[] = {1.8, 3.14, 2, 0.9};
      };
      class RotorHighOut {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_rotor_ext_high_1", "db5", 1, 200};
        frequency = "rotorSpeed";
        volume = "camPos*10*(0 max (rotorThrust-0.95))";
        cone[] = {1.8, 3.14, 2, 0.9};
      };
      class EngineIn {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_engine_ext_1", "db2", 1, 200};
        frequency = "rotorSpeed";
        volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
      };
      class RotorLowIn {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_rotor_ext_1", "db2", 1, 200};
        frequency = "rotorSpeed";
        volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
      };
      class RotorHighIn {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_rotor_ext_high_1", "db6", 1, 200};
        frequency = "rotorSpeed";
        volume = "(1-camPos)*3*(rotorThrust-0.9)";
      };
    };
    class AnimationSources {
      class predniOknoOchrana {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
    };
    class HitPoints {
      class HitHull {
        armor = 1;
        material = 51;
        name = "trup";
        visual = "trup";
        passThrough = 1;
      };
      class HitEngine {
        armor = 0.5;
        material = 51;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
      class HitAvionics {
        armor = 0.5;
        material = 51;
        name = "elektronika";
        visual = "elektronika";
        passThrough = 1;
      };
      class HitVRotor {
        armor = 0.5;
        material = 51;
        name = "mala vrtule";
        visual = "mala vrtule staticka";
        passThrough = 0.3;
      };
      class HitHRotor {
        armor = 0.5;
        material = 51;
        name = "velka vrtule";
        visual = "velka vrtule staticka";
        passThrough = 0.1;
      };
      class HitMissiles {
        armor = 0.1;
        material = 51;
        name = "munice";
        visual = "munice";
        passThrough = 0.5;
      };
      class HitRGlass {
        convexComponent = "sklo predni P";
        armor = 0.1;
        material = 51;
        name = "sklo predni P";
        visual = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        convexComponent = "sklo predni L";
        armor = 0.1;
        material = 51;
        name = "sklo predni L";
        visual = "sklo predni L";
        passThrough = 0;
      };
    };
    class Damage {
      tex[] = {"ca\structures\data\metal\metal_universal_dirty_co.paa", "ca\structures\data\metal\metal_universal_dirty_co.paa", "ori\air\rth_copter\data\damage_co.paa", "ca\structures\data\metal\metal_plates3_co.paa", "ca\structures\data\metal\metal_plates3_co.paa", "ori\air\rth_copter\data\damage_co.paa", "CA\structures\Data\Metal\metalclean1_co.paa", "CA\structures\Data\Metal\metalclean1_co.paa", "ori\air\rth_copter\data\damage_co.paa", "ca\structures\data\metal\metalcoloured_co.paa", "ca\structures\data\metal\metalcoloured_co.paa", "ori\air\rth_copter\data\damage_co.paa", "ca\structures\data\metal\metalrust1_co.paa", "ca\structures\data\metal\metalrust1_co.paa", "ori\air\rth_copter\data\damage_co.paa", "ca\structures\data\metal\metalthread_co.paa", "ca\structures\data\metal\metalthread_co.paa", "ori\air\rth_copter\data\damage_co.paa", "ca\structures\data\roof\roof_ethernit_co.paa", "ca\structures\data\roof\roof_ethernit_co.paa", "ori\air\rth_copter\data\damage_co.paa", "CA\structures\Data\Wood\wood_barkstripped_co.paa", "CA\structures\Data\Wood\wood_barkstripped_co.paa", "ori\air\rth_copter\data\damage_co.paa", "ca\structures\data\wood\woodpainted_01_co.paa", "ca\structures\data\wood\woodpainted_01_co.paa", "ori\air\rth_copter\data\damage_co.paa", "ori\buildings\data\metal_co.paa", "ori\buildings\data\metal_co.paa", "ori\air\rth_copter\data\damage_co.paa", "ori\buildings\data\metal_yellow_co.paa", "ori\buildings\data\metal_yellow_co.paa", "ori\air\rth_copter\data\damage_co.paa", "ca\structures\data\metal\metalcoloured1_co.paa", "ca\structures\data\metal\metalcoloured1_co.paa", "ori\air\rth_copter\data\damage_co.paa"};
      mat[] = {};
    };
    class Library {
      libTextDesc = "Homemade uni helicopter";
    };
  };
  class AH6_Base_EP1;
  class AH6X_Ori : AH6_Base_EP1 {
    isUav = 0;
    accuracy = 2;
    scope = 2;
    displayName = "AH6X";
    faction = "rth_copter_class";
    gunnerHasFlares = 0;
    commanderCanSee = "2+16+32";
    gunnerCanSee = "2+16+32";
    driverCanSee = "2+16+32";
    model = "\ca\air_e\ah6j\ah6x";
    picture = "\ca\air_e\data\UI\Picture_ah6x_CA.paa";
    icon = "\ca\air_e\data\UI\Icon_ah6x_CA.paa";
    side = 2;
    radarType = 0;
    camouflage = 4;
    audible = 6;
    crew = "";
    typicalCargo[] = {};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    enableManualFire = 0;
    weapons[] = {};
    magazines[] = {};
    transportMaxMagazines = 100;
    transportMaxWeapons = 20;
    transportMaxBackpacks = 4;
    soundGetIn[] = {"Ca\Sounds_E\Air_E\AH6\close", 0.316228, 1};
    soundGetOut[] = {"Ca\Sounds_E\Air_E\AH6\open", 0.316228, 1, 40};
    soundDammage[] = {"ca\Sounds\Air\Noises\alarm_loop1", 0.562341, 1};
    soundEngineOnInt[] = {"Ca\Sounds_E\Air_E\AH6\ah6_start_ext", 0.0562341, 1};
    soundEngineOnExt[] = {"Ca\Sounds_E\Air_E\AH6\ah6_start_ext", 0.0562341, 1, 200};
    soundEngineOffInt[] = {"Ca\Sounds_E\Air_E\AH6\ah6_stop_ext", 0.0562341, 1};
    soundEngineOffExt[] = {"Ca\Sounds_E\Air_E\AH6\ah6_stop_ext", 0.0562341, 1, 200};
    class AnimationSources {
      class FLIR_gun {
        source = "user";
        animPeriod = 1e-05;
        initPhase = 0;
      };
      class FLIR_turret {
        source = "user";
        animPeriod = 1e-05;
        initPhase = 0;
      };
    };
    class Sounds {
      class Engine {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_engine_ext_1", 1.56228, 1, 180};
        frequency = "rotorSpeed";
        volume = "camPos*((rotorSpeed-0.72)*4)";
      };
      class RotorLowOut {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_rotor_ext_1", 1.56228, 1, 200};
        frequency = "rotorSpeed";
        volume = "camPos*(0 max (rotorSpeed-0.1))";
        cone[] = {1.8, 3.14, 2, 0.9};
      };
      class RotorHighOut {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_rotor_ext_high_1", 0.77828, 1, 210};
        frequency = "rotorSpeed";
        volume = "camPos*10*(0 max (rotorThrust-0.95))";
        cone[] = {1.8, 3.14, 2, 0.9};
      };
      class EngineIn {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_engine_ext_1", 0.65893, 1};
        frequency = "rotorSpeed";
        volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
      };
      class RotorLowIn {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_rotor_ext_1", 0.65893, 1};
        frequency = "rotorSpeed";
        volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
      };
      class RotorHighIn {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_rotor_ext_high_1", 0.89526, 1};
        frequency = "rotorSpeed";
        volume = "(1-camPos)*3*(rotorThrust-0.9)";
      };
    };
    class Turrets {
    };
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"ca\air_e\ah6j\data\ah6_merge1_co.paa"};
    ejectDeadGunner = 1;
    ejectDeadCargo = 1;
    ejectDeadDriver = 1;
    ejectDeadCommander = 1;
    armor = 29;
    class HitPoints {
      class HitHull {
        armor = 1;
        material = 51;
        name = "NEtrup";
        visual = "trup";
        passThrough = 1;
      };
      class HitEngine {
        armor = 0.7;
        material = 51;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
      class HitAvionics {
        armor = 0.4;
        material = 51;
        name = "elektronika";
        visual = "elektronika";
        passThrough = 1;
      };
      class HitVRotor {
        armor = 0.7;
        material = 51;
        name = "mala vrtule";
        visual = "mala vrtule staticka";
        passThrough = 0.3;
      };
      class HitHRotor {
        armor = 0.7;
        material = 51;
        name = "velka vrtule";
        visual = "velka vrtule staticka";
        passThrough = 0.1;
      };
      class HitGlass1 {
        armor = 0.6;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.6;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.6;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.6;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
      class HitRGlass {
        armor = 0.1;
        material = 51;
        name = "sklo predni P";
        visual = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        armor = 0.1;
        material = 51;
        name = "sklo predni L";
        visual = "sklo predni L";
        passThrough = 0;
      };
      class HitMissiles {
        armor = 0.6;
        material = 51;
        name = "munice";
        visual = "munice";
        passThrough = 0.5;
      };
    };
  };
  class MH6J_Ori : AH6_Base_EP1 {
    isUav = 0;
    accuracy = 2;
    scope = 2;
    displayName = "MH6J";
    faction = "rth_copter_class";
    gunnerHasFlares = 0;
    commanderCanSee = "2+16+32";
    gunnerCanSee = "2+16+32";
    driverCanSee = "2+16+32";
    model = "\ca\air_e\ah6j\mh6j";
    picture = "\ca\air_e\data\UI\Picture_mh6j_CA.paa";
    icon = "\ca\air_e\data\UI\Icon_mh6j_CA.paa";
    side = 2;
    armor = 29;
    radarType = 0;
    camouflage = 4;
    audible = 6;
    transportSoldier = 5;
    crew = "";
    typicalCargo[] = {};
    cargoAction[] = {"AH6j_Cargo_EP1", "MH6_Cargo01", "MH6_Cargo02", "MH6_Cargo02", "MH6_Cargo02", "MH6_Cargo03"};
    cargoIsCoDriver[] = {1, 0};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    enableManualFire = 0;
    weapons[] = {};
    magazines[] = {};
    transportMaxMagazines = 80;
    transportMaxWeapons = 20;
    transportMaxBackpacks = 4;
    soundGetIn[] = {"Ca\Sounds_E\Air_E\AH6\close", 0.316228, 1};
    soundGetOut[] = {"Ca\Sounds_E\Air_E\AH6\open", 0.316228, 1, 40};
    soundDammage[] = {"ca\Sounds\Air\Noises\alarm_loop1", 0.562341, 1};
    soundEngineOnInt[] = {"Ca\Sounds_E\Air_E\AH6\ah6_start_ext", 0.0562341, 1};
    soundEngineOnExt[] = {"Ca\Sounds_E\Air_E\AH6\ah6_start_ext", 0.0562341, 1, 200};
    soundEngineOffInt[] = {"Ca\Sounds_E\Air_E\AH6\ah6_stop_ext", 0.0562341, 1};
    soundEngineOffExt[] = {"Ca\Sounds_E\Air_E\AH6\ah6_stop_ext", 0.0562341, 1, 200};
    class Turrets {
    };
    class Sounds {
      class Engine {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_engine_ext_1", 1.56228, 1, 180};
        frequency = "rotorSpeed";
        volume = "camPos*((rotorSpeed-0.72)*4)";
      };
      class RotorLowOut {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_rotor_ext_1", 1.56228, 1, 200};
        frequency = "rotorSpeed";
        volume = "camPos*(0 max (rotorSpeed-0.1))";
        cone[] = {1.8, 3.14, 2, 0.9};
      };
      class RotorHighOut {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_rotor_ext_high_1", 0.77828, 1, 210};
        frequency = "rotorSpeed";
        volume = "camPos*10*(0 max (rotorThrust-0.95))";
        cone[] = {1.8, 3.14, 2, 0.9};
      };
      class EngineIn {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_engine_ext_1", 0.65893, 1};
        frequency = "rotorSpeed";
        volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
      };
      class RotorLowIn {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_rotor_ext_1", 0.65893, 1};
        frequency = "rotorSpeed";
        volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
      };
      class RotorHighIn {
        sound[] = {"Ca\Sounds_E\Air_E\AH6\ah6_rotor_ext_high_1", 0.89526, 1};
        frequency = "rotorSpeed";
        volume = "(1-camPos)*3*(rotorThrust-0.9)";
      };
    };
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {"ca\air_e\ah6j\data\ah6_merge1_co.paa", "ca\air_e\ah6j\data\default_co.paa"};
    ejectDeadGunner = 1;
    ejectDeadCargo = 1;
    ejectDeadDriver = 1;
    ejectDeadCommander = 1;
    class HitPoints {
      class HitHull {
        armor = 1;
        material = 51;
        name = "NEtrup";
        visual = "trup";
        passThrough = 1;
      };
      class HitEngine {
        armor = 0.6;
        material = 51;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
      class HitAvionics {
        armor = 0.4;
        material = 51;
        name = "elektronika";
        visual = "elektronika";
        passThrough = 1;
      };
      class HitVRotor {
        armor = 0.5;
        material = 51;
        name = "mala vrtule";
        visual = "mala vrtule staticka";
        passThrough = 0.3;
      };
      class HitHRotor {
        armor = 0.5;
        material = 51;
        name = "velka vrtule";
        visual = "velka vrtule staticka";
        passThrough = 0.1;
      };
      class HitGlass1 {
        armor = 0.6;
        material = -1;
        name = "glass1";
        visual = "glass1";
        passThrough = 0;
      };
      class HitGlass2 {
        armor = 0.6;
        material = -1;
        name = "glass2";
        visual = "glass2";
        passThrough = 0;
      };
      class HitGlass3 {
        armor = 0.6;
        material = -1;
        name = "glass3";
        visual = "glass3";
        passThrough = 0;
      };
      class HitGlass4 {
        armor = 0.6;
        material = -1;
        name = "glass4";
        visual = "glass4";
        passThrough = 0;
      };
      class HitRGlass {
        armor = 0.1;
        material = 51;
        name = "sklo predni P";
        visual = "sklo predni P";
        passThrough = 0;
      };
      class HitLGlass {
        armor = 0.1;
        material = 51;
        name = "sklo predni L";
        visual = "sklo predni L";
        passThrough = 0;
      };
      class HitMissiles {
        armor = 0.6;
        material = 51;
        name = "munice";
        visual = "munice";
        passThrough = 0.5;
      };
    };
  };
  class An2_Base_EP1;
  class AN2_Ori : An2_Base_EP1 {
    displayName = "AN2";
    scope = 2;
    side = 2;
    model = "\ori\air\an2.p3d";
    faction = "rth_copter_class";
    crew = "";
    typicalCargo[] = {};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    weapons[] = {};
    magazines[] = {};
    gunnerHasFlares = 0;
    commanderCanSee = "2+16+32";
    gunnerCanSee = "2+16+32";
    driverCanSee = "2+16+32";
    transportMaxMagazines = 300;
    transportMaxWeapons = 70;
    transportMaxBackpacks = 10;
    hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
    hiddenSelectionsTextures[] = {"ca\Air_E\An2\Data\an2_1_A_CO", "ca\Air_E\An2\Data\an2_2_A_CO", "ca\Air_E\An2\Data\an2_wings_A_CO"};
    class HitPoints {
      class HitHull {
        armor = 2;
        material = 50;
        name = "telo";
        visual = "trup";
        passThrough = 1;
      };
      class HitEngine {
        armor = 1;
        material = 60;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
      class HitAvionics {
        armor = 1;
        material = -1;
        name = "elektronika";
        visual = "elektronika";
        passThrough = 1;
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
  class HC3_Merlin_Ori : Helicopter {
    scope = 2;
    side = 2;
    displayname = "HC3 Merlin";
    faction = "rth_copter_class";
    model = "\Ca\air_d_baf\MerlinHC3_BAF";
    picture = "\Ca\air_d_baf\Data\UI\picture_merlin_ca.paa";
    icon = "\Ca\air_d_baf\Data\UI\icon_merlin_ca.paa";
    mapSize = 20;
    crew = "";
    typicalCargo[] = {};
    driverAction = "Merlin_Pilot_BAF";
    cargoIsCoDriver[] = {1, 0};
    GetInAction = "GetInHigh";
    GetOutAction = "GetOutHigh";
    cargoAction[] = {"Merlin_Cargo_BAF", "Merlin_Cargo01_BAF", "Merlin_Cargo_BAF", "Merlin_Cargo01_BAF", "Merlin_Cargo01_BAF", "Merlin_Cargo_BAF", "Merlin_Cargo01_BAF", "Merlin_Cargo_BAF", "Merlin_Cargo01_BAF", "Merlin_Cargo01_BAF", "Merlin_Cargo_BAF", "Merlin_Cargo01_BAF", "Merlin_Cargo01_BAF", "Merlin_Cargo_BAF", "Merlin_Cargo01_BAF", "Merlin_Cargo_BAF", "Merlin_Cargo01_BAF"};
    memoryPointsGetInCargo[] = {"pos codriver", "pos cargo"};
    memoryPointsGetInCargoDir[] = {"pos codriver dir", "pos cargo dir"};
    transportSoldier = 17;
    radarType = 0;
    enableManualFire = 0;
    class Reflectors {
      class Light {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "light_1_1_pos";
        direction = "light_1_1_dir";
        hitpoint = "light_1_1_pos";
        selection = "L svetlo";
        size = 1;
        brightness = 1;
      };
    };
    class MarkerLights {
      class GreenStill {
        name = "light_nav_right";
        color[] = {0.006, 0.12, 0.006, 1};
        ambient[] = {0.01, 0.1, 0.01, 1};
        brightness = 0.001;
        blinking = 0;
      };
      class WhiteBlinking {
        name = "light_nav_top";
        color[] = {0.0388, 0.0388, 0.0388, 1};
        ambient[] = {0.03, 0.023, 0.0056, 1};
        brightness = 0.001;
        blinking = 1;
      };
      class RedStill {
        name = "light_nav_left";
        color[] = {0.12, 0.006, 0.006, 1};
        ambient[] = {0.1, 0.01, 0.01, 1};
        brightness = 0.001;
        blinking = 0;
      };
    };
    class AnimationSources : AnimationSources {
      class Doors {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
    };
    class UserActions {
      class OpenRdoor {
        displayName = "$STR_BAF_CFGVEHICLES_BAF_MERLIN_HC3_D_USERACTIONS_OPENRDOOR0";
        position = "axis_door_side_pop";
        radius = 3.6;
        onlyForplayer = 0;
        condition = "this animationPhase ""dvere_p"" > 0.5 AND Alive(this)";
        statement = "this animate [""dvere_p"",0];this animate [""dvere_p_pop"",0];";
      };
      class CloseRdoor {
        displayName = "$STR_BAF_CFGVEHICLES_BAF_MERLIN_HC3_D_USERACTIONS_CLOSERDOOR0";
        position = "axis_door_side_pop";
        radius = 3.6;
        onlyForplayer = 0;
        condition = "this animationPhase ""dvere_p"" < 0.5 AND Alive(this)";
        statement = "this animate [""dvere_p"",1];this animate [""dvere_p_pop"",1];";
      };
      class OpenLdoor {
        displayName = "$STR_BAF_CFGVEHICLES_BAF_MERLIN_HC3_D_USERACTIONS_OPENLDOOR0";
        position = "axis_door_crew_pop";
        radius = 3.6;
        onlyForplayer = 0;
        condition = "this animationPhase ""dvere_l"" > 0.5 AND Alive(this)";
        statement = "this animate [""dvere_l"",0];this animate [""dvere_l_pop"",0];";
      };
      class CloseLdoor {
        displayName = "$STR_BAF_CFGVEHICLES_BAF_MERLIN_HC3_D_USERACTIONS_CLOSELDOOR0";
        position = "axis_door_crew_pop";
        radius = 3.6;
        onlyForplayer = 0;
        condition = "this animationPhase ""dvere_l"" < 0.5 AND Alive(this)";
        statement = "this animate [""dvere_l"",1];this animate [""dvere_l_pop"",1];";
      };
    };
    maxSpeed = 309;
    accuracy = 0.2;
    cost = 10000000;
    armor = 30;
    damageResistance = 0.00172;
    vehicleClass = "Air";
    laserScanner = 1;
    MainRotorSpeed = 1;
    backRotorSpeed = 1;
    gearRetracting = 1;
    gearUpTime = 1;
    gearDownTime = 1;
    weapons[] = {};
    magazines[] = {};
    LockDetectionSystem = 1118208;
    IncommingMisslieDetectionSystem = 16;
    irScanRangeMin = 0;
    irScanRangeMax = 1000;
    nightVision = 0;
    class Turrets : Turrets {
    };
    selectionFireAnim = "zasleh";
    threat[] = {0.2, 0.1, 0};
    destrType = "DestructWreck";
    class HitPoints : HitPoints {
      class HitHull {
        armor = 1;
        material = 51;
        name = "NEtrup";
        visual = "trup";
        passThrough = 1;
      };
      class HitEngine {
        armor = 0.25;
        material = 51;
        name = "motor";
        visual = "motor";
        passThrough = 0.005;
      };
      class HitAvionics {
        armor = 0.2;
        material = 51;
        name = "elektronika";
        visual = "elektronika";
        passThrough = 0.5;
      };
      class HitVRotor {
        armor = 0.2;
        material = 51;
        name = "mala vrtule";
        visual = "mala vrtule staticka";
        passThrough = 0.5;
      };
      class HitHRotor {
        armor = 0.2;
        material = 51;
        name = "velka vrtule";
        visual = "velka vrtule staticka";
        passThrough = 0.5;
      };
      class HitGlass1 : HitGlass1 {
        armor = 0.2;
      };
      class HitGlass2 : HitGlass2 {
        armor = 0.2;
      };
      class HitGlass3 : HitGlass3 {
        armor = 0.2;
      };
      class HitGlass4 : HitGlass4 {
        armor = 0.2;
      };
      class HitGlass5 : HitGlass5 {
        armor = 0.2;
      };
      class HitGlass6 : HitGlass6 {
        armor = 0.2;
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"ca\air_d_BAF\Data\merlin_int_01.rvmat", "ca\air_d_BAF\Data\merlin_int_01_damage.rvmat", "ca\air_d_BAF\Data\merlin_int_01_destruct.rvmat", "ca\air_d_BAF\Data\merlin_int_02.rvmat", "ca\air_d_BAF\Data\merlin_int_02_damage.rvmat", "ca\air_d_BAF\Data\merlin_int_02_destruct.rvmat", "ca\air_d_BAF\Data\Merlin_glass.rvmat", "ca\air_d_BAF\Data\Merlin_glass_damage.rvmat", "ca\air_d_BAF\Data\Merlin_glass_damage.rvmat", "ca\air_d_BAF\Data\MerlinHc3_2_BAF.rvmat", "ca\air_d_BAF\Data\MerlinHc3_2_BAF_damage.rvmat", "ca\air_d_BAF\Data\MerlinHc3_2_BAF_destruct.rvmat", "ca\air_d_BAF\Data\MerlinHc3_1_BAF.rvmat", "ca\air_d_BAF\Data\MerlinHc3_1_BAF_damage.rvmat", "ca\air_d_BAF\Data\MerlinHc3_1_BAF_destruct.rvmat"};
    };
    soundGetIn[] = {"Ca\sounds_baf\air\getin", 0.316228, 1};
    soundGetOut[] = {"Ca\sounds_baf\air\getin", 0.316228, 1, 40};
    soundDammage[] = {"Ca\sounds_baf\air\int-alarm_loop", 0.562341, 1};
    soundEngineOnInt[] = {"Ca\sounds_baf\air\uk_start_int_1", 0.1, 1.1};
    soundEngineOnExt[] = {"Ca\sounds_baf\air\uk_start_ext_1", 0.562341, 1.1, 500};
    soundEngineOffInt[] = {"\Ca\sounds_baf\air\uk_stop_int_1", 0.1, 1.1};
    soundEngineOffExt[] = {"Ca\sounds_baf\air\uk_stop_ext_2", 0.562341, 1.1, 500};
    soundLocked[] = {"Ca\sounds_baf\air\int-alarm_loop", 0.000316228, 2};
    soundIncommingMissile[] = {"Ca\sounds_baf\air\int-alarm_loop", 0.000316228, 4};
    class Sounds {
      class Engine {
        sound[] = {"Ca\sounds_baf\air\uk_engine_ext_3", 3.16228, 1, 1000};
        frequency = "rotorSpeed";
        volume = "camPos*((rotorSpeed-0.72)*4)";
      };
      class RotorLowOut {
        sound[] = {"\Ca\sounds_baf\air\uk_rotor_4l", 3.16228, 1, 1200};
        frequency = "rotorSpeed";
        volume = "camPos*(0 max (rotorSpeed-0.1))";
        cone[] = {1.8, 3.14, 2, 0.9};
      };
      class RotorHighOut {
        sound[] = {"\Ca\sounds_baf\air\uk_rotor_4h_swist", 1.77828, 1, 1300};
        frequency = "rotorSpeed";
        volume = "camPos*10*(0 max (rotorThrust-0.95))";
        cone[] = {1.8, 3.14, 2, 0.9};
      };
      class EngineIn {
        sound[] = {"\Ca\sounds_baf\air\uk_engine_int_1", 0.562341, 1};
        frequency = "rotorSpeed";
        volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
      };
      class RotorLowIn {
        sound[] = {"Ca\sounds_baf\air\uk_rotor_4l_int", 1.77828, 1};
        frequency = "rotorSpeed";
        volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
      };
      class RotorHighIn {
        sound[] = {"Ca\sounds_baf\air\uk_rotor_4h_int", 1.77828, 1};
        frequency = "rotorSpeed";
        volume = "(1-camPos)*3*(rotorThrust-0.9)";
      };
    };
    supplyRadius = 5;
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    transportMaxMagazines = 300;
    transportMaxWeapons = 100;
    transportMaxBackpacks = 15;
    ejectDeadGunner = 1;
    ejectDeadCargo = 1;
    ejectDeadDriver = 1;
    ejectDeadCommander = 1;
  };
  class Ka60c_Ori : Helicopter {
    expansion = 4;
    scope = 2;
    side = 2;
    destrType = "DestructWreck";
    armor = 25;
    radarType = 0;
    displayName = "Ka60C";
    faction = "rth_copter_class";
    model = "\Ca\Air_PMC\Ka60\Ka60_PMC.p3d";
    icon = "\Ca\Air_PMC\data\ui\Icon_ka60_PMC_ca.paa";
    picture = "\Ca\Air_PMC\data\ui\picture_ka60_PMC_ca.paa";
    driverAction = "UH1H_Pilot_EP1";
    driverInAction = "UH1H_Pilot_EP1";
    transportSoldier = 8;
    cargoAction[] = {"UH1H_Cargo_EP1", "UH60_Cargo02"};
    cargoIsCoDriver[] = {1, 0};
    weapons[] = {};
    magazines[] = {};
    enableManualFire = 0;
    transportMaxMagazines = 200;
    transportMaxWeapons = 50;
    transportMaxBackpacks = 5;
    ejectDeadGunner = 1;
    ejectDeadCargo = 1;
    ejectDeadDriver = 1;
    ejectDeadCommander = 1;
    class HitPoints : HitPoints {
      class HitGlass1 : HitGlass1 {
        armor = 0.12;
      };
      class HitGlass2 : HitGlass2 {
        armor = 0.12;
      };
      class HitGlass3 : HitGlass3 {
        armor = 0.12;
      };
      class HitGlass4 : HitGlass4 {
        armor = 0.12;
      };
      class HitGlass5 : HitGlass5 {
        armor = 0.12;
      };
      class HitGlass6 : HitGlass6 {
        armor = 0.12;
      };
      class HitHull {
        armor = 1;
        material = 51;
        name = "NEtrup";
        visual = "trup";
        passThrough = 1;
      };
      class HitEngine {
        armor = 0.8;
        material = 51;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
      class HitAvionics {
        armor = 0.6;
        material = 51;
        name = "elektronika";
        visual = "elektronika";
        passThrough = 1;
      };
      class HitVRotor {
        armor = 0.8;
        material = 51;
        name = "mala vrtule";
        visual = "mala vrtule staticka";
        passThrough = 1;
      };
      class HitHRotor {
        armor = 0.8;
        material = 51;
        name = "velka vrtule";
        visual = "velka vrtule staticka";
        passThrough = 1;
      };
    };
    class Turrets : Turrets {
      class MainTurret : MainTurret {
        body = "mainTurret";
        gun = "mainGun";
        minElev = -50;
        maxElev = 30;
        initElev = 0;
        minTurn = 20;
        maxTurn = 155;
        initTurn = 70;
        soundServo[] = {"", 0.01, 1};
        animationSourceHatch = "";
        stabilizedInAxes = "StabilizedInAxesNone";
        gunBeg = "muzzle_1";
        gunEnd = "chamber_1";
        weapons[] = {"PKT_spec"};
        maxHorizontalRotSpeed = 1.6;
        maxVerticalRotSpeed = 1.6;
        magazines[] = {"100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK"};
        gunnerName = "$STR_POSITION_DOORGUNNER";
        gunnerForceOptics = 1;
        gunnerAction = "Mi8_Gunner";
        gunnerInAction = "Mi8_Gunner";
        commanding = -3;
        primaryGunner = 1;
        discreteDistance[] = {500, 600, 700, 800, 900};
        discreteDistanceInitIndex = 1;
        gunnerOpticsModel = "\ca\weapons\2Dscope_Pecheneg";
        turretInfoType = "RscWeaponZeroing";
        class OpticsIn {
          class Wide {
            opticsDisplayName = "W";
            initAngleX = 0;
            minAngleX = -30;
            maxAngleX = 30;
            initAngleY = -10;
            minAngleY = -100;
            maxAngleY = 100;
            initFov = 0.1;
            minFov = 0.1;
            maxFov = 0.1;
            visionMode[] = {"Normal", "NVG"};
            gunnerOpticsModel = "\ca\weapons\2Dscope_Pecheneg";
          };
          class Medium : Wide {
            opticsDisplayName = "M";
            initFov = 0.063;
            minFov = 0.063;
            maxFov = 0.063;
            gunnerOpticsModel = "\ca\weapons\2Dscope_Pecheneg";
          };
          class Narrow : Wide {
            opticsDisplayName = "N";
            gunnerOpticsModel = "\ca\weapons\2Dscope_Pecheneg";
            initFov = 0.019;
            minFov = 0.019;
            maxFov = 0.019;
          };
        };
        class OpticsOut {
          class Monocular {
            initAngleX = 0;
            minAngleX = -30;
            maxAngleX = 30;
            initAngleY = -10;
            minAngleY = -100;
            maxAngleY = 100;
            initFov = 1.1;
            minFov = 0.133;
            maxFov = 1.1;
            visionMode[] = {"Normal"};
            gunnerOpticsModel = "";
            gunnerOpticsEffect[] = {};
          };
        };
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
        gunnerCompartments = "Compartment1";
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"Ca\Air_PMC\Ka60\Data\ka60_ext.rvmat", "Ca\Air_PMC\Ka60\Data\ka60_ext_damage.rvmat", "Ca\Air_PMC\Ka60\Data\ka60_ext_destruct.rvmat", "Ca\Air_PMC\Ka60\Data\ka60_glass.rvmat", "Ca\Air_PMC\Ka60\Data\ka60_glass_damage.rvmat", "Ca\Air_PMC\Ka60\Data\ka60_glass_destruct.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default_destruct.rvmat"};
    };
    soundGetIn[] = {"Ca\Sounds_PMC\Air_PMC\Ka_door", 0.316228, 1};
    soundGetOut[] = {"Ca\Sounds_PMC\Air_PMC\Ka_door", 0.316228, 1, 40};
    soundDammage[] = {"Ca\Sounds_PMC\Air_PMC\int-alarm_loop", 0.562341, 1};
    soundEngineOnInt[] = {"Ca\Sounds_PMC\Air_PMC\Ka_start_int_1", 0.1, 1};
    soundEngineOnExt[] = {"Ca\Sounds_PMC\Air_PMC\Ka_start_ext_1", 0.562341, 1, 800};
    soundEngineOffInt[] = {"Ca\Sounds_PMC\Air_PMC\Ka_stop_int_1", 0.1, 1};
    soundEngineOffExt[] = {"Ca\Sounds_PMC\Air_PMC\Ka_stop_ext_1", 0.562341, 1, 800};
    class Sounds {
      class Engine {
        sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_engi_r_ext", 3.16228, 1.4, 800};
        frequency = "rotorSpeed";
        volume = "camPos*((rotorSpeed-0.72)*4)";
      };
      class RotorLowOut {
        sound[] = {"Ca\Sounds_PMC\Air_PMC\KA_rotor_orig", 3.16228, 1, 1400};
        frequency = "rotorSpeed";
        volume = "camPos*(0 max (rotorSpeed-0.1))";
        cone[] = {1.8, 3.14, 2, 0.9};
      };
      class RotorHighOut {
        sound[] = {"Ca\Sounds_PMC\Air_PMC\KA_rotor_orig_high_swist", 5.62341, 1, 1500};
        frequency = "rotorSpeed";
        volume = "camPos*10*(0 max (rotorThrust-0.95))";
        cone[] = {1.1, 3.14, 2, 0.9};
      };
      class EngineIn {
        sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_engi_int_1", 3.16228, 1};
        frequency = "rotorSpeed";
        volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
      };
      class RotorLowIn {
        sound[] = {"Ca\Sounds_PMC\Air_PMC\KA_rotor_orig", 0.562341, 1};
        frequency = "rotorSpeed";
        volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
      };
      class RotorHighIn {
        sound[] = {"Ca\Sounds_PMC\Air_PMC\KA_rotor_orig_high_swist", 0.316228, 1};
        frequency = "rotorSpeed";
        volume = "(1-camPos)*3*(rotorThrust-0.9)";
      };
    };
    class Library {
      libTextDesc = "$STR_PMC_LIB_KA60";
    };
    class AnimationSources : AnimationSources {
      class Doors {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class HideWeapon {
        source = "user";
        animPeriod = 1e-05;
        initPhase = 0;
      };
      class ReloadAnim {
        source = "reload";
        weapon = "PKT_spec";
      };
      class ReloadMagazine {
        source = "reloadmagazine";
        weapon = "PKT_spec";
      };
      class Revolving {
        source = "revolving";
        weapon = "PKT_spec";
      };
    };
  };
  class MH60S_Ori : Helicopter {
    scope = 2;
    displayName = "MH60S";
    faction = "rth_copter_class";
    destrType = "DestructWreck";
    vehicleClass = "Air";
    model = "\Ca\Air_E\UH60M\UH60M.p3d";
    mapSize = 17;
    picture = "\ca\air\data\ico\MH_60mg_CA.paa";
    Icon = "\ca\air\data\map_ico\icomap_MH60mg_CA.paa";
    side = 2;
    crew = "";
    accuracy = 1.5;
    attendant = 0;
    maxSpeed = 270;
    armor = 30;
    radarType = 0;
    damageResistance = 0.00232;
    mainRotorSpeed = 1.2;
    backRotorSpeed = 6.1;
    soundGetIn[] = {"Ca\Sounds_E\Air_E\UH1H\open_close", 0.316228, 1};
    soundGetOut[] = {"Ca\Sounds_E\Air_E\UH1H\open_close", 0.316228, 1, 40};
    soundEngineOnInt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_start_int", 0.446684, 1};
    soundEngineOnExt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_start_ext", 0.446684, 1, 700};
    soundEngineOffInt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_stop_int", 0.446684, 1};
    soundEngineOffExt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_stop_ext", 0.446684, 1, 700};
    class Sounds {
      class Engine {
        sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_engine_ext_2", 1, 0.8, 800};
        frequency = "rotorSpeed";
        volume = "camPos*((rotorSpeed-0.72)*4)";
      };
      class RotorLowOut {
        sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_ext_1", 2.51189, 1.1, 1400};
        frequency = "rotorSpeed";
        volume = "camPos*(0 max (rotorSpeed-0.1))";
        cone[] = {1.6, 3.14, 2, 0.5};
      };
      class RotorHighOut {
        sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_high_ext_1", 2.51189, 1.1, 1600};
        frequency = "rotorSpeed";
        volume = "camPos*10*(0 max (rotorThrust-0.9))";
        cone[] = {1.6, 3.14, 2, 0.5};
      };
      class EngineIn {
        sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_engine_int_1", 1, 0.8};
        frequency = "rotorSpeed";
        volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
      };
      class RotorLowIn {
        sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_int_1", 1.77828, 1.1};
        frequency = "rotorSpeed";
        volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
      };
      class RotorHighIn {
        sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_high_int_1", 3.16228, 1.1};
        frequency = "rotorSpeed";
        volume = "(1-camPos)*3*(rotorThrust-0.9)";
      };
    };
    driverInAction = "UH60M_Pilot_EP1";
    driverAction = "UH60M_Pilot_EP1";
    cargoAction[] = {"UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02", "UH60_Cargo02"};
    transportSoldier = 13;
    driverCompartments = "Compartment1";
    cargoCompartments[] = {"Compartment1"};
    enableSweep = 0;
    transportAmmo = 0;
    supplyRadius = 2.5;
    initCargoAngleY = 10;
    minCargoAngleY = -60;
    maxCargoAngleY = 120;
    type = 2;
    threat[] = {0.3, 0, 0.4};
    typicalCargo[] = {};
    cargoIsCoDriver[] = {1, 0, 0};
    weapons[] = {};
    magazines[] = {};
    transportMaxMagazines = 250;
    transportMaxWeapons = 50;
    transportMaxBackpacks = 5;
    forceHideDriver = 1;
    castDriverShadow = 1;
    castCargoShadow = 1;
    ejectDeadGunner = 1;
    ejectDeadCargo = 1;
    ejectDeadDriver = 1;
    ejectDeadCommander = 1;
    class AnimationSources {
      class Gatling_1 {
        source = "revolving";
        weapon = "M240_veh";
      };
      class Gatling_2 {
        source = "revolving";
        weapon = "M240_veh_2";
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"ca\Air_E\UH60M\Data\uh60m_dust_filter.rvmat", "ca\Air_E\UH60M\Data\uh60m_dust_filter.rvmat", "ca\Air_E\UH60M\Data\uh60m_dust_filter_destruct.rvmat", "ca\Air_E\UH60M\Data\uh60m_engine.rvmat", "ca\Air_E\UH60M\Data\uh60m_engine.rvmat", "ca\Air_E\UH60M\Data\uh60m_engine_destruct.rvmat", "ca\Air_E\UH60M\Data\uh60m_fuselage.rvmat", "ca\Air_E\UH60M\Data\uh60m_fuselage.rvmat", "ca\Air_E\UH60M\Data\uh60m_fuselage_destruct.rvmat", "ca\Air_E\UH60M\Data\uh60m_interior.rvmat", "ca\Air_E\UH60M\Data\uh60m_interior.rvmat", "ca\Air_E\UH60M\Data\uh60m_interior_destruct.rvmat", "ca\Air_E\UH60M\Data\uh60m_navijak.rvmat", "ca\Air_E\UH60M\Data\uh60m_navijak.rvmat", "ca\Air_E\UH60M\Data\uh60m_navijak_destruct.rvmat", "ca\Air_E\UH60M\Data\uh60m_glass.rvmat", "ca\Air_E\UH60M\Data\uh60m_glass_damage.rvmat", "ca\Air_E\UH60M\Data\uh60m_glass_damage.rvmat", "ca\data\data\default.rvmat", "ca\data\data\default.rvmat", "ca\Air_E\UH60M\Data\default_destruct.rvmat", "ca\Air_E\UH60M\Data\uh60m_engine_MEV.rvmat", "ca\Air_E\UH60M\Data\uh60m_engine_MEV.rvmat", "ca\Air_E\UH60M\Data\uh60m_engine_MEV_destruct.rvmat", "ca\Air_E\UH60M\Data\uh60m_fuselage_MEV.rvmat", "ca\Air_E\UH60M\Data\uh60m_fuselage_MEV.rvmat", "ca\Air_E\UH60M\Data\uh60m_fuselage_MEV_destruct.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default_destruct.rvmat"};
    };
    enableManualFire = 0;
    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[] = {"ca\air_e\uh60m\data\uh60m_fuselage_co.paa", "ca\air_e\uh60m\data\uh60m_engine_co.paa", "ca\air_e\uh60m\data\default_co.paa"};
    class HitPoints : HitPoints {
      class HitAvionics {
        armor = 0.2;
        material = -1;
        name = "elektronika";
        visual = "elektronika";
        passThrough = 0.5;
      };
      class HitVRotor {
        armor = 0.4;
        material = -1;
        name = "mala vrtule";
        visual = "mala vrtule staticka";
        passThrough = 0.5;
      };
      class HitHRotor {
        armor = 0.2;
        material = -1;
        name = "velka vrtule";
        visual = "velka vrtule staticka";
        passThrough = 0.5;
      };
      class HitEngine : HitEngine {
        armor = 0.32;
      };
    };
    class Turrets : Turrets {
      class MainTurret : MainTurret {
        body = "mainTurret";
        gun = "mainGun";
        minElev = -50;
        maxElev = 25;
        initElev = -80;
        minTurn = 30;
        maxTurn = 150;
        initTurn = 90;
        soundServo[] = {"", 0.01, 1};
        stabilizedInAxes = "StabilizedInAxesNone";
        gunBeg = "muzzle_1";
        gunEnd = "chamber_1";
        weapons[] = {"M240_veh"};
        magazines[] = {"100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240"};
        gunnerName = "$STR_POSITION_CREWCHIEF";
        gunnerOpticsModel = "\ca\weapons\optika_empty";
        gunnerOutOpticsShowCursor = 1;
        gunnerOpticsShowCursor = 1;
        gunnerAction = "UH60M_Gunner_EP1";
        gunnerInAction = "UH60M_Gunner_EP1";
        gunnerCompartments = "Compartment1";
        primaryGunner = 1;
        commanding = -3;
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
      };
      class RightDoorGun : MainTurret {
        body = "Turret_2";
        gun = "Gun_2";
        animationSourceBody = "Turret_2";
        animationSourceGun = "Gun_2";
        animationSourceHatch = "";
        selectionFireAnim = "zasleh_1";
        proxyIndex = 2;
        gunnerName = "$STR_POSITION_DOORGUNNER";
        commanding = -3;
        minTurn = -150;
        maxTurn = -30;
        initTurn = -90;
        weapons[] = {"M240_veh_2"};
        stabilizedInAxes = "StabilizedInAxesNone";
        gunBeg = "muzzle_2";
        gunEnd = "chamber_2";
        primaryGunner = 0;
        gunnerCompartments = "Compartment1";
        memoryPointGun = "machinegun_2";
        memoryPointGunnerOptics = "gunnerview_2";
      };
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
  };
  class Mi17_base : Helicopter {
    driverCompartments = "Compartment1";
    cargoCompartments[] = {"Compartment1"};
    class Turrets : Turrets {
      class MainTurret : MainTurret {
        minElev = -80;
        maxElev = 25;
        initElev = -80;
        minTurn = 30;
        maxTurn = 150;
        initTurn = 90;
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
        class Turrets : Turrets {
        };
      };
      class BackTurret : MainTurret {
        minElev = -80;
        maxElev = 25;
        initElev = -80;
        minTurn = -185;
        maxTurn = -45;
        initTurn = -155;
        class Turrets : Turrets {
        };
      };
    };
    class AnimationSources;
    model = "\ca\Air_E\Mi17\Mi_8MT";
    destrType = "DestructWreck";
    weapons[] = {};
    armor = 32;
    magazines[] = {};
    LockDetectionSystem = 0;
    IncommingMisslieDetectionSystem = 0;
    radarType = 0;
    maxSpeed = 180;
    threat[] = {0.5, 0, 0};
    hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
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
    aggregateReflectors[] = {{"Left", "Right"}};
    class HitPoints : HitPoints {
      class HitAvionics {
        armor = 0.2;
        material = -1;
        name = "elektronika";
        visual = "elektronika";
        passThrough = 0.5;
      };
      class HitVRotor {
        armor = 0.4;
        material = -1;
        name = "mala vrtule";
        visual = "mala vrtule staticka";
        passThrough = 0.5;
      };
      class HitHRotor {
        armor = 0.2;
        material = -1;
        name = "velka vrtule";
        visual = "velka vrtule staticka";
        passThrough = 0.5;
      };
      class HitEngine : HitEngine {
        armor = 0.6;
      };
      class HitGlass1 : HitGlass1 {
        armor = 0.2;
      };
      class HitGlass2 : HitGlass2 {
        armor = 0.2;
      };
      class HitGlass3 : HitGlass3 {
        armor = 0.2;
      };
      class HitGlass4 : HitGlass4 {
        armor = 0.2;
      };
      class HitGlass5 : HitGlass5 {
        armor = 0.2;
      };
      class HitGlass6 : HitGlass6 {
        armor = 0.2;
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"Ca\Air_E\Mi17\data\mi8_body_amt.rvmat", "Ca\Air_E\Mi17\data\mi8_body_amt_damage.rvmat", "Ca\Air_E\Mi17\data\mi8_body_amt_destruct.rvmat", "Ca\Air_E\Mi17\data\mi8_det_g.rvmat", "Ca\Air_E\Mi17\data\mi8_det_g_damage.rvmat", "Ca\Air_E\Mi17\data\mi8_det_g_destruct.rvmat", "Ca\Air_E\Mi17\data\mi8_glass.rvmat", "Ca\Air_E\Mi17\data\mi8_glass_damage.rvmat", "Ca\Air_E\Mi17\data\mi8_glass_damage.rvmat", "Ca\Air_E\Mi17\data\mi8_glass_in.rvmat", "Ca\Air_E\Mi17\data\mi8_glass_in_damage.rvmat", "Ca\Air_E\Mi17\data\mi8_glass_in_damage.rvmat", "Ca\Air_E\Mi17\data\mi8_inter.rvmat", "Ca\Air_E\Mi17\data\mi8_inter_damage.rvmat", "Ca\Air_E\Mi17\data\mi8_inter_destruct.rvmat", "ca\weapons\data\pkm.rvmat", "ca\weapons\data\pkm.rvmat", "ca\weapons\data\pkm_destruct.rvmat", "Ca\Air_E\Mi17\data\mi8_body_mtv.rvmat", "Ca\Air_E\Mi17\data\mi8_body_mtv_damage.rvmat", "Ca\Air_E\Mi17\data\mi8_body_mtv_destruct.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default_destruct.rvmat"};
    };
  };
  class Mi17_Ori : Mi17_base {
    displayName = "Mi17";
    scope = 2;
    side = 2;
    model = "\ori\air\Mi_8MT.p3d";
    faction = "rth_copter_class";
    crew = "";
    maxSpeed = 180;
    typicalCargo[] = {};
    hiddenSelectionsTextures[] = {"\ca\air_E\Data\mi17_body_IND_CO.paa", "\ca\air_E\Data\mi17_det_IND_CO.paa", "\ca\air\data\clear_empty.paa", "\ca\air\data\mi8_decals_ca.paa"};
    class Turrets : Turrets {
      class FrontTurret : MainTurret {
        weapons[] = {"PKT"};
        magazines[] = {"100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK"};
        gunnerCompartments = "Compartment1";
        commanding = -3;
      };
      class BackTurret : BackTurret {
        weapons[] = {"PKT_2"};
        magazines[] = {"100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK"};
        gunnerCompartments = "Compartment1";
        commanding = -3;
      };
    };
    weapons[] = {};
    magazines[] = {};
    class AnimationSources : AnimationSources {
      class ReloadAnim {
        source = "reload";
        weapon = "PKT";
      };
      class ReloadMagazine {
        source = "reloadmagazine";
        weapon = "PKT";
      };
      class Revolving {
        source = "revolving";
        weapon = "PKT";
      };
      class ReloadAnim_2 {
        source = "reload";
        weapon = "PKT_2";
      };
      class ReloadMagazine_2 {
        source = "reloadmagazine";
        weapon = "PKT_2";
      };
      class Revolving_2 {
        source = "revolving";
        weapon = "PKT_2";
      };
    };
    gunnerHasFlares = 0;
    commanderCanSee = "2+16+32";
    gunnerCanSee = "2+16+32";
    driverCanSee = "2+16+32";
    transportMaxMagazines = 250;
    transportMaxWeapons = 100;
    transportMaxBackpacks = 10;
  };
  class Mi17_Civilian_Ori : Mi17_base {
    vehicleClass = "Air";
    model = "\ca\air\Mi_8AMT";
    transportMaxMagazines = 300;
    transportMaxWeapons = 100;
    transportMaxBackpacks = 10;
    radartype = 0;
    displayName = "Mi17c";
    scope = 2;
    side = 2;
    faction = "rth_copter_class";
    crew = "";
    typicalCargo[] = {};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    class Turrets : Turrets {
    };
    commanderCanSee = "2+16+32";
    gunnerCanSee = "2+16+32";
    driverCanSee = "2+16+32";
    weapons[] = {};
    magazines[] = {};
    gunnerHasFlares = 0;
    threat[] = {0, 0, 0};
    hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
    hiddenSelectionsTextures[] = {"\ca\air\data\mi8_body_g_vsr_co.paa", "ca\air\data\mi8_det_g_co.paa", "ca\air\data\clear_empty.paa", "ca\air\data\mi8_decals_ca.paa"};
    ejectDeadGunner = 1;
    ejectDeadCargo = 1;
    ejectDeadDriver = 1;
    ejectDeadCommander = 1;
  };
  class Mi171ShCZ_Ori : Mi17_base {
    scope = 2;
    side = 2;
    model = "\ori\air\Mi_171";
    picture = "\ca\air\data\ico\mi17_HIP_CA.paa";
    Icon = "\ca\air\data\map_ico\icomap_mi17_CA.paa";
    enableSweep = 0;
    displayName = "Mi-171Sh";
    faction = "rth_copter_class";
    crew = "";
    armor = 30;
    typicalCargo[] = {};
    weapons[] = {};
    magazines[] = {};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    transportMaxMagazines = 250;
    transportMaxWeapons = 100;
    transportMaxBackpacks = 10;
    radarType = 0;
    threat[] = {1, 1, 1};
    LockDetectionSystem = 0;
    IncommingMisslieDetectionSystem = 0;
    hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
    hiddenSelectionsTextures[] = {"\CA\air_E\data\mi17_body_ACR_CO.paa", "\CA\air_E\data\mi17_det_ACR_CO.paa", "\ca\air_E\Data\mi17_decals2_ACR_CA.paa", "\ca\air\data\mi8_decals_ca.paa"};
    class UserActions {
    };
    class Turrets : Turrets {
      class LeftTurret : MainTurret {
        proxyIndex = 2;
        primaryGunner = 0;
        gunnerName = "crew chief";
        minElev = -50;
        maxElev = 30;
        initElev = 11;
        minTurn = 20;
        maxTurn = 155;
        initTurn = 80;
        gunnerCompartments = "Compartment1";
        commanding = -3;
        magazines[] = {"100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK"};
      };
      class BackTurret : BackTurret {
        gunnerName = "rear gunner";
        primaryGunner = 0;
        proxyIndex = 3;
        gunnerAction = "Mi171_Gunner_EP1";
        gunnerInAction = "Mi171_Gunner_EP1";
        minTurn = 130;
        maxTurn = 230;
        initTurn = 180;
        minElev = -50;
        maxElev = 10;
        initElev = 0;
        gunnerCompartments = "Compartment1";
        commanding = -3;
        magazines[] = {"100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK"};
      };
      class RightTurret : MainTurret {
        proxyIndex = 1;
        gunnerName = "door gunner";
        body = "Turret_3";
        gun = "Gun_3";
        animationSourceBody = "Turret_3";
        animationSourceGun = "Gun_3";
        minElev = -60;
        maxElev = 30;
        initElev = 11;
        minTurn = -155;
        maxTurn = -30;
        initTurn = -70;
        weapons[] = {"PKT_3"};
        stabilizedInAxes = "StabilizedInAxesNone";
        gunBeg = "muzzle_3";
        gunEnd = "chamber_3";
        gunnerAction = "Mi8_Gunner";
        gunnerInAction = "Mi8_Gunner";
        memoryPointGun = "muzzle_3";
        memoryPointGunnerOptics = "gunnerview3";
        selectionFireAnim = "zasleh3";
        primaryGunner = 1;
        gunnerCompartments = "Compartment1";
        commanding = -3;
        magazines[] = {"100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK"};
      };
    };
    class AnimationSources : AnimationSources {
      class HUDaction {
        source = "user";
        animPeriod = 2;
        initPhase = 0;
      };
      class HUDaction_Hide : HUDaction {
      };
      class ReloadAnim_3 {
        source = "reload";
        weapon = "PKT_3";
      };
      class ReloadMagazine_3 {
        source = "reloadmagazine";
        weapon = "PKT_3";
      };
      class Revolving_3 {
        source = "revolving";
        weapon = "PKT_3";
      };
      class HIDE_weapon_holders {
        source = "user";
        animPeriod = 1e-07;
        initPhase = 1;
      };
      class HIDE_front_armor : HIDE_weapon_holders {
        initPhase = 1;
      };
      class HIDE_exhaust : HIDE_weapon_holders {
        initPhase = 1;
      };
    };
  };
  class UH1H_Ori : Helicopter {
    expansion = 1;
    scope = 2;
    side = 2;
    crew = "";
    model = "Ca\air_E\UH1H\UH1H.p3d";
    displayName = "UH1H";
    faction = "rth_copter_class";
    typicalCargo[] = {};
    class TransportMagazines {
    };
    class TransportWeapons {
    };
    commanderCanSee = "2+16+32";
    gunnerCanSee = "2+16+32";
    driverCanSee = "2+16+32";
    transportMaxMagazines = 250;
    transportMaxWeapons = 30;
    transportMaxBackpacks = 6;
    radarType = 0;
    weapons[] = {};
    magazines[] = {};
    hasGunner = 1;
    enableSweep = 0;
    driverCompartments = "Compartment1";
    cargoCompartments[] = {"Compartment1"};
    hiddenSelectionsTextures[] = {"ca\air_E\UH1H\data\UH1D_TKA_CO.paa", "ca\air_E\UH1H\data\UH1D_in_TKA_CO.paa", "ca\air_E\UH1H\data\default_TKA_co.paa"};
    picture = "\ca\air_e\data\UI\Picture_uh1h_CA.paa";
    icon = "\ca\air_e\data\UI\Icon_uh1h_CA.paa";
    mapSize = 14;
    destrType = "DestructWreck";
    ejectDeadGunner = 1;
    ejectDeadCargo = 1;
    ejectDeadDriver = 1;
    ejectDeadCommander = 1;
    class Library {
      libTextDesc = "$STR_EP1_LIB_UH1H";
    };
    cargoAction[] = {"UH1H_Cargo_EP1", "UH1Y_Cargo03", "UH1Y_Cargo03", "UH1Y_Cargo02", "UH1Y_Cargo01", "UH1Y_Cargo01", "UH1Y_Cargo01"};
    cargoIsCoDriver[] = {0, 1};
    transportSoldier = 5;
    driverAction = "UH1H_Pilot_EP1";
    driverInAction = "UH1H_Pilot_EP1";
    driverOpticsModel = "";
    gunnerOpticsModel = "";
    threat[] = {0.4, 0, 0};
    mainRotorSpeed = 1.2;
    backRotorSpeed = 6.1;
    soundGetIn[] = {"Ca\Sounds_E\Air_E\UH1H\open_close", 0.316228, 1};
    soundGetOut[] = {"Ca\Sounds_E\Air_E\UH1H\open_close", 0.316228, 1, 40};
    soundEngineOnInt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_start_int", 0.446684, 1};
    soundEngineOnExt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_start_ext", 0.446684, 1, 700};
    soundEngineOffInt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_stop_int", 0.446684, 1};
    soundEngineOffExt[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_stop_ext", 0.446684, 1, 700};
    enableManualFire = 0;
    class Sounds {
      class Engine {
        sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_engine_ext_2", 1, 1, 800};
        frequency = "rotorSpeed";
        volume = "camPos*((rotorSpeed-0.72)*4)";
      };
      class RotorLowOut {
        sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_ext_1", 2.51189, 1, 1400};
        frequency = "rotorSpeed";
        volume = "camPos*(0 max (rotorSpeed-0.1))";
        cone[] = {1.6, 3.14, 2, 0.5};
      };
      class RotorHighOut {
        sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_high_ext_1", 2.51189, 1, 1600};
        frequency = "rotorSpeed";
        volume = "camPos*10*(0 max (rotorThrust-0.9))";
        cone[] = {1.6, 3.14, 2, 0.5};
      };
      class EngineIn {
        sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_engine_int_1", 1, 1};
        frequency = "rotorSpeed";
        volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
      };
      class RotorLowIn {
        sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_int_1", 1.77828, 1};
        frequency = "rotorSpeed";
        volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
      };
      class RotorHighIn {
        sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_rotor_high_int_1", 3.16228, 1};
        frequency = "rotorSpeed";
        volume = "(1-camPos)*3*(rotorThrust-0.9)";
      };
    };
    class Turrets : Turrets {
      class MainTurret : MainTurret {
        body = "mainTurret";
        gun = "mainGun";
        minElev = -60;
        maxElev = 30;
        initElev = -30;
        minTurn = -173;
        maxTurn = -3;
        initTurn = -70;
        soundServo[] = {"", 0.01, 1};
        stabilizedInAxes = "StabilizedInAxesNone";
        weapons[] = {"M240_veh"};
        magazines[] = {"100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240"};
        gunBeg = "muzzle";
        gunEnd = "chamber";
        gunnerName = "$STR_POSITION_DOORGUNNER";
        memoryPointsGetInGunner = "pos Gunner";
        memoryPointsGetInGunnerDir = "pos Gunner dir";
        gunnerOpticsModel = "\ca\weapons\optika_empty";
        memoryPointGunnerOptics = "gunnerview";
        gunnerOutOpticsShowCursor = 1;
        gunnerOpticsShowCursor = 0;
        gunnerAction = "UH1Y_Gunner";
        gunnerInAction = "UH1Y_Gunner";
        commanding = -3;
        primaryGunner = 0;
        gunnerCompartments = "Compartment1";
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
        LODTurnedOut = 1000;
        LODTurnedIn = 1000;
      };
      class LeftDoorGun : MainTurret {
        body = "Turret_2";
        gun = "Gun_2";
        animationSourceBody = "Turret_2";
        animationSourceGun = "Gun_2";
        weapons[] = {"M240_veh_2"};
        gunBeg = "muzzle_2";
        gunEnd = "chamber_2";
        memoryPointsGetInGunner = "pos Gunner";
        memoryPointsGetInGunnerDir = "pos Gunner dir";
        proxyIndex = 2;
        memoryPointGunnerOptics = "gunnerview_2";
        selectionFireAnim = "zasleh_1";
        gunnerName = "$STR_POSITION_CREWCHIEF";
        commanding = -3;
        minElev = -50;
        maxElev = 30;
        initElev = -30;
        minTurn = 3;
        maxTurn = 173;
        initTurn = 80;
        primaryGunner = 1;
        gunnerCompartments = "Compartment1";
      };
    };
    class AnimationSources : AnimationSources {
      class ReloadAnim {
        source = "reload";
        weapon = "M240_veh";
      };
      class ReloadMagazine {
        source = "reloadmagazine";
        weapon = "M240_veh";
      };
      class Revolving {
        source = "revolving";
        weapon = "M240_veh";
      };
      class ReloadAnim_2 {
        source = "reload";
        weapon = "M240_veh_2";
      };
      class ReloadMagazine_2 {
        source = "reloadmagazine";
        weapon = "M240_veh_2";
      };
      class Revolving_2 {
        source = "revolving";
        weapon = "M240_veh_2";
      };
    };
    armor = 30;
    damageResistance = 0.00394;
    class HitPoints : HitPoints {
      class HitAvionics {
        armor = 0.2;
        material = -1;
        name = "elektronika";
        visual = "elektronika";
        passThrough = 0.5;
      };
      class HitVRotor {
        armor = 0.4;
        material = -1;
        name = "mala vrtule";
        visual = "mala vrtule staticka";
        passThrough = 0.5;
      };
      class HitHRotor {
        armor = 0.2;
        material = -1;
        name = "velka vrtule";
        visual = "velka vrtule staticka";
        passThrough = 0.5;
      };
      class HitEngine : HitEngine {
        armor = 0.8;
      };
      class HitGlass1 : HitGlass1 {
        armor = 0.2;
      };
      class HitGlass2 : HitGlass2 {
        armor = 0.2;
      };
      class HitGlass3 : HitGlass3 {
        armor = 0.2;
      };
      class HitGlass4 : HitGlass4 {
        armor = 0.2;
      };
      class HitGlass5 : HitGlass5 {
        armor = 0.2;
      };
      class HitGlass6 : HitGlass6 {
        armor = 0.2;
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"ca\Air_E\UH1H\Data\UH1D.rvmat", "ca\Air_E\UH1H\Data\UH1D.rvmat", "ca\Air_E\UH1H\Data\UH1D_destruct.rvmat", "ca\Air_E\UH1H\Data\UH1D_cockpit1.rvmat", "ca\Air_E\UH1H\Data\UH1D_cockpit1.rvmat", "ca\Air_E\UH1H\Data\UH1D_cockpit1_destruct.rvmat", "ca\Air_E\UH1H\Data\UH1D_cockpit2.rvmat", "ca\Air_E\UH1H\Data\UH1D_cockpit2.rvmat", "ca\Air_E\UH1H\Data\UH1D_cockpit2_destruct.rvmat", "ca\Air_E\UH1H\Data\UH1D_cockpit3.rvmat", "ca\Air_E\UH1H\Data\UH1D_cockpit3.rvmat", "ca\Air_E\UH1H\Data\UH1D_cockpit3_destruct.rvmat", "ca\Air_E\UH1H\Data\UH1D_glass.rvmat", "ca\Air_E\UH1H\Data\UH1D_glass_damage.rvmat", "ca\Air_E\UH1H\Data\UH1D_glass_damage.rvmat", "ca\Air_E\UH1H\Data\UH1D_in.rvmat", "ca\Air_E\UH1H\Data\UH1D_in.rvmat", "ca\Air_E\UH1H\Data\UH1D_in_destruct.rvmat", "ca\Air_E\UH1H\Data\UH1D_instruments.rvmat", "ca\Air_E\UH1H\Data\UH1D_instruments.rvmat", "ca\Air_E\UH1H\Data\UH1D_instruments_destruct.rvmat", "ca\Air_E\UH1H\Data\UH1D_rotor.rvmat", "ca\Air_E\UH1H\Data\UH1D_rotor.rvmat", "ca\Air_E\UH1H\Data\UH1D_rotor_destruct.rvmat", "ca\data\data\default.rvmat", "ca\data\data\default.rvmat", "ca\Air_E\UH1H\Data\default_destruct.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default_destruct.rvmat"};
    };
    hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod"};
    irScanRangeMin = 100;
    irScanRangeMax = 1000;
    irScanToEyeFactor = 2;
  };
  class Plane : Air {
    class NewTurret;
    class ViewPilot;
  };
  class CYBP_Camel_Base : Plane {
    selectionHRotorStill = "vrtule staticka";
    selectionHRotorMove = "vrtule staticka";
    scope = 0;
    crew = "";
    side = 1;
    faction = "rth_copter_class";
    DisplayName = "Camel (West)";
    nameSound = "plane";
    accuracy = 1000;
    maxSpeed = 230;
    gearRetracting = 0;
    crewVulnerable = 1;
    ejectDeadGunner = 1;
    ejectDeadCargo = 1;
    ejectDeadDriver = 1;
    ejectDeadCommander = 1;
    flaps = 0;
    airBrake = 0;
    cabinOpening = 0;
    ejectSpeed[] = {0, 0, 0};
    ejectDamageLimit = 0.75;
    armor = 34;
    damageResistance = 0.00153;
    cost = 200000;
    model = "ori\air\camels\CYBP_Camel.p3d";
    picture = "\ori\air\camels\data\ico\BIScamel_CA.paa";
    Icon = "\ori\air\camels\data\map_ico\icomap_camel_CA.paa";
    mapSize = 8;
    weapons[] = {"VickerMGs", "CamelGrenades"};
    magazines[] = {"100Rnd_TwinVickers", "100Rnd_TwinVickers", "100Rnd_TwinVickers", "100Rnd_TwinVickers", "100Rnd_TwinVickers", "3Rnd_Grenade_Camel"};
    selectionFireAnim = "zasleh";
    landingSpeed = 75;
    landingAoa = "5.0*3.1415/180";
    irScanGround = 1;
    irScanRangeMin = 100;
    irScanRangeMax = 12000;
    flapsFrictionCoef = 2;
    wheelSteeringSensitivity = 0.5;
    driverAction = "Camel_a2_Pilot";
    driverCanSee = "CanSeeEye+CanSeeEar";
    soundDammage[] = {"\ori\air\camels\Data\Sound\Camel_dammage.wss", 4, 1, 400};
    soundCrash[] = {"\ori\air\camels\Data\Sound\Camel_crash.wss", 4, 1, 1000};
    soundGetIn[] = {"\ori\air\camels\Data\Sound\Camel_goin.wss", 4, 1, 150};
    soundGetOut[] = {"\ori\air\camels\Data\Sound\Camel_goout.wss", 20, 1.1, 150};
    soundEngineOnInt[] = {"\ori\air\camels\Data\Sound\Camel_start.wss", 0.452341, 1};
    soundEngineOnExt[] = {"\ori\air\camels\Data\Sound\Camel_start.wss", 0.884328, 1, 800};
    soundEngineOffInt[] = {"\ori\air\camels\Data\Sound\Camel_stop.wss", 0.400341, 1};
    soundEngineOffExt[] = {"\ori\air\camels\Data\Sound\Camel_stop.wss", 0.884328, 1, 800};
    insideSoundCoef = 1;
    class HitPoints {
      class HitHull {
        armor = 1;
        material = -1;
        name = "telo";
        visual = "trup";
        passThrough = 1;
      };
      class HitEngine {
        armor = 1;
        material = 60;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
    };
    class AnimationSources {
      class MGHide {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
    };
    class Sounds {
      class EngineLowOut {
        sound[] = {"\ori\air\camels\Data\Sound\Camel_engine.wss", 2.02341, 0.8, 1300};
        frequency = "1.0 min (rpm + 0.5)";
        volume = "engineOn*camPos*(rpm factor[0.85, 0])";
      };
      class EngineHighOut {
        sound[] = {"\ori\air\camels\Data\Sound\Camel_engine.wss", 2.62341, 1.3, 1900};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.55, 1.0])";
      };
      class ForsageOut {
        sound[] = {"\ori\air\camels\Data\Sound\Camel_idle1a.wss", 1.49189, 2, 1000};
        frequency = "1";
        volume = "engineOn*camPos*(thrust factor[0.5, 1.0])";
        cone[] = {3.14, 3.92, 2, 0.4};
      };
      class WindNoiseOut {
        sound[] = {"\ori\air\camels\Data\Sound\Camel_wind.wss", 3.75837, 3, 900};
        frequency = "(0.1+(1.2*(speed factor[1, 150])))";
        volume = "camPos*(speed factor[1, 150])";
      };
      class EngineLowIn {
        sound[] = {"\ori\air\camels\Data\Sound\Camel_engine.wss", 2.02341, 0.8};
        frequency = "1.0 min (rpm + 0.5)";
        volume = "engineOn*camPos*(rpm factor[0.85, 0])";
      };
      class EngineHighIn {
        sound[] = {"\ori\air\camels\Data\Sound\Camel_engine.wss", 2.62341, 1.3};
        frequency = "1";
        volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
      };
      class ForsageIn {
        sound[] = {"\ori\air\camels\Data\Sound\Camel_idle1a.wss", 1.49189, 2};
        frequency = "1";
        volume = "(1-camPos)*(engineOn*(thrust factor[0.8, 1.0]))";
      };
      class WindNoiseIn {
        sound[] = {"\ori\air\camels\Data\Sound\Camel_wind.wss", 3.75837, 3};
        frequency = "(0.1+(1.2*(speed factor[1, 150])))";
        volume = "(1-camPos)*(speed factor[1, 150])";
      };
      class NoiseIn {
        sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\noise2", 0.1, 0.5};
        frequency = "(0.1+(1.2*(speed factor[1, 150])))";
        volume = "(1-camPos)*(speed factor[1, 150])";
      };
    };
    gunAimDown = 0;
    transportSoldier = 0;
    typicalCargo[] = {};
    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[] = {"ori\air\camels\data\camel_west_co.paa", "", "ori\air\camels\data\clear_empty.paa"};
    extCameraPosition[] = {0, 1.2, -13};
    type = 2;
    threat[] = {0.1, 1, 0.7};
    audible = 8;
    aileronSensitivity = 0.66;
    elevatorSensitivity = 0.33;
    enableGPS = 0;
    envelope[] = {0, 0.2, 0.9, 2.1, 2.5, 3.3, 3.5, 3.2, 2.5, 2, 1.5, 1};
    terrainCoef = 3;
    fov = 0.5;
    class ViewOptics {
      initAngleX = 0;
      minAngleX = 0;
      maxAngleX = 0;
      initAngleY = 0;
      minAngleY = 0;
      maxAngleY = 0;
      initFov = 0.5;
      minFov = 0.5;
      maxFov = 0.5;
    };
    class ViewPilot {
      initFov = 1;
      minFov = 0.4;
      maxFov = 1.2;
      initAngleX = 10;
      minAngleX = -45;
      maxAngleX = 85;
      initAngleY = 0;
      minAngleY = -150;
      maxAngleY = 150;
    };
    class Reflectors {
      class Left {
        color[] = {0, 0, 0, 1};
        ambient[] = {0, 0, 0, 1};
        position = "L svetlo";
        direction = "konec L svetla";
        hitpoint = "L svetlo";
        selection = "L svetlo";
        size = 1;
        brightness = 0.25;
      };
      class Right {
        color[] = {0, 0, 0, 1};
        ambient[] = {0, 0, 0, 1};
        position = "P svetlo";
        direction = "konec P svetla";
        hitpoint = "P svetlo";
        selection = "P svetlo";
        size = 1;
        brightness = 0.25;
      };
    };
    class Library {
      libTextDesc = "$STR_BISCamelLIB";
    };
    class Damage {
      tex[] = {};
      mat[] = {"ori\air\camels\data\camel_west.rvmat", "ori\air\camels\data\camel_west.rvmat", "ori\air\camels\data\camel_west_destruct.rvmat"};
    };
  };
  class CYBP_Camel_us_ori : CYBP_Camel_Base {
    scope = 2;
    transportSoldier = 0;
  };
  class CYBP_Camel_rus_ori : CYBP_Camel_us_ori {
    side = 0;
    faction = "rth_copter_class";
    scope = 2;
    Crew = "RU_Soldier_Pilot";
    Model = "ori\air\camels\CYBP_Camel";
    hiddenSelectionsTextures[] = {"ori\air\camels\data\camel_east_co.paa", "", "ori\air\camels\data\clear_empty.paa"};
    picture = "ori\air\camels\data\ico\BIScamel2_CA.paa";
    typicalCargo[] = {};
    DisplayName = "Camel (East)";
    class Library {
      libTextDesc = "$STR_BISCamelLIB";
    };
    class Damage {
      tex[] = {};
      mat[] = {"ori\air\camels\data\camel_east.rvmat", "ori\air\camels\data\camel_east.rvmat", "ori\air\camels\data\camel_east_destruct.rvmat"};
    };
  };
  class CYBP_Camel_civ_ori : CYBP_Camel_us_ori {
    side = 3;
    faction = "rth_copter_class";
    Crew = "Pilot";
    Model = "ori\air\camels\CYBP_Camel";
    scope = 0;
    weapons[] = {};
    magazines[] = {};
    hiddenSelectionsTextures[] = {"ori\air\camels\data\clear_empty.paa", "", "ori\air\camels\data\clear_empty.paa"};
    picture = "ori\air\camels\data\ico\BIScamel2_CA.paa";
    DisplayName = "Camel (Civil)";
    transportSoldier = 0;
    typicalCargo[] = {};
    cargoGetInAction[] = {"GetInLow"};
    cargoGetOutAction[] = {"GetOutLow"};
    cargoAction[] = {"Mi8_Cargo", "Mi8_Cargo"};
    driverCompartments = "Compartment1";
    cargoCompartments[] = {"Compartment2"};
    memoryPointsGetInCargo = "pos driver";
    memoryPointsGetInCargoDir = "pos driver dir";
    class Library {
      libTextDesc = "$STR_BISCamelLIB";
    };
    class AnimationSources : AnimationSources {
      class MGHide {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"ori\air\camels\data\camel_east.rvmat", "ori\air\camels\data\camel_east.rvmat", "ori\air\camels\data\camel_east_destruct.rvmat"};
    };
  };
  class mig15bis_base : Plane {
    destrType = "DestructWreck";
    scope = 0;
    displayName = "$STR_DN_MIG15SHORT";
    vehicleClass = "Air";
    model = "\ori\air\mig15bis\mig15bis";
    picture = "\ori\air\mig15bis\picture_mig15bisSB_ca.paa";
    icon = "\ori\air\mig15bis\icomap_mig15bisSB_ca.paa";
    mapSize = 17;
    commanderCanSee = "2+16+32";
    gunnerCanSee = "2+16+32";
    driverCanSee = "2+16+32";
    side = 1;
    faction = "rth_copter_class";
    crew = "";
    camouflage = 9;
    audible = 5;
    accuracy = 0.2;
    supplyRadius = 8;
    laserScanner = 0;
    minFireTime = 10;
    driverAction = "MiG15_Pilot";
    gunAimDown = 0.07;
    hiddenSelections[] = {"num1", "num2", "num3", "num4", "texture1", "texture2"};
    weapons[] = {"VickerMGs", "CamelGrenades"};
    magazines[] = {"100Rnd_TwinVickers", "3Rnd_Grenade_Camel"};
    soundGetIn[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1", "db-25", 1, 40};
    soundGetOut[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-open1", "db-25", 1, 40};
    soundDammage[] = {"ca\sounds\Air\AV8\int\alarm_loop1", 0.01, 1, 100};
    soundEngineOnInt[] = {"ca\sounds\Air\AV8\int\int-av8b-start-1", 0.462341, 1, 600};
    soundEngineOnExt[] = {"ca\sounds\Air\AV8\ext\ext-jetair-start1", 0.462341, 1, 650};
    soundEngineOffInt[] = {"ca\sounds\Air\AV8\int\int-av8b-stop-1", 0.462341, 1, 600};
    soundEngineOffExt[] = {"ca\sounds\Air\AV8\ext\ext-jetair-stop1", 0.462341, 1, 650};
    class Sounds {
      class EngineLowOut {
        sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-engine-low1", 0.723872, 1, 600};
        frequency = "1";
        volume = "engineOn*(rpm factor[0.85, 0])";
      };
      class EngineHighOut {
        sound[] = {"\ori\air\mig15bis\sound\Mig15_idle3", 1, 1, 800};
        frequency = "1";
        volume = "2*(engineOn*(rpm factor[0.5, 1.0]))";
      };
      class ForsageOut {
        sound[] = {"\ori\air\mig15bis\sound\Mig15_outside", 1.2, 1, 2000};
        frequency = "1";
        volume = "2.2*(engineOn*(thrust factor[0.5, 1.0]))";
        cone[] = {3, 3.92, 2.2, 1.2};
      };
      class EngineLowIn {
        sound[] = {"\ori\air\mig15bis\sound\Mig15_inside", 1, 1};
        frequency = "0.5 + engineOn*(speed factor[1, 150]))";
        volume = "6*((1-camPos)*(engineOn*(rpm factor[0.85, 0])))";
      };
      class EngineHighIn {
        sound[] = {"\ori\air\mig15bis\sound\Mig15_inside", 1, 1};
        frequency = "0.5 + engineOn*(speed factor[1,150]))";
        volume = "6*engineOn*(1-camPos)";
      };
      class ForsageIn {
        sound[] = {"\ori\air\mig15bis\sound\Mig15_inside", 1, 1};
        frequency = "0.5 + engineOn*(speed factor[1,150]))";
        volume = "8*engineOn*(1-camPos)";
      };
    };
    threat[] = {1, 1, 1};
    crewVulnerable = 1;
    class Reflectors {
      class Left {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "L svetlo";
        direction = "konec L svetla";
        hitpoint = "L svetlo";
        selection = "L svetlo";
        size = 1;
        brightness = 3;
      };
      class Right {
        color[] = {0.8, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "P svetlo";
        direction = "konec P svetla";
        hitpoint = "P svetlo";
        selection = "P svetlo";
        size = 1;
        brightness = 3;
      };
    };
    class ViewPilot {
      initFov = 1;
      minFov = 0.3;
      maxFov = 1.2;
      initAngleX = 0;
      minAngleX = -40;
      maxAngleX = 85;
      initAngleY = 0;
      minAngleY = -150;
      maxAngleY = 150;
    };
    armor = 30;
    flapsFrictionCoef = 0.1;
    aileronSensitivity = 1.5;
    elevatorSensitivity = 0.8;
    damageResistance = 0.00285;
    armorStructured = 1;
    maxSpeed = 430;
    landingAoa = "rad 10";
    landingSpeed = 200;
    envelope[] = {0, 0.2, 0.9, 2.1, 3.5, 4.3, 5.5, 6.2, 7.5, 5, 3.5, 2, 1.5, 0.7, 0.5};
    irScanRangeMin = 50;
    irScanRangeMax = 3000;
    irScanGround = 1;
    irScanToEyeFactor = 16;
    selectionDamage = "zbytek";
    lightOnGear = 1;
    gearUpTime = 3.33;
    gearDownTime = 2;
    gearRetracting = 1;
    vtol = 0;
    ejectSpeed[] = {0, 40, 0};
    ejectDamageLimit = 0.85;
    selectionRotorMove = "exhaust";
    flaps = 1;
    airBrake = 0;
    cabinOpening = 0;
    insideSoundCoef = 0.1;
    class HitPoints {
      class HitHull {
        armor = 1;
        material = -1;
        name = "telo";
        visual = "trup";
        passThrough = 1;
      };
      class HitEngine {
        armor = 1;
        material = 60;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"ori\air\mig15bis\mat\mig15_01.rvmat", "ori\air\mig15bis\mat\mig15_01.rvmat", "ori\air\mig15bis\mat\mig15_01destr.rvmat", "ori\air\mig15bis\mat\mig15_02.rvmat", "ori\air\mig15bis\mat\mig15_02.rvmat", "ori\air\mig15bis\mat\mig15_02destr.rvmat"};
    };
  };
  class PlaneWreck;
  class mig15bis_wreck : PlaneWreck {
    scope = 1;
    class Armory {
      disabled = 1;
    };
    model = "\ori\air\mig15bis\mig15bis_wreck.p3d";
    typicalCargo[] = {};
    irTarget = 0;
    transportAmmo = 0;
    transportRepair = 0;
    transportFuel = 0;
    transportSoldier = 0;
    class Eventhandlers {
    };
  };
  class mig15bis_ori : mig15bis_base {
    scope = 2;
    displayName = "Mig15";
    weapons[] = {"VickerMGs", "CamelGrenades"};
    magazines[] = {"100Rnd_TwinVickers", "100Rnd_TwinVickers", "100Rnd_TwinVickers", "100Rnd_TwinVickers", "100Rnd_TwinVickers", "3Rnd_Grenade_Camel"};
    hiddenSelections[] = {"num1", "num2", "num3", "num4", "texture1", "texture2"};
    hiddenSelectionsTextures[] = {"", "", "", "", "\ori\air\mig15bis\mig15bissb_01_co.paa", "\ori\air\mig15bis\mig15bissb_02_co.paa"};
    supplyRadius = 5;
    maxSpeed = 550;
    transportMaxMagazines = 80;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 2;
    crewVulnerable = 1;
    accuracy = 1000;
    ejectDeadGunner = 1;
    ejectDeadCargo = 1;
    ejectDeadDriver = 1;
    ejectDeadCommander = 1;
  };
  class yak42 : Plane {
    scope = 2;
    supplyRadius = 5;
    model = "\ori\air\yak42\yak42";
    displayName = "$STR_YAK42_NAME1";
    side = 1;
    faction = "rth_copter_class";
    vehicleclass = "Air";
    extCameraPosition[] = {0, 9, -54};
    crew = "";
    driverAction = "C130_Pilot";
    armor = 12;
    damageResistance = 0.00153;
    gearUpTime = 1.5;
    gearDownTime = 1;
    transportMaxMagazines = 380;
    transportMaxWeapons = 20;
    transportMaxBackpacks = 7;
    crewVulnerable = 1;
    hasGunner = 1;
    driverIsCommander = 1;
    gunnerAction = "C130_Pilot";
    gunnerOpticsColor[] = {1, 1, 1, 1};
    transportSoldier = 60;
    cargoAction[] = {"Truck_Cargo01"};
    Icon = "\ori\air\yak42\icon.paa";
    picture = "\ori\air\yak42\picture.paa";
    mapSize = 42;
    gearRetracting = 1;
    nameSound = "plane";
    selectionDamage = "zbytek";
    soundGetIn[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1", 0.0562341, 1, 40};
    soundGetOut[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-open1", 0.0562341, 1, 40};
    soundDammage[] = {"ca\sounds\Air\AV8\int\alarm_loop1", 0.362341, 1};
    soundEngineOnInt[] = {"ca\sounds\Air\AV8\int\int-av8b-start-1", 0.216228, 1, 600};
    soundEngineOnExt[] = {"ca\sounds\Air\AV8\ext\ext-jetair-start1", 0.362341, 1, 600};
    soundEngineOffInt[] = {"ca\sounds\Air\AV8\int\int-av8b-stop-1", 0.216228, 1, 600};
    soundEngineOffExt[] = {"ca\sounds\Air\AV8\ext\ext-jetair-stop1", 0.362341, 1, 600};
    class Sounds {
      class EngineLowOut {
        sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-engine-low2", 1.21189, 1.3, 1000};
        frequency = "1.0 min (rpm + 0.5)";
        volume = "engineOn*camPos*(rpm factor[0.85, 0])";
      };
      class EngineHighOut {
        sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-engine-high2", 1.21189, 1.3, 1200};
        frequency = "1";
        volume = "engineOn*camPos*(rpm factor[0.55, 1.0])";
      };
      class ForsageOut {
        sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-forsage1", 1.37828, 0.8, 1000};
        frequency = "1";
        volume = "engineOn*camPos*(thrust factor[0.5, 1.0])";
        cone[] = {3, 3.92, 1.9, 0.5};
      };
      class WindNoiseOut {
        sound[] = {"ca\sounds\Air\AV8\ext\ext-jetair-wind1", 0.562341, 1, 150};
        frequency = "(0.1+(1.2*(speed factor[1, 150])))";
        volume = "camPos*(speed factor[1, 150])";
      };
      class EngineLowIn {
        sound[] = {"ca\sounds\Air\AV8\int\int-av8b-engine-low", 0.9, 1.3};
        frequency = "1.0 min (rpm + 0.5)";
        volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
      };
      class EngineHighIn {
        sound[] = {"ca\sounds\Air\AV8\int\int-av8b-engine", 0.9, 1.3};
        frequency = "1";
        volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
      };
      class ForsageIn {
        sound[] = {"ca\sounds\Air\AV8\int\int-av8b-forsage-1", 0.316228, 1};
        frequency = "1";
        volume = "(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
      };
      class WindNoiseIn {
        sound[] = {"ca\sounds\Air\AV8\int\int-jetair-wind1", 0.316228, 1};
        frequency = "(0.1+(1.2*(speed factor[1, 150])))";
        volume = "(1-camPos)*(speed factor[1, 150])";
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"ori\air\yak42\data\tx0\yak42_fuseside_t.rvmat", "ori\air\yak42\data\tx0\yak42_fuseside_t.rvmat", "ori\air\YAK42\data\destruct\yak_42_side_tav_destruct.rvmat", "ori\air\yak42\data\tx0\yak42_fusetop_t.rvmat", "ori\air\yak42\data\tx0\yak42_fusetop_t.rvmat", "ori\air\YAK42\data\destruct\yak42_fuseTop_t_tav_destruct.rvmat", "ori\air\yak42\data\tx0\yak42_tail_t.rvmat", "ori\air\yak42\data\tx0\yak42_tail_t.rvmat", "ori\air\YAK42\data\destruct\yak42_tail_t_tav_destruct.rvmat", "ori\air\yak42\data\tx0\yak42_wings_t.rvmat", "ori\air\yak42\data\tx0\yak42_wings_t.rvmat", "ori\air\YAK42\data\destruct\yak42_wings_t_destruct.rvmat"};
    };
    insideSoundCoef = 0.25;
    driverCompartments = "Compartment1";
    cargoCompartments[] = {"Compartment1"};
    camouflage = 250;
    audible = 10;
    accuracy = 0.5;
    commanderCanSee = "2+16+32";
    gunnerCanSee = "2+16+32";
    driverCanSee = "2+16+32";
    landingSpeed = 185;
    acceleration = 450;
    maxSpeed = 450;
    armorStructured = 0;
    wheelSteeringSensitivity = 9;
    irScanRangeMin = 125;
    irScanRangeMax = 40000;
    irScanToEyeFactor = 7;
    aileronSensitivity = 0.4;
    elevatorSensitivity = 2.7;
    brakeDistance = 300;
    flapsFrictionCoef = 0.3;
    envelope[] = {0, 0.1, 0.95, 2.7, 4.5, 5.65, 6, 5.85, 5.5, 4.8, 3.6, 1.8, 0};
    landingAoa = "rad 2";
    laserScanner = 1;
    gunAimDown = 0.045;
    minFireTime = 30;
    ejectDeadGunner = 1;
    ejectDeadCargo = 1;
    ejectDeadDriver = 1;
    ejectDeadCommander = 1;
    class ViewPilot {
      initFov = 0.8;
      minFov = 0.3;
      maxFov = 1.2;
      initAngleX = 0;
      minAngleX = -40;
      maxAngleX = 85;
      initAngleY = 0;
      minAngleY = -130;
      maxAngleY = 130;
    };
    cost = 20000000;
    threat[] = {1, 1, 0.3};
    class Reflectors {
      class Left {
        color[] = {0.5, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "L svetlo";
        direction = "konec L svetla";
        hitpoint = "L svetlo";
        selection = "L svetlo";
        size = 1;
        brightness = 0.7;
      };
      class Right {
        color[] = {0.5, 0.8, 1, 1};
        ambient[] = {0.07, 0.07, 0.07, 1};
        position = "P svetlo";
        direction = "konec P svetla";
        hitpoint = "P svetlo";
        selection = "P svetlo";
        size = 1;
        brightness = 0.7;
      };
      class Center {
        color[] = {0.9, 0.8, 0.8, 1};
        ambient[] = {0.1, 0.1, 0.1, 1};
        position = "c svetlo";
        direction = "konec c svetla";
        hitpoint = "c svetlo";
        selection = "c svetlo";
        size = 0.5;
        brightness = 0.3;
      };
    };
    class MarkerLights {
      class WhiteBlinking {
        color[] = {1, 1, 1, 1};
        ambient[] = {0.2, 0.2, 0.2, 1};
        name = "bily pozicni blik";
        brightness = 0.01;
        blinking = 1;
      };
      class RedStill {
        color[] = {0.8, 0.02, 0.02, 1};
        ambient[] = {0.5, 0.03, 0.03, 1};
        name = "cerveny pozicni";
        brightness = 0.01;
        blinking = 0;
      };
      class GreenStill {
        color[] = {0.02, 0.8, 0.02, 1};
        ambient[] = {0.03, 0.5, 0.03, 1};
        name = "zeleny pozicni";
        brightness = 0.01;
        blinking = 0;
      };
      class BlueStill {
        color[] = {0.02, 0.2, 0.4, 1};
        ambient[] = {0.03, 0.03, 0.1, 1};
        name = "blue";
        brightness = 0.01;
        blinking = 0;
      };
    };
    irTarget = 1;
    irScanRange = 2000;
    irScanGround = 1;
    weapons[] = {};
    magazines[] = {};
    class HitPoints {
      class HitHull {
        armor = 1;
        material = -1;
        name = "telo";
        visual = "trup";
        passThrough = 1;
      };
      class HitEngine {
        armor = 1;
        material = 60;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
    };
    class AnimationSources {
      class ngear {
        source = "user";
        initPhase = 0;
        animPeriod = 3;
      };
      class gdoor_fr {
        source = "user";
        initPhase = 0;
        animPeriod = 3;
      };
      class gdoor_fr2 {
        source = "user";
        initPhase = 0;
        animPeriod = 3;
      };
      class gdoor_fl {
        source = "user";
        initPhase = 0;
        animPeriod = 3;
      };
      class gdoor_fl2 {
        source = "user";
        initPhase = 0;
        animPeriod = 3;
      };
      class gear_l {
        source = "user";
        initPhase = 0;
        animPeriod = 3;
      };
      class gear_l_st {
        source = "user";
        initPhase = 0;
        animPeriod = 3;
      };
      class gdoor_l {
        source = "user";
        initPhase = 0;
        animPeriod = 3;
      };
      class gdoor_l_st {
        source = "user";
        initPhase = 0;
        animPeriod = 3;
      };
      class gdoor_l2 {
        source = "user";
        initPhase = 0;
        animPeriod = 3;
      };
      class gear_r {
        source = "user";
        initPhase = 0;
        animPeriod = 3;
      };
      class gear_r_st {
        source = "user";
        initPhase = 0;
        animPeriod = 3;
      };
      class gdoor_r {
        source = "user";
        initPhase = 0;
        animPeriod = 3;
      };
      class gdoor_r_st {
        source = "user";
        initPhase = 0;
        animPeriod = 3;
      };
      class gdoor_r2 {
        source = "user";
        initPhase = 0;
        animPeriod = 3;
      };
      class door {
        source = "user";
        initPhase = 0;
        animPeriod = 5;
      };
    };
    class UserActions {
    };
    class Exhausts {
      class Exhaust1 {
        position = "exhaust1";
        direction = "exhaust1_dir";
        effect = "ExhaustsEffectPlane";
      };
      class Exhaust2 {
        position = "exhaust2";
        direction = "exhaust2_dir";
        effect = "ExhaustsEffectPlane";
      };
      class Exhaust3 {
        position = "exhaust3";
        direction = "exhaust3_dir";
        effect = "ExhaustsEffectPlane";
      };
    };
  };
  class L39_base;
  class L39_Ori : L39_base {
    displayName = "L-39M";
    scope = 2;
    side = 0;
    model = "\ori\air\L39\L39.p3d";
    destrType = "DestructWreck";
    faction = "rth_copter_class";
    crew = "";
    armor = 35;
    typicalCargo[] = {};
    maxSpeed = 550;
    supplyRadius = 5;
    damageResistance = 0.00185;
    crewVulnerable = 1;
    commanderCanSee = "2+16+32";
    gunnerCanSee = "2+16+32";
    driverCanSee = "2+16+32";
    weapons[] = {"VickerMGs", "CamelGrenades"};
    magazines[] = {"100Rnd_TwinVickers", "100Rnd_TwinVickers", "100Rnd_TwinVickers", "100Rnd_TwinVickers", "100Rnd_TwinVickers", "3Rnd_Grenade_Camel"};
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {"\ori\air\L39\data\l-39_body_tav_co.paa", "\ori\air\L39\data\l-39_body_tav_1_co.paa"};
    transportMaxMagazines = 80;
    transportMaxWeapons = 10;
    transportMaxBackpacks = 2;
    ejectDeadGunner = 1;
    ejectDeadCargo = 1;
    ejectDeadDriver = 1;
    ejectDeadCommander = 1;
    soundGetIn[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1", 0.0562341, 1, 40};
    soundGetOut[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-open1", 0.0562341, 1, 40};
    soundDammage[] = {"ca\sounds\Air\AV8\int\alarm_loop1", 0.362341, 1};
    soundEngineOnInt[] = {"ca\sounds\Air\AV8\int\int-av8b-start-1", 0.216228, 1, 600};
    soundEngineOnExt[] = {"ca\sounds\Air\AV8\ext\ext-jetair-start1", 0.362341, 1, 600};
    soundEngineOffInt[] = {"ca\sounds\Air\AV8\int\int-av8b-stop-1", 0.216228, 1, 600};
    soundEngineOffExt[] = {"ca\sounds\Air\AV8\ext\ext-jetair-stop1", 0.362341, 1, 600};
    class HitPoints {
      class HitHull {
        armor = 1;
        material = -1;
        name = "telo";
        visual = "trup";
        passThrough = 1;
      };
      class HitEngine {
        armor = 1;
        material = 60;
        name = "motor";
        visual = "motor";
        passThrough = 1;
      };
    };
  };
};
class CfgWeapons {
  class MGun;
  class TwinVickers : MGun {
    scope = 2;
    displayName = "AirGun 7.62x54";
    nameSound = "Mgun";
    initSpeed = 740;
    reloadTime = 0.05;
    autoFire = 1;
    dispersion = 0.0013;
    minRange = 0;
    minRangeProbab = 0.9;
    midRange = 400;
    midRangeProbab = 0.58;
    maxRange = 600;
    maxRangeProbab = 0.04;
    magazines[] = {"100Rnd_TwinVickers"};
    canLock = 0;
    cursor = "";
    cursorAim = "";
  };
  class LauncherCore;
  class CamelPods : LauncherCore {
    scope = 1;
    cursorAim = "\ca\Weapons\Data\clear_empty";
    cursor = "Rocket";
    cursorSize = 1;
    type = 65536;
    reloadTime = 0.2;
    autoFire = 1;
    minRange = 50;
    minRangeProbab = 0.1;
    midRange = 600;
    midRangeProbab = 0.25;
    maxRange = 2500;
    maxRangeProbab = 0.05;
    canLock = 2;
    nameSound = "rockets";
  };
  class VickerMGs : TwinVickers {
    cursorAim = "\ca\Weapons\Data\clear_empty";
    cursor = "\ca\Weapons\Data\clear_empty";
    magazines[] = {"100Rnd_TwinVickers"};
    begin1[] = {"\ori\air\camels\Data\Sound\Camel_gun_einfach.wss", 1.20828, 1.05, 900};
    begin2[] = {"\ori\air\camels\Data\Sound\Camel_gun_einfach.wss", 1.20828, 1, 900};
    soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
    reloadTime = 0.065;
    burst = 2;
    aiDispersionCoefY = 21;
    aiDispersionCoefX = 21;
    initSpeed = 740;
    autoFire = 1;
    dispersion = 0.0013;
    minRange = 0;
    minRangeProbab = 0.9;
    midRange = 400;
    midRangeProbab = 0.58;
    maxRange = 600;
    maxRangeProbab = 0.04;
  };
  class CamelGrenades : CamelPods {
    sound[] = {"\ori\air\camels\Data\Sound\Camel_granatwurf.wss", 10, 1, 500};
    autoFire = 0;
    magazines[] = {"3Rnd_Grenade_Camel"};
    reloadTime = 3;
    aiDispersionCoefY = 21;
    aiDispersionCoefX = 21;
    magazineReloadTime = 0.1;
    dispersion = 0.015;
    minRange = 1;
    minRangeProbab = 0.8;
    midRange = 50;
    midRangeProbab = 0.7;
    maxRange = 150;
    maxRangeProbab = 0.1;
    autoReload = 1;
    canLock = "LockNo";
  };
};
class CfgMagazines {
  class VehicleMagazine;
  class 3Rnd_Grenade_Camel : VehicleMagazine {
    scope = 2;
    displayName = "Grenade";
    ammo = "G_Camel_HE";
    count = 3;
    initSpeed = 3;
    maxLeadSpeed = 200;
    nameSound = "grenade";
  };
  class 100Rnd_TwinVickers : VehicleMagazine {
    scope = 2;
    displayName = "VickersM 7.62x54";
    ammo = "B_77x56_Ball";
    count = 100;
    initSpeed = 740;
    maxLeadSpeed = 200;
    tracersEvery = 1;
    nameSound = "mgun";
  };
};
class CfgAmmo {
  class Default;
  class CamelRCore : Default {
    simulation = "shotRocket";
    simulationStep = 0.05;
    timeToLive = 20;
    maneuvrability = 0;
    maxControlRange = 0;
    initTime = 0.05;
    thrustTime = 1;
    thrust = 1500;
    visibleFire = 32;
    audibleFire = 32;
    visibleFireTime = 20;
    cost = 2000;
    deflecting = 5;
  };
  class BulletBase;
  class B_77x56_Ball : BulletBase {
    tracerScale = 1.2;
    tracerStartTime = 0.03;
    tracerEndTime = 1;
    soundFly[] = {"", 1e-08, 1};
    soundDefault1[] = {"ca\sounds\weapons\hits\hit_concrete_01", 0.316228, 1, 60};
    soundWood1[] = {"ca\sounds\weapons\hits\hit_wood_01", 0.316228, 1, 60};
    hitWood[] = {"soundWood1", 0.1};
    hitDefault[] = {"soundDefault1", 0.2};
  };
  class G_Camel_HE : CamelRCore {
    model = "\ca\Weapons\granat";
    hit = 20;
    indirectHit = 12;
    indirectHitRange = 5;
    visibleFire = 18;
    audibleFire = 18;
    visibleFireTime = 3;
    explosive = 1;
    cost = 10;
    initTime = 0;
    thrustTime = 0.01;
    thrust = 0.01;
    whistleDist = 10;
    soundHit[] = {"Ca\sounds\Weapons\explosions\GP25_explosion", 5.62341, 1, 800};
  };
};
