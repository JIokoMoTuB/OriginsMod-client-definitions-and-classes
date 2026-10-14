class CfgPatches {
  class TYPE89Riffles {
    units[] = {};
    weapons[] = {"TYPE89", "TYPE89ACOG"};
    requiredVersion = 0.1;
    requiredAddons[] = {"CAData", "CACharacters", "CAWeapons"};
  };
};
class Mode_SemiAuto {
};
class Mode_Burst : Mode_SemiAuto {
};
class Mode_FullAuto : Mode_SemiAuto {
};
class CfgWeapons {
  class Default;
  class MGunCore;
  class MGun;
  class Rifle;
  class M4A1;
  class type89 : M4A1 {
    scope = 2;
    value = 0;
    model = "\ori\weapons\type89\type89.p3d";
    displayName = "Type89";
    dexterity = 1.48;
    optics = 1;
    modelOptics = "-";
    picture = "\ori\weapons\type89\data\type89_W.paa";
    opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
    reloadMagazineSound[] = {"\ori\weapons\type89\sound\type89Reload.wav", 0.01, 1};
    modes[] = {"Single", "Burst", "FullAuto"};
    magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_StanagSD", "20Rnd_556x45_Stanag", "30Rnd_556x45_G36", "100Rnd_556x45_BetaCMag", "30Rnd_556x45_G36SD"};
    class Single : Mode_SemiAuto {
      begin1[] = {"\ori\weapons\type89\sound\type89Single.wav", 1.77828, 1, 1000};
      begin2[] = {"\ori\weapons\type89\sound\type89Single.wav", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
      reloadTime = 0.075;
      recoil = "recoil_single_primary_3outof10";
      recoilProne = "recoil_single_primary_prone_3outof10";
      dispersion = 0.001;
      minRange = 2;
      minRangeProbab = 0.3;
      midRange = 250;
      midRangeProbab = 0.7;
      maxRange = 600;
      maxRangeProbab = 0.05;
    };
    class Burst : Mode_Burst {
      begin1[] = {"\ori\weapons\type89\sound\type89Burst2.wav", 1.77828, 1, 1000};
      begin2[] = {"\ori\weapons\type89\sound\type89Burst2.wav", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
      soundBurst = 0;
      recoil = "recoil_auto_primary_2outof10";
      recoilProne = "recoil_auto_primary_prone_2outof10";
      minRange = 0;
      minRangeProbab = 0.3;
      midRange = 60;
      midRangeProbab = 0.7;
      maxRange = 300;
      maxRangeProbab = 0.05;
      dispersion = 0.001;
      reloadTime = 0.075;
    };
    class FullAuto : Mode_FullAuto {
      begin1[] = {"\ori\weapons\type89\sound\type89Burst.wav", 1.77828, 1, 1000};
      begin2[] = {"\ori\weapons\type89\sound\type89Burst.wav", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
      reloadTime = 0.09;
      recoil = "recoil_auto_primary_3outof10";
      recoilProne = "recoil_auto_primary_prone_3outof10";
      dispersion = 0.00175;
      minRange = 0;
      minRangeProbab = 0.1;
      midRange = 30;
      midRangeProbab = 0.7;
      maxRange = 150;
      maxRangeProbab = 0.05;
    };
    class Library {
      libTextDesc = "JGSDF Type89.";
    };
  };
  class type89ACOG : M4A1 {
    scope = 2;
    value = 0;
    model = "\ori\weapons\type89\type89acog.p3d";
    displayName = "Type89-Acog";
    dexterity = 1.48;
    modelOptics = "\ca\weapons\2Dscope_Acog_4x32";
    opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
    opticsZoomMin = 0.0623;
    opticsZoomMax = 0.0623;
    distanceZoomMin = 100;
    distanceZoomMax = 100;
    picture = "\ori\weapons\type89\data\type89ACOG.paa";
    reloadMagazineSound[] = {"\ori\weapons\type89\sound\type89Reload.wav", 0.01, 1};
    modes[] = {"Single", "Burst", "FullAuto"};
    magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_StanagSD", "20Rnd_556x45_Stanag", "30Rnd_556x45_G36", "100Rnd_556x45_BetaCMag", "30Rnd_556x45_G36SD"};
    class Single : Mode_SemiAuto {
      begin1[] = {"\ori\weapons\type89\sound\type89Single.wav", 1.77828, 1, 1000};
      begin2[] = {"\ori\weapons\type89\sound\type89Single.wav", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
      reloadTime = 0.075;
      recoil = "recoil_single_primary_3outof10";
      recoilProne = "recoil_single_primary_prone_3outof10";
      dispersion = 0.001;
      minRange = 2;
      minRangeProbab = 0.3;
      midRange = 250;
      midRangeProbab = 0.7;
      maxRange = 600;
      maxRangeProbab = 0.05;
    };
    class Burst : Mode_Burst {
      begin1[] = {"\ori\weapons\type89\sound\type89Burst2.wav", 1.77828, 1, 1000};
      begin2[] = {"\ori\weapons\type89\sound\type89Burst2.wav", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
      soundBurst = 0;
      recoil = "recoil_auto_primary_2outof10";
      recoilProne = "recoil_auto_primary_prone_2outof10";
      minRange = 0;
      minRangeProbab = 0.3;
      midRange = 60;
      midRangeProbab = 0.7;
      maxRange = 300;
      maxRangeProbab = 0.05;
      dispersion = 0.001;
      reloadTime = 0.075;
    };
    class FullAuto : Mode_FullAuto {
      begin1[] = {"\ori\weapons\type89\sound\type89Burst.wav", 1.77828, 1, 1000};
      begin2[] = {"\ori\weapons\type89\sound\type89Burst.wav", 1.77828, 1, 1000};
      soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
      reloadTime = 0.09;
      recoil = "recoil_auto_primary_3outof10";
      recoilProne = "recoil_auto_primary_prone_3outof10";
      dispersion = 0.00175;
      minRange = 0;
      minRangeProbab = 0.1;
      midRange = 30;
      midRangeProbab = 0.7;
      maxRange = 150;
      maxRangeProbab = 0.05;
    };
    class Library {
      libTextDesc = "JGSDF Type89ACOG.";
    };
  };
};
class CfgSkeletons {
  class Rifle;
  class type89 : Rifle {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"slide", "", "magazine", ""};
  };
  class type89acog : Rifle {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {"slide", "", "magazine", ""};
  };
};
class CfgModels {
  class type89 {
    class Animations {
      class slide {
        type = "translation";
        source = "reload";
        selection = "slide";
        begin = "slidestart";
        end = "slideend";
        minValue = 0;
        maxValue = "1";
        offset0 = "0";
        offset1 = "1";
      };
      class slide_back : slide {
        source = "isEmpty";
      };
      class reload_magazine_hide {
        type = "hide";
        source = "reloadMagazine";
        selection = "magazine";
        hidevalue = 0.2;
      };
    };
    skeletonName = "type89";
    sections[] = {"zasleh"};
    sectionsInherit = "";
  };
  class type89acog {
    class Animations {
      class slide {
        type = "translation";
        source = "reload";
        selection = "slide";
        begin = "slidestart";
        end = "slideend";
        minValue = 0;
        maxValue = "1";
        offset0 = "0";
        offset1 = "1";
      };
      class slide_back : slide {
        source = "isEmpty";
      };
      class reload_magazine_hide {
        type = "hide";
        source = "reloadMagazine";
        selection = "magazine";
        hidevalue = 0.2;
      };
    };
    skeletonName = "type89acog";
    sections[] = {"zasleh"};
    sectionsInherit = "";
  };
};
