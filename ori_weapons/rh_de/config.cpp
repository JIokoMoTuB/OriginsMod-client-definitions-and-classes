class CfgPatches {
  class RH_de_cfg {
    units[] = {};
    weapons[] = {"RH_deagle", "RH_deagleg", "RH_deagles"};
    requiredAddons[] = {"CAweapons"};
    requiredVersion = 1.02;
    magazines[] = {"7Rnd_50_AE"};
    ammo[] = {"RH_50_AE_Ball"};
  };
};
class cfgRecoils {
  deagleBase[] = {0, 0.008, 0.064, 0.005, 0.008, 0.064, 0.09, 0, -0.0033, 0.15, 0, 0};
};
class CfgAmmo {
  class Default;
  class BulletCore;
  class BulletBase;
  class B_9x19_SD;
  class RH_50_AE_Ball : BulletBase {
    hit = 14;
    cartridge = "FxCartridge_Small";
    cost = 1;
    typicalSpeed = 550;
    airFriction = -0.00165;
  };
};
class CfgMagazines {
  class Default;
  class CA_Magazine;
  class 7Rnd_50_AE : CA_Magazine {
    scope = 2;
    displayName = ".50 AE";
    picture = "\ori\weapons\rh_de\inv\m_de.paa";
    model = "\ori\weapons\rh_de\mags\mag_de.p3d";
    type = 16;
    ammo = "RH_50_AE_Ball";
    count = 8;
    initSpeed = 421;
  };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons {
  class Default;
  class PistolCore;
  class Pistol;
  class RH_deagle : Pistol {
    scope = 2;
    model = "\ori\weapons\rh_de\RH_deagle.p3d";
    modelOptics = "-";
    picture = "\ori\weapons\rh_de\inv\de.paa";
    minRange = 2;
    minRangeProbab = 0.2;
    midRange = 50;
    midRangeProbab = 0.8;
    maxRange = 80;
    maxRangeProbab = 0.2;
    distanceZoomMin = 56;
    distanceZoomMax = 56;
    optics = 1;
    dexterity = 1.85;
    displayName = "Desert Eagle";
    begin1[] = {"\ori\weapons\rh_de\sound\desert_eagle_shot.wss", 0.794328, 1, 700};
    soundBegin[] = {"begin1", 1};
    drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1", 0.01, 1, 20};
    reloadMagazineSound[] = {"\ori\weapons\rh_de\sound\de_reload.wss", 0.1, 1, 20};
    magazines[] = {"7Rnd_50_AE"};
    dispersion = 0.0085;
    ffCount = 1;
    recoil = "deagleBase";
    reloadTime = 0.2;
    aiRateOfFire = 0.1;
    aiRateOfFireDistance = 50;
    class Library {
      libTextDesc = "The Desert Eagle is a large caliber gas-operated semi-automatic pistol manufactured in Israel by IMI (Israel Military Industries) for Magnum Research, Inc.Magnum Research, based in the USA, developed and patented the original Desert Eagle design and this design was further refined by IMI. Manufacturing was moved to Saco Defense in the state of Maine from 1995 to 2000, but shifted back to Israel when Saco was acquired by General Dynamics.";
    };
  };
  class RH_Deagleg : RH_deagle {
    displayName = "Desert Eagle Gold ";
    model = "\ori\weapons\rh_de\RH_deagleg.p3d";
    picture = "\ori\weapons\rh_de\inv\deg.paa";
  };
  class RH_Deagles : RH_deagle {
    displayName = "Desert Eagle Silver ";
    model = "\ori\weapons\rh_de\RH_deagles.p3d";
    picture = "\ori\weapons\rh_de\inv\des.paa";
  };
};
