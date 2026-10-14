class CfgPatches {
  class dak_mak_want {
    units[] = {};
    weapons[] = {"dak_mak_wantRifle", "mak_BZT75C", "Planshet", "swat"};
    requiredVersion = 1;
    requiredAddons[] = {"CAWeapons", "CAWeapons2"};
  };
};
class cfgWeapons {
  class Rifle;
  class AK_BASE;
  class AKS_74_U;
  class dak_mak_wantRifle : Rifle {
    model = "\ori\weapons\dak_mak_want\model\dak_mak_want";
    modelOptics = "-";
    picture = "\ori\weapons\dak_mak_want\ico\mak_want.paa";
    minRange = 0;
    minRangeProbab = 0.1;
    midRange = 30;
    midRangeProbab = 0.3;
    maxRange = 50;
    maxRangeProbab = 0.04;
    optics = 1;
    distanceZoomMin = 50;
    distanceZoomMax = 50;
    scope = 2;
    begin1[] = {"ca\sounds\weapons\pistols\makarov_single1", 0.794328, 1, 700};
    soundBegin[] = {"begin1", 1};
    drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1", 0.0001, 1, 20};
    reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\pistol_reload", 0.031623, 1, 20};
    magazines[] = {"8Rnd_9x18_Makarov"};
    dispersion = 0.02;
    ffCount = 1;
    recoil = "recoil_single_pistol_2outof3";
    recoilProne = "recoil_single_pistol_prone_2outof3";
    aiRateOfFire = 0.5;
    aiRateOfFireDistance = 50;
    displayName = "$STR_DN_want";
    class Library {
      libTextDesc = "$STR_LIB_want";
    };
    descriptionShort = "$STR_DSS_want";
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\dak_mak_want\anim\mak_want.rtm"};
    armor = 610;
  };
  class mak_BZT75C : dak_mak_wantRifle {
    model = "\ori\weapons\dak_mak_want\model\dak_mak_want3";
    displayName = "$STR_DN_mak_BZT75C";
    picture = "\ori\weapons\dak_mak_want\ico\mak_BZT75C.paa";
    class Library {
      libTextDesc = "$STR_LIB_mak_BZT75C";
    };
    descriptionShort = "$STR_DSS_mak_BZT75C";
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\dak_mak_want\anim\mak_BZT75C.rtm"};
  };
  class AKS_74U_BZT75C : AKS_74_U {
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\dak_mak_want\anim\AKS_74U_BZT75C.rtm"};
    picture = "\ori\weapons\dak_mak_want\ico\mak_BZT75C.paa";
    displayName = "$STR_DN_mak_BZT75C";
    class Library {
      libTextDesc = "$STR_LIB_mak_BZT75C";
    };
    descriptionShort = "$STR_DSS_mak_BZT75C";
    model = "\ori\weapons\dak_mak_want\model\dak_mak_want2";
  };
  class Planshet : dak_mak_wantRifle {
    model = "\ori\weapons\dak_mak_want\model\dak_mak_want4";
    displayName = "$STR_DN_Planshet";
    picture = "\ori\weapons\dak_mak_want\ico\Planshet.paa";
    class Library {
      libTextDesc = "$STR_LIB_Planshet";
    };
    descriptionShort = "$STR_DSS_Planshet";
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\dak_mak_want\anim\Planshet.rtm"};
  };
  class swat : dak_mak_wantRifle {
    scope = 2;
    model = "\ori\weapons\dak_mak_want\model\dak_mak_want5";
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\dak_mak_want\anim\swat.rtm"};
    modelOptics = "-";
    picture = "\ori\weapons\dak_mak_want\ico\swat.paa";
    minRange = 0;
    minRangeProbab = 0.1;
    midRange = 30;
    midRangeProbab = 0.3;
    maxRange = 50;
    maxRangeProbab = 0.04;
    optics = 1;
    distanceZoomMin = 50;
    distanceZoomMax = 50;
    displayName = "$STR_DN_swat";
    begin1[] = {"ca\sounds\weapons\pistols\m9_single1", 0.794328, 1, 700};
    soundBegin[] = {"begin1", 1};
    drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1", 0.01, 1, 20};
    reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\pistol_reload", 0.1, 1, 20};
    magazines[] = {"15Rnd_9x19_M9", "15Rnd_9x19_M9SD"};
    dispersion = 0.02;
    ffCount = 1;
    recoil = "recoil_single_pistol_2outof3";
    recoilProne = "recoil_single_pistol_prone_2outof3";
    aiRateOfFire = 0.5;
    aiRateOfFireDistance = 50;
    class Library {
      libTextDesc = "$STR_LIB_swat";
    };
    descriptionShort = "$STR_DSS_swat";
    class FlashLight {
      color[] = {0.8, 0.8, 1, 1};
      ambient[] = {0.07, 0.07, 0.07, 1};
      position = "flash dir";
      direction = "flash";
      angle = 30;
      scale[] = {1, 1, 0.5};
      brightness = 0.1;
    };
  };
};
