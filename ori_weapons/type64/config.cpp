class CfgPatches {
  class TYPE64Riffles {
    units[] = {};
    weapons[] = {"TYPE64", "type64sp", "type64sp_b"};
    requiredVersion = 0.1;
    requiredAddons[] = {"CAData", "CACharacters", "CAWeapons"};
    magazines[] = {"type64mag"};
    ammo[] = {"type64ammo"};
  };
};
class CfgAmmo {
  class Default;
  class BulletCore;
  class BulletBase;
  class type64ammo : BulletBase {
    hit = 12;
    indirectHit = 0;
    indirectHitRange = 0;
    visibleFire = 18;
    audibleFire = 18;
    visibleFireTime = 3;
    cost = 1;
    tracerColor[] = {0, 0, 0, 0};
    tracerColorR[] = {0, 0, 0, 0};
    airFriction = -0.00085;
  };
};
class CfgMagazines {
  class CA_Magazine;
  class type64mag : CA_Magazine {
    scope = 2;
    displayName = "Type 7.62 Nato 30";
    ammo = "type64ammo";
    count = 30;
    initSpeed = 900;
    picture = "\ca\weapons\data\equip\m_G36_CA.paa";
    descriptionShort = "Caliber:7.62x51 mm NATO<br/>Rounds: 30 <br/>Used in: Type64-S";
  };
};
class Mode_SemiAuto;
class Mode_Burst;
class CfgWeapons {
  class Default;
  class MGunCore;
  class MGun;
  class Rifle;
  class M4A1;
  class type64 : M4A1 {
    scope = 0;
    value = 0;
    model = "\ori\weapons\type64\type64.p3d";
    displayName = "Type64";
    dexterity = 1.48;
    optics = 1;
    modelOptics = "-";
    picture = "\ori\weapons\type64\data\type64_W.paa";
    opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
    reloadMagazineSound[] = {"\ori\weapons\type64\sound\t64r_mag.wss", 0.01, 1};
    modes[] = {"Single", "Burst"};
    magazines[] = {"type64mag"};
    class Single : Mode_SemiAuto {
      begin1[] = {"\ori\weapons\type64\sound\t64r_fireF", 2.7, 1};
      soundBegin[] = {"begin1", 0.5};
      reloadTime = 0.2;
      recoil = "recoil_single_primary_3outof10";
      recoilProne = "recoil_single_primary_prone_3outof10";
      minRange = 2;
      minRangeProbab = 0.3;
      midRange = 250;
      midRangeProbab = 0.7;
      maxRange = 600;
      maxRangeProbab = 0.05;
      aiRateOfFireDistance = 600;
    };
    class Burst : Mode_Burst {
      begin1[] = {"\ori\weapons\type64\sound\t64r_fireF", 2.7, 1};
      soundBegin[] = {"begin1", 0.5};
      reloadTime = 0.2;
      soundBurst = 0;
      recoil = "recoil_auto_primary_4outof10";
      recoilProne = "recoil_auto_primary_prone_3outof10";
      minRange = 0;
      minRangeProbab = 0.3;
      midRange = 80;
      midRangeProbab = 0.7;
      maxRange = 120;
      maxRangeProbab = 0.05;
      dispersion = 0.001;
    };
    class Library {
      libTextDesc = "JGSDF Type64.";
    };
    descriptionShort = "Sniper rifle <br/>Caliber: 7.62x51mm";
  };
  class type64sp : M4A1 {
    scope = 2;
    value = 0;
    model = "\ori\weapons\type64\type64sniper.p3d";
    displayName = "Type64-S";
    dexterity = 1.48;
    modelOptics = "\ori\weapons\type64\optics.p3d";
    optics = 1;
    opticsZoomMin = 0.02;
    opticsZoomMax = 0.12;
    distanceZoomMin = 300;
    distanceZoomMax = 300;
    picture = "\ori\weapons\type64\data\type64sniper_W.paa";
    opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
    reloadMagazineSound[] = {"\ori\weapons\type64\sound\t64r_mag.wss", 0.01, 1};
    modes[] = {"Single", "Burst"};
    magazines[] = {"type64mag"};
    visionMode[] = {"Normal", "NVG"};
    weaponInfoType = "RscWeaponZeroing";
    discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    discreteDistanceInitIndex = 2;
    class Single : Mode_SemiAuto {
      begin1[] = {"\ori\weapons\type64\sound\t64r_fireF", 2.7, 1};
      soundBegin[] = {"begin1", 0.5};
      reloadTime = 0.2;
      recoil = "recoil_single_primary_3outof10";
      recoilProne = "recoil_single_primary_prone_3outof10";
      minRange = 2;
      minRangeProbab = 0.3;
      midRange = 250;
      midRangeProbab = 0.7;
      maxRange = 600;
      maxRangeProbab = 0.05;
      aiRateOfFireDistance = 600;
    };
    class Burst : Mode_Burst {
      begin1[] = {"\ori\weapons\type64\sound\t64r_fireF", 2.7, 1};
      soundBegin[] = {"begin1", 0.5};
      reloadTime = 0.2;
      soundBurst = 0;
      recoil = "recoil_auto_primary_4outof10";
      recoilProne = "recoil_auto_primary_prone_3outof10";
      minRange = 0;
      minRangeProbab = 0.3;
      midRange = 250;
      midRangeProbab = 0.7;
      maxRange = 620;
      maxRangeProbab = 0.05;
      dispersion = 0.001;
    };
    class Library {
      libTextDesc = "JGSDF Type64.";
    };
    descriptionShort = "Sniper rifle <br/>Caliber: 7.62x51mm";
  };
  class type64sp_b : type64sp {
    displayName = "Type64-S (Broken)";
    modelOptics = "-";
    opticsZoomMin = 0.25;
    opticsZoomMax = 1.1;
    opticsZoomInit = 0.5;
    distanceZoomMin = 300;
    distanceZoomMax = 300;
    discreteDistance[] = {100, 200, 300};
    discreteDistanceInitIndex = 2;
  };
};
class CfgSkeletons {
  class Rifle;
  class type64 : Rifle {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"slide", "", "magazine", ""};
  };
  class type64sniper : Rifle {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"slide", "", "magazine", ""};
  };
};
class CfgModels {
  class type64 {
    class Animations {
      class slide {
        type = "translation";
        source = "reload";
        selection = "slide";
        begin = "start";
        end = "end";
        minValue = 0;
        maxValue = "1";
        offset0 = "0";
        offset1 = "1";
      };
      class reload_magazine_hide {
        type = "hide";
        source = "reloadMagazine";
        selection = "magazine";
        hidevalue = 0.2;
      };
    };
    skeletonName = "type64";
    sections[] = {"zasleh"};
    sectionsInherit = "";
  };
  class type64sniper {
    class Animations {
      class slide {
        type = "translation";
        source = "reload";
        selection = "slide";
        begin = "start";
        end = "end";
        minValue = 0;
        maxValue = "1";
        offset0 = "0";
        offset1 = "1";
      };
      class reload_magazine_hide {
        type = "hide";
        source = "reloadMagazine";
        selection = "magazine";
        hidevalue = 0.2;
      };
    };
    skeletonName = "type64sniper";
    sections[] = {"zasleh"};
    sectionsInherit = "";
  };
};
