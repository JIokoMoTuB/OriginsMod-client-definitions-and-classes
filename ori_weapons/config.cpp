class CfgPatches {
  class ori_weapons {
    units[] = {};
    weapons[] = {"M249_m145_Ori", "M249_m145_Ori_b", "VSS_Ori", "Ori_mosin", "Ori_PPS43", "ori_vil_uzi_rozkl", "ori_vil_uzi_sd", "ori_vil_uzimini", "ori_vil_uzimini_SD", "Ori_Sa48SMG", "Ori_SKS", "Ori_Tt33", "Ori_APS", "Ori_APS_SD", "Ori_cz75", "Ori_cz83", "Ori_mossberg", "ori_autocrossbow", "ori_autocrossbowH", "PKT_spec", "G36C_SD_camo", "BAF_L85A2_RIS_NVV", "AA12_Ori", "BAF_L110A1_Ori", "BAF_L7A2_GPMG_Ori"};
    requiredVersion = 0.1;
    requiredAddons[] = {"CAWeapons"};
    magazines[] = {"12Rnd_B_AA12_Pellets", "12Rnd_B_AA12_74Slug", "100Rnd_556x45_MG36", "8Rnd_9x18_Makarov", "8Rnd_9x18_MakarovSD", "15Rnd_9x19_M9", "15Rnd_9x19_M9SD", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5SD", "30Rnd_545x39_AK", "30Rnd_545x39_AKSD", "30Rnd_762x39_AK47", "1Rnd_HE_M203", "1Rnd_Smoke_M203", "FlareWhite_M203", "FlareGreen_M203", "30Rnd_556x45_G36", "30Rnd_556x45_G36SD", "30Rnd_9x19_UZI", "17Rnd_9x19_glock17", "Ori_mosin_clip", "Ori_35Rnd_smg", "Ori_10Rnd_SKS", "Ori_12Rnd_maka", "Ori_8Rnd_TT", "Ori_20Rnd_APS", "Ori_20Rnd_APS_SD", "ori_crossbow_mag", "ori_hcrossbow_mag", "ori_hcrossbow_mage", "ori_hcrossbow_magt", "ItemVodkaN", "ItemBeerS", "Item_1p29", "Item_Kobra", "Item_PSO", "Item_GP25", "Item_Acog", "Item_Acog2", "Item_Acog3", "Item_Acog4", "Item_Aimpoint", "Item_AUG", "Item_ELCAN", "Item_NSPU", "Item_anpvs4", "Item_Holo", "Item_M203", "Item_HuntS", "Item_Silencer", "Item_FRF2_1", "Item_GM_762_1", "Item_Tp64_1"};
    ammo[] = {"B_762x39_Ball", "Ori_PARA_Ball", "Ori_762x43_Ball", "ori_crossbowbolt", "ori_hcrossbowbolt", "ori_crossbowbolt_epi", "ori_crossbowbolt_stu", "Beer_Bottle", "Vodka_Bottle"};
  };
};
class Mode_Burst;
class Mode_FullAuto;
class Mode_SemiAuto {
  multiplier = 1;
  burst = 1;
  dispersion = 0.0002;
  sound[] = {"", 10, 1};
  soundBegin[] = {"sound", 1};
  soundEnd[] = {};
  soundLoop[] = {};
  soundContinuous = 0;
  soundBurst = 1;
  reloadTime = 0.1;
  ffCount = 1;
  ffMagnitude = 0.5;
  ffFrequency = 11;
  flash = "gunfire";
  flashSize = 0.1;
  recoil = "Empty";
  recoilProne = "Empty";
  autoFire = 0;
  aiRateOfFire = 0.5;
  aiRateOfFireDistance = 500;
  useAction = 0;
  useActionTitle = "";
  showToPlayer = 1;
  minRange = 30;
  minRangeProbab = 0.25;
  midRange = 300;
  midRangeProbab = 0.58;
  maxRange = 600;
  maxRangeProbab = 0.04;
  displayName = "Semi";
};
class cfgWeapons {
  class Rifle;
  class AK_74;
  class M249;
  class M249_DZ : M249 {
    type = "1";
  };
  class M249_m145_Ori : M249 {
    scope = 2;
    type = "1";
    model = "\ca\weapons_E\M249\m249_m145.p3d";
    displayname = "M249 scope";
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
    picture = "\CA\weapons_e\data\icons\m249_m145_ca.paa";
    modelOptics = "\Ca\weapons_E\M249\M145.p3d";
    visionMode[] = {};
    opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
    opticsZoomMax = 0.0732;
    distanceZoomMax = 300;
    opticsZoomMin = 0.0732;
    distanceZoomMin = 300;
    opticsZoomInit = 0.0732;
    irDistance = 100;
    magazines[] = {"100Rnd_556x45_M249", "200Rnd_556x45_M249", "30Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "30Rnd_556x45_StanagSD", "100Rnd_556x45_BetaCMag", "30Rnd_556x45_G36", "30Rnd_556x45_G36SD"};
    class close : Mode_FullAuto {
      aiRateOfFireDistance = 50;
      minRange = 10;
      minRangeProbab = 0.05;
      midRange = 20;
      midRangeProbab = 0.58;
      maxRange = 50;
      maxRangeProbab = 0.04;
      showToPlayer = 0;
    };
    class short : close {
      aiRateOfFireDistance = 400;
      minRange = 75;
      minRangeProbab = 0.05;
      midRange = 200;
      midRangeProbab = 0.58;
      maxRange = 400;
      maxRangeProbab = 0.04;
    };
    class medium : close {
      aiRateOfFireDistance = 800;
      minRange = 250;
      minRangeProbab = 0.05;
      midRange = 500;
      midRangeProbab = 0.58;
      maxRange = 800;
      maxRangeProbab = 0.04;
    };
    class OpticsModes {
      class M145 {
        opticsID = 1;
        useModelOptics = 1;
        opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
        opticsZoomMax = 0.0732;
        distanceZoomMax = 300;
        opticsZoomMin = 0.0732;
        distanceZoomMin = 300;
        opticsZoomInit = 0.0732;
        memoryPointCamera = "opticView";
        visionMode[] = {};
        opticsFlare = 1;
        opticsDisablePeripherialVision = 1;
        cameraDir = "";
        discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
        discreteDistanceInitIndex = 2;
      };
    };
  };
  class M249_m145_Ori_b : M249 {
    displayname = "M249 scope(Broken)";
    modelOptics = "-";
    opticsZoomMin = 0.25;
    opticsZoomMax = 1.1;
    opticsZoomInit = 0.5;
    distanceZoomMin = 300;
    distanceZoomMax = 300;
    discreteDistance[] = {100, 200, 300};
    discreteDistanceInitIndex = 2;
    scope = 2;
    type = "1";
    model = "\ca\weapons_E\M249\m249_m145.p3d";
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
    picture = "\CA\weapons_e\data\icons\m249_m145_ca.paa";
    visionMode[] = {"Normal"};
    opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
    irDistance = 100;
    magazines[] = {"100Rnd_556x45_M249", "200Rnd_556x45_M249", "30Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "30Rnd_556x45_StanagSD", "100Rnd_556x45_BetaCMag", "30Rnd_556x45_G36", "30Rnd_556x45_G36SD"};
    class close : Mode_FullAuto {
      aiRateOfFireDistance = 50;
      minRange = 10;
      minRangeProbab = 0.05;
      midRange = 20;
      midRangeProbab = 0.58;
      maxRange = 50;
      maxRangeProbab = 0.04;
      showToPlayer = 0;
    };
    class short : close {
      aiRateOfFireDistance = 400;
      minRange = 75;
      minRangeProbab = 0.05;
      midRange = 200;
      midRangeProbab = 0.58;
      maxRange = 400;
      maxRangeProbab = 0.04;
    };
    class medium : close {
      aiRateOfFireDistance = 800;
      minRange = 250;
      minRangeProbab = 0.05;
      midRange = 500;
      midRangeProbab = 0.58;
      maxRange = 800;
      maxRangeProbab = 0.04;
    };
  };
  class M240;
  class M240_DZ : M240 {
    type = "1";
    modes[] = {"manual", "close", "short", "medium", "far"};
    class manual : Mode_FullAuto {
      recoil = "recoil_auto_machinegun_8outof10";
      recoilProne = "recoil_auto_machinegun_prone_5outof10";
      dispersion = 0.0008;
      begin1[] = {"ca\sounds\Weapons\machineguns\M240_single1", 1.77828, 1, 1000};
      begin2[] = {"ca\sounds\Weapons\machineguns\M240_single2", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
      soundContinuous = 0;
      soundBurst = 0;
      minRange = 0;
      minRangeProbab = 0.3;
      midRange = 5;
      midRangeProbab = 0.58;
      maxRange = 10;
      maxRangeProbab = 0.04;
      showToPlayer = 1;
      reloadTime = 0.0708762;
      displayName = "";
    };
    class close : manual {
      burst = 10;
      aiRateOfFire = 0.5;
      aiRateOfFireDistance = 50;
      minRange = 10;
      minRangeProbab = 0.05;
      midRange = 20;
      midRangeProbab = 0.58;
      maxRange = 50;
      maxRangeProbab = 0.7;
      showToPlayer = 0;
    };
    class short : close {
      burst = 8;
      aiRateOfFire = 2;
      aiRateOfFireDistance = 300;
      minRange = 50;
      minRangeProbab = 0.05;
      midRange = 150;
      midRangeProbab = 0.58;
      maxRange = 300;
      maxRangeProbab = 0.7;
    };
    class medium : close {
      burst = 12;
      aiRateOfFire = 1;
      aiRateOfFireDistance = 600;
      minRange = 200;
      minRangeProbab = 0.05;
      midRange = 400;
      midRangeProbab = 0.58;
      maxRange = 600;
      maxRangeProbab = 0.7;
    };
    class far : close {
      burst = 16;
      aiRateOfFire = 1;
      aiRateOfFireDistance = 1000;
      minRange = 400;
      minRangeProbab = 0.05;
      midRange = 600;
      midRangeProbab = 0.4;
      maxRange = 900;
      maxRangeProbab = 0.9;
    };
  };
  class Mk_48;
  class Mk_48_DZ : Mk_48 {
    type = "1";
    displayName = "Mk 48 Mod 0";
    class manual : Mode_FullAuto {
      recoil = "recoil_auto_machinegun_7outof10";
      recoilProne = "recoil_auto_machinegun_prone_4outof10";
      dispersion = 0.0011;
      begin1[] = {"ca\sounds\Weapons\machineguns\M240_single1", 1.77828, 1, 1000};
      begin2[] = {"ca\sounds\Weapons\machineguns\M240_single2", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
      soundContinuous = 0;
      soundBurst = 0;
      minRange = 0;
      minRangeProbab = 0.3;
      midRange = 5;
      midRangeProbab = 0.58;
      maxRange = 10;
      maxRangeProbab = 0.04;
      showToPlayer = 1;
      reloadTime = 0.0708762;
      displayName = "";
    };
    class close : manual {
      recoil = "recoil_auto_machinegun_7outof10";
      recoilProne = "recoil_auto_machinegun_prone_4outof10";
      dispersion = 0.0011;
      burst = 10;
      aiRateOfFire = 0.5;
      aiRateOfFireDistance = 50;
      minRange = 10;
      minRangeProbab = 0.05;
      midRange = 20;
      midRangeProbab = 0.58;
      maxRange = 50;
      maxRangeProbab = 0.7;
      showToPlayer = 0;
    };
    class short : close {
      recoil = "recoil_auto_machinegun_2outof10";
      recoilProne = "recoil_auto_machinegun_prone_2outof10";
      dispersion = 0.0011;
      burst = 8;
      aiRateOfFire = 2;
      aiRateOfFireDistance = 300;
      minRange = 50;
      minRangeProbab = 0.05;
      midRange = 150;
      midRangeProbab = 0.58;
      maxRange = 300;
      maxRangeProbab = 0.7;
    };
    class medium : close {
      recoil = "recoil_auto_machinegun_2outof10";
      recoilProne = "recoil_auto_machinegun_prone_2outof10";
      dispersion = 0.0011;
      burst = 12;
      aiRateOfFire = 1;
      aiRateOfFireDistance = 600;
      minRange = 200;
      minRangeProbab = 0.05;
      midRange = 400;
      midRangeProbab = 0.58;
      maxRange = 600;
      maxRangeProbab = 0.7;
    };
    class far : close {
      recoil = "recoil_auto_machinegun_2outof10";
      recoilProne = "recoil_auto_machinegun_prone_2outof10";
      dispersion = 0.0011;
      burst = 16;
      aiRateOfFire = 1;
      aiRateOfFireDistance = 1000;
      minRange = 400;
      minRangeProbab = 0.05;
      midRange = 600;
      midRangeProbab = 0.4;
      maxRange = 900;
      maxRangeProbab = 0.9;
    };
  };
  class M249_EP1;
  class M249_EP1_DZ : M249_EP1 {
    type = "1";
  };
  class M60A4_EP1;
  class M60A4_EP1_DZ : M60A4_EP1 {
    type = "1";
    class manual : Mode_FullAuto {
      recoil = "recoil_auto_machinegun_8outof10";
      recoilProne = "recoil_auto_machinegun_prone_5outof10";
      dispersion = 0.0008;
      begin1[] = {"Ca\Sounds_E\Weapons_E\M60e4\m60e4_single1", 3.16228, 1, 1500};
      soundBegin[] = {"begin1", 1};
      soundContinuous = 0;
      soundBurst = 0;
      minRange = 0;
      minRangeProbab = 0.3;
      midRange = 5;
      midRangeProbab = 0.58;
      maxRange = 10;
      maxRangeProbab = 0.04;
      showToPlayer = 1;
      reloadTime = 0.086;
      displayName = "";
    };
    class close : manual {
      burst = 10;
      aiRateOfFire = 0.5;
      aiRateOfFireDistance = 50;
      minRange = 10;
      minRangeProbab = 0.05;
      midRange = 20;
      midRangeProbab = 0.58;
      maxRange = 50;
      maxRangeProbab = 0.7;
      showToPlayer = 0;
    };
    class short : close {
      burst = 8;
      aiRateOfFire = 2;
      aiRateOfFireDistance = 300;
      minRange = 50;
      minRangeProbab = 0.05;
      midRange = 150;
      midRangeProbab = 0.58;
      maxRange = 300;
      maxRangeProbab = 0.7;
    };
    class medium : close {
      recoil = "recoil_auto_machinegun_2outof10";
      recoilProne = "recoil_auto_machinegun_prone_2outof10";
      burst = 12;
      aiRateOfFire = 1;
      aiRateOfFireDistance = 600;
      minRange = 200;
      minRangeProbab = 0.05;
      midRange = 400;
      midRangeProbab = 0.58;
      maxRange = 600;
      maxRangeProbab = 0.7;
    };
    class far : close {
      recoil = "recoil_auto_machinegun_2outof10";
      recoilProne = "recoil_auto_machinegun_prone_2outof10";
      burst = 16;
      aiRateOfFire = 1;
      aiRateOfFireDistance = 1000;
      minRange = 400;
      minRangeProbab = 0.05;
      midRange = 600;
      midRangeProbab = 0.4;
      maxRange = 900;
      maxRangeProbab = 0.7;
    };
  };
  class PK;
  class PK_DZ : PK {
    type = "1";
    discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900};
    discreteDistanceInitIndex = 2;
  };
  class Pecheneg_Ori : PK {
    type = "1";
    model = "\ca\weapons\Pecheneg_MG_proxy";
    displayName = "$STR_n_Pecheneg_Ori";
    dexterity = 0.7;
    picture = "\CA\weapons\data\equip\w_pecheneg_mg_ca.paa";
    modelOptics = "\ca\weapons\2Dscope_Pecheneg";
    opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur3"};
    opticsFlare = 1;
    opticsDisablePeripherialVision = 1;
    opticsZoomInit = 0.0623;
    opticsZoomMin = 0.0623;
    opticsZoomMax = 0.0623;
    distanceZoomMin = 300;
    distanceZoomMax = 300;
    modes[] = {"manual", "close", "short", "medium", "far"};
    class manual : Mode_FullAuto {
      reloadTime = 0.09;
      recoil = "recoil_auto_machinegun_8outof10";
      recoilProne = "recoil_auto_machinegun_prone_5outof10";
      dispersion = 0.001;
      begin1[] = {"ca\sounds\weapons\machineguns\PKM_single2", 1.41254, 1, 1200};
      begin2[] = {"ca\sounds\weapons\machineguns\PKM_single3", 1.41254, 1, 1200};
      soundBegin[] = {"begin1", 0.3, "begin2", 0.7};
      soundContinuous = 0;
      soundBurst = 0;
      minRange = 0;
      minRangeProbab = 0.3;
      midRange = 5;
      midRangeProbab = 0.58;
      maxRange = 10;
      maxRangeProbab = 0.04;
      showToPlayer = 1;
      displayName = "";
    };
    class close : manual {
      burst = 10;
      aiRateOfFire = 0.5;
      aiRateOfFireDistance = 50;
      minRange = 10;
      minRangeProbab = 0.05;
      midRange = 20;
      midRangeProbab = 0.58;
      maxRange = 50;
      maxRangeProbab = 0.04;
      showToPlayer = 0;
    };
    class short : close {
      minRange = 50;
      minRangeProbab = 0.05;
      midRange = 200;
      midRangeProbab = 0.58;
      maxRange = 400;
      maxRangeProbab = 0.04;
    };
    class medium : close {
      minRange = 200;
      minRangeProbab = 0.05;
      midRange = 400;
      midRangeProbab = 0.58;
      maxRange = 600;
      maxRangeProbab = 0.04;
    };
    class far : close {
      minRange = 400;
      minRangeProbab = 0.05;
      midRange = 600;
      midRangeProbab = 0.4;
      maxRange = 1000;
      maxRangeProbab = 0.01;
    };
    class Library {
      libTextDesc = "PKP ""Pecheneg"" is a Russian machine gun chambered for the 7.62 x 54 mm round. It is a modernized PK machine gun. <br/>The Pecheneg is said to be much more accurate than all its predecessors due to a heavier, non-removable forced air cooling barrel with radial cooling ribs and a handle which eliminates the haze effect from hot gases and keeps the barrel significantly cooler, making the weapon more reliable. Furthermore the weapon is capable of mounting a telescopic sight or other sights which additionally increase accuracy.";
    };
    descriptionShort = "Heavy Machinegun<br/>Caliber: 7.62mm";
    discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    discreteDistanceInitIndex = 2;
  };
  class Pecheneg_Ori_b : Pecheneg_Ori {
    displayName = "$STR_n_Pecheneg_Ori_b";
    dexterity = 0.96;
    modelOptics = "-";
    opticsZoomMin = 0.25;
    opticsZoomMax = 1.1;
    opticsZoomInit = 0.5;
    distanceZoomMin = 300;
    distanceZoomMax = 300;
    discreteDistance[] = {100, 200, 300};
    discreteDistanceInitIndex = 2;
  };
  class VSS_Ori : Rifle {
    scope = 2;
    model = "\ori\weapons\mk_mod\VSS_vintorez.p3d";
    picture = "\ori\weapons\mk_mod\data\VSS_vintorez.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    magazines[] = {"10Rnd_9x39_SP5_VSS", "20Rnd_9x39_SP5_VSS"};
    dexterity = 1.7;
    displayname = "VSS Vintorez M";
    modes[] = {"Single", "Full"};
    discreteDistance[] = {100, 200, 300};
    discreteDistanceInitIndex = 1;
    class Single : Mode_SemiAuto {
      dispersion = 0.0018;
      soundContinuous = 0;
      reloadTime = 0.1;
      recoil = "recoil_single_primary_4outof10";
      recoilProne = "recoil_single_primary_prone_4outof10";
      begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single1", 1, 1, 50};
      begin2[] = {"ca\sounds\weapons\rifles\rifle-silence-single2", 1, 1, 50};
      soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
      minRange = 2;
      minRangeProbab = 0.1;
      midRange = 250;
      midRangeProbab = 0.7;
      maxRange = 500;
      maxRangeProbab = 0.05;
    };
    class Full : Mode_FullAuto {
      dispersion = 0.0018;
      soundContinuous = 0;
      reloadTime = 0.08;
      recoil = "recoil_auto_primary_3outof10";
      recoilProne = "recoil_auto_primary_prone_3outof10";
      begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single1", 1, 1, 50};
      begin2[] = {"ca\sounds\weapons\rifles\rifle-silence-single2", 1, 1, 50};
      soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
      minRange = 0;
      minRangeProbab = 0.1;
      midRange = 60;
      midRangeProbab = 0.7;
      maxRange = 100;
      maxRangeProbab = 0.05;
    };
    class Library {
      libTextDesc = "The VSS Vintorez (in English: Thread Cutter) is a suppressed sniper rifle made in Russia. It can be stripped down and transported in a relatively small briefcase and because of this it was mainly used for undercover operations by Spetsnaz.<br/>This weapon has a built-in suppression system making it a great infiltration and sniping weapon. The only drawback is the relatively small effective range of about 400m.";
    };
    descriptionShort = "Sniper rifle <br/>Caliber: 9x39mm";
  };
  class Mk_48_ori : Mk_48 {
    type = "1";
    displayName = "Mk 48";
    model = "\ori\weapons\mk_mod\Mk_48_Mod_0.p3d";
    picture = "\ori\weapons\mk_mod\data\Mk_48_Mod_0.paa";
  };
  class Mk_48_ori_acog : Mk_48 {
    type = "1";
    displayName = "Mk 48 Mod A";
    model = "\ori\weapons\mk_mod\Mk_48_Mod_A.p3d";
    picture = "\ori\weapons\mk_mod\data\Mk_48_Mod_A.paa";
    modelOptics = "\ca\weapons_E\SA58\2Dscope_Acog";
    opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
    opticsZoomMin = 0.0623;
    opticsZoomMax = 0.0623;
    distanceZoomMin = 300;
    distanceZoomMax = 300;
    discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    discreteDistanceInitIndex = 2;
    opticsFlare = 1;
    weaponInfoType = "RscWeaponZeroing";
    opticsDisablePeripherialVision = 1;
  };
  class Mk_48_ori_acog_b : Mk_48_ori_acog {
    displayName = "Mk 48 Mod A(Broken)";
    modelOptics = "-";
    opticsZoomMin = 0.25;
    opticsZoomMax = 1.1;
    opticsZoomInit = 0.5;
    distanceZoomMin = 300;
    distanceZoomMax = 300;
    discreteDistance[] = {100, 200, 300};
    discreteDistanceInitIndex = 2;
  };
  class MG36;
  class MG36_Ori : MG36 {
    magazines[] = {"100Rnd_556x45_MG36", "30Rnd_556x45_G36", "30Rnd_556x45_G36SD", "30Rnd_556x45_Stanag", "30Rnd_556x45_StanagSD", "20Rnd_556x45_Stanag"};
  };
  class MG36_camo;
  class MG36_camo_Ori : MG36_camo {
    magazines[] = {"100Rnd_556x45_MG36", "30Rnd_556x45_G36", "30Rnd_556x45_G36SD", "30Rnd_556x45_Stanag", "30Rnd_556x45_StanagSD", "20Rnd_556x45_Stanag"};
  };
  class LeeEnfield;
  class Ori_mosin : LeeEnfield {
    picture = "\ori\weapons\data\ico_mosin38_ca.paa";
    minRange = 10;
    minRangeProbab = 0.1;
    midRange = 400;
    midRangeProbab = 0.7;
    maxRange = 500;
    maxRangeProbab = 0.05;
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    scope = 2;
    model = "\ori\weapons\ori_vil_mosin_38.p3d";
    displayName = "Mosin 38";
    magazines[] = {"Ori_mosin_clip"};
    class Library {
      libTextDesc = "Mosin Rifle";
    };
  };
  class MP5A5;
  class Ori_PPS43 : MP5A5 {
    scope = 2;
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\anim\vil_anim_pps.rtm"};
    model = "\ori\weapons\ori_vil_pps43.p3d";
    displayName = "PPS-43";
    picture = "\ori\weapons\data\ico_pps43_ca.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    distanceZoomMin = 50;
    distanceZoomMax = 50;
    magazines[] = {"Ori_35Rnd_smg"};
    modes[] = {"FullAuto"};
    class FullAuto : Mode_FullAuto {
      recoil = "recoil_auto_primary_4outof10";
      recoilProne = "recoil_auto_primary_prone_4outof10";
      dispersion = 0.0045;
      minRange = 2;
      minRangeProbab = 0.1;
      midRange = 50;
      midRangeProbab = 0.6;
      maxRange = 100;
      maxRangeProbab = 0.005;
      reloadTime = 0.08;
      sound[] = {"\ori\weapons\sounds\xfal.wav", 4, 1, 900};
    };
    class Library {
      libtextdesc = "The PPS-43 is an automatic blowback-operated firearm, and is fired from an open bolt. It is chambered in the 7.62x25mm Tokarev M1930 pistol cartridge. The PPS features a striker firing mechanism (that is located inside the bolt assembly, which contains a fixed firing pin that is supported by the weapon's recoil spring), trigger assembly (that enables fully automatic fire only) and an external, lever-type safety that prevents accidental firing. In its 'safe' position (the safety lever is engaged by sliding it forward of the trigger guard) both the bolt and trigger are disabled. The bolt also contains a spring-loaded extractor, which pulls the empty case out of the chamber and passes it to the fixed ejector. The weapon is fed from an arch-shaped 35-round box magazine that is not interchangeable with box magazines used with the PPSh-41 and the gun will not accept a drum magazine.";
    };
  };
  class ori_vil_uzi_rozkl : MP5A5 {
    scope = 2;
    model = "\ori\weapons\ori_vil_uzi_rozkl";
    picture = "\ori\weapons\data\uzi.paa";
    displayName = "UZI/MP2 (Open)";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    opticsZoomMin = 0.27;
    opticsZoomMax = 0.42;
    distanceZoomMin = 50;
    distanceZoomMax = 50;
    magazines[] = {"30Rnd_9x19_MP5", "30Rnd_9x19_MP5SD", "30Rnd_9x19_UZI"};
    modes[] = {"Single", "burst", "FullAuto"};
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};
    class Single : Mode_SemiAuto {
      recoil = "recoil_single_primary_4outof10";
      recoilProne = "recoil_single_primary_4outof10";
      dispersion = 0.003;
      sound[] = {"\ori\weapons\sounds\mp5_fire.wav", 3.16228, 1, 900};
      minRange = 2;
      minRangeProbab = 0.1;
      midRange = 50;
      midRangeProbab = 0.7;
      maxRange = 100;
      maxRangeProbab = 0.02;
    };
    class burst : Mode_Burst {
      recoil = "recoil_single_primary_4outof10";
      recoilProne = "recoil_single_primary_4outof10";
      dispersion = 0.005;
      ffCount = 3;
      soundBurst = 0;
      burst = 3;
      minRange = 10;
      minRangeProbab = 0.1;
      midRange = 20;
      midRangeProbab = 0.7;
      maxRange = 40;
      maxRangeProbab = 0.01;
      sound[] = {"\ori\weapons\sounds\mp5_fire.wav", 3.16228, 1, 900};
    };
    class FullAuto : Mode_FullAuto {
      recoil = "recoil_auto_primary_4outof10";
      recoilProne = "recoil_auto_primary_prone_4outof10";
      reloadTime = 0.065;
      sound[] = {"\ori\weapons\sounds\mp5_fire.wav", 3.16228, 1, 900};
    };
  };
  class ori_vil_uzi_sd : ori_vil_uzi_rozkl {
    scope = 2;
    opticsZoomMin = 0.27;
    opticsZoomMax = 0.42;
    distanceZoomMin = 50;
    distanceZoomMax = 50;
    model = "\ca\weapons\HKM5_SD6";
    picture = "\ori\weapons\data\uzisd.paa";
    displayName = "UZI/MP2 Silenced";
    magazines[] = {"30Rnd_9x19_MP5SD"};
    modes[] = {"Single", "burst", "FullAuto"};
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};
    class Single : Mode_SemiAuto {
      recoil = "recoil_single_primary_4outof10";
      recoilProne = "recoil_single_primary_4outof10";
      dispersion = 0.003;
      sound[] = {"\ca\Weapons\Data\Sound\MP5_silenced_SS", 0.01, 1, 300};
      minRange = 2;
      minRangeProbab = 0.1;
      midRange = 50;
      midRangeProbab = 0.7;
      maxRange = 100;
      maxRangeProbab = 0.02;
    };
    class burst : Mode_Burst {
      recoil = "recoil_single_primary_4outof10";
      recoilProne = "recoil_single_primary_4outof10";
      dispersion = 0.005;
      ffCount = 3;
      soundBurst = 0;
      burst = 3;
      minRange = 10;
      minRangeProbab = 0.1;
      midRange = 20;
      midRangeProbab = 0.7;
      maxRange = 40;
      maxRangeProbab = 0.01;
      sound[] = {"\ca\Weapons\Data\Sound\MP5_silenced_SS", 0.01, 1, 300};
    };
    class FullAuto : Mode_FullAuto {
      recoil = "recoil_auto_primary_4outof10";
      recoilProne = "recoil_auto_primary_prone_4outof10";
      reloadTime = 0.065;
      sound[] = {"\ca\Weapons\Data\Sound\MP5_silenced_SS", 0.01, 1, 300};
    };
  };
  class ori_vil_uzimini : ori_vil_uzi_rozkl {
    scope = 2;
    opticsZoomMin = 0.27;
    opticsZoomMax = 0.42;
    distanceZoomMin = 50;
    distanceZoomMax = 50;
    model = "\ori\weapons\ori_vil_uzimini";
    picture = "\ori\weapons\data\uzi.paa";
    displayName = "Mini UZI";
    magazines[] = {"30Rnd_9x19_MP5", "30Rnd_9x19_MP5SD", "30Rnd_9x19_UZI"};
    modes[] = {"Single", "burst", "FullAuto"};
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};
    class Single : Mode_SemiAuto {
      recoil = "recoil_single_primary_5outof10";
      recoilProne = "recoil_single_primary_5outof10";
      dispersion = 0.003;
      sound[] = {"\ori\weapons\sounds\fire.wav", 3.5, 0.95, 900};
      minRange = 2;
      minRangeProbab = 0.1;
      midRange = 50;
      midRangeProbab = 0.7;
      maxRange = 100;
      maxRangeProbab = 0.02;
    };
    class burst : Mode_Burst {
      recoil = "recoil_single_primary_5outof10";
      recoilProne = "recoil_single_primary_5outof10";
      dispersion = 0.005;
      ffCount = 3;
      soundBurst = 0;
      burst = 3;
      minRange = 10;
      minRangeProbab = 0.1;
      midRange = 20;
      midRangeProbab = 0.7;
      maxRange = 40;
      maxRangeProbab = 0.01;
      sound[] = {"\ori\weapons\sounds\fire.wav", 3.5, 0.95, 900};
    };
    class FullAuto : Mode_FullAuto {
      recoil = "recoil_single_primary_5outof10";
      recoilProne = "recoil_single_primary_5outof10";
      reloadTime = 0.065;
      sound[] = {"\ori\weapons\sounds\fire.wav", 3.5, 0.95, 900};
    };
    class Library {
      libtextdesc = "The Uzi is a family of guns that started with a compact, boxy, and lightweight submachine gun. Smaller and newer variants are considered machine pistols. The first Uzi submachine gun was designed by Uziel Gal in the late 1940s. It was manufactured by Israel Military Industries, FN Herstal, and others.";
    };
  };
  class ori_vil_uzimini_SD : ori_vil_uzi_rozkl {
    scope = 2;
    opticsZoomMin = 0.27;
    opticsZoomMax = 0.42;
    distanceZoomMin = 50;
    distanceZoomMax = 50;
    model = "\ca\weapons\HKM5_SD6";
    picture = "\ori\weapons\data\uzisd.paa";
    displayName = "Mini UZI Silenced";
    magazines[] = {"30Rnd_9x19_MP5SD"};
    modes[] = {"Single", "burst", "FullAuto"};
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};
    class Single : Mode_SemiAuto {
      recoil = "recoil_single_primary_4outof10";
      recoilProne = "recoil_single_primary_4outof10";
      dispersion = 0.003;
      sound[] = {"\ca\Weapons\Data\Sound\MP5_silenced_SS", 0.01, 1, 300};
      minRange = 2;
      minRangeProbab = 0.1;
      midRange = 50;
      midRangeProbab = 0.7;
      maxRange = 100;
      maxRangeProbab = 0.02;
    };
    class burst : Mode_Burst {
      recoil = "recoil_single_primary_4outof10";
      recoilProne = "recoil_single_primary_4outof10";
      dispersion = 0.005;
      ffCount = 3;
      soundBurst = 0;
      burst = 3;
      minRange = 10;
      minRangeProbab = 0.1;
      midRange = 20;
      midRangeProbab = 0.7;
      maxRange = 40;
      maxRangeProbab = 0.01;
      sound[] = {"\ca\Weapons\Data\Sound\MP5_silenced_SS", 0.01, 1, 300};
    };
    class FullAuto : Mode_FullAuto {
      recoil = "recoil_auto_primary_4outof10";
      recoilProne = "recoil_auto_primary_prone_4outof10";
      reloadTime = 0.065;
      sound[] = {"\ca\Weapons\Data\Sound\MP5_silenced_SS", 0.01, 1, 300};
    };
    class Library {
      libtextdesc = "UZI Mini submachinegun silenced";
    };
  };
  class Ori_Sa48SMG : MP5A5 {
    scope = 2;
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\anim\vil_anim_sa25.rtm"};
    model = "\ori\weapons\ori_vil_sa25";
    displayName = "Sa Vz. 48";
    picture = "\ori\weapons\data\ico\ori_vil_sa25_ca.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    distanceZoomMin = 50;
    distanceZoomMax = 50;
    magazines[] = {"30Rnd_9x19_MP5", "30Rnd_9x19_MP5SD", "30Rnd_9x19_UZI"};
    modes[] = {"FullAuto"};
    class FullAuto : Mode_FullAuto {
      recoil = "recoil_auto_primary_4outof10";
      recoilProne = "recoil_auto_primary_prone_4outof10";
      dispersion = 0.0045;
      minRange = 2;
      minRangeProbab = 0.1;
      midRange = 50;
      midRangeProbab = 0.6;
      maxRange = 100;
      maxRangeProbab = 0.005;
      reloadTime = 0.08;
      sound[] = {"\ori\weapons\sounds\xfal.wav", 4, 1, 900};
    };
    class Library {
      libtextdesc = "Sa submachinegun, different variant";
    };
  };
  class Ori_SKS : AK_74 {
    scope = 2;
    value = 0;
    model = "\ori\weapons\ori_vil_sks";
    displayName = "SKS";
    picture = "\ori\weapons\data\ui_sks.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    optics = 1;
    drySound[] = {"\ca\Weapons\Data\Sound\AK47_dry_v1", 0.000316228, 1, 10};
    reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\AK47_fill_v3", 0.00562341, 1, 20};
    modes[] = {"Single"};
    magazines[] = {"Ori_10Rnd_SKS"};
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M24.rtm"};
    selectionFireAnim = "zasleh";
    nameSound = "rifle";
    class Single : Mode_SemiAuto {
      sound[] = {"\ori\weapons\sounds\sks.wav", 10, 0.95, 1000};
      reloadTime = 0.1;
      recoil = "recoil_single_primary_5outof10";
      recoilProne = "recoil_single_primary_prone_5outof10";
      dispersion = 0.0025;
      aiRateOfFire = 5;
      minRange = 2;
      minRangeProbab = 0.1;
      midRange = 250;
      midRangeProbab = 0.5;
      maxRange = 400;
      maxRangeProbab = 0.04;
    };
    class Library {
      libtextdesc = "The SKS is a Russian 7.62x39mm caliber semi-automatic carbine, designed in 1945 by Sergei Gavrilovich Simonov. SKS is an acronym for Samozaryadniy Karabin sistemi Simonova, 1945 (Self-loading Carbine, Simonov's system, 1945), or SKS 45. The SKS carbine was rather quickly phased out of first-line service, replaced by the AK-47, but remained in second-line service for decades afterwards.";
    };
  };
  class Makarov;
  class Ori_Tt33 : Makarov {
    scope = 2;
    model = "\ori\weapons\ori_vil_tetetka";
    displayName = "TT";
    dispersion = 0.005;
    magazines[] = {"Ori_8Rnd_TT"};
    class Library {
      libtextdesc = "The TT-30 (7,62 mm) is a semi-automatic pistol developed by Fedor Tokarev as a service pistol for the Soviet military to replace the Nagant M1895 revolvers in use since tsarist times.";
    };
  };
  class Ori_APS : Makarov {
    scope = 2;
    model = "\ori\weapons\ori_vil_aps";
    magazines[] = {"Ori_20Rnd_APS"};
    displayName = "APS";
    modes[] = {"Single", "FullAuto"};
    class Single : Mode_SemiAuto {
      recoil = "recoil_single_pistol_1outof3";
      recoilProne = "recoil_single_pistol_prone_1outof3";
      dispersion = 0.0025;
      minRange = 2;
      minRangeProbab = 0.1;
      midRange = 5;
      midRangeProbab = 0.7;
      maxRange = 10;
      maxRangeProbab = 0.015;
      sound[] = {"\ca\Weapons\Data\Sound\Beretta_single_shot_v1_A", 1, 1, 900};
    };
    class FullAuto : Mode_FullAuto {
      recoil = "recoil_single_pistol_2outof3";
      recoilProne = "recoil_single_pistol_prone_2outof3";
      reloadTime = 0.09;
      minRange = 2;
      minRangeProbab = 0.1;
      midRange = 20;
      midRangeProbab = 0.1;
      maxRange = 40;
      maxRangeProbab = 0.001;
      sound[] = {"\ca\Weapons\Data\Sound\Beretta_single_shot_v1_A", 1, 1, 900};
    };
    class Library {
      libtextdesc = "The Stechkin was intended as a sidearm for artillery soldiers and tank crews. The Stechkin APS was eventually replaced by the AKS-74U compact assault rifle.";
    };
  };
  class Ori_APS_SD : Ori_APS {
    scope = 2;
    model = "\ori\weapons\ori_vil_apsSD.p3d";
    magazines[] = {"Ori_20Rnd_APS_SD"};
    displayName = "APSSD";
    modes[] = {"Single", "FullAuto"};
    class Single : Mode_SemiAuto {
      recoil = "recoil_single_pistol_1outof3";
      recoilProne = "recoil_single_pistol_prone_1outof3";
      dispersion = 0.0025;
      minRange = 2;
      minRangeProbab = 0.1;
      midRange = 5;
      midRangeProbab = 0.7;
      maxRange = 10;
      maxRangeProbab = 0.015;
      sound[] = {"\ca\Weapons\Data\Sound\Glock_Silenced_final", 0.0251189, 1, 300};
    };
    class FullAuto : Mode_FullAuto {
      recoil = "recoil_single_pistol_2outof3";
      recoilProne = "recoil_single_pistol_prone_2outof3";
      reloadTime = 0.09;
      minRange = 2;
      minRangeProbab = 0.1;
      midRange = 20;
      midRangeProbab = 0.1;
      maxRange = 30;
      maxRangeProbab = 0.001;
      sound[] = {"\ca\Weapons\Data\Sound\Glock_Silenced_final", 0.0251189, 1, 300};
    };
  };
  class M9;
  class Ori_cz75 : M9 {
    scope = 2;
    model = "\ori\weapons\ori_vil_cz_75";
    dispersion = 0.002;
    displayName = "CZ-75";
    minRange = 2;
    minRangeProbab = 0.1;
    midRange = 25;
    midRangeProbab = 0.5;
    maxRange = 30;
    maxRangeProbab = 0.01;
    class Library {
      libtextdesc = "CZ-75";
    };
  };
  class Ori_cz83 : Makarov {
    scope = 2;
    model = "\ori\weapons\ori_vil_cz_83";
    magazines[] = {"Ori_12Rnd_maka"};
    dispersion = 0.0025;
    displayName = "CZ-83";
    minRange = 2;
    minRangeProbab = 0.1;
    midRange = 25;
    midRangeProbab = 0.5;
    maxRange = 50;
    maxRangeProbab = 0.01;
    class Library {
      libtextdesc = "CZ-83";
    };
  };
  class M1014;
  class Ori_mossberg : M1014 {
    scope = 2;
    model = "\ori\weapons\ori_vil_mossberg";
    displayName = "Mossberg";
    class Library {
      libtextdesc = "Mossberg";
    };
  };
  class ak_47_m;
  class ori_ak_camo : ak_47_m {
    model = "\ori\weapons\vil_akm_str";
    displayName = "AK Customized";
    picture = "\ori\weapons\data\ico\ico_akcamo_CA.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
  };
  class ori_shotgun2 : M1014 {
    model = "\ori\weapons\vil_shotgun";
    displayName = "Shotgun ZX76";
    picture = "\ori\weapons\data\ico\ico_shot_CA.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\anim\vil_anim_shotgun.rtm"};
  };
  class MP5SD;
  class ori_autocrossbow : MP5SD {
    scope = 2;
    model = "\ori\weapons\ori_crossbowauto";
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
    picture = "\ori\weapons\data\ico\ico_cross_CA.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    optics = 1;
    dexterity = 1.64;
    opticsZoomMin = 0.27;
    opticsZoomMax = 0.42;
    distanceZoomMin = 50;
    distanceZoomMax = 50;
    displayName = "VH20";
    drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1", 0.000316228, 1};
    magazines[] = {"ori_crossbow_mag"};
    modes[] = {"Single"};
    class Single : Mode_SemiAuto {
      begin1[] = {"dayz_weapons\sounds\crossbow_fire_0", 0.177828, 1, 15};
      begin2[] = {"dayz_weapons\sounds\crossbow_fire_1", 0.177828, 1, 15};
      soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
      reloadTime = 0.2;
      recoil = "recoil_single_primary_1outof10";
      recoilProne = "recoil_single_primary_prone_1outof10";
      dispersion = 0.002;
      minRange = 2;
      minRangeProbab = 0.1;
      midRange = 25;
      midRangeProbab = 0.4;
      maxRange = 50;
      maxRangeProbab = 0.01;
      autofire = 0;
    };
    class Library {
      libTextDesc = "Automatic Crossbow";
    };
  };
  class M9SD;
  class ori_autocrossbowH : M9SD {
    scope = 2;
    model = "\ori\weapons\ori_crossbowautohand";
    picture = "\ori\weapons\data\ico\ico_crossh_CA.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    optics = 1;
    dexterity = 1.64;
    opticsZoomMin = 0.27;
    opticsZoomMax = 0.42;
    distanceZoomMin = 50;
    distanceZoomMax = 50;
    displayName = "MiniVH";
    drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1", 0.000316228, 1};
    magazines[] = {"ori_hcrossbow_mag", "ori_hcrossbow_mage", "ori_hcrossbow_magt"};
    modes[] = {"Single"};
    class Single : Mode_SemiAuto {
      begin1[] = {"dayz_weapons\sounds\crossbow_fire_0", 0.177828, 1, 15};
      begin2[] = {"dayz_weapons\sounds\crossbow_fire_1", 0.177828, 1, 15};
      soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
      reloadTime = 0.2;
      recoil = "recoil_single_primary_1outof10";
      recoilProne = "recoil_single_primary_prone_1outof10";
      dispersion = 0.002;
      minRange = 2;
      minRangeProbab = 0.1;
      midRange = 20;
      midRangeProbab = 0.4;
      maxRange = 30;
      maxRangeProbab = 0.01;
      autofire = 0;
    };
    class Library {
      libTextDesc = "Automatic Crossbow";
    };
  };
  class PKT;
  class PKT_spec : PKT {
    scope = 1;
    displayName = "PKT_spec";
    ballisticsComputer = 2;
  };
  class FN_FAL;
  class FN_FAL_ANPVS4 : FN_FAL {
    displayName = "FN FAL AN/PVS-4";
    model = "ca\weapons_E\FNFAL\fnFal_anpvs4";
    picture = "\ca\weapons_E\data\icons\w_fnfal_anpvs4_ca.paa";
    modelOptics = "\Ca\weapons_E\NV_anpvs4_optic.p3d";
    visionMode[] = {"Normal", "NVG"};
    opticsZoomMin = 0.0625;
    opticsZoomMax = 0.0625;
    opticsZoomInit = 0.0625;
    opticsPPEffects[] = {};
    opticsDisablePeripherialVision = 1;
    class OpticsModes {
      class FN_FAL_Normal {
        opticsID = 1;
        visionMode[] = {"Normal"};
        useModelOptics = 1;
        opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
        opticsZoomMin = 0.0625;
        opticsZoomMax = 0.0625;
        opticsZoomInit = 0.0625;
        memoryPointCamera = "opticView";
        opticsFlare = 1;
        opticsDisablePeripherialVision = 1;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        cameraDir = "";
      };
      class FN_FAL_NVG : FN_FAL_Normal {
        opticsID = 2;
        visionMode[] = {"NVG"};
      };
    };
  };
  class SVD;
  class SVD_NSPU_EP1 : SVD {
    model = "\ca\weapons_E\SVD\SVD_nspu.p3d";
    displayname = "SVD NSPU";
    picture = "\CA\weapons_E\Data\icons\w_svd_nspu_CA.paa";
    modelOptics = "\Ca\weapons_E\NV_nspu_optic.p3d";
    class OpticsModes {
      class SVD_Normal {
        opticsID = 1;
        visionMode[] = {"Normal"};
        useModelOptics = 1;
        opticsZoomMin = 0.0708215;
        opticsZoomMax = 0.0708215;
        opticsZoomInit = 0.0708215;
        opticsPPEffects[] = {};
        opticsDisablePeripherialVision = 1;
        memoryPointCamera = "opticView";
        opticsFlare = 1;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        cameraDir = "";
      };
      class NSPU : SVD_Normal {
        opticsID = 2;
        visionMode[] = {"NVG"};
      };
      class Ironsights : NSPU {
        opticsID = 3;
        useModelOptics = 0;
        opticsFlare = 0;
        opticsDisablePeripherialVision = 0;
        opticsZoomMin = 0.25;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.5;
        memoryPointCamera = "eye";
        visionMode[] = {};
      };
    };
  };
  class G36C;
  class G36C_SD_camo : G36C {
    scope = 2;
    value = 6;
    model = "\CA\weapons_E\G36\G36_C_SD_camo";
    displayName = "G36C SD (camo)";
    picture = "\ca\weapons_E\Data\icons\g36_c_sd_camo_CA.paa";
    htMin = 1;
    htMax = 480;
    afMax = 0;
    mfMax = 0;
    mFact = 1;
    tBody = 100;
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    magazines[] = {"30Rnd_556x45_G36SD", "30Rnd_556x45_StanagSD"};
    fireLightDuration = 0;
    fireLightIntensity = 0;
    distanceZoomMin = 100;
    distanceZoomMax = 100;
    modes[] = {"Single", "Burst", "Fullauto"};
    class Single : Mode_SemiAuto {
      begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2", 1, 1, 300};
      soundBegin[] = {"begin1", 1};
      reloadTime = 0.1;
      recoil = "recoil_single_primary_3outof10";
      recoilProne = "recoil_single_primary_prone_3outof10";
      dispersion = 0.002;
      minRange = 2;
      minRangeProbab = 0.1;
      midRange = 100;
      midRangeProbab = 0.7;
      maxRange = 150;
      maxRangeProbab = 0.05;
    };
    class Burst : Mode_Burst {
      begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2", 1, 1, 300};
      soundBegin[] = {"begin1", 1};
      reloadTime = 0.1;
      ffCount = 2;
      recoil = "recoil_auto_primary_2outof10";
      recoilProne = "recoil_auto_primary_prone_2outof10";
      dispersion = 0.0016;
      minRange = 1;
      minRangeProbab = 0.1;
      midRange = 50;
      midRangeProbab = 0.7;
      maxRange = 100;
      maxRangeProbab = 0.05;
    };
    class FullAuto : Mode_FullAuto {
      begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2", 1, 1, 300};
      soundBegin[] = {"begin1", 1};
      reloadTime = 0.1;
      recoil = "recoil_auto_primary_3outof10";
      recoilProne = "recoil_auto_primary_prone_3outof10";
      dispersion = 0.0016;
      minRange = 0;
      minRangeProbab = 0.1;
      midRange = 20;
      midRangeProbab = 0.7;
      maxRange = 30;
      maxRangeProbab = 0.05;
    };
    class Library {
      libTextDesc = "The G36 is a 5.56mm caliber assault rifle, manufactured in Germany. This weapon has been used by the German Armed Forces since 1997 and these days many armies have adopted it. <br/>The G36C (C Ã¢â¬â Compact) is a further development of this weapon. It features a shorter barrel and a shorter flash suppressor. This type also uses rail-mounted iron sights instead of dual optic sights and has an additional suppressor.";
    };
    descriptionShort = "Silenced assault rifle <br/>Caliber: 5.56x45mm NATO";
  };
  class L85A2_base_BAF;
  class BAF_L85A2_RIS_NVV : L85A2_base_BAF {
    scope = 2;
    model = "\ca\weapons_BAF\L85A2_RIS_CWS_BAF";
    picture = "\CA\weapons_baf\data\UI\L85A2_RIS_CWS_ca.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    modelOptics = "\ca\Weapons_baf\cws_optic";
    weaponInfoType = "RscWeaponZeroing";
    visionMode[] = {"Normal", "NVG"};
    discretefov[] = {0.0755, 0.0249};
    discreteInitIndex = 0;
    discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
    discreteDistanceInitIndex = 2;
    displayName = "L85A2 NVV";
    class Library {
      libTextDesc = "The L85A2 is a standard weapon of the British Armed Forces, which replaced the previous weapon, the L85A1 (SA80). The new version has many improvements, and it no longer jams easily. On other hand, A2 is slightly heavier that A1.<br/>This rifle features NVV fourth generation sights and the AN/PEQ-2 laser sights.";
    };
  };
  class AA12_Ori : Rifle {
    scope = 2;
    displayName = "AA-12";
    model = "\Ca\Weapons_PMC\AA_12\AA_12_PMC.p3d";
    picture = "\CA\Weapons_PMC\data\ui\w_aa12_ca.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    magazines[] = {"12Rnd_B_AA12_74Slug", "12Rnd_B_AA12_Pellets"};
    optics = 1;
    modelOptics = "-";
    distanceZoomMin = 50;
    distanceZoomMax = 50;
    bullet1[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_metal_1", 0.1, 1, 15};
    bullet2[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_metal_2", 0.1, 1, 15};
    bullet3[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_metal_3", 0.177828, 1, 15};
    bullet4[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_metal_4", 0.177828, 1, 15};
    bullet5[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_1", 0.1, 1, 15};
    bullet6[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_2", 0.1, 1, 15};
    bullet7[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_3", 0.1, 1, 15};
    bullet8[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_4", 0.1, 1, 15};
    bullet9[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_1", 0.01, 1, 15};
    bullet10[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_2", 0.01, 1, 15};
    bullet11[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_3", 0.01, 1, 15};
    bullet12[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun_patrona_dirt_4", 0.01, 1, 15};
    soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
    fireSpreadAngle = 0.784825;
    modes[] = {"Single", "FullAuto"};
    class Single : Mode_SemiAuto {
      begin1[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun1", 1.77828, 1, 1200};
      begin2[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun4", 1.77828, 1, 1200};
      soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
      dispersion = 0.002;
      reloadTime = 0.2;
      recoil = "recoil_single_primary_6outof10";
      recoilProne = "recoil_single_primary_prone_6outof10";
      minRange = 0;
      minRangeProbab = 0.5;
      midRange = 60;
      midRangeProbab = 0.2;
      maxRange = 100;
      maxRangeProbab = 0.03;
    };
    class FullAuto : Mode_FullAuto {
      begin1[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun1", 1.77828, 1, 1200};
      begin2[] = {"Ca\Sounds_PMC\Weapons_PMC\SHOTGUN\shotgun4", 1.77828, 1, 1200};
      soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
      dispersion = 0.003;
      reloadTime = 0.2;
      recoil = "recoil_single_primary_6outof10";
      recoilProne = "recoil_single_primary_prone_6outof10";
      minRange = 0;
      minRangeProbab = 0.6;
      midRange = 40;
      midRangeProbab = 0.15;
      maxRange = 70;
      maxRangeProbab = 0.02;
    };
    class Library {
      libTextDesc = "The Auto Assault-12 is a shotgun capable of a fully automatic firing mode at 300 rounds per minute, making it an incredibly deadly weapon system in close quarters environments. It can load a range of different cartridges, from pellets to slugs and even High Explosive fragmentation shells.<br /><br /> ION Inc. security contractor Dixon coined the nickname ""Matilda"" for his favorite weapon.";
    };
  };
  class BAF_L110A1_Ori : Rifle {
    bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01", 0.0707946, 1, 15};
    bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03", 0.0707946, 1, 15};
    bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02", 0.0707946, 1, 15};
    bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01", 0.0707946, 1, 15};
    bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01", 0.0707946, 1, 15};
    bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02", 0.0707946, 1, 15};
    bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03", 0.0707946, 1, 15};
    bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04", 0.0707946, 1, 15};
    bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01", 0.0707946, 1, 15};
    bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02", 0.0707946, 1, 15};
    bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03", 0.0707946, 1, 15};
    bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04", 0.0707946, 1, 15};
    soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
    scope = 2;
    model = "\ca\weapons_BAF\L110A1_Aim_BAF";
    picture = "\CA\weapons_baf\data\UI\L110A1_Aim_ca.paa";
    UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
    displayName = "L110A1";
    class Library {
      libTextDesc = "The L110A1 is a British designation for a Belgian 5.56mm light machine gun Minimi Para. It is an air-cooled weapon, capable only of fully automatic fire, and it is adjusted to be used as paratroopers weapon.<br/>This rifle features the red-dot Aimpoint gunsight and the AN/PEQ-2 laser sights.";
    };
    descriptionShort = "Light machine gun <br/>Caliber: 5.56x45 mm NATO";
    irLaserPos = "laser pos";
    irLaserEnd = "laser dir";
    irDistance = 5;
    cursor = "MGCursor";
    cursoraim = "\ca\Weapons\Data\clear_empty";
    modes[] = {"manual", "close", "short", "medium", "far"};
    class manual : Mode_FullAuto {
      recoil = "recoil_auto_machinegun_8outof10";
      recoilProne = "recoil_auto_machinegun_prone_5outof10";
      dispersion = 0.0008;
      begin1[] = {"Ca\sounds_baf\weapons\l110_single1a_vetsi_raze", 1.77828, 1, 1000};
      begin2[] = {"Ca\sounds_baf\weapons\l110_single1b_vetsi_raze", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
      soundContinuous = 0;
      soundBurst = 0;
      minRange = 0;
      minRangeProbab = 0.3;
      midRange = 5;
      midRangeProbab = 0.58;
      maxRange = 10;
      maxRangeProbab = 0.04;
      showToPlayer = 1;
      reloadTime = 0.066;
    };
    class close : manual {
      burst = 10;
      aiRateOfFire = 0.5;
      aiRateOfFireDistance = 50;
      minRange = 10;
      minRangeProbab = 0.05;
      midRange = 20;
      midRangeProbab = 0.58;
      maxRange = 50;
      maxRangeProbab = 0.04;
      showToPlayer = 0;
    };
    class short : close {
      burst = 8;
      aiRateOfFire = 2;
      aiRateOfFireDistance = 300;
      minRange = 50;
      minRangeProbab = 0.05;
      midRange = 150;
      midRangeProbab = 0.58;
      maxRange = 300;
      maxRangeProbab = 0.04;
    };
    class medium : close {
      burst = 12;
      aiRateOfFire = 3;
      aiRateOfFireDistance = 600;
      minRange = 200;
      minRangeProbab = 0.05;
      midRange = 400;
      midRangeProbab = 0.58;
      maxRange = 600;
      maxRangeProbab = 0.8;
    };
    class far : close {
      burst = 16;
      aiRateOfFire = 5;
      aiRateOfFireDistance = 1000;
      minRange = 400;
      minRangeProbab = 0.05;
      midRange = 600;
      midRangeProbab = 0.4;
      maxRange = 900;
      maxRangeProbab = 0.7;
    };
    aiDispersionCoefY = 21;
    aiDispersionCoefX = 21;
    dexterity = 0.51;
    type = "1";
    reloadMagazineSound[] = {"Ca\sounds_baf\weapons\L110_reload", 0.0562341, 1, 25};
    magazines[] = {"100Rnd_556x45_M249", "30Rnd_556x45_Stanag", "30Rnd_556x45_StanagSD", "200Rnd_556x45_M249", "30Rnd_556x45_G36", "30Rnd_556x45_G36SD"};
  };
  class BAF_L7A2_GPMG_Ori : M240 {
    scope = 2;
    type = "1";
    model = "\ca\weapons_BAF\GPMG_BAF";
    weaponInfoType = "RscWeaponZeroing";
    discreteDistance[] = {100, 200, 300, 400, 500, 600, 800, 1000};
    discreteDistanceInitIndex = 2;
    displayName = "L7A2 GPMG";
    class Library {
      libTextDesc = "The L7A2 is a British designation for a Belgian 7.62 mm belt- fed general purpose machine gun FN MAG. It can be carried by foot soldiers and employed as a light machine gun. It is used mainly by para and marines these days.";
    };
    descriptionShort = "Medium machine gun <br/>Caliber: 7.62x51 mm NATO";
    class manual : Mode_FullAuto {
      recoil = "recoil_auto_machinegun_8outof10";
      recoilProne = "recoil_auto_machinegun_prone_5outof10";
      dispersion = 0.0008;
      begin1[] = {"ca\sounds\Weapons\machineguns\M240_single1", 1.77828, 1, 1000};
      begin2[] = {"ca\sounds\Weapons\machineguns\M240_single2", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
      soundContinuous = 0;
      soundBurst = 0;
      minRange = 0;
      minRangeProbab = 0.3;
      midRange = 5;
      midRangeProbab = 0.58;
      maxRange = 10;
      maxRangeProbab = 0.04;
      showToPlayer = 1;
      reloadTime = 0.0708762;
      displayName = "";
    };
    class close : manual {
      burst = 10;
      aiRateOfFire = 0.5;
      aiRateOfFireDistance = 50;
      minRange = 10;
      minRangeProbab = 0.05;
      midRange = 20;
      midRangeProbab = 0.58;
      maxRange = 50;
      maxRangeProbab = 0.7;
      showToPlayer = 0;
    };
    class short : close {
      burst = 8;
      aiRateOfFire = 2;
      aiRateOfFireDistance = 300;
      minRange = 50;
      minRangeProbab = 0.05;
      midRange = 150;
      midRangeProbab = 0.58;
      maxRange = 300;
      maxRangeProbab = 0.7;
    };
    class medium : close {
      burst = 12;
      aiRateOfFire = 1;
      aiRateOfFireDistance = 600;
      minRange = 200;
      minRangeProbab = 0.05;
      midRange = 400;
      midRangeProbab = 0.58;
      maxRange = 600;
      maxRangeProbab = 0.7;
    };
    class far : close {
      burst = 16;
      aiRateOfFire = 1;
      aiRateOfFireDistance = 1000;
      minRange = 400;
      minRangeProbab = 0.05;
      midRange = 600;
      midRangeProbab = 0.4;
      maxRange = 900;
      maxRangeProbab = 0.9;
    };
  };
};
class cfgMagazines {
  class CA_Magazine;
  class 12Rnd_B_AA12_Pellets : CA_Magazine {
    scope = 2;
    displayName = "12Rnd. AA12 Pellets";
    ammo = "B_12Gauge_Pellets";
    count = 12;
    initSpeed = 396;
    picture = "\CA\weapons_pmc\data\ui\m_aa12_ca.paa";
    descriptionShort = "Caliber: 12 gauge <br/>Rounds: 12 Pellets<br/>Used in: AA12";
    displayNameShort = "Pellets";
  };
  class 12Rnd_B_AA12_74Slug : CA_Magazine {
    scope = 2;
    displayName = "12Rnd. AA12 Slug";
    ammo = "B_12Gauge_74Slug";
    count = 12;
    initSpeed = 396;
    picture = "\CA\weapons_pmc\data\ui\m_aa12slug_ca.paa";
    descriptionShort = "Caliber: 12 gauge <br/>Rounds: 12 Slug<br/>Used in: AA12";
    displayNameShort = "Slug";
  };
  class 100Rnd_556x45_MG36 : CA_Magazine {
    scope = 2;
    displayName = "MG36 Mag.";
    ammo = "B_556x45_Ball";
    count = 100;
    initSpeed = 930;
    picture = "\ca\weapons\g36\data\equip\M_MG36_CA.paa";
    type = "2 * 256";
    tracersEvery = 4;
    lastRoundsTracer = 4;
    descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 100 <br/>Used in: MG36, X8 SAW";
  };
  class 8Rnd_9x18_Makarov : CA_Magazine {
    scope = 2;
    type = 16;
    displayName = "$STR_DN_8RND_MAKAROV";
    model = "\ori\weapons\ammo_8Rnd_9x18_Makarov.p3d";
    picture = "\Ca\weapons\Data\Equip\m_makarov_CA.paa";
    ammo = "B_9x18_Ball";
    count = 8;
    initSpeed = 320;
    descriptionShort = "$STR_DSS_8RND_MAKAROV";
  };
  class 8Rnd_9x18_MakarovSD : 8Rnd_9x18_Makarov {
    scope = 2;
    type = 16;
    displayName = "$STR_DN_8RND_MAKAROVSD";
    model = "\ori\weapons\ammo_8Rnd_9x18_Makarov.p3d";
    picture = "\Ca\weapons\Data\Equip\m_makarov_CA.paa";
    ammo = "B_9x18_SD";
    initSpeed = 310;
    descriptionShort = "$STR_DSS_8RND_MAKAROVSD";
  };
  class 15Rnd_9x19_M9 : CA_Magazine {
    scope = 2;
    displayName = "$STR_DN_15RND_M9";
    type = 16;
    model = "\ori\weapons\ammo_15Rnd_9x19_M9SD.p3d";
    picture = "\Ca\weapons\Data\Equip\m_m9_beretta_CA.paa";
    ammo = "B_9x19_Ball";
    count = 15;
    sound[] = {"\ca\Weapons\Data\Sound\Beretta_single_shot_v3", 0.316228, 1, 700};
    initSpeed = 398;
    descriptionShort = "$STR_DSS_15RND_M9";
  };
  class 15Rnd_9x19_M9SD : 15Rnd_9x19_M9 {
    displayName = "$STR_DN_15RND_M9SD";
    type = 16;
    picture = "\Ca\weapons\Data\Equip\m_m9_beretta_CA.paa";
    model = "\ori\weapons\ammo_15Rnd_9x19_M9SD.p3d";
    ammo = "B_9x19_SD";
    sound[] = {"\ca\Weapons\Data\Sound\Beretta_single_shot_v3", 0.316228, 1, 700};
    initSpeed = 315;
    descriptionShort = "$STR_DSS_15RND_M9SD";
  };
  class 30Rnd_9x19_MP5 : CA_Magazine {
    scope = 2;
    displayName = "$STR_DN_30RND_MP5";
    initSpeed = 400;
    ammo = "B_9x19_Ball";
    model = "\ori\weapons\ammo_30Rnd_9x19_MP5.p3d";
    picture = "\Ca\weapons\Data\Equip\m_HKM5_CA.paa";
    descriptionShort = "$STR_DSS_30RND_MP5";
  };
  class 30Rnd_9x19_MP5SD : CA_Magazine {
    scope = 2;
    displayName = "$STR_DN_30RND_MP5SD";
    initSpeed = 320;
    ammo = "B_9x19_SD";
    model = "\ori\weapons\ammo_30Rnd_9x19_MP5.p3d";
    picture = "\Ca\weapons\Data\Equip\m_HKM5_CA.paa";
    descriptionShort = "$STR_DSS_30RND_MP5SD";
  };
  class 30Rnd_545x39_AK : CA_Magazine {
    scope = 2;
    displayName = "$STR_DN_30RND_AK";
    ammo = "B_545x39_Ball";
    count = 30;
    initSpeed = 900;
    model = "\ori\weapons\ammo_30Rnd_545x39_AK.p3d";
    picture = "\CA\weapons\ak\data\equip\m_ak74_ca.paa";
    tracersEvery = 0;
    descriptionShort = "$STR_DSS_30RND_AK";
  };
  class 30Rnd_545x39_AKSD : 30Rnd_545x39_AK {
    displayName = "$STR_DN_30RND_AKSD";
    ammo = "B_545x39_SD";
    initSpeed = 320;
    model = "\ori\weapons\ammo_30Rnd_545x39_AK.p3d";
    descriptionShort = "$STR_DSS_30RND_AKSD";
  };
  class 30Rnd_762x39_AK47 : CA_Magazine {
    scope = 2;
    displayName = "$STR_MN_AK47";
    ammo = "B_762x39_Ball";
    count = 30;
    initSpeed = 710;
    model = "\ori\weapons\ammo_30Rnd_762x39_AK47.p3d";
    picture = "\CA\weapons\AK\data\equip\M_AK47_CA.paa";
    descriptionShort = "$STR_DSS_30RDN_AK47";
  };
  class 1Rnd_HE_M203 : CA_Magazine {
    scope = 2;
    type = 16;
    displayName = "$STR_DN_HE_M203";
    picture = "\Ca\weapons\Data\Equip\m_40mmHP_CA.paa";
    ammo = "G_40mm_HE";
    initSpeed = 80;
    count = 1;
    model = "\ori\weapons\ammo_HE_M203.p3d";
    nameSound = "grenadelauncher";
    descriptionShort = "$STR_DSS_1Rnd_HE_M203";
  };
  class 1Rnd_Smoke_M203 : 1Rnd_HE_M203 {
    displayNameShort = "$STR_EP1_SN_WHITE";
    model = "\ori\weapons\ammo_HE_M203.p3d";
    picture = "\Ca\weapons_E\Data\icons\m_40mmSmoke_CA.paa";
  };
  class FlareWhite_M203 : CA_Magazine {
    scope = 2;
    type = 16;
    displayName = "$STR_DN_FLAREWHITE_M203";
    picture = "\Ca\weapons\Data\Equip\m_FlareWhite_CA.paa";
    ammo = "F_40mm_White";
    initSpeed = 80;
    count = 1;
    model = "\ori\weapons\ammo_HE_M203.p3d";
    nameSound = "grenadelauncher";
    descriptionShort = "$STR_DSS_1Rnd_FLAREWHITE_M203";
  };
  class FlareGreen_M203 : FlareWhite_M203 {
    displayName = "$STR_DN_FLAREGREEN_M203";
    ammo = "F_40mm_Green";
    model = "\ori\weapons\ammo_HE_M203.p3d";
    picture = "\Ca\weapons\Data\Equip\m_FlareGreen_CA.paa";
    descriptionShort = "$STR_DSS_1Rnd_FLAREGREEN_M203";
  };
  class HandGrenade;
  class SmokeShell : HandGrenade {
    displayName = "$STR_MN_SMOKE";
    picture = "\CA\weapons\data\equip\m_ANM8_white_ca.paa";
    value = 2;
    ammo = "SmokeShell";
    nameSoundWeapon = "smokeshell";
    nameSound = "smokeshell";
    name = "\ori\weapons\ammo_smokegrenade.p3d";
    descriptionShort = "$STR_DSS_SmokeShell";
  };
  class SmokeShellRed : SmokeShell {
    displayName = "$STR_MN_SMOKE_RED";
    picture = "\CA\weapons\data\equip\m_m18red_ca.paa";
    ammo = "SmokeShellRed";
    model = "\ori\weapons\ammo_smokegrenade_red.p3d";
    descriptionShort = "$STR_DSS_SmokeShellRed";
  };
  class SmokeShellGreen : SmokeShell {
    displayName = "$STR_MN_SMOKE_GREEN";
    picture = "\CA\weapons\data\equip\m_m18green_ca.paa";
    ammo = "SmokeShellGreen";
    model = "\ori\weapons\ammo_smokegrenade_green.p3d";
    descriptionShort = "$STR_DSS_SmokeShellGreen";
  };
  class 30Rnd_556x45_G36 : CA_Magazine {
    scope = 2;
    displayName = "$STR_DN_30RND_G36";
    picture = "\ca\weapons\data\equip\m_G36_CA.paa";
    ammo = "B_556x45_Ball";
    count = 30;
    initSpeed = 920;
    tracersEvery = 0;
    model = "\ori\weapons\ammo_G36.p3d";
    descriptionShort = "$STR_DSS_30RND_G36";
  };
  class 30Rnd_556x45_G36SD : 30Rnd_556x45_G36 {
    displayName = "$STR_DN_30RND_556X45_G36SD";
    ammo = "B_556x45_SD";
    initSpeed = 320;
    model = "\ori\weapons\ammo_G36.p3d";
    descriptionShort = "$STR_DSS_30RND_G36SD";
  };
  class 1Rnd_HE_GP25 : CA_Magazine {
    displayNameShort = "$STR_EP1_SN_HE";
    model = "\ori\weapons\ammo_HE_M203.p3d";
    picture = "\Ca\weapons_E\Data\icons\M_GP25_HE_CA.paa";
  };
  class 30Rnd_9x19_UZI : CA_Magazine {
    scope = 2;
    displayName = "$STR_EP1_DN_30RND_9X19_UZI";
    initSpeed = 400;
    ammo = "B_9x19_Ball";
    picture = "\Ca\weapons_e\Data\Icons\m_uzi_CA.paa";
    model = "\ori\weapons\ammo_uzi.p3d";
    descriptionShort = "$STR_EP1_DSS_30RND_9X19_UZI";
    type = 16;
    count = 30;
  };
  class 17Rnd_9x19_glock17 : CA_Magazine {
    scope = 2;
    displayName = "$STR_EP1_DN_17RND_9X19_GLOCK17";
    initSpeed = 360;
    ammo = "B_9x19_Ball";
    picture = "\Ca\weapons_e\Data\icons\m_glock17_CA.paa";
    descriptionShort = "$STR_EP1_DSS_17RND_9X19_GLOCK17";
    count = 17;
    type = 16;
  };
  class 10x_303;
  class Ori_mosin_clip : 10x_303 {
    scope = 2;
    displayName = "Mosin clip";
    count = 5;
  };
  class Ori_35Rnd_smg : CA_Magazine {
    scope = 2;
    displayName = "35 rounds PPS mag";
    model = "\ori\weapons\ammo_30Rnd_9x19_MP5.p3d";
    initSpeed = 425;
    count = 35;
    ammo = "Ori_PARA_Ball";
    picture = "\ori\weapons\data\m_fnfal.paa";
  };
  class Ori_10Rnd_SKS : CA_Magazine {
    scope = 2;
    displayName = "SKS rounds";
    ammo = "Ori_762x43_Ball";
    count = 10;
    initSpeed = 735;
    picture = "\ori\weapons\data\m_sks.paa";
  };
  class Ori_12Rnd_maka : 8Rnd_9x18_Makarov {
    scope = 2;
    displayName = "CZ83 magazine";
    type = 16;
    count = 12;
    initSpeed = 340;
    picture = "\ori\weapons\data\m_pistol.paa";
  };
  class Ori_8Rnd_TT : 8Rnd_9x18_Makarov {
    scope = 2;
    displayName = "TT magazine";
    type = 16;
    ammo = "Ori_PARA_Ball";
    count = 8;
    initSpeed = 420;
    picture = "\ori\weapons\data\m_pistol.paa";
  };
  class Ori_20Rnd_APS : 15Rnd_9x19_M9 {
    scope = 2;
    displayName = "APS magazine";
    initSpeed = 350;
    type = 16;
    count = 20;
    picture = "\ori\weapons\data\m_pistol.paa";
    descriptionShort = "APS magazine";
  };
  class Ori_20Rnd_APS_SD : 15Rnd_9x19_M9 {
    scope = 2;
    initSpeed = 320;
    displayName = "APS SD magazine";
    type = 16;
    count = 20;
    ammo = "B_9x18_SD";
    picture = "\ori\weapons\data\m_pistol.paa";
    descriptionShort = "APS SD magazine";
  };
  class ori_crossbow_mag : CA_Magazine {
    scope = 2;
    displayName = "Steel Bolts VH20";
    ammo = "ori_crossbowbolt";
    count = 20;
    initSpeed = 300;
    tracersEvery = 1;
    model = "\ori\weapons\crossbowcylinder";
    picture = "\ori\weapons\data\ico\bolts_ca.paa";
  };
  class ori_hcrossbow_mag : CA_Magazine {
    scope = 2;
    type = 16;
    displayName = "Steel Bolts MiniVH";
    ammo = "ori_hcrossbowbolt";
    count = 8;
    initSpeed = 255;
    tracersEvery = 1;
    model = "\ori\weapons\crossbowcylinderh";
    picture = "\ori\weapons\data\boltsH_ca.paa";
  };
  class ori_hcrossbow_mage : CA_Magazine {
    scope = 2;
    type = 16;
    displayName = "Epi Bolts MiniVH";
    ammo = "ori_crossbowbolt_epi";
    count = 8;
    initSpeed = 255;
    tracersEvery = 1;
    model = "\ori\weapons\crossbowcylinderh";
    picture = "\ori\weapons\data\boltsE_ca.paa";
  };
  class ori_hcrossbow_magt : CA_Magazine {
    scope = 2;
    type = 16;
    displayName = "Tranquilizer Bolts MiniVH";
    ammo = "ori_crossbowbolt_stu";
    count = 8;
    initSpeed = 235;
    tracersEvery = 1;
    model = "\ori\weapons\crossbowcylinderh";
    picture = "\ori\weapons\data\boltsT_ca.paa";
  };
  class ItemVodkaN : HandGrenade {
    scope = 2;
    displayName = "$STR_n_ItemNovistranka";
    model = "\ori\items\item_novistranka.p3d";
    picture = "\ori\items\data\ico\equip_ori_novistranka.paa";
    descriptionShort = "$STR_d_ItemNovistranka";
    ammo = "Vodka_Bottle";
  };
  class ItemBeerS : HandGrenade {
    scope = 2;
    displayName = "$STR_n_ItemBeer_svetovar";
    model = "\ori\items\item_beer_svetovar.p3d";
    picture = "\ori\items\data\ico\equip_ori_svetovar.paa";
    descriptionShort = "$STR_d_ItemBeer_svetovar";
    ammo = "Beer_Bottle";
  };
  class Item_1p29 : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_n_Item_1p29";
    model = "\ori\weapons\attachments\1p29.p3d";
    picture = "\ori\weapons\attachments\data\1p29_gear_ui.paa";
    descriptionShort = "$STR_d_Item_1p29";
  };
  class Item_Kobra : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_n_Item_Kobra";
    model = "\ori\weapons\attachments\kobra.p3d";
    picture = "\ori\weapons\attachments\data\kobra_gear_ui.paa";
    descriptionShort = "$STR_d_Item_Kobra";
  };
  class Item_PSO : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_n_Item_PSO";
    model = "\ori\weapons\attachments\pso.p3d";
    picture = "\ori\weapons\attachments\data\pso_gear_ui.paa";
    descriptionShort = "$STR_d_Item_PSO";
  };
  class Item_GP25 : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_n_Item_GP25";
    model = "\ori\weapons\attachments\glauncher.p3d";
    picture = "\ori\weapons\attachments\data\glauncher_gear_ui.paa";
    descriptionShort = "$STR_d_Item_GP25";
  };
  class Item_Acog : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_n_Item_Acog";
    model = "\ori\weapons\attachments\acog.p3d";
    picture = "\ori\weapons\attachments\data\acog_gear_ui.paa";
    descriptionShort = "$STR_d_Item_Acog";
  };
  class Item_Acog2 : Item_Acog {
    displayName = "$STR_n_Item_Acog2";
  };
  class Item_Acog3 : Item_Acog {
    displayName = "$STR_n_Item_Acog3";
  };
  class Item_Acog4 : Item_Acog {
    displayName = "$STR_n_Item_Acog4";
  };
  class Item_Aimpoint : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_n_Item_Aimpoint";
    model = "\ori\weapons\attachments\aimpoint.p3d";
    picture = "\ori\weapons\attachments\data\aimpoint_gear_ui.paa";
    descriptionShort = "$STR_d_Item_Aimpoint";
  };
  class Item_AUG : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_n_Item_AUG";
    model = "\ori\weapons\attachments\aug.p3d";
    picture = "\ori\weapons\attachments\data\aug_gear_ui.paa";
    descriptionShort = "$STR_d_Item_AUG";
  };
  class Item_ELCAN : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_n_Item_ELCAN";
    model = "\ori\weapons\attachments\elcan.p3d";
    picture = "\ori\weapons\attachments\data\elcan_gear_ui.paa";
    descriptionShort = "$STR_d_Item_ELCAN";
  };
  class Item_NSPU : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_n_Item_NSPU";
    model = "\ori\weapons\attachments\nspu.p3d";
    picture = "\ori\weapons\attachments\data\NSPU_gear_ui.paa";
    descriptionShort = "$STR_d_Item_NSPU";
  };
  class Item_anpvs4 : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_n_Item_anpvs4";
    model = "\ori\weapons\attachments\anpvs4.p3d";
    picture = "\ori\weapons\attachments\data\anpvs4.paa";
    descriptionShort = "$STR_d_Item_anpvs4";
  };
  class Item_Holo : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_n_Item_Holo";
    model = "\ori\weapons\attachments\eot.p3d";
    picture = "\ori\weapons\attachments\data\eot_gear_ui.paa";
    descriptionShort = "$STR_d_Item_Holo";
  };
  class Item_M203 : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_n_Item_M203";
    model = "\ori\weapons\attachments\m203.p3d";
    picture = "\ori\weapons\attachments\data\m203_gear_ui.paa";
    descriptionShort = "$STR_d_Item_M203";
  };
  class Item_HuntS : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_n_Item_HuntS";
    model = "\ori\weapons\attachments\hunting_scope.p3d";
    picture = "\ori\weapons\attachments\data\huntingrifle_scope.paa";
    descriptionShort = "$STR_d_Item_HuntS";
  };
  class Item_Silencer : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_n_Item_Silencer";
    model = "\ori\weapons\attachments\sd.p3d";
    picture = "\ori\weapons\attachments\data\sd_gear_ui.paa";
    descriptionShort = "$STR_d_Item_Silencer";
  };
  class Item_FRF2_1 : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_n_Item_FRF2_1";
    picture = "\ori\weapons\mk_mod\data\kartinka.paa";
    descriptionShort = "$STR_d_Item_FRF2_1";
  };
  class Item_GM_762_1 : Item_FRF2_1 {
    descriptionShort = "$STR_d_Item_GM_762_1";
  };
  class Item_Tp64_1 : Item_FRF2_1 {
    descriptionShort = "$STR_d_Item_Tp64_1";
  };
};
class cfgAmmo {
  class BulletBase;
  class B_762x39_Ball : BulletBase {
    hit = 9.3;
    indirectHit = 0;
    indirectHitRange = 0;
    cartridge = "FxCartridge_762";
    visibleFire = 18;
    audibleFire = 18;
    cost = 1;
    typicalSpeed = 710;
    tracerColor[] = {0.2, 0.8, 0.1, 0.04};
    tracerColorR[] = {0, 0, 0, 0};
    airFriction = -0.00195;
    caliber = 0.83;
  };
  class Ori_PARA_Ball : BulletBase {
    cartridge = "FxCartridge_Small";
    hit = 7;
    cost = 5;
    typicalspeed = 360;
  };
  class B_762x54_Ball;
  class Ori_762x43_Ball : B_762x54_Ball {
    hit = 10;
    indirectHit = 0;
    indirectHitRange = 0;
    visibleFire = 18;
    audibleFire = 18;
    visibleFireTime = 3;
    cost = 1;
    typicalspeed = 620;
    tracerColor[] = {0, 0, 0, 0};
    tracerColorR[] = {0, 0, 0, 0};
  };
  class ori_crossbowbolt : BulletBase {
    hit = 7;
    indirectHit = 0;
    typicalSpeed = 180;
    soundFly[] = {"", 1, 1};
    indirectHitRange = 0;
    visibleFire = 1;
    audibleFire = 0.5;
    visibleFireTime = 0;
    airFriction = -0.002051;
    model = "\ori\weapons\arrowbolt";
  };
  class ori_hcrossbowbolt : BulletBase {
    hit = 6;
    indirectHit = 0;
    typicalSpeed = 150;
    soundFly[] = {"", 1, 1};
    indirectHitRange = 0;
    visibleFire = 1;
    audibleFire = 0.5;
    visibleFireTime = 0;
    airFriction = -0.002751;
    model = "\ori\weapons\arrowbolt";
  };
  class ori_crossbowbolt_epi : BulletBase {
    hit = 0.01;
    indirectHit = 0;
    typicalSpeed = 150;
    soundFly[] = {"", 1, 1};
    indirectHitRange = 0;
    visibleFire = 1;
    audibleFire = 0.5;
    visibleFireTime = 0;
    airFriction = -0.002751;
    model = "\ori\weapons\arrowbolt";
  };
  class ori_crossbowbolt_stu : BulletBase {
    hit = 0.01;
    indirectHit = 0;
    typicalSpeed = 150;
    soundFly[] = {"", 1, 1};
    indirectHitRange = 0;
    visibleFire = 1;
    audibleFire = 0.5;
    visibleFireTime = 0;
    airFriction = -0.002751;
    model = "\ori\weapons\arrowbolt";
  };
  class GrenadeHand;
  class ThrownObjects;
  class Beer_Bottle : ThrownObjects {
    model = "\ori\items\item_beer_svetovar.p3d";
    CraterEffects = "NoCrater";
    explosionEffects = "GlassSmash";
    soundHit[] = {"dayz_weapons\sounds\bottle_break_0", 0.5, 1, 60};
  };
  class Vodka_Bottle : ThrownObjects {
    model = "\ori\items\item_novistranka.p3d";
    CraterEffects = "NoCrater";
    explosionEffects = "GlassSmash";
    soundHit[] = {"dayz_weapons\sounds\bottle_break_0", 0.5, 1, 60};
  };
};
