class CfgPatches {
  class DM_Weapons {
    units[] = {};
    weapons[] = {"DM_M4", "DM_M4_NV", "DM_M4_GL", "DM_M4_GL_NV", "DM_M4_SIL", "DM_M4_SIL_NV"};
    requiredVersion = 0.1;
    requiredAddons[] = {};
  };
};
class Mode_SemiAuto {
};
class Mode_Burst : Mode_SemiAuto {
};
class Mode_FullAuto : Mode_SemiAuto {
};
class Single;
class Burst;
class FullAuto;
class CfgWeapons {
  class Default;
  class M4A1;
  class M4A1_Aim;
  class M4A1_AIM_SD_camo;
  class M4A1_HWS_GL;
  class M4A1_HWS_GL_SD_Camo;
  class DM_M4 : M4A1 {
    scope = 2;
    model = "\ori\weapons\mk_mod\M4A1.p3d";
    displayName = "M4";
    picture = "\ori\weapons\mk_mod\data\Camo_M4.paa";
    class FlashLight {
      color[] = {0.9, 0.9, 0.7, 0.9};
      ambient[] = {0.1, 0.1, 0.1, 1};
      position = "flash dir";
      direction = "flash";
      angle = 30;
      scale[] = {1, 1, 0.5};
      brightness = 0.1;
    };
  };
  class DM_M4_NV : DM_M4 {
    model = "\ori\weapons\mk_mod\M4A1_anpvs4.p3d";
    displayName = "M4 AN/PVS-4";
    picture = "\ori\weapons\mk_mod\data\M4A1_anpvs4.paa";
    modelOptics = "\Ca\weapons_E\NV_anpvs4_optic.p3d";
    visionMode[] = {"Normal", "NVG"};
    opticsZoomMin = 0.0625;
    opticsZoomMax = 0.0625;
    opticsZoomInit = 0.0625;
    opticsPPEffects[] = {};
    opticsDisablePeripherialVision = 1;
    distanceZoomMin = 300;
    distanceZoomMax = 300;
    opticsFlare = 1;
  };
  class DM_M4_GL : DM_M4 {
    model = "\ori\weapons\mk_mod\M4A1_gl_camo.p3d";
    displayName = "M4 GL";
    picture = "\ori\weapons\mk_mod\data\Camo_M4_GL.paa";
    muzzles[] = {"this", "M203Muzzle"};
    handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
    class FlashLight {
      color[] = {0.9, 0.9, 0.7, 0.9};
      ambient[] = {0.1, 0.1, 0.1, 1};
      position = "flash dir";
      direction = "flash";
      angle = 30;
      scale[] = {1, 1, 0.5};
      brightness = 0.1;
    };
  };
  class DM_M4_GL_NV : DM_M4_GL {
    model = "\ori\weapons\mk_mod\M4A1_gl_anpvs4.p3d";
    displayName = "M4 GL AN/PVS-4";
    picture = "\ori\weapons\mk_mod\data\M4A1_gl_anpvs4.paa";
    modelOptics = "\Ca\weapons_E\NV_anpvs4_optic.p3d";
    visionMode[] = {"Normal", "NVG"};
    opticsZoomMin = 0.0625;
    opticsZoomMax = 0.0625;
    opticsZoomInit = 0.0625;
    opticsPPEffects[] = {};
    opticsDisablePeripherialVision = 1;
    distanceZoomMin = 300;
    distanceZoomMax = 300;
    opticsFlare = 1;
  };
  class DM_M4_SIL : DM_M4 {
    fireLightDuration = 0;
    fireLightIntensity = 0;
    model = "\ori\weapons\mk_mod\M4A1_sd_camo.p3d";
    displayName = "M4 SD";
    picture = "\ori\weapons\mk_mod\data\Camo_M4_SD.paa";
    modes[] = {"Single", "FullAuto"};
    magazines[] = {"30Rnd_556x45_StanagSD", "30Rnd_556x45_G36SD", "30Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "30Rnd_556x45_G36"};
    class FlashLight {
      color[] = {0.9, 0.9, 0.7, 0.9};
      ambient[] = {0.1, 0.1, 0.1, 1};
      position = "flash dir";
      direction = "flash";
      angle = 30;
      scale[] = {1, 1, 0.5};
      brightness = 0.1;
    };
    class Single : Mode_SemiAuto {
      begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2", "db0", 1, 300};
      soundBegin[] = {"begin1", 1};
      recoil = "recoil_single_primary_2outof10";
      recoilProne = "recoil_single_primary_prone_2outof10";
      minRange = 2;
      minRangeProbab = 0.3;
      midRange = 40;
      midRangeProbab = 0.7;
      maxRange = 150;
      maxRangeProbab = 0.05;
    };
    class FullAuto : Mode_FullAuto {
      begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2", "db0", 1, 300};
      soundBegin[] = {"begin1", 1};
      recoil = "recoil_auto_primary_2outof10";
      recoilProne = "recoil_auto_primary_prone_2outof10";
      minRange = 0;
      minRangeProbab = 0.3;
      midRange = 20;
      midRangeProbab = 0.7;
      maxRange = 40;
      maxRangeProbab = 0.05;
    };
  };
  class DM_M4_SIL_NV : DM_M4_SIL {
    model = "\ori\weapons\mk_mod\M4A1_sd_anpvs4.p3d";
    displayName = "M4 SD AN/PVS-4";
    picture = "\ori\weapons\mk_mod\data\M4A1_sd_anpvs4.paa";
    modelOptics = "\Ca\weapons_E\NV_anpvs4_optic.p3d";
    visionMode[] = {"Normal", "NVG"};
    opticsZoomMin = 0.0625;
    opticsZoomMax = 0.0625;
    opticsZoomInit = 0.0625;
    opticsPPEffects[] = {};
    opticsDisablePeripherialVision = 1;
    distanceZoomMin = 300;
    distanceZoomMax = 300;
    opticsFlare = 1;
  };
  class DM_M4_EO_LP : M4A1_Aim {
    model = "ori\weapons\dmweapons\M4\Camo_M4_eotech_LP";
    displayName = "M4 Holo";
    picture = "\ori\weapons\dmweapons\data\icon\Camo_M4_eotech_LP.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\dmweapons\weaponrest\M4A1_simple.rtm"};
    reloadMagazineSound[] = {"\ori\weapons\dmweapons\sounds\m4\reload.ogg", 0.0562341, 1, 10};
    class FlashLight {
      color[] = {0.9, 0.9, 0.7, 0.9};
      ambient[] = {0.1, 0.1, 0.1, 1};
      position = "flash dir";
      direction = "flash";
      angle = 30;
      scale[] = {1, 1, 0.5};
      brightness = 0.1;
    };
  };
  class DM_M4_EO_LP_SIL : M4A1_AIM_SD_camo {
    model = "ori\weapons\dmweapons\M4\Camo_M4_eotech_LP_SIL";
    displayName = "M4 Holo SD";
    picture = "\ori\weapons\dmweapons\data\icon\Camo_M4_eotech_LP_SIL.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\dmweapons\weaponrest\M4A1_simple.rtm"};
    reloadMagazineSound[] = {"\ori\weapons\dmweapons\sounds\m4\reload.ogg", 0.0562341, 1, 10};
    magazines[] = {"30Rnd_556x45_StanagSD", "30Rnd_556x45_G36SD", "30Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "30Rnd_556x45_G36"};
    class FlashLight {
      color[] = {0.9, 0.9, 0.7, 0.9};
      ambient[] = {0.1, 0.1, 0.1, 1};
      position = "flash dir";
      direction = "flash";
      angle = 30;
      scale[] = {1, 1, 0.5};
      brightness = 0.1;
    };
  };
  class DM_M4_EO_LP_GL : M4A1_HWS_GL {
    model = "ori\weapons\dmweapons\M4\Camo_M4_eotech_LP_GL";
    displayName = "M4 Holo GL";
    picture = "\ori\weapons\dmweapons\data\icon\Camo_M4_eotech_LP_GL.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\dmweapons\weaponrest\DM_GL.rtm"};
    reloadMagazineSound[] = {"\ori\weapons\dmweapons\sounds\m4\reload.ogg", 0.0562341, 1, 10};
    class FlashLight {
      color[] = {0.9, 0.9, 0.7, 0.9};
      ambient[] = {0.1, 0.1, 0.1, 1};
      position = "flash dir";
      direction = "flash";
      angle = 30;
      scale[] = {1, 1, 0.5};
      brightness = 0.1;
    };
  };
  class DM_M4_CCO_LP : M4A1_Aim {
    model = "ori\weapons\dmweapons\M4\Camo_M4_CCO_LP";
    displayName = "M4 CCO";
    picture = "\ori\weapons\dmweapons\data\icon\Camo_M4_CCO_LP.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\dmweapons\weaponrest\M4A1_simple.rtm"};
    reloadMagazineSound[] = {"\ori\weapons\dmweapons\sounds\m4\reload.ogg", 0.0562341, 1, 10};
    class FlashLight {
      color[] = {0.9, 0.9, 0.7, 0.9};
      ambient[] = {0.1, 0.1, 0.1, 1};
      position = "flash dir";
      direction = "flash";
      angle = 30;
      scale[] = {1, 1, 0.5};
      brightness = 0.1;
    };
  };
  class DM_M4_CCO_LP_SIL : M4A1_AIM_SD_camo {
    model = "ori\weapons\dmweapons\M4\Camo_M4_CCO_LP_SIL";
    displayName = "M4 CCO SD";
    picture = "\ori\weapons\dmweapons\data\icon\Camo_M4_CCO_LP_SIL.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\dmweapons\weaponrest\M4A1_simple.rtm"};
    reloadMagazineSound[] = {"\ori\weapons\dmweapons\sounds\m4\reload.ogg", 0.0562341, 1, 10};
    magazines[] = {"30Rnd_556x45_StanagSD", "30Rnd_556x45_G36SD", "30Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "30Rnd_556x45_G36"};
    class FlashLight {
      color[] = {0.9, 0.9, 0.7, 0.9};
      ambient[] = {0.1, 0.1, 0.1, 1};
      position = "flash dir";
      direction = "flash";
      angle = 30;
      scale[] = {1, 1, 0.5};
      brightness = 0.1;
    };
  };
  class DM_M4_CCO_LP_GL : M4A1_HWS_GL {
    model = "ori\weapons\dmweapons\M4\Camo_M4_CCO_LP_GL";
    displayName = "M4 CCO GL";
    picture = "\ori\weapons\dmweapons\data\icon\Camo_M4_CCO_LP_GL.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\dmweapons\weaponrest\DM_GL.rtm"};
    reloadMagazineSound[] = {"\ori\weapons\dmweapons\sounds\m4\reload.ogg", 0.0562341, 1, 10};
    class FlashLight {
      color[] = {0.9, 0.9, 0.7, 0.9};
      ambient[] = {0.1, 0.1, 0.1, 1};
      position = "flash dir";
      direction = "flash";
      angle = 30;
      scale[] = {1, 1, 0.5};
      brightness = 0.1;
    };
  };
  class DM_M4_RCO_LP : M4A1_Aim {
    model = "ori\weapons\dmweapons\M4\Camo_M4_RCO_LP";
    displayName = "M4 Acog V1";
    picture = "\ori\weapons\dmweapons\data\icon\Camo_M4_RCO_LP.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\dmweapons\weaponrest\M4A1_simple.rtm"};
    reloadMagazineSound[] = {"\ori\weapons\dmweapons\sounds\m4\reload.ogg", 0.0562341, 1, 10};
    optics = 1;
    modelOptics = "\ca\weapons\2Dscope_Acog_4x32";
    class OpticsModes {
      class RCO {
        opticsID = 1;
        useModelOptics = 1;
        opticsPPEffects[] = {};
        distanceZoomMin = 100;
        distanceZoomMax = 100;
        opticsZoomMin = 0.0623;
        opticsZoomMax = 0.0623;
        opticsZoomInit = 0.0623;
        memoryPointCamera = "eye";
        visionMode[] = {};
        opticsFlare = 1;
        opticsDisablePeripherialVision = 1;
        cameraDir = "";
      };
      class Kolimator : RCO {
        opticsID = 2;
        useModelOptics = 0;
        opticsFlare = 0;
        opticsDisablePeripherialVision = 0;
        opticsZoomMin = 0.25;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.5;
        memoryPointCamera = "seceye";
        visionMode[] = {};
      };
    };
    class FlashLight {
      color[] = {0.9, 0.9, 0.7, 0.9};
      ambient[] = {0.1, 0.1, 0.1, 1};
      position = "flash dir";
      direction = "flash";
      angle = 30;
      scale[] = {1, 1, 0.5};
      brightness = 0.1;
    };
  };
  class DM_M4_Elcan_LP : DM_M4_RCO_LP {
    model = "\ori\weapons\mk_mod\M4A1_elcan.p3d";
    displayName = "M4 Elcan";
    picture = "\ori\weapons\mk_mod\data\M4A1_elcan.paa";
    optics = 1;
    modelOptics = "\ori\weapons\aawf88\f88\steyr_optic_elcan.p3d";
  };
  class DM_M4_RCO_LP2 : DM_M4_RCO_LP {
    displayName = "M4 Acog V2";
    modelOptics = "\ca\Weapons_baf\ACOG_optic";
  };
  class DM_M4_RCO_LP3 : DM_M4_RCO_LP {
    displayName = "M4 Acog V3";
    modelOptics = "\ori\weapons\aawf88\f88\steyr_optic_acog.p3d";
  };
  class DM_M4_RCO_LP4 : DM_M4_RCO_LP {
    displayName = "M4 Acog V4";
    modelOptics = "\ori\weapons\rh_aks\fnc_acog_ta11fin";
  };
  class DM_M4_RCO_LP_SIL : M4A1_AIM_SD_camo {
    model = "ori\weapons\dmweapons\M4\Camo_M4_RCO_LP_SIL";
    displayName = "M4 Acog V1 SD";
    picture = "\ori\weapons\dmweapons\data\icon\Camo_M4_RCO_LP_SIL.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\dmweapons\weaponrest\M4A1_simple.rtm"};
    reloadMagazineSound[] = {"\ori\weapons\dmweapons\sounds\m4\reload.ogg", 0.0562341, 1, 10};
    optics = 1;
    modelOptics = "\ca\weapons\2Dscope_Acog_4x32";
    magazines[] = {"30Rnd_556x45_StanagSD", "30Rnd_556x45_G36SD", "30Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "30Rnd_556x45_G36"};
    class OpticsModes {
      class RCO {
        opticsID = 1;
        useModelOptics = 1;
        opticsPPEffects[] = {};
        distanceZoomMin = 100;
        distanceZoomMax = 100;
        opticsZoomMin = 0.0623;
        opticsZoomMax = 0.0623;
        opticsZoomInit = 0.0623;
        memoryPointCamera = "eye";
        visionMode[] = {};
        opticsFlare = 1;
        opticsDisablePeripherialVision = 1;
        cameraDir = "";
      };
      class Kolimator : RCO {
        opticsID = 2;
        useModelOptics = 0;
        opticsFlare = 0;
        opticsDisablePeripherialVision = 0;
        opticsZoomMin = 0.25;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.5;
        memoryPointCamera = "seceye";
        visionMode[] = {};
      };
    };
    class FlashLight {
      color[] = {0.9, 0.9, 0.7, 0.9};
      ambient[] = {0.1, 0.1, 0.1, 1};
      position = "flash dir";
      direction = "flash";
      angle = 30;
      scale[] = {1, 1, 0.5};
      brightness = 0.1;
    };
  };
  class DM_M4_Elcan_LP_SIL : DM_M4_RCO_LP_SIL {
    model = "\ori\weapons\mk_mod\M4A1_sd_elcan.p3d";
    displayName = "M4 Elcan SD";
    picture = "\ori\weapons\mk_mod\data\M4A1_sd_elcan.paa";
    optics = 1;
    modelOptics = "\ori\weapons\aawf88\f88\steyr_optic_elcan.p3d";
  };
  class DM_M4_RCO_LP_SIL2 : DM_M4_RCO_LP_SIL {
    displayName = "M4 Acog V2 SD";
    modelOptics = "\ca\Weapons_baf\ACOG_optic";
  };
  class DM_M4_RCO_LP_SIL3 : DM_M4_RCO_LP_SIL {
    displayName = "M4 Acog V3 SD";
    modelOptics = "\ori\weapons\aawf88\f88\steyr_optic_acog.p3d";
  };
  class DM_M4_RCO_LP_SIL4 : DM_M4_RCO_LP_SIL {
    displayName = "M4 Acog V4 SD";
    modelOptics = "\ori\weapons\rh_aks\fnc_acog_ta11fin";
  };
  class DM_M4_RCO_LP_GL : M4A1_HWS_GL {
    model = "ori\weapons\dmweapons\M4\Camo_M4_RCO_LP_GL";
    displayName = "M4 Acog V1 GL";
    picture = "\ori\weapons\dmweapons\data\icon\Camo_M4_RCO_LP_GL.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\ori\weapons\dmweapons\weaponrest\DM_GL.rtm"};
    reloadMagazineSound[] = {"\ori\weapons\dmweapons\sounds\m4\reload.ogg", 0.0562341, 1, 10};
    optics = 1;
    modelOptics = "\ca\weapons\2Dscope_Acog_4x32";
    class OpticsModes {
      class RCO {
        opticsID = 1;
        useModelOptics = 1;
        opticsPPEffects[] = {};
        distanceZoomMin = 100;
        distanceZoomMax = 100;
        opticsZoomMin = 0.0623;
        opticsZoomMax = 0.0623;
        opticsZoomInit = 0.0623;
        memoryPointCamera = "eye";
        visionMode[] = {};
        opticsFlare = 1;
        opticsDisablePeripherialVision = 1;
        cameraDir = "";
      };
      class Kolimator : RCO {
        opticsID = 2;
        useModelOptics = 0;
        opticsFlare = 0;
        opticsDisablePeripherialVision = 0;
        opticsZoomMin = 0.25;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.5;
        memoryPointCamera = "seceye";
        visionMode[] = {};
      };
    };
    class FlashLight {
      color[] = {0.9, 0.9, 0.7, 0.9};
      ambient[] = {0.1, 0.1, 0.1, 1};
      position = "flash dir";
      direction = "flash";
      angle = 30;
      scale[] = {1, 1, 0.5};
      brightness = 0.1;
    };
  };
  class DM_M4_Elcan_LP_GL : DM_M4_RCO_LP_GL {
    model = "\ori\weapons\mk_mod\M4A1_gl_elcan.p3d";
    displayName = "M4 Elcan GL";
    picture = "\ori\weapons\mk_mod\data\M4A1_gl_elcan.paa";
    optics = 1;
    modelOptics = "\ori\weapons\aawf88\f88\steyr_optic_elcan.p3d";
  };
  class DM_M4_RCO_LP_GL2 : DM_M4_RCO_LP_GL {
    displayName = "M4 Acog V2 GL";
    modelOptics = "\ca\Weapons_baf\ACOG_optic";
  };
  class DM_M4_RCO_LP_GL3 : DM_M4_RCO_LP_GL {
    displayName = "M4 Acog V3 GL";
    modelOptics = "\ori\weapons\aawf88\f88\steyr_optic_acog.p3d";
  };
  class DM_M4_RCO_LP_GL4 : DM_M4_RCO_LP_GL {
    displayName = "M4 Acog V4 GL";
    modelOptics = "\ori\weapons\rh_aks\fnc_acog_ta11fin";
  };
};
