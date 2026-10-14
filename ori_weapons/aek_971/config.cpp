class CfgPatches {
  class SLA_Weapons {
    units[] = {};
    weapons[] = {"AEK_971", "AEK_971_gp", "AEK_971_1p78", "AEK_971_1p63", "AEK_971_gp_1p63", "AEK_971_1pn100", "AEK_971_tgp_cln", "AEK_973s", "AEK_973s_gp", "AEK_973s_1p78", "AEK_973s_1p63", "AEK_973s_gp_1p63", "AEK_973s_1pn100"};
    requiredVersion = 0.1;
    requiredAddons[] = {"CAWeapons_AK"};
    magazines[] = {};
    ammo[] = {};
  };
};
class CfgSkeletons {
  class AEK_971 {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"trigger", "", "bolt", "", "magazine", ""};
  };
  class AEK_971_gp {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"trigger", "", "bolt", "", "magazine", ""};
  };
  class AEK_971_1p78 {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"trigger", "", "bolt", "", "magazine", ""};
  };
  class AEK_971_1p63 {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"trigger", "", "bolt", "", "magazine", ""};
  };
  class AEK_971_gp_1p63 {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"trigger", "", "bolt", "", "magazine", ""};
  };
  class AEK_971_1pn100 {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"trigger", "", "bolt", "", "magazine", ""};
  };
  class AEK_971_tgp_cln {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"trigger", "", "bolt", "", "magazine", ""};
  };
  class AEK_971_shahin {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"trigger", "", "bolt", "", "magazine", ""};
  };
  class AEK_973s {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"trigger", "", "bolt", "", "magazine", ""};
  };
  class AEK_973s_1p78 {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"trigger", "", "bolt", "", "magazine", ""};
  };
  class AEK_973s_gp {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"trigger", "", "bolt", "", "magazine", ""};
  };
  class AEK_973s_1p63 {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"trigger", "", "bolt", "", "magazine", ""};
  };
  class AEK_973s_gp_1p63 {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"trigger", "", "bolt", "", "magazine", ""};
  };
  class AEK_973s_1pn100 {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"trigger", "", "bolt", "", "magazine", ""};
  };
  class AEK_973s_tgp_cln {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"trigger", "", "bolt", "", "magazine", ""};
  };
  class AEK_973s_shahin {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"trigger", "", "bolt", "", "magazine", ""};
  };
};
class CfgModels {
  class Default {
    sections[] = {""};
    sectionsInherit = "";
  };
  class Weapon : Default {
    sections[] = {"zasleh"};
    sectionsInherit = "";
  };
  class AEK_971 : Weapon {
    skeletonName = "AEK_971";
    class Animations {
      class trigger {
        type = "rotationZ";
        source = "reload";
        selection = "trigger";
        axis = "trigger_axis";
        minValue = 0;
        maxValue = "0.2";
        angle0 = "0";
        angle1 = "rad -25";
      };
      class bolt {
        type = "translation";
        source = "reload";
        selection = "bolt";
        axis = "bolt_axis";
        minValue = 0;
        maxValue = "1";
        offset0 = "0";
        offset1 = "1";
      };
      class reload_magazine_hide {
        type = "hide";
        source = "reloadMagazine";
        selection = "magazine";
        hidevalue = 0.22;
      };
      class reload_magazine {
        type = "rotationZ";
        source = "reloadMagazine";
        selection = "magazine";
        axis = "magazine_axis";
        minValue = "0.15";
        maxValue = "0.5";
        angle0 = "0";
        angle1 = "rad -1.5";
      };
    };
    sections[] = {"zasleh"};
    sectionsInherit = "weapon";
  };
  class AEK_971_gp : AEK_971 {
    skeletonName = "AEK_971_gp";
  };
  class AEK_971_1p78 : AEK_971 {
    skeletonName = "AEK_971_1p78";
  };
  class AEK_971_1p63 : AEK_971 {
    skeletonName = "AEK_971_1p63";
  };
  class AEK_971_gp_1p63 : AEK_971 {
    skeletonName = "AEK_971_gp_1p63";
  };
  class AEK_971_1pn100 : AEK_971 {
    skeletonName = "AEK_971_1pn100";
  };
  class AEK_971_tgp_cln : AEK_971 {
    skeletonName = "AEK_971_tgp_cln";
  };
  class AEK_971_shahin : AEK_971 {
    skeletonName = "AEK_971_shahin";
  };
  class AEK_973s : AEK_971 {
    skeletonName = "AEK_973s";
  };
  class AEK_973s_1p78 : AEK_971 {
    skeletonName = "AEK_973s_1p78";
  };
  class AEK_973s_1p63 : AEK_971 {
    skeletonName = "AEK_973s_1p63";
  };
  class AEK_973s_gp : AEK_971 {
    skeletonName = "AEK_973s_gp";
  };
  class AEK_973s_gp_1p63 : AEK_971 {
    skeletonName = "AEK_973s_gp_1p63";
  };
  class AEK_973s_1pn100 : AEK_971 {
    skeletonName = "AEK_973s_1pn100";
  };
  class AEK_973s_tgp_cln : AEK_971 {
    skeletonName = "AEK_973s_tgp_cln";
  };
  class AEK_973s_shahin : AEK_971 {
    skeletonName = "AEK_973s_shahin";
  };
};
class cfgRecoils {
  AEK_971_Recoil[] = {0.04, "0.006*(  (2/7))", "0.05*.5*(  (2/7))", 0.01, "0.009*(  (2/7))", 0, 0.045, 0, "-0.025*.5*(  (2/7))"};
  AEK_971_Recoil_prone[] = {0.035, "0.004*(  (2/7))", "0.035*.5*(  (2/7))", 0.01, "0.006*(  (2/7))", 0, 0.045, 0, "-0.025*.25*(  (2/7))", 0.01, 0, "-0.025*.25*(  (2/7))"};
  AEK_973_Recoil[] = {0.04, "0.006*(  (3/7))", "0.05*.5*(  (3/7))", 0.01, "0.009*(  (3/7))", 0, 0.045, 0, "-0.025*.5*(  (3/7))"};
  AEK_973_Recoil_prone[] = {0.035, "0.004*(  (3/7))", "0.035*.5*(  (3/7))", 0.01, "0.006*(  (3/7))", 0, 0.045, 0, "-0.025*.25*(  (3/7))", 0.01, 0, "-0.025*.25*(  (3/7))"};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons {
  class GrenadeLauncher;
  class Rifle;
  class AEK_971 : Rifle {
    htMin = 1;
    htMax = 480;
    afMax = 0;
    mfMax = 0;
    mFact = 1;
    tBody = 100;
    scope = 2;
    value = 0;
    distanceZoomMin = 100;
    distanceZoomMax = 100;
    discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    discreteDistanceInitIndex = 1;
    weaponInfoType = "RscWeaponZeroing";
    model = "\ori\weapons\aek_971\aek-971.p3d";
    optics = 1;
    displayName = "$STR_AEK_971";
    picture = "\ori\weapons\aek_971\Icons\AEK_971.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\Data\Anim\AK.rtm"};
    dexterity = 1.5;
    drySound[] = {"ca\sounds\weapons\rifles\dry", 0.000316, 1, 10};
    reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-ak-2ivan", 0.070795, 1, 20};
    magazines[] = {"30Rnd_545x39_AK", "30Rnd_545x39_AKSD"};
    modes[] = {"FullAuto", "Burst", "Single"};
    class Single : Mode_SemiAuto {
      begin1[] = {"ca\sounds\weapons\rifles\AK74_single3", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 1};
      reloadTime = 0.0666;
      recoil = "AEK_971_Recoil";
      recoilProne = "AEK_971_Recoil_prone";
      dispersion = 0.001;
      minRange = 2;
      minRangeProbab = 0.3;
      midRange = 300;
      midRangeProbab = 0.7;
      maxRange = 600;
      maxRangeProbab = 0.04;
    };
    class Burst : Mode_Burst {
      begin1[] = {"ca\sounds\weapons\rifles\AK74_single3", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 1};
      soundBurst = 0;
      reloadTime = 0.0666;
      ffCount = 3;
      recoil = "AEK_971_Recoil";
      recoilProne = "AEK_971_Recoil_prone";
      dispersion = 0.001;
      minRange = 1;
      minRangeProbab = 0.3;
      midRange = 150;
      midRangeProbab = 0.7;
      maxRange = 300;
      maxRangeProbab = 0.05;
      showToPlayer = 1;
    };
    class FullAuto : Mode_FullAuto {
      begin1[] = {"ca\sounds\weapons\rifles\AK74_single3", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 1};
      reloadTime = 0.0666;
      ffCount = 30;
      recoil = "AEK_971_Recoil";
      recoilProne = "AEK_971_Recoil_prone";
      dispersion = 0.001;
      minRange = 0;
      minRangeProbab = 0.1;
      midRange = 150;
      midRangeProbab = 0.7;
      maxRange = 300;
      maxRangeProbab = 0.05;
    };
    class Library {
      libTextDesc = "$STR_LIB_AEK_971";
    };
    descriptionShort = "$STR_DESC_AEK_971";
  };
  class AEK_971_gp : AEK_971 {
    model = "\ori\weapons\aek_971\aek-971_gp.p3d";
    optics = 1;
    displayName = "$STR_AEK_971_gp_34";
    picture = "\ori\weapons\aek_971\Icons\AEK_971_GP_34.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
    muzzles[] = {"this", "GP34Muzzle"};
    descriptionShort = "$STR_DESC_AEK_971_GP_34";
    class GP34Muzzle : GrenadeLauncher {
      reloadMagazineSound[] = {"Ca\sounds\Weapons\cannon\flare_reload", 0.000316, 1, 25};
      magazines[] = {"1Rnd_HE_GP25", "FlareWhite_GP25", "FlareGreen_GP25", "FlareRed_GP25", "FlareYellow_GP25", "1Rnd_SMOKE_GP25", "1Rnd_SMOKERED_GP25", "1Rnd_SMOKEGREEN_GP25", "1Rnd_SMOKEYELLOW_GP25"};
      magazineReloadTime = 0;
      reloadTime = 0.1;
      optics = 1;
      modelOptics = "-";
      cameraDir = "GL look";
      memoryPointCamera = "GL eye";
      opticsZoomMin = 0.25;
      opticsZoomMax = 1.1;
      opticsZoomInit = 0.7;
    };
  };
  class AEK_971_1p78 : AEK_971 {
    model = "\ori\weapons\aek_971\aek-971_1p78.p3d";
    displayName = "$STR_AEK_971_1P78";
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\Data\Anim\AK.rtm"};
    picture = "\ori\weapons\aek_971\Icons\AEK_971_1P78.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    class OpticsModes {
      class 1p78 {
        opticsID = 1;
        useModelOptics = 1;
        opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
        opticsZoomMin = 0.087967;
        opticsZoomMax = 0.087967;
        distanceZoomMin = 182;
        distanceZoomMax = 182;
        opticsZoomInit = 0.087967;
        memoryPointCamera = "opticView";
        visionMode[] = {"Normal"};
        opticsFlare = 1;
        opticsDisablePeripherialVision = 1;
        discreteDistance[] = {100, 200, 300, 400};
        discreteDistanceInitIndex = 1;
        cameraDir = "";
      };
    };
    modelOptics = "\ori\weapons\aek_971\Optics\1p78.p3d";
    descriptionShort = "$STR_DESC_AEK_971_1p78";
  };
  class AEK_971_1p63 : AEK_971 {
    model = "\ori\weapons\aek_971\aek-971_1p63.p3d";
    optics = 1;
    displayName = "$STR_AEK_971_1P63";
    picture = "\ori\weapons\aek_971\Icons\AEK_971_1P63.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    descriptionShort = "$STR_DESC_AEK_971_1p63";
  };
  class AEK_971_gp_1p63 : AEK_971_gp {
    model = "\ori\weapons\aek_971\aek-971_gp_1p63.p3d";
    optics = 1;
    displayName = "$STR_AEK_971_1P63_GP_34";
    picture = "\ori\weapons\aek_971\Icons\AEK_971_GP_34_1P63.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    descriptionShort = "$STR_DESC_AEK_971_1p63_GP_34";
  };
  class AEK_971_1pn100 : AEK_971 {
    model = "\ori\weapons\aek_971\aek-971_1pn100.p3d";
    displayName = "$STR_AEK_971_1PN100";
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\Data\Anim\AK.rtm"};
    picture = "\ori\weapons\aek_971\Icons\AEK_971_1PN100.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    class OpticsModes {
      class 1pn100 {
        opticsID = 1;
        useModelOptics = 1;
        opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
        opticsZoomMin = 0.069252;
        opticsZoomMax = 0.069252;
        distanceZoomMin = 182;
        distanceZoomMax = 182;
        opticsZoomInit = 0.069252;
        memoryPointCamera = "opticView";
        visionmode[] = {"Normal", "NVG"};
        opticsFlare = 1;
        opticsDisablePeripherialVision = 1;
        discreteDistance[] = {100, 200, 300, 400};
        discreteDistanceInitIndex = 1;
        cameraDir = "";
      };
    };
    modelOptics = "\ori\weapons\aek_971\Optics\1pn100.p3d";
    descriptionShort = "$STR_DESC_AEK_971_1pn100";
  };
  class AEK_971_tgp_cln : AEK_971 {
    fireLightDuration = 0;
    fireLightIntensity = 0;
    irdistance = 150;
    irlaserend = "laser dir";
    irlaserpos = "laser pos";
    magazines[] = {"30Rnd_545x39_AKSD"};
    model = "\ori\weapons\aek_971\aek-971_tgp_cln.p3d";
    optics = 1;
    displayName = "$STR_AEK_971_tgp_cln";
    picture = "\ori\weapons\aek_971\Icons\AEK_971_TGPA_CLN1K.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    descriptionShort = "$STR_DESC_AEK_971_tgp_cln";
    class Single : Mode_SemiAuto {
      begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single1", 1.77828, 1, 50};
      soundBegin[] = {"begin1", 1};
      reloadTime = 0.0666;
      recoil = "AEK_971_Recoil";
      recoilProne = "AEK_971_Recoil_prone";
      dispersion = 0.001;
      minRange = 2;
      minRangeProbab = 0.3;
      midRange = 300;
      midRangeProbab = 0.7;
      maxRange = 600;
      maxRangeProbab = 0.04;
    };
    class Burst : Mode_Burst {
      begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single1", 1.77828, 1, 50};
      soundBegin[] = {"begin1", 1};
      soundBurst = 0;
      reloadTime = 0.0666;
      ffCount = 3;
      recoil = "AEK_971_Recoil";
      recoilProne = "AEK_971_Recoil_prone";
      dispersion = 0.001;
      minRange = 1;
      minRangeProbab = 0.3;
      midRange = 150;
      midRangeProbab = 0.7;
      maxRange = 300;
      maxRangeProbab = 0.05;
      showToPlayer = 1;
    };
    class FullAuto : Mode_FullAuto {
      begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single1", 1.77828, 1, 50};
      soundBegin[] = {"begin1", 1};
      reloadTime = 0.0666;
      ffCount = 30;
      recoil = "AEK_971_Recoil";
      recoilProne = "AEK_971_Recoil_prone";
      dispersion = 0.001;
      minRange = 0;
      minRangeProbab = 0.1;
      midRange = 150;
      midRangeProbab = 0.7;
      maxRange = 300;
      maxRangeProbab = 0.05;
    };
  };
  class AEK_973s : AEK_971 {
    model = "\ori\weapons\aek_971\aek-973s.p3d";
    optics = 1;
    displayName = "$STR_AEK_973s";
    picture = "\ori\weapons\aek_971\Icons\AEK_973S.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    magazines[] = {"30Rnd_762x39_AK47", "30Rnd_762x39_SA58"};
    modes[] = {"FullAuto", "Burst", "Single"};
    class Single : Mode_SemiAuto {
      begin1[] = {"ca\sounds\weapons\rifles\ak2_single1", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 1};
      reloadTime = 0.0666;
      recoil = "AEK_973_Recoil";
      recoilProne = "AEK_973_Recoil_prone";
      dispersion = 0.001;
      minRange = 2;
      minRangeProbab = 0.3;
      midRange = 300;
      midRangeProbab = 0.7;
      maxRange = 600;
      maxRangeProbab = 0.04;
    };
    class Burst : Mode_Burst {
      begin1[] = {"ca\sounds\weapons\rifles\ak2_single1", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 1};
      soundBurst = 0;
      reloadTime = 0.0666;
      ffCount = 3;
      recoil = "AEK_973_Recoil";
      recoilProne = "AEK_973_Recoil_prone";
      dispersion = 0.001;
      minRange = 1;
      minRangeProbab = 0.3;
      midRange = 150;
      midRangeProbab = 0.7;
      maxRange = 300;
      maxRangeProbab = 0.05;
      showToPlayer = 1;
    };
    class FullAuto : Mode_FullAuto {
      begin1[] = {"ca\sounds\weapons\rifles\ak2_single1", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 1};
      reloadTime = 0.0666;
      ffCount = 30;
      recoil = "AEK_973_Recoil";
      recoilProne = "AEK_973_Recoil_prone";
      dispersion = 0.001;
      minRange = 0;
      minRangeProbab = 0.1;
      midRange = 150;
      midRangeProbab = 0.7;
      maxRange = 300;
      maxRangeProbab = 0.05;
    };
    class Library {
      libTextDesc = "$STR_LIB_AEK_973s";
    };
    descriptionShort = "$STR_DESC_AEK_973s";
  };
  class AEK_973s_gp : AEK_973s {
    model = "\ori\weapons\aek_971\aek-973s_gp.p3d";
    optics = 1;
    displayName = "$STR_AEK_973s_gp_34";
    picture = "\ori\weapons\aek_971\Icons\AEK_973S_GP_34.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
    muzzles[] = {"this", "GP34Muzzle"};
    descriptionShort = "$STR_DESC_AEK_973s_GP_34";
    class GP34Muzzle : GrenadeLauncher {
      reloadMagazineSound[] = {"Ca\sounds\Weapons\cannon\flare_reload", 0.000316, 1, 25};
      magazines[] = {"1Rnd_HE_GP25", "FlareWhite_GP25", "FlareGreen_GP25", "FlareRed_GP25", "FlareYellow_GP25", "1Rnd_SMOKE_GP25", "1Rnd_SMOKERED_GP25", "1Rnd_SMOKEGREEN_GP25", "1Rnd_SMOKEYELLOW_GP25"};
      magazineReloadTime = 0;
      reloadTime = 0.1;
      optics = 1;
      modelOptics = "-";
      cameraDir = "GL look";
      memoryPointCamera = "GL eye";
      opticsZoomMin = 0.25;
      opticsZoomMax = 1.1;
      opticsZoomInit = 0.7;
    };
  };
  class AEK_973s_1p78 : AEK_973s {
    model = "\ori\weapons\aek_971\aek-973s_1p78.p3d";
    displayName = "$STR_AEK_973s_1P78";
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\Data\Anim\AK.rtm"};
    picture = "\ori\weapons\aek_971\Icons\AEK_973S_1P78.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    class OpticsModes {
      class 1p78 {
        opticsID = 1;
        useModelOptics = 1;
        opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
        opticsZoomMin = 0.087967;
        opticsZoomMax = 0.087967;
        distanceZoomMin = 182;
        distanceZoomMax = 182;
        opticsZoomInit = 0.087967;
        memoryPointCamera = "opticView";
        visionMode[] = {"Normal"};
        opticsFlare = 1;
        opticsDisablePeripherialVision = 1;
        discreteDistance[] = {100, 200, 300, 400};
        discreteDistanceInitIndex = 1;
        cameraDir = "";
      };
    };
    modelOptics = "\ori\weapons\aek_971\Optics\1p78.p3d";
    descriptionShort = "$STR_DESC_AEK_973s_1p78";
  };
  class AEK_973s_1p63 : AEK_973s {
    model = "\ori\weapons\aek_971\aek-973s_1p63.p3d";
    optics = 1;
    displayName = "$STR_AEK_973s_1P63";
    picture = "\ori\weapons\aek_971\Icons\AEK_973S_1P63.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    descriptionShort = "$STR_DESC_AEK_973s_1p63";
  };
  class AEK_973s_gp_1p63 : AEK_973s_gp {
    model = "\ori\weapons\aek_971\aek-973s_gp_1p63.p3d";
    optics = 1;
    displayName = "$STR_AEK_973s_1P63_GP_34";
    picture = "\ori\weapons\aek_971\Icons\AEK_973S_GP_34_1P63.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    descriptionShort = "$STR_DESC_AEK_973s_1p63_GP_34";
  };
  class AEK_973s_1pn100 : AEK_973s {
    model = "\ori\weapons\aek_971\aek-973s_1pn100.p3d";
    displayName = "$STR_AEK_973s_1PN100";
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\Data\Anim\AK.rtm"};
    picture = "\ori\weapons\aek_971\Icons\AEK_973S_1PN100.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    class OpticsModes {
      class 1pn100 {
        opticsID = 1;
        useModelOptics = 1;
        opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
        opticsZoomMin = 0.069252;
        opticsZoomMax = 0.069252;
        distanceZoomMin = 182;
        distanceZoomMax = 182;
        opticsZoomInit = 0.069252;
        memoryPointCamera = "opticView";
        visionmode[] = {"Normal", "NVG"};
        opticsFlare = 1;
        opticsDisablePeripherialVision = 1;
        discreteDistance[] = {100, 200, 300, 400};
        discreteDistanceInitIndex = 1;
        cameraDir = "";
      };
    };
    modelOptics = "\ori\weapons\aek_971\Optics\1pn100.p3d";
    descriptionShort = "$STR_DESC_AEK_973s_1pn100";
  };
};
