class CfgPatches {
  class aaw_f88 {
    units[] = {};
    weapons[] = {"aawRifleCore", "aawSteyrCore", "AAW_f88_A1", "SteyrF88", "AAW_f88_A1_gla", "SteyrF88_gl", "AAW_f88_ACOG", "AAW_f88_ACOG2", "AAW_f88_ACOG3", "AAW_f88_ACOG4", "AAW_f88_ACOG_gla", "AAW_f88_ACOG_gla2", "AAW_f88_ACOG_gla3", "AAW_f88_ACOG_gla4", "AAW_f88_AIM", "AAW_f88_AIM_gla", "AAW_f88_elcan", "AAW_f88_elcan_gla"};
    requiredVersion = 0.1;
    requiredAddons[] = {"CAWeapons", "CAWeapons2"};
  };
};
AAW_noGripOrBipod = 0;
AAW_noCQBsights = 0;
class cfgRecoils {
  aawF88Recoil[] = {0.03, 0, 0, 0.02, 0.008, 0.01, 0.01, 0, 0.01, 0.2, 0, 0};
  aawF88RecoilProne[] = {0.03, 0, 0, 0.02, 0.095, 0.01, 0.02, 0, 0.01, 0.1, 0, 0};
  aawF88RecoilAuto[] = {0.03, 0, 0, 0.02, 0.009, 0.015, 0.015, 0, 0.015, 0.2, 0, 0};
  aawF88RecoilAutoProne[] = {0.03, 0, 0, 0.02, 0.01, 0.013, 0.02, 0, 0.013, 0.13, 0, 0};
  aawF88CarbineRecoil[] = {0.03, 0, 0, 0.02, 0.012, 0.01, 0.02, 0, 0.02, 0.2, 0, 0};
  aawF88CarbineRecoilProne[] = {0.01, 0, 0, 0.02, 0.01, 0.011, 0.02, 0, 0.01, 0.2, 0, 0};
  aawF88CarbineRecoilAuto[] = {0.03, 0, 0, 0.02, 0.012, 0.01, 0.02, 0, 0.02, 0.2, 0, 0};
  aawF88CarbineRecoilAutoProne[] = {0.01, 0, 0, 0.02, 0.015, 0.013, 0.02, 0, 0.01, 0.2, 0, 0};
};
class Mode_SemiAuto {
  displayName = "$STR_DN_MODE_SEMIAUTO";
};
class Mode_FullAuto : Mode_SemiAuto {
  displayName = "$STR_DN_MODE_FULLAUTO";
};
class aawMode_SemiAuto : Mode_SemiAuto {
};
class aawMode_FullAuto : Mode_FullAuto {
};
class Mode_Burst;
class Manual;
class Close;
class Short;
class Medium;
class Far;
class cfgWeapons {
  class Default;
  class RifleCore;
  class Rifle : RifleCore {
    class M203Muzzle;
  };
  class aawRifleCore : Rifle {
    scope = 1;
    access = 1;
    muzzlePos = "barrelend";
    muzzleEnd = "barrelstart";
    cartridgePos = "shellejectionstart";
    cartridgeVel = "shellejectionend";
    flash = "gunfire";
    flashSize = 0.5;
  };
  class aawSteyrCore : aawRifleCore {
    scope = 2;
    model = "\ori\weapons\aawf88\f88\AAW_F88_A1.p3d";
    displayName = "STR_aawSteyrF88";
    dexterity = 1.5;
    picture = "\ori\weapons\aawf88\f88\icons\f88a1.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_StanagSD", "20Rnd_556x45_Stanag", "30Rnd_556x45_G36", "30Rnd_556x45_G36SD"};
    drySound[] = {"\ori\weapons\aawf88\f88\snd\f88dry", 0.000316228, 1, 10};
    reloadMagazineSound[] = {"\ori\weapons\aawf88\f88\snd\f88reload", 0.0562341, 1, 20};
    modes[] = {"Single", "FullAuto"};
    descriptionShort = "Austrian assault rifle <br/>Caliber: 5.56x45mm NATO";
    class Single : aawMode_SemiAuto {
      displayName = "Semi";
      begin1[] = {"\ori\weapons\aawf88\f88\snd\f88", 0.8, 1, 700};
      begin2[] = {"\ori\weapons\aawf88\f88\snd\f88", 0.8, 0.99, 700};
      soundbegin[] = {"begin1", 0.5, "begin2", 0.5};
      reloadTime = 0.09;
      recoil = "recoil_single_primary_5outof10";
      recoilProne = "recoil_single_primary_prone_5outof10";
      dispersion = 0.0013;
      minRange = 2;
      minRangeProbab = 0.1;
      midRange = 250;
      midRangeProbab = 0.7;
      maxRange = 400;
      maxRangeProbab = 0.05;
    };
    class FullAuto : aawMode_FullAuto {
      displayName = "Full Auto";
      begin1[] = {"\ori\weapons\aawf88\f88\snd\f88", 0.8, 1, 700};
      begin2[] = {"\ori\weapons\aawf88\f88\snd\f88", 0.8, 0.99, 700};
      soundbegin[] = {"begin1", 0.5, "begin2", 0.5};
      reloadTime = 0.09;
      recoil = "recoil_auto_primary_5outof10";
      recoilProne = "recoil_auto_primary_prone_5outof10";
      dispersion = 0.0038;
      minRange = 2;
      minRangeProbab = 0.1;
      midRange = 60;
      midRangeProbab = 0.7;
      maxRange = 120;
      maxRangeProbab = 0.05;
    };
    class CargoLight {
      color[] = {0, 0, 0, 0};
      ambient[] = {0.6, 0, 0.15, 1};
      brightness = 0.007;
    };
  };
  class AAW_f88_A1 : aawSteyrCore {
    scope = 2;
    access = 2;
    displayName = "$STR_aawSteyrF88";
    picture = "\ori\weapons\aawf88\f88\icons\f88a1.paa";
    model = "\ori\weapons\aawf88\f88\AAW_F88_A1.p3d";
    modelOptics = "\ori\weapons\aawf88\f88\steyr_optic_s15.p3d";
    optics = 1;
    opticsDisablePeripherialVision = 1;
    value = 2;
    opticsZoomMin = 0.15;
    opticsZoomMax = 0.15;
    opticsZoomInit = 0.15;
    distanceZoomMin = 200;
    distanceZoomMax = 200;
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\aawf88\f88\data\anim\F88_a1.rtm"};
    class Library {
      libTextDesc = "$STR_LIB_aawSteyrF88";
    };
  };
  class SteyrF88 : AAW_f88_A1 {
    scope = 2;
    displayName = "F88 Iron";
    modelOptics = "-";
    picture = "\ori\weapons\aawf88\F88\data\steyr_noscope.paa";
    model = "\ori\weapons\mk_mod\AAW_F88_A1_noscope.p3d";
    opticsZoomMin = 0.25;
    opticsZoomMax = 1.1;
    opticsZoomInit = 0.5;
    distanceZoomMin = 300;
    distanceZoomMax = 300;
  };
  class AAW_f88_A1_gla : AAW_f88_A1 {
    displayName = "$STR_aawSteyrF88GLA";
    picture = "\ori\weapons\aawf88\f88\icons\f88a1_gla.paa";
    model = "\ori\weapons\aawf88\f88\AAW_F88_A1_gla.p3d";
    muzzles[] = {"this", "F88Muzzle"};
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\aawf88\f88\data\anim\F88_GL.rtm"};
    opticsZoomMin = 0.25;
    opticsZoomMax = 1.1;
    opticsZoomInit = 0.5;
    distanceZoomMin = 300;
    distanceZoomMax = 300;
    class F88Muzzle : M203Muzzle {
      muzzlePos = "glabarrelend";
      muzzleEnd = "glabarrelstart";
      magazineReloadTime = 0;
      reloadTime = 0.1;
      optics = 0;
      modelOptics = "-";
      cameraDir = "gla_look";
      memoryPointCamera = "gla_eye";
    };
  };
  class SteyrF88_gl : AAW_f88_A1_gla {
    displayName = "F88 Iron GL";
    modelOptics = "-";
    picture = "\ori\weapons\mk_mod\data\AAW_F88_A1_GL.paa";
    model = "\ori\weapons\mk_mod\AAW_F88_A1_GL.p3d";
  };
  class AAW_f88_ACOG : aawSteyrCore {
    scope = 2;
    access = 2;
    displayName = "F88 ACOG V1";
    picture = "\ori\weapons\aawf88\f88\icons\f88s_acog.paa";
    model = "\ori\weapons\aawf88\f88\AAW_F88_ACOG.p3d";
    modelOptics = "\ca\weapons\2Dscope_Acog_4x32";
    optics = 1;
    opticsDisablePeripherialVision = 1;
    value = 2;
    opticsZoomMin = 0.0625;
    opticsZoomMax = 0.0625;
    opticsZoomInit = 0.0625;
    distanceZoomMin = 100;
    distanceZoomMax = 100;
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\aawf88\f88\data\anim\F88_s.rtm"};
    class Library {
      libTextDesc = "$STR_LIB_aawSteyrF88sACOG";
    };
  };
  class AAW_f88_ACOG2 : AAW_f88_ACOG {
    displayName = "F88 ACOG V2";
    modelOptics = "\ca\Weapons_baf\ACOG_optic";
  };
  class AAW_f88_ACOG3 : AAW_f88_ACOG {
    displayName = "F88 ACOG V3";
    modelOptics = "\ori\weapons\aawf88\f88\steyr_optic_acog.p3d";
  };
  class AAW_f88_ACOG4 : AAW_f88_ACOG {
    displayName = "F88 ACOG V4";
    modelOptics = "\ori\weapons\rh_aks\fnc_acog_ta11fin";
  };
  class AAW_f88_ACOG_gla : AAW_f88_ACOG {
    displayName = "F88 ACOG V1 GLA";
    picture = "\ori\weapons\aawf88\f88\icons\f88s_acog_gla.paa";
    modelOptics = "\ca\weapons\2Dscope_Acog_4x32";
    model = "\ori\weapons\aawf88\f88\AAW_F88_ACOG_gla.p3d";
    muzzles[] = {"this", "F88Muzzle"};
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\aawf88\f88\data\anim\F88_GL.rtm"};
    class Library {
      libTextDesc = "$STR_LIB_aawSteyrF88sACOGGLA";
    };
    class F88Muzzle : M203Muzzle {
      muzzlePos = "glabarrelend";
      muzzleEnd = "glabarrelstart";
      magazineReloadTime = 0;
      reloadTime = 0.1;
      optics = 0;
      modelOptics = "-";
      cameraDir = "gla_look";
      memoryPointCamera = "gla_eye";
    };
  };
  class AAW_f88_ACOG_gla2 : AAW_f88_ACOG_gla {
    displayName = "F88 ACOG V2 GLA";
    modelOptics = "\ca\Weapons_baf\ACOG_optic";
  };
  class AAW_f88_ACOG_gla3 : AAW_f88_ACOG_gla {
    displayName = "F88 ACOG V3 GLA";
    modelOptics = "\ori\weapons\aawf88\f88\steyr_optic_acog.p3d";
  };
  class AAW_f88_ACOG_gla4 : AAW_f88_ACOG_gla {
    displayName = "F88 ACOG V4 GLA";
    modelOptics = "\ori\weapons\rh_aks\fnc_acog_ta11fin";
  };
  class AAW_f88_AIM : aawSteyrCore {
    scope = 2;
    access = 2;
    displayName = "$STR_aawSteyrF88sAIM";
    picture = "\ori\weapons\aawf88\f88\icons\f88s_aim.paa";
    model = "\ori\weapons\aawf88\f88\AAW_F88_AIM.p3d";
    optics = 1;
    opticsDisablePeripherialVision = 0;
    value = 2;
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\aawf88\f88\data\anim\F88_s.rtm"};
    class Library {
      libTextDesc = "$STR_LIB_aawSteyrF88sAIM";
    };
  };
  class AAW_f88_AIM_gla : AAW_f88_AIM {
    displayName = "$STR_aawSteyrF88sAIMGLA";
    picture = "\ori\weapons\aawf88\f88\icons\f88s_aim_gla.paa";
    model = "\ori\weapons\aawf88\f88\AAW_F88_AIM_gla.p3d";
    muzzles[] = {"this", "F88Muzzle"};
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\aawf88\f88\data\anim\F88_GL.rtm"};
    class Library {
      libTextDesc = "$STR_LIB_aawSteyrF88sAIMGLA";
    };
    class F88Muzzle : M203Muzzle {
      muzzlePos = "glabarrelend";
      muzzleEnd = "glabarrelstart";
      magazineReloadTime = 0;
      reloadTime = 0.1;
      optics = 1;
      opticsDisablePeripherialVision = 0;
      cameraDir = "gla_look";
      memoryPointCamera = "gla_eye";
    };
  };
  class AAW_f88_elcan : aawSteyrCore {
    scope = 2;
    access = 2;
    displayName = "$STR_aawSteyrF88sELCAN";
    picture = "\ori\weapons\aawf88\f88\icons\f88s_elcan.paa";
    model = "\ori\weapons\aawf88\f88\AAW_F88_elcan.p3d";
    modelOptics = "\ori\weapons\aawf88\f88\steyr_optic_elcan.p3d";
    optics = 1;
    opticsDisablePeripherialVision = 1;
    value = 2;
    opticsZoomMin = 0.075;
    opticsZoomMax = 0.075;
    opticsZoomInit = 0.075;
    distanceZoomMin = 100;
    distanceZoomMax = 100;
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\aawf88\f88\data\anim\F88_s.rtm"};
    class Library {
      libTextDesc = "$STR_LIB_aawSteyrF88sELCAN";
    };
  };
  class AAW_f88_elcan_gla : AAW_f88_elcan {
    displayName = "$STR_aawSteyrF88sELCANGLA";
    picture = "\ori\weapons\aawf88\f88\icons\f88s_elcan_gla.paa";
    model = "\ori\weapons\aawf88\f88\AAW_F88_elcan_gla.p3d";
    muzzles[] = {"this", "F88Muzzle"};
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\aawf88\f88\data\anim\F88_GL.rtm"};
    class Library {
      libTextDesc = "$STR_LIB_aawSteyrF88sELCANGLA";
    };
    class F88Muzzle : M203Muzzle {
      muzzlePos = "glabarrelend";
      muzzleEnd = "glabarrelstart";
      magazineReloadTime = 0;
      reloadTime = 0.1;
      optics = 0;
      modelOptics = "-";
      cameraDir = "gla_look";
      memoryPointCamera = "gla_eye";
    };
  };
};
