class CfgPatches {
  class gms_mp40 {
    units[] = {};
    weapons[] = {"gms_mp40"};
    requiredVersion = 0.1;
    requiredAddons[] = {"CAWeapons"};
    magazines[] = {"gms_mp40_mag"};
    ammo[] = {"B_9x19_PRBLM_Ball"};
  };
};
class CfgRecoils {
  gms_mp40Recoil[] = {0, 0, 0, 0.05, 0.05, 0.005, 0.1, 0, -0.005, 0.1, -0.05, 0, 0.05, 0, 0};
  gms_mp40RecoilProne[] = {0, 0, 0, 0.05, 0.001, 0.005, 0.1, 0, -0.005, 0.1, -0.001, 0, 0.05, 0, 0};
};
class cfgAmmo {
  class BulletBase;
  class B_9x19_PRBLM_Ball : BulletBase {
    hit = 9;
    cartridge = "FxCartridge_Small";
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
  class gms_mp40_mag : CA_Magazine {
    scope = 2;
    displayName = "$STR_MN_MP40";
    initSpeed = 380;
    ammo = "B_9x19_PRBLM_Ball";
    count = 32;
    picture = "\ori\weapons\gms_mp40\data\equip\m_mp40_CA.paa";
    descriptionShort = "$STR_DSS_32RND_MP40";
  };
};
class Mode_SemiAuto {
  displayName = "$STR_DN_MODE_SEMIAUTO";
};
class Mode_FullAuto : Mode_SemiAuto {
  displayName = "$STR_DN_MODE_FULLAUTO";
};
class cfgWeapons {
  class Rifle;
  class gms_mp40 : Rifle {
    scope = 2;
    model = "\ori\weapons\gms_mp40\gms_mp40.p3d";
    displayName = "$STR_DN_MP40";
    dexterity = 1.5;
    picture = "\ori\weapons\gms_mp40\data\equip\w_mp40_ca.paa";
    UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
    modes[] = {"Full"};
    class Full : Mode_FullAuto {
      begin1[] = {"ca\sounds\weapons\rifles\Bizon_single1", 1.77828, 1, 1000};
      begin2[] = {"ca\sounds\weapons\rifles\Bizon_single2", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
      soundContinuous = 0;
      reloadTime = 0.09;
      ffCount = 1;
      recoil = "gms_mp40Recoil";
      recoilProne = "gms_mp40RecoilProne";
      aiRateOfFire = 0.001;
      dispersion = 0.007;
      minRange = 2;
      minRangeProbab = 0.2;
      midRange = 60;
      midRangeProbab = 0.7;
      maxRange = 150;
      maxRangeProbab = 0.05;
    };
    aiDispersionCoefY = 7;
    aiDispersionCoefX = 7;
    magazines[] = {"gms_mp40_mag"};
    class Library {
      libTextDesc = "$STR_LIB_MP40";
    };
    descriptionShort = "$STR_DSS_MP40";
  };
};
