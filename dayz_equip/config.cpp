class CfgPatches {
  class dayz_equip {
    units[] = {"Hedgehog_DZ", "Sandbag1_DZ", "BearTrap_DZ"};
    weapons[] = {"Loot", "ItemToolbox", "ItemFlashlight", "ItemFlashlightRed", "MeleeFlashlight", "MeleeFlashlightRed"};
    requiredVersion = 0.1;
    requiredAddons[] = {"CAUI", "CAMisc2", "CAMisc3"};
    magazines[] = {"20Rnd_556x45_Stanag", "20Rnd_762x51_DMR", "30Rnd_556x45_Stanag", "10x_303", "5x_22_LR_17_HMR", "5Rnd_762x51_M24", "200Rnd_556x45_M249", "100Rnd_762x51_M240", "6Rnd_45ACP", "7Rnd_45ACP_1911", "ItemBandage", "PartGeneric", "PartWoodPile", "TrapBear", "ItemWaterbottle", "ItemWaterbottleUnfilled", "ItemEpinephrine", "ItemMorphine", "ItemBloodbag", "ItemAntibiotic", "ItemPainkiller", "ItemJerrycan", "ItemJerrycanEmpty", "ItemSandbag", "ItemTankTrap", "FoodCanBakedBeans", "FoodCanSardines", "FoodCanFrankBeans", "FoodCanPasta"};
    ammo[] = {};
  };
};
class CfgVehicleClasses {
  class Survival {
    displayName = "Survival";
  };
};
class RscStandardDisplay {
  access = 0;
  movingEnable = 1;
  enableSimulation = 1;
  enableDisplay = 1;
};
class RscObject {
  access = 0;
  type = 80;
  scale = 1;
  direction[] = {0, 0, 1};
  up[] = {0, 1, 0};
};
class RscPicture {
  access = 0;
  type = 0;
  idc = -1;
  colorBackground[] = {0, 0, 0, 0};
  colorText[] = {1, 1, 1, 1};
  font = "TahomaB";
  sizeEx = 0;
  lineSpacing = 0;
  text = "";
  style = "0x30 + 0x100";
  x = 0;
  y = 0;
  w = 0.2;
  h = 0.15;
};
class RscButton {
  access = 0;
  text = "";
  colorText[] = {0.543, 0.5742, 0.4102, 1};
  colorDisabled[] = {0.4, 0.4, 0.4, 1};
  colorBackground[] = {1, 0.537, 0, 0.5};
  colorBackgroundDisabled[] = {0.95, 0.95, 0.95, 1};
  colorBackgroundActive[] = {1, 0.537, 0, 1};
  colorFocused[] = {1, 0.537, 0, 1};
  colorShadow[] = {0.023529, 0, 0.0313725, 1};
  colorBorder[] = {0.023529, 0, 0.0313725, 1};
  soundEnter[] = {"\ca\ui\data\sound\mouse2", 0.09, 1};
  soundPush[] = {"\ca\ui\data\sound\new1", 0.09, 1};
  soundClick[] = {"\ca\ui\data\sound\mouse3", 0.07, 1};
  soundEscape[] = {"\ca\ui\data\sound\mouse1", 0.09, 1};
  type = 1;
  style = "0x02 + 0x100";
  x = 0;
  y = 0;
  w = 0.095589;
  h = 0.039216;
  font = "Zeppelin32";
  sizeEx = 0.03921;
  offsetX = 0.003;
  offsetY = 0.003;
  offsetPressedX = 0.002;
  offsetPressedY = 0.002;
  borderSize = 0;
};
class RscButtonPhone : RscButton {
  colorText[] = {0.543, 0.5742, 0.4102, 0};
  colorDisabled[] = {0.4, 0.4, 0.4, 0};
  colorBackground[] = {1, 0.537, 0, 0};
  colorBackgroundDisabled[] = {0.95, 0.95, 0.95, 0};
  colorBackgroundActive[] = {1, 0.537, 0, 0};
  colorFocused[] = {1, 0.537, 0, 0};
  colorShadow[] = {0.023529, 0, 0.0313725, 0};
  colorBorder[] = {0.023529, 0, 0.0313725, 0};
  soundEnter[] = {"", 0.09, 1};
  soundPush[] = {"", 0.09, 1};
  soundClick[] = {"", 0.07, 1};
  soundEscape[] = {"", 0.09, 1};
};
class RscPhonePicture : RscStandardDisplay {
  class controlsBackground {
    class RscPicture_1200 : RscPicture {
      idc = 1200;
      text = "mphone_CA.paa";
      x = 0.2;
      y = 0.09;
      w = 0.6;
      h = 0.8;
    };
  };
  class controls {
    class RscButton_1600 : RscButtonPhone {
      idc = 1600;
      text = "send";
      x = 0.402736;
      y = 0.597677;
      w = 0.0620061;
      h = 0.0620061;
      soundClick[] = {"\dayz_sfx\action\cell\dtmf_1.wav", 0.09, 1};
    };
    class RscButton_1601 : RscButtonPhone {
      idc = 1601;
      text = "end";
      x = 0.528875;
      y = 0.597677;
      w = 0.0620061;
      h = 0.0620061;
      soundClick[] = {"\dayz_sfx\action\cell\dtmf_0.wav", 0.09, 1};
    };
    class RscButton_1602 : RscButtonPhone {
      idc = 1602;
      text = "1";
      x = 0.399696;
      y = 0.669873;
      w = 0.0528875;
      h = 0.0386486;
      soundClick[] = {"\dayz_sfx\action\cell\dtmf_1.wav", 0.09, 1};
    };
    class RscButton_1603 : RscButtonPhone {
      idc = 1603;
      text = "2";
      x = 0.472644;
      y = 0.671996;
      w = 0.0528875;
      h = 0.0386486;
      soundClick[] = {"\dayz_sfx\action\cell\dtmf_2.wav", 0.09, 1};
    };
    class RscButton_1604 : RscButtonPhone {
      idc = 1604;
      text = "3";
      x = 0.539514;
      y = 0.671996;
      w = 0.0528875;
      h = 0.0386486;
      soundClick[] = {"\dayz_sfx\action\cell\dtmf_3.wav", 0.09, 1};
    };
    class RscButton_1605 : RscButtonPhone {
      idc = 1605;
      text = "4";
      x = 0.404255;
      y = 0.714465;
      w = 0.0528875;
      h = 0.0386486;
      soundClick[] = {"\dayz_sfx\action\cell\dtmf_4.wav", 0.09, 1};
    };
    class RscButton_1606 : RscButtonPhone {
      idc = 1606;
      text = "5";
      x = 0.472644;
      y = 0.716588;
      w = 0.0528875;
      h = 0.0386486;
      soundClick[] = {"\dayz_sfx\action\cell\dtmf_5.wav", 0.09, 1};
    };
    class RscButton_1607 : RscButtonPhone {
      idc = 1607;
      text = "6";
      x = 0.534954;
      y = 0.716588;
      w = 0.0528875;
      h = 0.0386486;
      soundClick[] = {"\dayz_sfx\action\cell\dtmf_6.wav", 0.09, 1};
    };
    class RscButton_1608 : RscButtonPhone {
      idc = 1608;
      text = "7";
      x = 0.407295;
      y = 0.759056;
      w = 0.0528875;
      h = 0.0386486;
      soundClick[] = {"\dayz_sfx\action\cell\dtmf_7.wav", 0.09, 1};
    };
    class RscButton_1609 : RscButtonPhone {
      idc = 1609;
      text = "8";
      x = 0.472644;
      y = 0.76118;
      w = 0.0528875;
      h = 0.0386486;
      soundClick[] = {"\dayz_sfx\action\cell\dtmf_8.wav", 0.09, 1};
    };
    class RscButton_1610 : RscButtonPhone {
      idc = 1610;
      text = "9";
      x = 0.531915;
      y = 0.76118;
      w = 0.0528875;
      h = 0.0386486;
      soundClick[] = {"\dayz_sfx\action\cell\dtmf_9.wav", 0.09, 1};
    };
    class RscButton_1611 : RscButtonPhone {
      idc = 1611;
      text = "*";
      x = 0.416413;
      y = 0.801525;
      w = 0.0528875;
      h = 0.0386486;
      soundClick[] = {"\dayz_sfx\action\cell\dtmf_star.wav", 0.09, 1};
    };
    class RscButton_1612 : RscButtonPhone {
      idc = 1612;
      text = "0";
      x = 0.471125;
      y = 0.805771;
      w = 0.0528875;
      h = 0.0386486;
      soundClick[] = {"\dayz_sfx\action\cell\dtmf_0.wav", 0.09, 1};
    };
    class RscButton_1613 : RscButtonPhone {
      idc = 1613;
      text = "#";
      x = 0.525836;
      y = 0.803648;
      w = 0.0528875;
      h = 0.0386486;
      soundClick[] = {"\dayz_sfx\action\cell\dtmf_hash.wav", 0.09, 1};
    };
    class RscButton_1614 : RscButtonPhone {
      idc = 1614;
      text = "Screen";
      x = 0.416413;
      y = 0.260054;
      w = 0.168389;
      h = 0.299601;
    };
  };
};
class CfgCloudlets {
  class Default;
  class BottleGlassShards : Default {
    interval = 0.001;
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};
    particleShape = "\ca\Data\ParticleEffects\Universal\GlassShards";
    particleFSNtieth = 1;
    particleFSIndex = 0;
    particleFSFrameCount = 1;
    particleFSLoop = 0;
    angleVar = 1;
    animationName = "";
    particleType = "SpaceObject";
    timerPeriod = 3;
    lifeTime = 2;
    moveVelocity[] = {0, 1, 0};
    rotationVelocity = 2;
    weight = 10;
    volume = 1;
    rubbing = 0;
    size[] = {0.05};
    sizeCoef = 1;
    color[] = {{1, 1, 1, 1}};
    colorCoef[] = {1, 1, 1, 1};
    animationSpeed[] = {1000};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0;
    randomDirectionIntensity = 0;
    onTimerScript = "";
    beforeDestroyScript = "";
    lifeTimeVar = 0.5;
    position[] = {0, 0, 0};
    positionVar[] = {0.02, 0.02, 0.02};
    moveVelocityVar[] = {0.2, 1, 0.2};
    rotationVelocityVar = 1;
    sizeVar = 0.04;
    colorVar[] = {0.1, 0.1, 0.1, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
  class BottleGlassShards2 : Default {
    interval = 0.001;
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};
    particleShape = "\ca\Data\ParticleEffects\Universal\GlassShards";
    particleFSNtieth = 1;
    particleFSIndex = 0;
    particleFSFrameCount = 1;
    particleFSLoop = 0;
    angleVar = 1;
    animationName = "";
    particleType = "SpaceObject";
    timerPeriod = 3;
    lifeTime = 2;
    moveVelocity[] = {0, 2, 0};
    rotationVelocity = 2;
    weight = 10;
    volume = 1;
    rubbing = 0;
    size[] = {0.05};
    sizeCoef = 1;
    color[] = {{1, 1, 1, 1}};
    colorCoef[] = {1, 1, 1, 1};
    animationSpeed[] = {1000};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 1;
    randomDirectionIntensity = 1;
    onTimerScript = "";
    beforeDestroyScript = "";
    lifeTimeVar = 0.5;
    position[] = {0, 0.4, 0};
    positionVar[] = {0.04, 0.04, 0.04};
    moveVelocityVar[] = {0.2, 3, 0.2};
    rotationVelocityVar = 0;
    sizeVar = 0.04;
    colorVar[] = {0.1, 0.1, 0.1, 0};
    randomDirectionPeriodVar = 1;
    randomDirectionIntensityVar = 1;
  };
  class BottleGlassDust : Default {
    interval = 0.005;
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};
    particleShape = "\ca\Data\ParticleEffects\Universal\Universal";
    particleFSNtieth = 16;
    particleFSIndex = 12;
    particleFSFrameCount = 8;
    particleFSLoop = 0;
    angleVar = 1;
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 3;
    lifeTime = 0.7;
    moveVelocity[] = {0, 0.7, 0};
    rotationVelocity = 2;
    weight = 1.275;
    volume = 1;
    rubbing = 0;
    size[] = {0.05, 0.15};
    sizeCoef = 1;
    color[] = {{0.5, 0.5, 0.5, 0.1}, {0.5, 0.5, 0.5, 0}};
    colorCoef[] = {1, 1, 1, 1};
    animationSpeed[] = {1000};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0;
    randomDirectionIntensity = 0;
    onTimerScript = "";
    beforeDestroyScript = "";
    lifeTimeVar = 0.1;
    position[] = {0, 0.4, 0};
    positionVar[] = {0.02, 0.02, 0.02};
    moveVelocityVar[] = {0.2, 0.5, 0.2};
    rotationVelocityVar = 0;
    sizeVar = 0.04;
    colorVar[] = {0.1, 0.1, 0.1, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
};
class GlassSmash {
  class BottleGlassShards {
    simulation = "particles";
    type = "BottleGlassShards";
    position[] = {0, 0, 0};
    intensity = 1;
    interval = 1;
    lifeTime = 1;
  };
  class BottleGlassShards2 {
    simulation = "particles";
    type = "BottleGlassShards2";
    position[] = {0, 0, 0};
    intensity = 1;
    interval = 1;
    lifeTime = 1;
  };
  class BottleGlassDust {
    simulation = "particles";
    type = "BottleGlassDust";
    position[] = {0, 0, 0};
    intensity = 1;
    interval = 1;
    lifeTime = 1;
  };
};
class cfgWeapons {
  class Default;
  class ItemCore;
  class Loot : Default {
    scope = 2;
    value = 0;
    type = 0;
    displayName = "Use";
    canDrop = 0;
    muzzles[] = {"this"};
    magazines[] = {};
    modes[] = {"this"};
    useAction = 0;
    useActionTitle = "";
    enableAttack = 0;
    showToPlayer = 0;
  };
  class ItemToolbox : ItemCore {
    scope = 2;
    displayName = "$STR_EQUIP_NAME_2";
    model = "\dayz_equip\models\toolbox.p3d";
    picture = "\dayz_equip\textures\equip_toolbox_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_2";
  };
  class ItemFlashlight : ItemCore {
    scope = 2;
    displayName = "$STR_EQUIP_NAME_5";
    model = "\dayz_equip\models\flashlight.p3d";
    picture = "\dayz_equip\textures\equip_flashlight_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_5";
  };
  class ItemFlashlightRed : ItemCore {
    scope = 2;
    model = "\dayz_equip\models\flashlight_mil.p3d";
    picture = "\dayz_equip\textures\equip_flashlight_mil_ca.paa";
    displayName = "$STR_EQUIP_NAME_6";
    descriptionShort = "$STR_EQUIP_DESC_6";
  };
  class Pistol;
  class MeleeFlashlight : Pistol {
    scope = 2;
    canDrop = 0;
    model = "\dayz_equip\models\flashlight.p3d";
    modelOptics = "-";
    picture = "\dayz_equip\textures\equip_flashlight_ca.paa";
    magazines[] = {};
    displayName = "$STR_EQUIP_NAME_5";
    begin1[] = {};
    begin2[] = {};
    soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
    reloadMagazineSound[] = {};
    recoil = "recoil_single_pistol_2outof3";
    recoilProne = "recoil_single_pistol_prone_2outof3";
    distanceZoomMin = 50;
    distanceZoomMax = 50;
    class Library {
      libTextDesc = "A flashlight (or torch in British English) is a hand-held portable electric-powered light source. Usually the light source is a small incandescent light bulb or light-emitting diode (LED).";
    };
    descriptionShort = "$STR_EQUIP_DESC_5";
    autoFire = 0;
    class FlashLight {
      color[] = {0.9, 0.9, 0.7, 0.9};
      ambient[] = {0.1, 0.1, 0.1, 1};
      position = "flash dir";
      direction = "flash";
      angle = 30;
      scale[] = {1, 1, 0.5};
      brightness = 0.1;
    };
    minRange = 0;
    minRangeProbab = 0.1;
    midRange = 30;
    midRangeProbab = 0.3;
    maxRange = 50;
    maxRangeProbab = 0.04;
  };
  class MeleeFlashlightRed : MeleeFlashlight {
    model = "\dayz_equip\models\flashlight_mil.p3d";
    picture = "\dayz_equip\textures\equip_flashlight_mil_ca.paa";
    displayName = "$STR_EQUIP_NAME_6";
    descriptionShort = "$STR_EQUIP_DESC_6";
    class FlashLight {
      color[] = {0.9, 0, 0, 0.9};
      ambient[] = {0.1, 0, 0, 1};
      position = "flash dir";
      direction = "flash";
      angle = 30;
      scale[] = {1, 1, 0.5};
      brightness = 0.08;
    };
    class ItemActions {
      class Toolbelt {
        text = "Add to toolbelt";
        script = ";[_id,'addToolbelt'] call fnc_use_item";
        use[] = {"MeleeFlashlightRed"};
        output[] = {"ItemFlashlightRed"};
      };
    };
  };
};
class CfgMagazines {
  class CA_Magazine;
  class 20Rnd_556x45_Stanag : CA_Magazine {
    scope = 2;
    displayName = "20Rnd. STANAG";
    picture = "\ca\weapons\data\equip\m_20stanag_CA.paa";
    ammo = "B_556x45_Ball";
    count = 20;
    initSpeed = 930;
    tracersEvery = 0;
    descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 20  <br/>Used in: M249 SAW, M4A1, M16A4";
  };
  class 20Rnd_762x51_DMR : CA_Magazine {
    scope = 2;
    displayName = "DMR mag";
    picture = "\ca\weapons\data\equip\M_US_DMR_CA.paa";
    model = "\dayz_equip\models\mag20.p3d";
    count = 20;
    ammo = "B_762x51_noTracer";
    initSpeed = 900;
    reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\M21_reload_v4", 0.01, 1, 20};
    descriptionShort = "Caliber:7.62x51 mm NATO <br/>Rounds: 20 <br/>Used in: DMR";
    class ItemActions {
      class ReloadMag {
        text = "Split into 3 x M24";
        script = ";[_id,'reloadMag'] call fnc_use_item";
        use[] = {"20Rnd_762x51_DMR"};
        output[] = {"5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24"};
      };
    };
  };
  class 30Rnd_556x45_Stanag : 20Rnd_556x45_Stanag {
    displayName = "30Rnd. STANAG";
    picture = "\ca\weapons\data\equip\m_30stanag_CA.paa";
    model = "\dayz_equip\models\mag30.p3d";
    count = 30;
    tracersEvery = 0;
    descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 30  <br/>Used in: M4A1, M249, M16A4, Mk12";
  };
  class 10x_303 : CA_Magazine {
    scope = 2;
    displayName = "Lee Enfield Mag.";
    model = "\dayz_equip\models\mag10rnd.p3d";
    descriptionShort = "Caliber: .303<br/>Rounds: 10<br/>Used in: Lee Enfield Mk III";
    picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
    count = 10;
    ammo = "B_303_Ball";
    initSpeed = 750;
  };
  class 5x_22_LR_17_HMR : CA_Magazine {
    scope = 2;
    displayName = "CZ 550 Magazine";
    picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
    model = "\dayz_equip\models\mag5rnd.p3d";
    count = 5;
    ammo = "B_762x51_noTracer";
    initSpeed = 870;
    sound[] = {"Ca\sounds\Weapons\rifles\M24_single3", 10, 1, 1800};
    reloadMagazineSound[] = {"Ca\sounds\Weapons\rifles\M1014-reload", 0.01, 1, 20};
    descriptionShort = "Caliber: 7x64 mm <BR/>Rounds: 5 <BR/>Used in: CZ 550";
  };
  class 5Rnd_762x51_M24 : CA_Magazine {
    scope = 2;
    displayName = "5Rnd. M24";
    picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
    model = "\dayz_equip\models\mag5rnd.p3d";
    count = 5;
    ammo = "B_762x51_noTracer";
    initSpeed = 900;
    sound[] = {"\ca\Weapons\Data\Sound\M21_single_shot_v3", 10, 1, 1600};
    reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\M21_reload_v4", 0.01, 1, 10};
    descriptionShort = "Caliber: 7.62x51mm NATO <br/>Rounds: 5 <br/>Used in: M24, M40A3";
    class ItemActions {
      class ReloadMag {
        text = "Combine for DMR";
        script = ";[_id,'reloadMag'] call fnc_use_item";
        use[] = {"5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24"};
        output[] = {"20Rnd_762x51_DMR"};
      };
    };
  };
  class 200Rnd_556x45_M249 : CA_Magazine {
    scope = 2;
    displayName = "200Rnd. M249 Belt";
    picture = "\CA\weapons\data\equip\m_m249_ca.paa";
    model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxSmall.p3d";
    ammo = "B_556x45_Ball";
    count = 200;
    type = "2* 256";
    initSpeed = 915;
    sound[] = {"\ca\Weapons\Data\Sound\M249_1_SS", "db25", 1, 1300};
    reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\FAL_reload", 0.01, 1, 20};
    tracersEvery = 4;
    lastRoundsTracer = 4;
    nameSound = "mgun";
    descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 200  <br/>Used in: M249 SAW";
  };
  class 100Rnd_762x51_M240 : CA_Magazine {
    scope = 2;
    displayName = "100Rnd. M240";
    picture = "\CA\weapons\data\equip\m_m240_ca.paa";
    model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxSmall.p3d";
    count = 100;
    type = "2* 256";
    ammo = "B_762x51_Ball";
    initSpeed = 900;
    tracersEvery = 4;
    lastRoundsTracer = 4;
    nameSound = "mgun";
    descriptionShort = "Caliber: 7.62x51mm NATO <br/>Rounds: 100 <br/>Used in: M240, Mk 48 Mod 0";
  };
  class 6Rnd_45ACP : CA_Magazine {
    scope = 2;
    displayName = ".45 ACP";
    ammo = "B_45ACP_noCartridge_Ball";
    count = 6;
    initSpeed = 260;
    picture = "\dayz_equip\textures\equip_45acp_ca.paa";
    model = "\dayz_equip\models\ammo_acp45.p3d";
    type = 16;
    descriptionShort = "Caliber: .45 ACP<br/>Rounds: 6<br/>Used in: Revolver .45";
    class ItemActions {
      class ReloadMag {
        text = "Combine for M1911";
        script = ";[_id,'reloadMag'] call fnc_use_item";
        use[] = {"6Rnd_45ACP"};
        output[] = {"7Rnd_45ACP_1911"};
      };
    };
  };
  class 7Rnd_45ACP_1911 : CA_Magazine {
    scope = 2;
    displayName = "M1911 Mag.";
    ammo = "B_45ACP_Ball";
    count = 7;
    initSpeed = 260;
    picture = "\dayz_equip\textures\equip_1911_ca.paa";
    model = "\dayz_equip\models\ammo_1911.p3d";
    type = 16;
    descriptionShort = "Caliber: .45 ACP <br/>Rounds: 7 <br/>Used in: M1911A1";
    class ItemActions {
      class ReloadMag {
        text = "Combine for Revolver";
        script = ";[_id,'reloadMag'] call fnc_use_item";
        use[] = {"7Rnd_45ACP_1911"};
        output[] = {"6Rnd_45ACP"};
      };
    };
  };
  class SkinBase : CA_Magazine {
    scope = 0;
    count = 1;
    type = 256;
    displayName = "Clothes";
    model = "\dayz_equip\models\cloth_parcel.p3d";
    picture = "\dayz_equip\textures\equip_cloth_parcel_ca.paa";
    descriptionShort = "Clothes Parcel";
    class ItemActions {
      class Use {
        text = "%1";
        script = ";[_id,'wearClothes'] call fnc_use_item";
      };
    };
  };
  class ItemBandage : CA_Magazine {
    scope = 2;
    count = 1;
    type = 16;
    displayName = "$STR_EQUIP_NAME_7";
    model = "\dayz_equip\models\fad.p3d";
    picture = "\dayz_equip\textures\equip_fad_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_7";
    class ItemActions {
      class Use {
        text = "$STR_BANDAGE_SELF";
        script = ";[_id,'useMeds'] call fnc_use_item";
      };
    };
  };
  class PartGeneric : CA_Magazine {
    scope = 2;
    count = 1;
    type = "(256 * 2)";
    displayName = "$STR_EQUIP_NAME_10";
    model = "\dayz_equip\models\genericparts.p3d";
    picture = "\dayz_equip\textures\equip_genericparts_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_10";
  };
  class PartWoodPile : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_EQUIP_NAME_40";
    model = "\dayz_equip\models\woodPile.p3d";
    picture = "\dayz_equip\textures\equip_woodPile_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_40";
  };
  class TrapBear : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "Bear Trap";
    model = "\dayz_equip\models\bear_trap_gear.p3d";
    picture = "\dayz_equip\textures\equip_bear_trap_ca.paa";
    descriptionShort = "Just Bear trap";
  };
  class FoodDrink : CA_Magazine {
    isWater = 1;
    count = 1;
    type = 256;
    class ItemActions {
      class Drink {
        text = "$STR_ACTIONS_DRINK";
        script = ";[_id,'drink'] call fnc_use_item";
      };
    };
  };
  class ItemWaterbottle : FoodDrink {
    scope = 2;
    refillable = 1;
    sfx = "drink";
    displayName = "$STR_EQUIP_NAME_12";
    model = "\dayz_equip\models\waterbottle_gear.p3d";
    picture = "\dayz_equip\textures\equip_waterbottle_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_12";
  };
  class ItemWaterbottleUnfilled : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_EQUIP_NAME_13";
    model = "\dayz_equip\models\waterbottle_gear.p3d";
    picture = "\dayz_equip\textures\equip_waterbottle_empty_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_13";
    class ItemActions {
      class Fill {
        text = "$STR_ACTIONS_FILL_W";
        script = ";[_id,'fillWater'] call fnc_use_item";
      };
    };
  };
  class ItemEpinephrine : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_EQUIP_NAME_14";
    model = "\dayz_equip\models\epi.p3d";
    picture = "\dayz_equip\textures\equip_epi_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_14";
  };
  class ItemMorphine : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_EQUIP_NAME_15";
    model = "\dayz_equip\models\morphine.p3d";
    picture = "\dayz_equip\textures\equip_morphine_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_15";
    class ItemActions {
      class Use {
        text = "$STR_TAKE_MORPHINE";
        script = ";[_id,'useMeds'] call fnc_use_item";
      };
    };
  };
  class ItemBloodbag : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_EQUIP_NAME_16";
    model = "\dayz_equip\models\bloodbag.p3d";
    picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_16";
  };
  class ItemAntibiotic : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_EQUIP_NAME_17";
    model = "\dayz_equip\models\med_antibiotic_gear.p3d";
    picture = "\dayz_equip\textures\equip_antibiotics_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_17";
    class ItemActions {
      class Use {
        text = "$STR_TAKE_ANTIBIOTIC";
        script = ";[_id,'useMeds'] call fnc_use_item";
      };
    };
  };
  class ItemPainkiller : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_EQUIP_NAME_18";
    model = "\dayz_equip\models\med_painkiller_gear.p3d";
    picture = "\dayz_equip\textures\equip_painkiller_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_18";
    class ItemActions {
      class Use {
        text = "$STR_TAKE_PAINKILLER";
        script = ";[_id,'useMeds'] call fnc_use_item";
      };
    };
  };
  class ItemJerrycan : CA_Magazine {
    scope = 2;
    count = 1;
    fuelQuantity = 20;
    type = "(256 * 2)";
    displayName = "$STR_EQUIP_NAME_19";
    model = "\dayz_equip\models\jerrycan.p3d";
    picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_19";
  };
  class ItemJerrycanEmpty : ItemJerrycan {
    fuelQuantity = 0;
    type = "(256 * 2)";
    displayName = "$STR_EQUIP_NAME_39";
    picture = "\dayz_equip\textures\equip_jerrycan_e_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_39";
  };
  class ItemSandbag : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_EQUIP_NAME_21";
    model = "\dayz_equip\models\sandbags.p3d";
    picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_21";
    class ItemActions {
      class Build {
        text = "$STR_ACTIONS_BUILD";
        script = ";[_id,'pbuild'] call fnc_use_item";
        require[] = {"ItemEtool"};
        create = "Sandbag1_DZ";
      };
    };
  };
  class ItemTankTrap : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_EQUIP_NAME_22";
    model = "\dayz_equip\models\tank_trap_kit.p3d";
    picture = "\dayz_equip\textures\equip_tanktrap_kit_CA.paa";
    descriptionShort = "$STR_EQUIP_DESC_22";
    class ItemActions {
      class Build {
        text = "$STR_ACTIONS_BUILD";
        script = ";[_id,'pbuild'] call fnc_use_item";
        require[] = {"ItemToolbox"};
        create = "Hedgehog_DZ";
      };
    };
  };
  class ItemWire : CA_Magazine {
    scope = 0;
    count = 1;
    type = 256;
    displayName = "$STR_EQUIP_NAME_23";
    model = "\dayz_equip\models\Fence_wire_kit.p3d";
    picture = "\dayz_equip\textures\equip_fencewire_kit_CA.paa";
    descriptionShort = "$STR_EQUIP_DESC_23";
  };
  class FoodEdible : CA_Magazine {
    isFood = 1;
    count = 1;
    type = 256;
    bloodRegen = 200;
    class ItemActions {
      class Eat {
        text = "$STR_EAT_FOOD";
        script = ";[_id,'peat'] call fnc_use_item";
      };
    };
  };
  class FoodCanBakedBeans : FoodEdible {
    scope = 2;
    displayName = "$STR_EQUIP_NAME_26";
    model = "\dayz_equip\models\food_bbtin.p3d";
    picture = "\dayz_equip\textures\equip_bbtin_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_26";
  };
  class FoodCanSardines : FoodEdible {
    scope = 2;
    displayName = "$STR_EQUIP_NAME_27";
    model = "\dayz_equip\models\food_sardinestin.p3d";
    picture = "\dayz_equip\textures\equip_Sardinestin_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_27";
  };
  class FoodCanFrankBeans : FoodEdible {
    scope = 2;
    displayName = "$STR_EQUIP_NAME_28";
    model = "\dayz_equip\models\food_fbtin.p3d";
    picture = "\dayz_equip\textures\equip_fbtin_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_28";
  };
  class FoodCanPasta : FoodEdible {
    scope = 2;
    displayName = "$STR_EQUIP_NAME_29";
    model = "\dayz_equip\models\food_pastatin.p3d";
    picture = "\dayz_equip\textures\equip_pastatin_ca.paa";
    descriptionShort = "$STR_EQUIP_DESC_29";
  };
};
class CfgVehicles {
  class NonStrategic;
  class BuiltItems : NonStrategic {
  };
  class TrapItems : NonStrategic {
  };
  class Hedgehog_DZ : BuiltItems {
    scope = 2;
    destrType = "DestructNo";
    cost = 100;
    model = "\ca\misc\jezek_kov";
    icon = "\ca\data\data\Unknown_object.paa";
    mapSize = 2;
    armor = 400;
    displayName = "$STR_Hedgehog_DZ";
    vehicleClass = "Fortifications";
  };
  class Sandbag1_DZ : BuiltItems {
    scope = 2;
    destrType = "DestructNo";
    cost = 100;
    model = "\ca\misc2\BagFenceLong.p3d";
    icon = "\Ca\misc3\data\Icons\icon_fortBagFenceLong_ca.paa";
    mapSize = 2;
    armor = 400;
    displayName = "$STR_Sandbag1_DZ";
    vehicleClass = "Fortifications";
  };
  class BearTrap_DZ : TrapItems {
    scope = 2;
    destrType = "DestructNo";
    displayName = "Bear Trap";
    model = "\dayz_equip\models\bear_trap.p3d";
  };
  class ReammoBox;
  class WeaponHolderBase : ReammoBox {
    scope = 0;
    accuracy = 0.2;
    vehicleClass = "Survival";
    displayName = "Weapon";
    memoryPointSupply = "collect";
    supplyRadius = 3;
    transportMaxWeapons = 0;
    transportMaxMagazines = 0;
    transportMaxBackpacks = 0;
    transportAmmo = 0;
    transportRepair = 0;
    transportFuel = 0;
    class DestructionEffects {
      class Light1 {
        simulation = "light";
        type = "ObjectDestructionLight";
        position = "destructionEffect1";
        intensity = 0.001;
        interval = 1;
        lifeTime = 2;
      };
      class Sound {
        simulation = "sound";
        type = "Fire";
        position = "destructionEffect1";
        intensity = 0.15;
        interval = 1;
        lifeTime = 2;
      };
      class Fire1 {
        simulation = "particles";
        type = "ObjectDestructionFire1";
        position = "destructionEffect1";
        intensity = 0.15;
        interval = 1;
        lifeTime = 2;
      };
      class Fire2 {
        simulation = "particles";
        type = "ObjectDestructionFire1";
        position = "destructionEffect1";
        intensity = 0.15;
        interval = 1;
        lifeTime = 2;
      };
      class HouseDestr {
        simulation = "destroy";
        type = "DelayedDestructionAmmo";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_A_tent;
  class Land_Fire;
  class Land_Fire_DZ : Land_Fire {
    transportMaxMagazines = 8;
    transportMaxWeapons = 0;
    transportMaxBackpacks = 0;
    class TransportMagazines {
      class _xx_PartWoodPile {
        magazine = "PartWoodPile";
        count = "1";
      };
    };
    class Eventhandlers {
      init = "_this call eh_localCleanup;";
    };
  };
};
