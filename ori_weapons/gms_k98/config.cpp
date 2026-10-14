class CfgPatches {
  class gms_k98 {
    units[] = {};
    weapons[] = {"gms_k98", "gms_k98zf39"};
    requiredAddons[] = {"CAWeapons", "CAWeapons2"};
    magazines[] = {"gms_k98_mag"};
    ammo[] = {"B_7x92_Ball"};
  };
};
class cfgAmmo {
  class BulletBase;
  class B_7x92_Ball : BulletBase {
    hit = 14;
    indirectHit = 0;
    indirectHitRange = 0;
    visibleFire = 22;
    audibleFire = 18;
    visibleFireTime = 3;
    cost = 1.2;
    airLock = 1;
  };
};
class CfgMagazines {
  class CA_Magazine;
  class gms_k98_mag : CA_Magazine {
    scope = 2;
    displayName = "$STR_MN_K98";
    initSpeed = 700;
    ammo = "B_7x92_Ball";
    count = 5;
    picture = "\ori\weapons\gms_k98\data\equip\m_k98_ca.paa";
    descriptionShort = "$STR_DSS_5RND_K98";
  };
};
class Mode_SemiAuto;
class cfgWeapons {
  class GrenadeLauncher;
  class Rifle;
  class gms_k98 : Rifle {
    scope = 2;
    displayName = "$STR_DN_K98";
    dexterity = 2;
    picture = "\ori\weapons\gms_k98\data\equip\w_k98_ca.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M24.rtm"};
    modes[] = {"Single"};
    class Single : Mode_SemiAuto {
      begin1[] = {"\ori\weapons\gms_k98\data\sounds\kar98.wav", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 1};
      soundContinuous = 0;
      reloadTime = 1.5;
      ffCount = 1;
      recoil = "recoil_single_primary_5outof10";
      recoilProne = "recoil_single_primary_prone_4outof10";
      aiRateOfFire = 0.001;
      dispersion = 0.007;
      minRange = 2;
      minRangeProbab = 0.2;
      midRange = 150;
      midRangeProbab = 0.7;
      maxRange = 300;
      maxRangeProbab = 0.05;
    };
    aiDispersionCoefY = 7;
    aiDispersionCoefX = 7;
    magazines[] = {"gms_k98_mag"};
    model = "\ori\weapons\gms_k98\gms_k98.p3d";
    descriptionShort = "$STR_DSS_K98";
  };
  class gms_k98zf39 : gms_k98 {
    picture = "\ori\weapons\gms_k98\data\equip\w_zf39_ca.paa";
    model = "\ori\weapons\gms_k98\gms_k98zf39.p3d";
    modelOptics = "\ca\weapons\2Dscope_Hunter_12";
    opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
    opticsFlare = 1;
    visionMode[] = {"Normal"};
    displayName = "$STR_DN_K98S";
    opticsDisablePeripherialVision = 1;
    opticsZoomInit = 0.083;
    opticsZoomMin = 0.0208;
    opticsZoomMax = 0.083;
    distanceZoomMin = 300;
    distanceZoomMax = 100;
    class Single : Mode_SemiAuto {
      begin1[] = {"\ori\weapons\gms_k98\data\sounds\kar98.wav", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 1};
      soundContinuous = 0;
      reloadTime = 2;
      ffCount = 1;
      recoil = "recoil_single_primary_5outof10";
      recoilProne = "recoil_single_primary_prone_4outof10";
      aiRateOfFire = 0.001;
      dispersion = 0.003;
      minRange = 2;
      minRangeProbab = 0.2;
      midRange = 300;
      midRangeProbab = 0.7;
      maxRange = 600;
      maxRangeProbab = 0.05;
    };
    descriptionShort = "$STR_DSS_K98ZF39";
  };
};
