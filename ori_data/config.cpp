class CfgMods {
  class ori {
    dir = "ori";
    name = "Origins Mod";
    picture = "\ori\ui\origins_logo_ca.paa";
    hidePicture = 0;
    hideName = 0;
    action = "http://originsmod.info/";
    version = "1.8";
    hiveVersion = 0.98;
  };
};
class CfgPatches {
  class ori_data {
    units[] = {"DZ_Pastor", "DZ_Fin", "UH1Wreck_Ori", "Land_Ind_MalyKomin", "Land_Rail_Semafor", "Land_Rail_Zavora", "Land_majak", "Land_majak2", "Land_Vysilac_FM", "Land_telek1", "Land_Stoplight01", "Land_Stoplight02", "Land_NavigLight", "Land_runway_edgelight", "Land_VASICore", "Land_HouseB_Tenement", "Land_Mil_ControlTower", "Land_NAV_Lighthouse", "Land_NAV_Lighthouse2", "Land_A_Crane_02b", "Land_Farm_WTower", "Land_A_TVTower_Mid", "Land_A_TVTower_Top", "GraveCrossHelmet_DZ"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CAData", "CAStructures", "CABuildings", "CABuildings2", "aaw_f88", "C1987_Famas", "dak_mak_want", "DM_Weapons", "gms_k98", "gms_mp40", "RH_aks_cfg", "TYPE64Riffles", "TYPE89Riffles", "ado_armes_ori"};
  };
};
class CfgAddons {
  access = 1;
  class PreloadBanks {
  };
  class PreloadAddons {
    class ori {
      list[] = {"ori_air", "ori_base_buildings", "ori_buildings", "ori_characters", "ori_items", "ori_language", "ori_misc", "ori_plants", "ori_roads", "ori_signs", "ori_sounds", "ori_structures", "ori_taviana", "ori_train", "ori_ui", "ori_vehicles", "ori_weapons", "ori_wrecks"};
    };
  };
};
class CfgWrapperUI {
  class Cursors {
    class Arrow {
      texture = "\ori\ui\mouse_cursor.paa";
      width = 32;
      height = 32;
      hotspotX = 0.1875;
      hotspotY = 0.03125;
    };
  };
};
class CfgGlasses {
  class None;
  class b_TacticalGlasses : None {
  };
  class Barett : None {
  };
  class Barett_g : None {
  };
  class Bdu_cap : None {
  };
  class Bdu_cap_g : None {
  };
  class BlackSun_sof_w : None {
  };
  class dive_mask : None {
  };
  class gasmask : None {
  };
  class gasmask_helmet : None {
  };
  class gasmask_helmet2 : None {
  };
  class gasmask_red : None {
  };
  class gasmask2 : None {
  };
  class goggles_winter : None {
  };
  class headset : None {
  };
  class headset_g : None {
  };
  class Kevlar_Helmet : None {
  };
  class Kevlar_Helmet_g : None {
  };
  class None_sof_w : None {
  };
  class pilot_mask : None {
  };
  class pilot_mask_v : None {
  };
  class pilot_v : None {
  };
  class Pro_Helmet : None {
  };
  class Pro_Helmet_2 : None {
  };
  class Pro_Helmet_g : None {
  };
  class RedSun_sof_w : None {
  };
  class skull_cap : None {
  };
  class skull_cap2 : None {
  };
  class taliban_hat_shadow : None {
  };
  class US_black_beret : None {
  };
  class US_green_beret : None {
  };
  class wdl_helmet : None {
  };
  class Tactical_Sunglass_Black : None {
  };
};
class CfgInGameUI {
  class PeripheralVision {
    cueColor[] = {0, 0, 0, 0};
    cueFriendlyColor[] = {0, 0, 0, 0};
    cueEnemyColor[] = {0, 0, 0, 0};
  };
  class Cursor {
    select = "\ca\ui\data\icon_unit_ca.paa";
    selectOver = "\ca\ui\data\cursor_select_unit_ca.paa";
    leader = "\ca\ui\data\icon_unit_teamleader_ca.paa";
    selectColor[] = {0.4, 0.6745, 0.2784, 0};
    leaderColor[] = {0.863, 0.584, 0, 0};
  };
  class CommandBar {
    width = 0;
    height = 0;
    w = 0;
    h = 0;
    left = "-2";
    top = "-2";
    class UnitInfo {
      width = 0;
      height = 0;
      w = 0;
      h = 0;
    };
  };
};
class RscPictureGUI {
  access = 0;
  type = 0;
  idc = -1;
  colorBackground[] = {0, 0, 0, 0};
  colorText[] = {0.38, 0.63, 0.26, 0.75};
  font = "TahomaB";
  sizeEx = 0;
  lineSpacing = 0;
  text = "";
  style = "0x30 + 0x100 + 0x800";
  x = 0;
  y = 0;
  w = 0.2;
  h = 0.15;
};
class RscTextGUIK {
  type = 0;
  idc = -1;
  style = 2;
  colorBackground[] = {0, 0, 0, 0};
  colorText[] = {1, 1, 1, 0.5};
  font = "TahomaB";
  size = 0.03;
  sizeEx = 0.03;
  x = 0;
  y = 0;
  w = 0.1;
  h = 0.2;
};
class RscStructuredText {
  class Attributes;
};
class RscStructuredTextGUI : RscStructuredText {
  colorBackground[] = {0, 0, 0, 0};
  colorText[] = {1, 1, 1, 1};
  class Attributes : Attributes {
    align = "center";
    valign = "middle";
  };
};
class CfgMovesAnimalsBase {
  class ManActions;
  class StandBase;
  class DefaultDie;
  class BlendAnims;
};
class CfgMovesDogBase {
  class Default {
    actions = "";
    access = 3;
    file = "";
    looped = 1;
    speed = 0.5;
    disableWeapons = 1;
    enableOptics = 0;
    disableWeaponsLong = 1;
    showWeaponAim = 0;
    enableMissile = 0;
    enableBinocular = 0;
    showItemInHand = 0;
    showItemInRightHand = 0;
    showHandGun = 0;
    onLandBeg = 0;
    onLandEnd = 0;
    onLadder = 0;
    canPullTrigger = 1;
    duty = -0.51;
    predictSpeedCoef = 1;
    visibleSize = 1;
    aimPrecision = 1;
    relSpeedMin = 1;
    relSpeedMax = 1;
    soundEnabled = 0;
    controlHead = 0;
    headBobMode = 0;
    headBobStrength = 0;
    soundOverride = "";
    soundEdge[] = {0.5, 1};
    terminal = 0;
    limitGunMovement = 1;
    variantsPlayer[] = {};
    variantsAI[] = {""};
    equivalentTo = "";
    connectAs = "";
    variantAfter[] = {5, 10, 20};
    connectFrom[] = {};
    connectTo[] = {};
    interpolateWith[] = {};
    interpolateTo[] = {};
    interpolateFrom[] = {};
    aiming = "aimingNo";
    leaning = "aimingNo";
    untiltWeapon = "aimingNo";
    aimingBody = "aimingUpDefault";
    legs = "legsNo";
    head = "headDefault";
    leaningFactorBeg = 0;
    leaningFactorEnd = 0;
    leaningFactorZeroPoint = -1;
    leaningCorrectionAngleBeg = 0;
    leaningCorrectionAngleEnd = 0;
    interpolationSpeed = 6;
    interpolationRestart = 0;
    collisionShape = "ca\animals2\data\geom\basicColide.p3d";
    hasCollShapeSafe = 0;
    collisionShapeSafe = "";
    boundingSphere = 1;
    enableDirectControl = 1;
    enableAutoActions = 0;
    leftHandIKBeg = 0;
    leftHandIKEnd = 0;
    rightHandIKBeg = 0;
    rightHandIKEnd = 0;
    weaponIK = 0;
    preload = 0;
    walkcycles = 1;
    forceAim = 0;
    rightHandIKCurve[] = {};
    leftHandIKCurve[] = {};
  };
  class StandBase : Default {
    aiming = "aimingDefault";
    disableWeapons = 1;
    leaningFactorBeg = 1;
    leaningFactorEnd = 1;
  };
  class DefaultDie : Default {
    aiming = "aimingNo";
    legs = "legsNo";
    head = "headNo";
    disableWeapons = 1;
    interpolationRestart = 1;
    soundOverride = "fallbody";
    soundEdge[] = {0.45};
    soundEnabled = 0;
  };
  class ManActions {
    Stop = "";
    StopRelaxed = "";
    TurnL = "";
    TurnR = "";
    TurnLRelaxed = "";
    TurnRRelaxed = "";
    Default = "";
    JumpOff = "";
    ReloadMagazine = "";
    ReloadMGun = "";
    ReloadAT = "";
    ReloadMortar = "";
    ThrowGrenade = "";
    WalkF = "";
    WalkLF = "";
    WalkRF = "";
    WalkL = "";
    WalkR = "";
    WalkLB = "";
    WalkRB = "";
    WalkB = "";
    SlowF = "";
    SlowLF = "";
    SlowRF = "";
    SlowL = "";
    SlowR = "";
    SlowLB = "";
    SlowRB = "";
    SlowB = "";
    FastF = "";
    FastLF = "";
    FastRF = "";
    FastL = "";
    FastR = "";
    FastLB = "";
    FastRB = "";
    FastB = "";
    EvasiveForward = "";
    EvasiveLeft = "";
    EvasiveRight = "";
    EvasiveBack = "";
    StartSwim = "";
    StopSwim = "";
    Down = "";
    Up = "";
    PlayerStand = "";
    PlayerCrouch = "";
    PlayerProne = "";
    Lying = "";
    Stand = "";
    Combat = "";
    Crouch = "";
    CanNotMove = "";
    Civil = "";
    CivilLying = "";
    FireNotPossible = "";
    Die = "";
    WeaponOn = "";
    WeaponOff = "";
    StrokeFist = "";
    StrokeGun = "";
    SitDown = "";
    Salute = "";
    BinocOn = "";
    BinocOff = "";
    PutDown = "";
    PutDownEnd = "";
    Medic = "";
    Treated = "";
    LadderOnDown = "";
    LadderOnUp = "";
    LadderOff = "";
    LadderOffTop = "";
    LadderOffBottom = "";
    GetInLow = "";
    GetInMedium = "";
    GetInHigh = "";
    GetOutLow = "";
    GetOutMedium = "";
    GetOutHigh = "";
    TakeFlag = "";
    HandGunOn = "";
    LookAround = "";
    Eat = "";
    StopEat = "";
    Rest = "";
    StopRest = "";
    GestureBark = " ";
    GestureIdle1 = " ";
    GestureIdle2 = " ";
    GestureSniff = " ";
    GestureHeadL = " ";
    GestureHeadR = " ";
  };
  class BlendAnims {
    aimingDefault[] = {};
    untiltWeaponDefault[] = {};
    legsDefault[] = {};
    headDefault[] = {};
    aimingNo[] = {};
    legsNo[] = {};
    headNo[] = {};
    aimingUpDefault[] = {};
  };
  collisionVertexPattern[] = {"1a", "2a", "3a", "4a", "5a", "6a", "7a", "8a", "9a", "10a", "11a", "12a", "13a", "14a", "15a", "16a", "17a", "18a", "19a", "20a", "21a", "22a", "23a", "24a", "25a", "26a", "27a", "28a", "29a", "30a", "31a", "32a", "33a", "34a"};
  collisionGeomCompPattern[] = {1};
};
class CfgMovesDogDZ : CfgMovesDogBase {
  primaryActionMaps[] = {"DogActions", "NoActions"};
  skeletonName = "DogSkeleton";
  gestures = "CfgGesturesDogDZ";
  class States {
    class Dog_Stop : StandBase {
      actions = "DogActions";
      duty = -1;
      file = "\CA\animals2\dogs\data\Anim\dogStop";
      speed = 1e+10;
      relSpeedMin = 0.7;
      relSpeedMax = 1.1;
      looped = 1;
      ConnectTo[] = {"Dog_TurnR", 0.1, "Dog_StopV2", 0.1, "Dog_StopV1", 0.1, "Dog_TurnL", 0.1, "Dog_Sprint", 0.02, "Dog_Run", 0.02, "Dog_Walk", 0.2};
      InterpolateTo[] = {"Dog_TurnR", 0.1, "Dog_Die", 0.02, "Dog_TurnL", 0.1, "Dog_Sprint", 0.02, "Dog_Run", 0.02, "Dog_Walk", 0.2};
    };
    class Dog_TurnL : Dog_Stop {
      file = "\CA\animals2\Dogs\data\anim\dog_rotateL.rtm";
      speed = 1;
      ConnectTo[] = {"Dog_Stop", 0.1};
      InterpolateTo[] = {"Dog_Stop", 0.1};
    };
    class Dog_TurnR : Dog_TurnL {
      file = "\CA\animals2\Dogs\data\anim\dog_rotateR.rtm";
      ConnectTo[] = {"Dog_Stop", 0.1};
      InterpolateTo[] = {"Dog_Stop", 0.1};
    };
    class Dog_StopV1 : Dog_Stop {
      file = "\CA\animals2\dogs\data\Anim\dogIDLE";
      speed = 2.14;
      variantAfter[] = {5, 7, 10};
      looped = 0;
      ConnectTo[] = {"Dog_Stop", 0.1};
      InterpolateTo[] = {"Dog_Die", 0.02};
    };
    class Dog_StopV2 : Dog_Stop {
      file = "\CA\animals2\dogs\data\Anim\dogBark";
      speed = 1;
      variantAfter[] = {1, 1, 1};
      looped = 0;
      ConnectTo[] = {"Dog_Stop", 0.1};
      InterpolateTo[] = {"Dog_Die", 0.02};
    };
    class Dog_Attack : Dog_Stop {
      file = "\CA\animals2\dogs\data\Anim\dogAttack";
      speed = 1;
      variantAfter[] = {1, 1, 1};
      looped = 0;
      ConnectTo[] = {"Dog_Stop", 0.1};
      InterpolateTo[] = {"Dog_Die", 0.02};
    };
    class Dog_Sniff : Dog_Stop {
      file = "\dayz_anim\dog\dogGestureSniff";
      speed = 0.3;
      mask = "frontBody";
      variantAfter[] = {1, 1, 1};
      looped = 0;
      ConnectTo[] = {"Dog_Stop", 0.1};
      InterpolateTo[] = {"Dog_Die", 0.02};
    };
    class Dog_SitDown : Dog_Stop {
      actions = "DogSit";
      file = "\CA\animals2\dogs\data\Anim\dogSit1In";
      speed = 1.43;
      variantAfter[] = {1, 1, 1};
      looped = 0;
      relSpeedMin = 0.996672;
      relSpeedMax = 0.996672;
      ConnectTo[] = {};
      InterpolateTo[] = {"Dog_Die", 0.02};
    };
    class Dog_LieDown : Dog_Stop {
      actions = "DogSit";
      file = "\dayz_anim\dog\dogStandDown";
      speed = 1.42857;
      variantAfter[] = {1, 1, 1};
      looped = 0;
      relSpeedMin = 0.996672;
      relSpeedMax = 0.996672;
      ConnectTo[] = {};
      InterpolateTo[] = {"Dog_Die", 0.02};
    };
    class Dog_GetUp : Dog_Stop {
      actions = "DogSit";
      file = "\dayz_anim\dog\dogDownStand";
      speed = 1.42857;
      variantAfter[] = {1, 1, 1};
      looped = 0;
      relSpeedMin = 0.996672;
      relSpeedMax = 0.996672;
      ConnectTo[] = {"Dog_Stop", 0.1, "Dog_Run", 0.1, "Dog_Walk", 0.1, "Dog_Sprint", 0.1};
      InterpolateTo[] = {"Dog_Die", 0.02, "Dog_Run", 0.1, "Dog_Walk", 0.1, "Dog_Sprint", 0.1};
    };
    class Dog_Siting : Dog_Stop {
      actions = "DogSit";
      file = "\CA\animals2\dogs\data\Anim\dogSit2Idle";
      speed = 1.58;
      variantAfter[] = {1, 1, 1};
      looped = 1;
      ConnectTo[] = {};
      InterpolateTo[] = {"Dog_Die", 0.02};
    };
    class Dog_SitUp : Dog_Stop {
      actions = "DogSit";
      file = "\CA\animals2\dogs\data\Anim\dogSit3Out";
      speed = 1.08;
      variantAfter[] = {1, 1, 1};
      looped = 0;
      relSpeedMin = 0.996672;
      relSpeedMax = 0.996672;
      ConnectTo[] = {"Dog_Stop", 0.1, "Dog_Run", 0.1, "Dog_Walk", 0.1, "Dog_Sprint", 0.1};
      InterpolateTo[] = {"Dog_Die", 0.02, "Dog_Run", 0.1, "Dog_Walk", 0.1, "Dog_Sprint", 0.1};
    };
    class Dog_Sprint : Dog_Stop {
      actions = "DogSprint";
      file = "\CA\animals2\dogs\data\Anim\dogSprint";
      duty = 0.5;
      speed = 4.5;
      ConnectTo[] = {"Dog_Stop", 0.02, "Dog_Run", 0.02, "Dog_Walk", 0.02};
      InterpolateTo[] = {"Dog_Die", 0.02, "Dog_Stop", 0.02, "Dog_Run", 0.02, "Dog_Walk", 0.02};
    };
    class Dog_Run : Dog_Stop {
      file = "\CA\animals2\dogs\data\Anim\dogRun";
      duty = -0.5;
      speed = 1.8;
      ConnectTo[] = {"Dog_Stop", 0.02, "Dog_Sprint", 0.02, "Dog_Walk", 0.02};
      InterpolateTo[] = {"Dog_Die", 0.02, "Dog_Stop", 0.02, "Dog_Sprint", 0.02, "Dog_Walk", 0.02};
    };
    class Dog_Walk : Dog_Stop {
      duty = -0.7;
      file = "\CA\animals2\dogs\data\Anim\dogWalk";
      speed = 1.3;
      variantAfter[] = {3, 10, 20};
      ConnectTo[] = {"Dog_Stop", 0.2, "Dog_Sprint", 0.2, "Dog_Run", 0.2};
      InterpolateTo[] = {"Dog_Die", 0.02, "Dog_Stop", 0.2, "Dog_Sprint", 0.2, "Dog_Run", 0.2};
    };
    class Dog_Die : DefaultDie {
      enableDirectControl = 0;
      actions = "NoActions";
      file = "\CA\animals2\dogs\data\Anim\dogDeath";
      speed = 1.2;
      looped = 0;
      variantsPlayer[] = {};
      variantsAI[] = {""};
      variantAfter[] = {0, 0, 0};
      terminal = 1;
      soundEnabled = 0;
      ConnectTo[] = {};
      InterpolateTo[] = {};
    };
  };
  class Actions {
    class NoActions : ManActions {
      turnSpeed = 8;
      limitFast = 5.5;
      useFastMove = 0;
      upDegree = 0;
      GestureBark[] = {"GestureBark", "Gesture"};
      GestureIdle1[] = {"GestureIdle1", "Gesture"};
      GestureIdle2[] = {"GestureIdle2", "Gesture"};
      GestureSniff[] = {"GestureSniff", "Gesture"};
      GestureHeadL[] = {"GestureHeadL", "Gesture"};
      GestureHeadR[] = {"GestureHeadR", "Gesture"};
    };
    class DogActions : NoActions {
      Stop = "Dog_Stop";
      StopRelaxed = "Dog_Stop";
      TurnL = "Dog_TurnL";
      TurnR = "Dog_TurnR";
      TurnLRelaxed = "Dog_TurnL";
      TurnRRelaxed = "Dog_TurnR";
      Default = "Dog_Stop";
      JumpOff = "Dog_Stop";
      WalkF = "Dog_Walk";
      SlowF = "Dog_Run";
      FastF = "Dog_Sprint";
      EvasiveForward = "Dog_Sprint";
      Down = "Dog_Stop";
      Up = "Dog_Stop";
      PlayerStand = "Dog_Stop";
      PlayerProne = "Dog_Stop";
      PlayerCrouch = "";
      Crouch = "";
      Lying = "Dog_Stop";
      Stand = "Dog_Stop";
      Combat = "Dog_Stop";
      CanNotMove = "Dog_Stop";
      Civil = "Dog_Stop";
      CivilLying = "Dog_Stop";
      FireNotPossible = "Dog_StopV1";
      Die = "Dog_Die";
      turnSpeed = 8;
      limitFast = 5.5;
      useFastMove = 0;
      upDegree = "ManPosNoWeapon";
      StartSwim = "Dog_Die";
    };
    class DogSprint : DogActions {
      Die = "Dog_Die";
      turnSpeed = 4;
      limitFast = 5.5;
      useFastMove = 1;
    };
    class DogSit : NoActions {
      Up = "Dog_Stop";
      PlayerStand = "Dog_Stop";
      Stand = "Dog_Stop";
      WalkF = "Dog_Walk";
      SlowF = "Dog_Run";
      FastF = "Dog_Sprint";
      EvasiveForward = "Dog_Sprint";
      PlayerCrouch = "Dog_Stop";
      Crouch = "Dog_Stop";
      Die = "Dog_Die";
      upDegree = "ManPosNoWeapon";
      StartSwim = "Dog_Die";
    };
  };
  class Interpolations {
  };
  transitionsInterpolated[] = {};
  transitionsSimple[] = {};
  transitionsDisabled[] = {};
  class BlendAnims : BlendAnims {
    aimingDefault[] = {"head", 1, "Jaw", 1, "Neck1", 0.5, "Tongue1", 1, "Tongue2", 1};
    untiltWeaponDefault[] = {};
    legsDefault[] = {};
    headDefault[] = {"head", 1, "Jaw", 1, "Neck1", 0.5, "Tongue1", 1, "Tongue2", 1};
    aimingNo[] = {};
    legsNo[] = {};
    headNo[] = {};
    aimingUpDefault[] = {};
    frontBody[] = {"neck", 1, "neck1", 1, "head", 1, "Jaw", 1, "Tongue1", 1, "Tongue2", 1, "leftArm", 0.5, "rightArm", 0.5, "leftEar", 1, "rightEar", 1};
  };
};
class CfgGesturesDogDZ {
  skeletonName = "DogSkeleton";
  class ManActions {
  };
  class Actions {
    class NoActions : ManActions {
      turnSpeed = 0;
      upDegree = 0;
      limitFast = 1;
      useFastMove = 0;
    };
  };
  class Default {
    actions = "NoActions";
    file = "";
    looped = 1;
    speed = 0.5;
    relSpeedMin = 1;
    relSpeedMax = 1;
    soundEnabled = 0;
    soundOverride = "";
    soundEdge[] = {0.5, 1};
    terminal = 0;
    equivalentTo = "";
    connectAs = "";
    connectFrom[] = {};
    connectTo[] = {};
    interpolateWith[] = {};
    interpolateTo[] = {};
    interpolateFrom[] = {};
    mask = "empty";
    interpolationSpeed = 6;
    interpolationRestart = 0;
    preload = 0;
    disableWeapons = 1;
    enableOptics = 1;
    showWeaponAim = 1;
    enableMissile = 1;
    enableBinocular = 1;
    showItemInHand = 0;
    showItemInRightHand = 0;
    showHandGun = 0;
    canPullTrigger = 1;
    walkcycles = 1;
    headBobMode = 0;
    headBobStrength = 0;
    leftHandIKBeg = 0;
    leftHandIKEnd = 0;
    rightHandIKBeg = 0;
    rightHandIKEnd = 0;
    leftHandIKCurve[] = {1};
    rightHandIKCurve[] = {1};
    forceAim = 0;
  };
  class States {
    class GestureBark : Default {
      file = "\dayz_anim\dog\dogBarkOnce";
      looped = 0;
      speed = 3;
      mask = "barking";
    };
    class GestureIdle1 : Default {
      file = "\dayz_anim\dog\dogGestureIdle1";
      looped = 0;
      speed = 0.3;
      mask = "idle";
    };
    class GestureIdle2 : Default {
      file = "\dayz_anim\dog\dogGestureIdle2";
      looped = 0;
      speed = 0.3;
      mask = "idle";
    };
    class GestureHeadL : Default {
      file = "\dayz_anim\dog\dogGestureHeadL";
      looped = 0;
      speed = 0.3;
      mask = "idle";
    };
    class GestureHeadR : Default {
      file = "\dayz_anim\dog\dogGestureHeadR";
      looped = 0;
      speed = 0.3;
      mask = "idle";
    };
    class GestureSniff : Default {
      file = "\dayz_anim\dog\dogGestureSniff";
      looped = 0;
      speed = 0.3;
      mask = "frontBody";
    };
  };
  class BlendAnims {
    barking[] = {"head", 1, "Jaw", 1, "Neck1", 0.5, "Tongue1", 1, "Tongue2", 1, "Tail1", 0.3, "Tail2", 0.6, "Tail3", 1};
    idle[] = {"head", 1, "Jaw", 1, "Neck1", 0.6, "Tongue1", 1, "Tongue2", 1, "Tail1", 0.3, "Tail2", 0.6, "Tail3", 1, "Spine", 0.1, "Spine1", 0.2, "Spine2", 0.4};
    frontBody[] = {"spine", 0.1, "spine1", 0.3, "spine2", 0.6, "neck", 1, "neck1", 1, "head", 1, "Jaw", 1, "Tongue1", 1, "Tongue2", 1, "leftArm", 0.5, "rightArm", 0.5, "leftEar", 1, "rightEar", 1};
  };
  class Interpolations {
  };
  transitionsInterpolated[] = {};
  transitionsSimple[] = {};
  transitionsDisabled[] = {};
};
class RscPicture;
class RscButton;
class CA_IGUI_Title;
class RscText;
class RscControlsGroup;
class RscLineBreak;
class RscIGUIListNBox;
class RscActiveText;
class RscDisplayLoadMission;
class RscShortcutButton;
class CA_Title;
class RscIGUIListBox;
class RscEdit;
class RscCombo;
class RscXListBox;
class RscPictureKeepAspect;
class RscStandardDisplay;
class RscProgress;
class RscProgressNotFreeze;
class RscButtonTextOnly;
class RscShortcutButtonMain;
class Ori_HB_bg {
  idc = -1;
  colorText[] = {0.5, 0.5, 0.5, 0};
  colorBackground[] = {0.3, 0.3, 0.3, 0.2};
  font = "EtelkaNarrowMediumPro";
  size = "0.015*safeZoneH";
  type = 13;
  style = 0;
  y = "safeZoneY+0.93*SafeZoneH";
  w = "0.04375*safezoneW";
  h = "0.058*safezoneH";
  class Attributes {
    font = "EtelkaNarrowMediumPro";
    align = "left";
    valign = "bottom";
    color = "#ccccff";
  };
};
class Ori_HB_items {
  access = 0;
  type = 0;
  idc = -1;
  colorBackground[] = {0, 0, 0, 0};
  colorText[] = {1, 1, 1, 0.8};
  font = "TahomaB";
  sizeEx = 0;
  lineSpacing = 0;
  text = "";
  style = "0x30+0x100";
  y = "(safeZoneY+0.93*SafeZoneH)+0.015";
  w = "0.02875*safezoneW";
  h = "0.043*safezoneH";
};
class RscMsgBox {
  movingEnable = 1;
  onLoad = "endLoadingScreen";
  class Top {
    class CA_Background_Top : RscPicture {
      x = 0.13;
      y = 0.24;
      w = 1.2549;
      h = 0.104575;
      moving = 1;
      text = "\ori\ui\ui_messagebox_top_ca.paa";
    };
  };
  class Middle {
    class CA_Background_Middle : RscPicture {
      x = 0.13;
      y = 0.344621;
      w = 1.2549;
      h = 0.032;
      text = "\ori\ui\ui_messagebox_middle_ca.paa";
    };
    class CA_Text : RscStructuredText {
      idc = 101;
      x = 0.146045;
      y = 0.344621;
      w = 0.71;
      h = 0;
      size = 0.03921;
      class Attributes {
        color = "#e0d8a6";
      };
    };
  };
  class Bottom {
    class CA_Background_Bottom : RscPicture {
      x = 0.13;
      y = 0.376621;
      w = 1.2549;
      h = 0.20915;
      text = "\ori\ui\ui_messagebox_bottom_ca.paa";
    };
    class CA_ButtonOK : RscShortcutButton {
      idc = 1;
      shortcuts[] = {"0x00050000+0", 28, 57, 156};
      text = "$STR_DISP_OK";
      default = 1;
      x = 0.4504;
      y = 0.401621;
      w = 0.2;
      font = "TahomaB";
      period = 0;
      periodFocus = 0;
      periodOver = 0;
      animTextureNormal = "\ori\ui\esc_knopka_normal_ca.paa";
      animTextureDisabled = "\ori\ui\esc_knopka_normal_ca.paa";
      animTextureOver = "\ori\ui\esc_knopka_focus_ca.paa";
      animTextureFocused = "\ori\ui\esc_knopka_default_ca.paa";
      animTexturePressed = "\ori\ui\esc_knopka_down_ca.paa";
      animTextureDefault = "\ori\ui\esc_knopka_default_ca.paa";
      h = 0.07;
      class TextPos {
        left = 0.062;
        top = 0.007;
        right = 0.005;
        bottom = 0.005;
      };
      class HitZone {
        left = 0.004;
        top = 0.004;
        right = 0.004;
        bottom = 0.004;
      };
    };
    class CA_ButtonCancel : CA_ButtonOK {
      idc = 2;
      shortcuts[] = {"0x00050000+1"};
      text = "$STR_DISP_CANCEL";
      x = 0.66;
    };
  };
};
class RscDisplayPassword : RscStandardDisplay {
  movingEnable = 0;
  simulationEnabled = 0;
  class controlsbackground {
    class MainbackFadedOrigins : RscPicture {
      x = "SafeZoneX";
      y = "SafeZoneY";
      w = "SafeZoneW";
      h = "SafeZoneH";
      colorText[] = {1, 1, 1, 1};
      text = "\ori\ui\fon_co.paa";
    };
    // UNKNOWN ENTRY TYPE 4 at 17836
  };
  class controls {
    // UNKNOWN ENTRY TYPE 4 at 18112
  };
};
class RscDisplayLoadCustom : RscDisplayLoadMission {
  enableSimulation = 0;
  onload = "_this call compile preprocessfilelinenumbers 'ca\ui\scripts\ui_loadingTextCustom.sqf';";
};
class RscDisplayLoading {
  class Variants {
    class LoadingOne {
      class controls {
        class LoadingPic : RscPictureKeepAspect {
          text = "ori\ui\ori_loadscreen1_co.paa";
        };
      };
    };
  };
};
class RscDisplayStart {
  class controls {
    class LoadingPic : RscPictureKeepAspect {
      text = "ori\ui\ori_loadscreen1_co.paa";
    };
  };
};
class RscDisplayMain : RscStandardDisplay {
  onKeyDown = " _dummy = _this execVM ""\ori\ui\scripts\mainmenuShortcuts.sqf"";";
  class RscShortcutButtonMain2 : RscShortcutButtonMain {
    animTextureNormal = "\ori\ui\ui_knopka_menu_disabled_ca.paa";
    animTextureDisabled = "\ori\ui\ui_knopka_menu_disabled_ca.paa";
    animTextureOver = "\ori\ui\ui_knopka_menu_over_ca.paa";
    animTextureFocused = "\ori\ui\ui_knopka_menu_focus_ca.paa";
    animTexturePressed = "\ori\ui\ui_knopka_menu_down_ca.paa";
    animTextureDefault = "\ori\ui\ui_knopka_menu_disabled_ca.paa";
    period = 0.5;
    periodFocus = 1.2;
    periodOver = 0.8;
  };
  class controlsBackground {
    class MainbackFadedOrigins : RscPicture {
      x = "SafeZoneX";
      y = "SafeZoneY";
      w = "SafeZoneW";
      h = "SafeZoneH";
      colorText[] = {1, 1, 1, 1};
      text = "\ori\ui\fon_co.paa";
    };
    // UNKNOWN ENTRY TYPE 4 at 20643
  };
  class controls {
    // UNKNOWN ENTRY TYPE 4 at 21134
  };
};
class RscDisplayMultiplayer : RscStandardDisplay {
  class controlsbackground {
    class CA_TitleBack : RscPicture {
      x = "(02/100) * SafeZoneW + SafeZoneX";
      y = "(02/100) * SafeZoneH + SafeZoneY";
      w = "(96/100) * SafeZoneW";
      h = "(06/100) * SafeZoneH";
      text = "\ori\ui\mp_topfon.paa";
    };
    // UNKNOWN ENTRY TYPE 4 at 22303
  };
  class controls {
    // UNKNOWN ENTRY TYPE 4 at 28907
  };
};
class RscDisplayFilter : RscStandardDisplay {
  class controlsBackground {
    class MainbackFadedOrigins : RscPicture {
      x = "SafeZoneX";
      y = "SafeZoneY";
      w = "SafeZoneW";
      h = "SafeZoneH";
      colorText[] = {1, 1, 1, 1};
      text = "\ori\ui\fon_co.paa";
    };
    // UNKNOWN ENTRY TYPE 4 at 30662
  };
  class controls {
    class CA_FilterTitle : CA_Title {
      x = 0.18;
      y = 0.192;
      text = "$STR_DISP_FILTER_TITLE";
    };
    class CA_TextServer : RscText {
      x = 0.159803;
      y = "(0.416549 + -3*0.0500)";
      w = 0.235296;
      text = "$STR_DISP_FILTER_SERVER";
    };
    class CA_ValueServer : RscEdit {
      idc = 101;
      x = 0.400534;
      y = "(0.416549 + -3*0.0500)";
      w = 0.3;
    };
    class CA_TextMaxPing : CA_TextServer {
      x = 0.159803;
      y = "(0.416549 + -2*0.0500)";
      text = "$STR_DISP_FILTER_MAXPING";
    };
    class CA_ValueMaxPing : CA_ValueServer {
      idc = 103;
      x = 0.400534;
      y = "(0.416549 + -2*0.0500)";
      w = 0.1;
    };
    class CA_TextMinPlayers : CA_TextServer {
      x = 0.159803;
      y = "(0.416549 + -1*0.0500)";
      text = "$STR_DISP_FILTER_MINPLAYERS";
    };
    class CA_ValueMinPlayers : CA_ValueMaxPing {
      idc = 104;
      x = 0.400534;
      y = "(0.416549 + -1*0.0500)";
    };
    class CA_TextMaxPlayers : CA_TextServer {
      x = 0.159803;
      y = "(0.416549 + 0*0.0500)";
      text = "$STR_DISP_FILTER_MAXPLAYERS";
    };
    class CA_ValueMaxPlayers : CA_ValueMaxPing {
      idc = 105;
      x = 0.400534;
      y = "(0.416549 + 0*0.0500)";
    };
    class CA_TextMission : CA_TextServer {
      x = 0.159803;
      y = "(0.416549 + 1*0.0500)";
      text = "$STR_DISP_FILTER_MISSION";
    };
    class ValueMission : CA_ValueServer {
      idc = 102;
      x = 0.400534;
      y = "(0.416549 + 1*0.0500)";
    };
    class CA_TextFilterType : CA_TextServer {
      x = 0.159803;
      y = "(0.416549 + 2*0.0500)";
      text = "$STR_DISP_ARCGRP_TYPE";
    };
    class CA_FilterType : RscCombo {
      idc = 109;
      x = 0.400534;
      y = "(0.416549 + 2*0.0500)";
      w = 0.3;
    };
    class CA_TextExpansionsType : CA_TextServer {
      x = 0.159803;
      y = "(0.416549 + 3*0.0500)";
      text = "$STR_DISP_EXPANSIONS";
    };
    class CA_FilterExpansions : RscXListBox {
      idc = 111;
      x = 0.400534;
      y = "(0.416549 + 3*0.0500)";
      w = 0.3;
    };
    class CA_TextHideFull : CA_TextServer {
      x = 0.159803;
      y = "(0.416549 + 4*0.0500)";
      text = "$STR_FILTER_FULL_TEXT";
    };
    class CA_FullServers : RscXListBox {
      idc = 106;
      x = 0.400534;
      y = "(0.416549 + 4*0.0500)";
      w = 0.3;
    };
    class CA_TextPassworded : CA_TextServer {
      x = 0.159803;
      y = "(0.416549 + 5*0.0500)";
      text = "$STR_FILTER_PASSWORDED_TEXT";
    };
    class CA_PasswordedServers : CA_FullServers {
      idc = 107;
      x = 0.400534;
      y = "(0.416549 + 5*0.0500)";
    };
    class CA_TextBattlEye : CA_TextServer {
      x = 0.159803;
      y = "(0.416549 + 6*0.0500)";
      text = "$STR_FILTER_BATTLEYE_TEXT";
    };
    class CA_BEServers : CA_FullServers {
      idc = 110;
      x = 0.400534;
      y = "(0.416549 + 6*0.0500)";
      w = 0.3;
    };
    class CA_Filter_Default : RscShortcutButton {
      idc = 108;
      shortcuts[] = {"0x00050000+2"};
      x = 0.3395;
      y = 0.7625;
      text = "$STR_DISP_DEFAULT";
      period = 0;
      periodFocus = 0;
      periodOver = 0;
      animTextureNormal = "\ori\ui\esc_knopka_normal_ca.paa";
      animTextureDisabled = "\ori\ui\esc_knopka_normal_ca.paa";
      animTextureOver = "\ori\ui\esc_knopka_focus_ca.paa";
      animTextureFocused = "\ori\ui\esc_knopka_default_ca.paa";
      animTexturePressed = "\ori\ui\esc_knopka_down_ca.paa";
      animTextureDefault = "\ori\ui\esc_knopka_default_ca.paa";
      h = 0.07;
      class TextPos {
        left = 0.04;
        top = 0.007;
        right = 0.005;
        bottom = 0.005;
      };
      class HitZone {
        left = 0.01;
        top = 0.01;
        right = 0.01;
        bottom = 0.01;
      };
    };
    class CA_Filter_Ok : RscShortcutButton {
      idc = 1;
      shortcuts[] = {"0x00050000+0", 28, 57, 156};
      x = 0.525;
      y = 0.7625;
      text = "$STR_DISP_OK";
      default = 1;
      period = 0;
      periodFocus = 0;
      periodOver = 0;
      animTextureNormal = "\ori\ui\esc_knopka_normal_ca.paa";
      animTextureDisabled = "\ori\ui\esc_knopka_normal_ca.paa";
      animTextureOver = "\ori\ui\esc_knopka_focus_ca.paa";
      animTextureFocused = "\ori\ui\esc_knopka_default_ca.paa";
      animTexturePressed = "\ori\ui\esc_knopka_down_ca.paa";
      animTextureDefault = "\ori\ui\esc_knopka_default_ca.paa";
      h = 0.07;
      class TextPos {
        left = 0.06;
        top = 0.007;
        right = 0.005;
        bottom = 0.005;
      };
      class HitZone {
        left = 0.01;
        top = 0.01;
        right = 0.01;
        bottom = 0.01;
      };
    };
    class CA_Filter_Cancel : RscShortcutButton {
      idc = 2;
      shortcuts[] = {"0x00050000+1"};
      x = 0.157;
      y = 0.7625;
      text = "$STR_DISP_CANCEL";
      period = 0;
      periodFocus = 0;
      periodOver = 0;
      animTextureNormal = "\ori\ui\esc_knopka_normal_ca.paa";
      animTextureDisabled = "\ori\ui\esc_knopka_normal_ca.paa";
      animTextureOver = "\ori\ui\esc_knopka_focus_ca.paa";
      animTextureFocused = "\ori\ui\esc_knopka_default_ca.paa";
      animTexturePressed = "\ori\ui\esc_knopka_down_ca.paa";
      animTextureDefault = "\ori\ui\esc_knopka_default_ca.paa";
      h = 0.07;
      class TextPos {
        left = 0.05;
        top = 0.007;
        right = 0.005;
        bottom = 0.005;
      };
      class HitZone {
        left = 0.01;
        top = 0.01;
        right = 0.01;
        bottom = 0.01;
      };
    };
  };
};
class RscDisplayIPAddress : RscStandardDisplay {
  class controlsBackground {
    class MainbackFadedOrigins : RscPicture {
      x = "SafeZoneX";
      y = "SafeZoneY";
      w = "SafeZoneW";
      h = "SafeZoneH";
      colorText[] = {1, 1, 1, 1};
      text = "\ori\ui\fon_co.paa";
    };
    // UNKNOWN ENTRY TYPE 4 at 35290
  };
  class controls {
    class CA_IPTitle : CA_Title {
      x = 0.18;
      y = 0.192;
      text = "$STR_DISP_IP_TITLE";
    };
    class CA_TextAddress : RscText {
      x = 0.160706;
      y = 0.279628;
      w = 0.169119;
      text = "$STR_DISP_IP_ADDRESS";
    };
    class CA_ValueAddress : RscEdit {
      idc = 101;
      x = 0.26178;
      y = 0.279628;
      w = 0.18;
      h = 0.039216;
    };
    class CA_TextPort : CA_TextAddress {
      y = 0.328648;
      text = "$STR_DISP_IP_PORT";
    };
    class CA_ValuePort : CA_ValueAddress {
      idc = 102;
      y = 0.328648;
      w = 0.110295;
    };
    class ButtonContinue : RscShortcutButton {
      idc = 1;
      default = 1;
      shortcuts[] = {"0x00050000+0", 28, 57, 156};
      x = 0.26178;
      y = 0.398648;
      text = "$STR_DISP_OK";
      w = 0.153825;
      h = 0.07;
      period = 0;
      periodFocus = 0;
      periodOver = 0;
      animTextureNormal = "\ori\ui\esc_knopka_normal_ca.paa";
      animTextureDisabled = "\ori\ui\esc_knopka_normal_ca.paa";
      animTextureOver = "\ori\ui\esc_knopka_focus_ca.paa";
      animTextureFocused = "\ori\ui\esc_knopka_default_ca.paa";
      animTexturePressed = "\ori\ui\esc_knopka_down_ca.paa";
      animTextureDefault = "\ori\ui\esc_knopka_default_ca.paa";
      class TextPos {
        left = 0.05;
        top = 0.005;
        right = 0.005;
        bottom = 0.005;
      };
      class HitZone {
        left = 0.01;
        top = 0.01;
        right = 0.01;
        bottom = 0.01;
      };
    };
    class ButtonCancel : RscShortcutButton {
      idc = 2;
      default = 0;
      shortcuts[] = {"0x00050000+1"};
      x = 0.27;
      y = 0.8825;
      text = "$STR_DISP_BACK";
      h = 0.07;
      w = 0.153825;
      period = 0;
      periodFocus = 0;
      periodOver = 0;
      animTextureNormal = "\ori\ui\esc_knopka_normal_ca.paa";
      animTextureDisabled = "\ori\ui\esc_knopka_normal_ca.paa";
      animTextureOver = "\ori\ui\esc_knopka_focus_ca.paa";
      animTextureFocused = "\ori\ui\esc_knopka_default_ca.paa";
      animTexturePressed = "\ori\ui\esc_knopka_down_ca.paa";
      animTextureDefault = "\ori\ui\esc_knopka_default_ca.paa";
      class TextPos {
        left = 0.04;
        top = 0.005;
        right = 0.005;
        bottom = 0.005;
      };
      class HitZone {
        left = 0.01;
        top = 0.01;
        right = 0.01;
        bottom = 0.01;
      };
    };
  };
};
class dStronghold {
  class RscPictureK {
    type = 0;
    style = 48;
    colorText[] = {0.75, 0.75, 0.75, 1};
    colorBackground[] = {0, 0, 0, 0};
    font = "Bitstream";
    sizeEx = 0.025;
    soundClick[] = {"", 0.2, 1};
    soundEnter[] = {"", 0.2, 1};
    soundEscape[] = {"", 0.2, 1};
    soundPush[] = {"", 0.2, 1};
    w = 0.275;
    h = 0.04;
    text = "";
  };
  class RscButtonK {
    type = 1;
    style = 2;
    colorText[] = {0, 0, 0, 1};
    font = "TahomaB";
    sizeEx = 0.05;
    soundPush[] = {"", 0.2, 1};
    soundClick[] = {"\ca\ui\data\sound\new1", 0.2, 1};
    soundEscape[] = {"\ca\ui\data\sound\new1", 0.2, 1};
    default = 0;
    text = "";
    action = "";
    colorActive[] = {0, 0, 0, 0};
    colorDisabled[] = {0, 0, 0, 0.1};
    colorBackground[] = {0, 0, 0, 0.3};
    colorBackgroundActive[] = {0, 0, 0, 0.4};
    colorBackgroundDisabled[] = {0, 0, 0, 0.3};
    colorFocused[] = {0.84, 1, 0.55, 1};
    colorShadow[] = {1, 1, 1, 0.1};
    colorBorder[] = {0, 0, 0, 0.1};
    offsetX = 0;
    offsetY = 0;
    offsetPressedX = 0;
    offsetPressedY = 0;
    borderSize = 0;
    soundEnter[] = {"", 0.15, 1};
    period = 0;
  };
  class Ori_Button {
    type = 16;
    style = 0;
    default = 0;
    x = 0.1;
    y = 0.1;
    w = 0.183825;
    h = 0.104575;
    color[] = {0.543, 0.5742, 0.4102, 1};
    color2[] = {0.95, 0.95, 0.95, 1};
    colorBackground[] = {1, 1, 1, 1};
    colorbackground2[] = {1, 1, 1, 1};
    colorDisabled[] = {1, 1, 1, 0.25};
    periodFocus = 1.2;
    periodOver = 0.8;
    class HitZone {
      left = 0.004;
      top = 0.009;
      right = 0.004;
      bottom = 0.009;
    };
    class ShortcutPos {
      left = 0.0145;
      top = 0.026;
      w = 0.0392157;
      h = 0.0522876;
    };
    class TextPos {
      left = 0.005;
      top = 0.01;
      right = 0.005;
      bottom = 0.005;
    };
    textureNoShortcut = "";
    animTextureNormal = "\ori\ui\knopka_normal.paa";
    animTextureDisabled = "\ori\ui\knopka_normal.paa";
    animTextureOver = "\ori\ui\knopka_hover.paa";
    animTextureFocused = "\ori\ui\knopka_hover.paa";
    animTexturePressed = "\ori\ui\knopka_press.paa";
    animTextureDefault = "\ori\ui\knopka_normal.paa";
    period = 0.4;
    font = "Zeppelin32";
    size = 0.05;
    sizeEx = 0.05;
    text = "";
    soundEnter[] = {"", 0.09, 1};
    soundPush[] = {"", 0.09, 1};
    soundClick[] = {"", 0.07, 1};
    soundEscape[] = {"", 0.09, 1};
    action = "";
    toolTip = "";
    class Attributes {
      font = "Zeppelin32";
      color = "#E5E5E5";
      align = "center";
      shadow = 1;
    };
    class AttributesImage {
      font = "Zeppelin32";
      color = "#E5E5E5";
      align = "center";
      shadow = 1;
    };
  };
  class RscListBoxK {
    type = 5;
    canDrag = 0;
    style = "0 + 0x10";
    font = "Zeppelin32";
    sizeEx = 0.04221;
    rowHeight = 0.03;
    colorBackground[] = {0.8, 0.8, 1, 0.7};
    colorText[] = {1, 1, 1, 0.75};
    colorScrollbar[] = {0.95, 0.95, 0.95, 1};
    colorSelect[] = {0.95, 0.95, 0.95, 1};
    colorSelect2[] = {0.95, 0.95, 0.95, 1};
    colorSelectBackground[] = {0.6, 0.8392, 0.4706, 1};
    colorSelectBackground2[] = {0.6, 0.8392, 0.4706, 1};
    columns[] = {0.1, 0.7, 0.1, 0.1};
    period = 0;
    maxHistoryDelay = 1;
    autoScrollSpeed = -1;
    autoScrollDelay = 5;
    autoScrollRewind = 0;
    soundSelect[] = {"\ca\ui\data\sound\new1", 0.09, 1};
    class ScrollBar {
      color[] = {1, 1, 1, 0.6};
      colorActive[] = {1, 1, 1, 1};
      colorDisabled[] = {1, 1, 1, 0.3};
      thumb = "\ca\ui\data\igui_scrollbar_thumb_ca.paa";
      arrowFull = "\ca\ui\data\igui_arrow_top_active_ca.paa";
      arrowEmpty = "\ca\ui\data\igui_arrow_top_ca.paa";
      border = "\ca\ui\data\igui_border_scroll_ca.paa";
    };
  };
  class RscTextK {
    type = 0;
    style = 2;
    colorText[] = {0, 1, 0.5, 1};
    font = "TahomaB";
    sizeEx = 0.08;
    x = 0;
    y = 0;
    w = 0.1;
    h = 0.2;
  };
  name = "dStronghold";
  movingEnable = 0;
  idd = 10001;
  controlsBackground[] = {"bg"};
  objects[] = {};
  class controls {
    class listboxA : RscListBoxK {
      idc = 10002;
      x = "0.247 * safezoneW + safezoneX";
      y = "0.28 * safezoneH + safezoneY";
      w = "0.165 * safezoneW";
      h = "0.181 * safezoneH";
    };
    class listboxA2 : RscListBoxK {
      idc = 10003;
      x = "0.45 * safezoneW + safezoneX";
      y = "0.28 * safezoneH + safezoneY";
      w = "0.165 * safezoneW";
      h = "0.181 * safezoneH";
    };
    class but_del : Ori_Button {
      idc = -1;
      x = "0.245 * safezoneW + safezoneX";
      y = "0.478 * safezoneH + safezoneY";
      w = "0.1 * safezoneW";
      h = "0.04 * safezoneH";
      size = 0.045;
      sizeEx = 0.045;
      text = "$STR_Remove";
      action = "_index = lbCurSel 10002; if(_index > -1) then { selected_sl = []; selected_sl_n = []; selected_sl set [count selected_sl, playersID_arr select _index]; selected_sl_n set [count selected_sl_n, playersID_arr_n select _index]; playersID_arr = playersID_arr - selected_sl; playersID_arr_n = playersID_arr_n - selected_sl_n; playersID_arr2 set [count playersID_arr2, selected_sl select 0]; playersID_arr2_n set [count playersID_arr2_n, selected_sl_n select 0]; _text = lbText [10002, _index]; lbAdd [10003, _text]; lbDelete [10002, _index]; selected_sl = []; selected_sl_n = []; };";
    };
    class but_add : Ori_Button {
      idc = -1;
      x = "0.45 * safezoneW + safezoneX";
      y = "0.478 * safezoneH + safezoneY";
      w = "0.1 * safezoneW";
      h = "0.04 * safezoneH";
      size = 0.045;
      sizeEx = 0.045;
      text = "$STR_Add";
      action = "_index = lbCurSel 10003; if(_index > -1) then { selected_sl = []; selected_sl_n = []; selected_sl set [count selected_sl, playersID_arr2 select _index]; selected_sl_n set [count selected_sl_n, playersID_arr2_n select _index]; playersID_arr2 = playersID_arr2 - selected_sl; playersID_arr2_n = playersID_arr2_n - selected_sl_n; playersID_arr set [count playersID_arr, selected_sl select 0]; playersID_arr_n set [count playersID_arr_n, selected_sl_n select 0]; _text = lbText [10003, _index];  lbAdd [10002, _text]; lbDelete [10003, _index]; selected_sl = []; selected_sl_n = []; };";
    };
    class but_ok : Ori_Button {
      idc = -1;
      x = "0.54 * safezoneW + safezoneX";
      y = "0.54 * safezoneH + safezoneY";
      w = "0.1 * safezoneW";
      h = "0.04 * safezoneH";
      size = 0.045;
      sizeEx = 0.045;
      text = "OK";
      action = "_vsego = count playersID_arr; if(_vsego > 3 or !Ori_FList) then { NaDobavku = [] + playersID_arr; ctrlSetText [10004, ""OK""]; closeDialog 0; } else { NaDobavku = []; ctrlSetText [10004, ""Minimum 4 people""]; };";
    };
    class zagolvok : RscTextK {
      idc = 10005;
      x = "0.305 * safezoneW + safezoneX";
      y = "0.20 * safezoneH + safezoneY";
      w = "0.27 * safezoneW";
      h = "0.04 * safezoneH";
      size = 0.065;
      sizeEx = "0.065 * (safezoneW + safezoneX)";
      text = "$STR_Stronghold_Team";
      colorText[] = {0, 0, 0, 0.9};
      colorBackground[] = {0, 0.128, 0, 0};
    };
    class zagolvok_team : RscTextK {
      idc = 10006;
      x = "0.24 * safezoneW + safezoneX";
      y = "0.24 * safezoneH + safezoneY";
      w = "0.17 * safezoneW";
      h = "0.04 * safezoneH";
      text = "$STR_Members";
      size = 0.045;
      sizeEx = 0.045;
      colorText[] = {0.75, 0.75, 0.75, 0.8};
      colorBackground[] = {0, 0.128, 0, 0};
    };
    class zagolvok_new : RscTextK {
      idc = 10007;
      x = "0.45 * safezoneW + safezoneX";
      y = "0.24 * safezoneH + safezoneY";
      w = "0.17 * safezoneW";
      h = "0.04 * safezoneH";
      text = "$STR_New_members";
      size = 0.045;
      sizeEx = 0.045;
      colorText[] = {0.75, 0.75, 0.75, 0.8};
      colorBackground[] = {0, 0.128, 0, 0};
    };
    class zagolvok_error : RscTextK {
      idc = 10004;
      x = "0.305 * safezoneW + safezoneX";
      y = "0.53 * safezoneH + safezoneY";
      w = "0.17 * safezoneW";
      h = "0.04 * safezoneH";
      text = "";
      size = 0.035;
      sizeEx = 0.035;
      colorText[] = {1, 1, 1, 0.75};
      colorBackground[] = {0, 0.128, 0, 0};
    };
  };
  class bg : RscPictureK {
    idc = -1;
    x = "0.20 * safezoneW + safezoneX";
    y = "0.20 * safezoneH + safezoneY";
    w = "0.47 * safezoneW";
    h = "0.40 * safezoneH";
    text = "\ori\ui\fon.paa";
    colorBackground[] = {0, 0.128, 0, 1};
  };
};
class KeypadHouse {
  idd = 20900;
  movingEnable = 0;
  controlsBackground[] = {};
  controls[] = {"B1", "B2", "B3", "B4", "B5", "B6", "B7", "B8", "B9", "B0", "BEnter", "BAbort", "KeypadImage", "NumberDisplay"};
  objects[] = {};
  class B1 {
    idc = -1;
    type = 1;
    style = 2;
    moving = 0;
    x = 0.45;
    y = 0.46;
    h = 0.06;
    w = 0.04;
    font = "Zeppelin32";
    sizeEx = 0.05;
    action = "CODEINPUT set [count CODEINPUT, 1]; if ((count CODEINPUT) ==7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 1];};";
    text = "";
    default = 0;
    colorText[] = {0, 0, 0, 1};
    colorFocused[] = {0.1, 0.1, 0.1, 0.1};
    colorShadow[] = {0, 0, 0, 0};
    colorBorder[] = {0.5, 0.5, 0.5, 0};
    colorBackground[] = {0.7, 0.7, 0.7, 1};
    colorBackgroundActive[] = {0.1, 0.1, 0.1, 0.3};
    colorDisabled[] = {1, 0, 0, 1};
    colorBackgroundDisabled[] = {0.5, 0.5, 0.5, 0};
    borderSize = 0.015;
    offsetX = 0.005;
    offsetY = 0.005;
    offsetPressedX = 0.002;
    offsetPressedY = 0.002;
    soundEnter[] = {"", 0, 1};
    soundPush[] = {"", 0, 1};
    soundClick[] = {"", 0, 1};
    soundEscape[] = {"", 0, 1};
  };
  class B2 : B1 {
    x = 0.52;
    text = "";
    action = "CODEINPUT set [count CODEINPUT, 2]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 2];};";
  };
  class B3 : B1 {
    x = 0.59;
    text = "";
    action = "CODEINPUT set [count CODEINPUT, 3]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 3];};";
  };
  class B4 : B1 {
    y = 0.57;
    text = "";
    action = "CODEINPUT set [count CODEINPUT, 4]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 4];};";
  };
  class B5 : B4 {
    x = 0.52;
    text = "";
    action = "CODEINPUT set [count CODEINPUT, 5]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 5];};";
  };
  class B6 : B4 {
    x = 0.59;
    text = "";
    action = "CODEINPUT set [count CODEINPUT, 6]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 6];};";
  };
  class B7 : B1 {
    y = 0.67;
    text = "";
    action = "CODEINPUT set [count CODEINPUT, 7]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 7];};";
  };
  class B8 : B7 {
    x = 0.52;
    text = "";
    action = "CODEINPUT set [count CODEINPUT, 8]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 8];};";
  };
  class B9 : B7 {
    x = 0.59;
    text = "";
    action = "CODEINPUT set [count CODEINPUT, 9]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = [];} else { ctrlSetText [1099, (ctrlText 1099) + str 9];};";
  };
  class B0 : B8 {
    y = 0.77;
    text = "";
    action = "CODEINPUT set [count CODEINPUT, 0]; if ((count CODEINPUT) == 7) then { ctrlSetText [1099, '']; CODEINPUT = []; } else { ctrlSetText [1099, (ctrlText 1099) + str 0]; };";
  };
  class BEnter : B9 {
    y = 0.77;
    text = "";
    action = "CODE = ctrlText (findDisplay 20900 displayCtrl 1099); closeDialog 0;";
  };
  class BAbort : B7 {
    y = 0.77;
    text = "";
    action = "CODE = """"; CODEINPUT = []; closeDialog 0;";
  };
  class KeypadImage {
    idc = -1;
    type = 0;
    style = 48;
    colorText[] = {};
    colorBackground[] = {};
    font = "Zeppelin32";
    sizeEx = 0.023;
    x = 0.35;
    y = 0.2;
    w = 0.4;
    h = 0.8;
    text = "\ori\base_buildings\data\pin_machine_co.paa";
  };
  class NumberDisplay {
    idc = 1099;
    type = 0;
    style = 0;
    colorText[] = {1, 0, 0, 1};
    colorBackground[] = {1, 1, 1, 0};
    font = "TahomaB";
    sizeEx = 0.072;
    x = 0.44;
    y = 0.28;
    w = 0.21;
    h = 0.1;
    text = "";
  };
};
class ZadanieOrigins {
  class RscPictureZ {
    type = 0;
    style = 48;
    colorText[] = {0.75, 0.75, 0.75, 1};
    colorBackground[] = {0, 0, 0, 0};
    font = "Bitstream";
    sizeEx = 0.025;
    soundClick[] = {"", 0.2, 1};
    soundEnter[] = {"", 0.2, 1};
    soundEscape[] = {"", 0.2, 1};
    soundPush[] = {"", 0.2, 1};
    w = 0.275;
    h = 0.04;
    text = "";
  };
  class Ori_B_Zadanie {
    type = 16;
    style = 0;
    default = 0;
    x = 0.1;
    y = 0.1;
    w = 0.183825;
    h = 0.104575;
    color[] = {0.543, 0.5742, 0.4102, 1};
    color2[] = {0.95, 0.95, 0.95, 1};
    colorBackground[] = {1, 1, 1, 1};
    colorbackground2[] = {1, 1, 1, 1};
    colorDisabled[] = {1, 1, 1, 0.25};
    periodFocus = 1.2;
    periodOver = 0.8;
    class HitZone {
      left = 0.004;
      top = 0.009;
      right = 0.004;
      bottom = 0.009;
    };
    class ShortcutPos {
      left = 0.0145;
      top = 0.026;
      w = 0.0392157;
      h = 0.0522876;
    };
    class TextPos {
      left = 0.005;
      top = 0.01;
      right = 0.005;
      bottom = 0.005;
    };
    textureNoShortcut = "";
    animTextureNormal = "\ori\ui\power_normal_ca.paa";
    animTextureDisabled = "\ori\ui\power_normal_ca.paa";
    animTextureOver = "\ori\ui\power_hover_ca.paa";
    animTextureFocused = "\ori\ui\power_hover_ca.paa";
    animTexturePressed = "\ori\ui\power_down_ca.paa";
    animTextureDefault = "\ori\ui\power_normal_ca.paa";
    period = 0.4;
    font = "Zeppelin32";
    size = 0.05;
    sizeEx = 0.05;
    text = "";
    soundEnter[] = {"", 0.09, 1};
    soundPush[] = {"", 0.09, 1};
    soundClick[] = {"", 0.07, 1};
    soundEscape[] = {"", 0.09, 1};
    action = "";
    toolTip = "";
    class Attributes {
      font = "Zeppelin32";
      color = "#E5E5E5";
      align = "center";
      shadow = 1;
    };
    class AttributesImage {
      font = "Zeppelin32";
      color = "#E5E5E5";
      align = "center";
      shadow = 1;
    };
  };
  class RscListBoxZ {
    type = 5;
    canDrag = 0;
    style = "0 + 0x10";
    font = "Zeppelin32";
    sizeEx = 0.03221;
    rowHeight = 0.03;
    colorBackground[] = {0.8, 0.8, 1, 0.3};
    color[] = {1, 1, 1, 1};
    colorText[] = {1, 1, 1, 0.65};
    colorScrollbar[] = {0.95, 0.95, 0.95, 1};
    colorSelect[] = {0.95, 0.95, 0.95, 1};
    colorSelect2[] = {0.95, 0.95, 0.95, 1};
    colorSelectBackground[] = {0.6, 0.8392, 0.4706, 0.3};
    colorSelectBackground2[] = {0.6, 0.8392, 0.4706, 0.3};
    columns[] = {0.02, 0.78, 0.1};
    period = 0;
    maxHistoryDelay = 1;
    autoScrollSpeed = -1;
    autoScrollDelay = 5;
    autoScrollRewind = 0;
    soundSelect[] = {"\ca\ui\data\sound\new1", 0.09, 1};
    class ScrollBar {
      color[] = {1, 1, 1, 0.6};
      colorActive[] = {1, 1, 1, 1};
      colorDisabled[] = {1, 1, 1, 0.3};
      thumb = "\ca\ui\data\igui_scrollbar_thumb_ca.paa";
      arrowFull = "\ca\ui\data\igui_arrow_top_active_ca.paa";
      arrowEmpty = "\ca\ui\data\igui_arrow_top_ca.paa";
      border = "\ca\ui\data\igui_border_scroll_ca.paa";
    };
  };
  class RscTextZ {
    type = 0;
    style = 2;
    colorText[] = {0, 1, 0.5, 1};
    colorBackground[] = {1, 0, 0, 0.5};
    font = "TahomaB";
    sizeEx = 0.05;
    x = 0;
    y = 0;
    w = 0.1;
    h = 0.2;
  };
  class RscTextZ2 {
    type = 0;
    idc = -1;
    access = 0;
    lineSpacing = 1;
    style = "16+0x200";
    colorBackground[] = {0, 0, 0, 0};
    colorText[] = {1, 1, 1, 0.75};
    font = "Zeppelin32";
    size = 0.029;
    sizeEx = 0.028;
    text = "";
    class ScrollBar {
      color[] = {1, 1, 1, 0.6};
      colorActive[] = {1, 1, 1, 1};
      colorDisabled[] = {1, 1, 1, 0.3};
      thumb = "\ca\ui\data\igui_scrollbar_thumb_ca.paa";
      arrowFull = "\ca\ui\data\igui_arrow_top_active_ca.paa";
      arrowEmpty = "\ca\ui\data\igui_arrow_top_ca.paa";
      border = "\ca\ui\data\igui_border_scroll_ca.paa";
    };
  };
  movingEnable = 0;
  name = "ZadanieOrigins";
  idd = 10055;
  enableSimulation = 1;
  controlsBackground[] = {"bg"};
  objects[] = {};
  class controls {
    class listZadaniy : RscListBoxZ {
      idc = 10056;
      x = "0.165 * safezoneW + safezoneX";
      y = "0.28 * safezoneH + safezoneY";
      w = "0.20 * safezoneW";
      h = "0.181 * safezoneH";
    };
    class TextZadaniy : RscTextZ2 {
      idc = 10057;
      x = "0.364 * safezoneW + safezoneX";
      y = "0.28 * safezoneH + safezoneY";
      w = "0.365 * safezoneW";
      h = "0.419 * safezoneH";
      text = "tut text";
    };
    class ZakrZadan : Ori_B_Zadanie {
      idc = -1;
      x = "0.64 * safezoneW + safezoneX";
      y = "0.16 * safezoneH + safezoneY";
      w = "0.10 * safezoneW";
      h = "0.03 * safezoneH";
      size = 0.045;
      sizeEx = 0.045;
      text = "";
      action = "closeDialog 0;";
    };
    class zagolvok_zadanie : RscTextZ {
      idc = -1;
      x = "0.184 * safezoneW + safezoneX";
      y = "0.24 * safezoneH + safezoneY";
      w = "0.17 * safezoneW";
      h = "0.04 * safezoneH";
      text = "Curent Missions:";
      size = 0.045;
      sizeEx = 0.045;
      colorText[] = {0.75, 0.75, 0.75, 0.8};
      colorBackground[] = {0, 0.128, 0, 0};
    };
    class zagolvok_descr : RscTextZ {
      idc = -1;
      x = "0.45 * safezoneW + safezoneX";
      y = "0.24 * safezoneH + safezoneY";
      w = "0.17 * safezoneW";
      h = "0.04 * safezoneH";
      text = "Description:";
      size = 0.045;
      sizeEx = 0.045;
      colorText[] = {0.75, 0.75, 0.75, 0.8};
      colorBackground[] = {0, 0.128, 0, 0};
    };
  };
  class bg : RscPictureZ {
    idc = -1;
    x = "0.15 * safezoneW + safezoneX";
    y = "0.15 * safezoneH + safezoneY";
    w = "0.6 * safezoneW";
    h = "0.57 * safezoneH";
    text = "\ori\ui\pager_ca.paa";
    colorBackground[] = {0, 0.128, 0, 1};
  };
};
class OriginsExchange5 {
  class RscPictureZ {
    type = 0;
    style = 48;
    colorText[] = {0.75, 0.75, 0.75, 1};
    colorBackground[] = {0, 0, 0, 0};
    font = "Bitstream";
    sizeEx = 0.025;
    soundClick[] = {"", 0.2, 1};
    soundEnter[] = {"", 0.2, 1};
    soundEscape[] = {"", 0.2, 1};
    soundPush[] = {"", 0.2, 1};
    w = 0.275;
    h = 0.04;
    text = "";
  };
  class Ori_B_Zadanie {
    type = 16;
    style = 0;
    default = 0;
    x = 0.1;
    y = 0.1;
    w = 0.183825;
    h = 0.104575;
    color[] = {0.543, 0.5742, 0.4102, 1};
    color2[] = {0.95, 0.95, 0.95, 1};
    colorBackground[] = {1, 1, 1, 1};
    colorbackground2[] = {1, 1, 1, 1};
    colorDisabled[] = {1, 1, 1, 0.25};
    periodFocus = 1.2;
    periodOver = 0.8;
    class HitZone {
      left = 0.004;
      top = 0.009;
      right = 0.004;
      bottom = 0.009;
    };
    class ShortcutPos {
      left = 0.0145;
      top = 0.026;
      w = 0.0392157;
      h = 0.0522876;
    };
    class TextPos {
      left = 0.005;
      top = 0.01;
      right = 0.005;
      bottom = 0.005;
    };
    textureNoShortcut = "";
    animTextureNormal = "\ori\ui\power_normal_ca.paa";
    animTextureDisabled = "\ori\ui\power_normal_ca.paa";
    animTextureOver = "\ori\ui\power_hover_ca.paa";
    animTextureFocused = "\ori\ui\power_hover_ca.paa";
    animTexturePressed = "\ori\ui\power_down_ca.paa";
    animTextureDefault = "\ori\ui\power_normal_ca.paa";
    period = 0.4;
    font = "Zeppelin32";
    size = 0.05;
    sizeEx = 0.05;
    text = "";
    soundEnter[] = {"", 0.09, 1};
    soundPush[] = {"", 0.09, 1};
    soundClick[] = {"", 0.07, 1};
    soundEscape[] = {"", 0.09, 1};
    action = "";
    toolTip = "";
    class Attributes {
      font = "Zeppelin32";
      color = "#E5E5E5";
      align = "center";
      shadow = 1;
    };
    class AttributesImage {
      font = "Zeppelin32";
      color = "#E5E5E5";
      align = "center";
      shadow = 1;
    };
  };
  class Ori_Button {
    type = 16;
    idc = -1;
    style = 0;
    default = 0;
    x = 0.1;
    y = 0.1;
    w = 0.183825;
    h = 0.104575;
    color[] = {0.543, 0.5742, 0.4102, 1};
    color2[] = {0.95, 0.95, 0.95, 1};
    colorBackground[] = {1, 1, 1, 1};
    colorbackground2[] = {1, 1, 1, 1};
    colorDisabled[] = {1, 1, 1, 0.25};
    periodFocus = 1.2;
    periodOver = 0.8;
    class HitZone {
      left = 0.015;
      top = 0.001;
      right = 0.045;
      bottom = 0.001;
    };
    class ShortcutPos {
      left = 0.0145;
      top = 0.026;
      w = 0.0392157;
      h = 0.0522876;
    };
    class TextPos {
      left = 0.005;
      top = 0.01;
      right = 0.005;
      bottom = 0.005;
    };
    textureNoShortcut = "";
    animTextureNormal = "";
    animTextureDisabled = "";
    animTextureOver = "";
    animTextureFocused = "";
    animTexturePressed = "";
    animTextureDefault = "";
    period = 0.4;
    font = "Zeppelin32";
    size = 0.04;
    sizeEx = 0.04;
    text = "";
    soundEnter[] = {"", 0.09, 1};
    soundPush[] = {"", 0.09, 1};
    soundClick[] = {"", 0.07, 1};
    soundEscape[] = {"", 0.09, 1};
    action = "";
    toolTip = "";
    class Attributes {
      font = "Zeppelin32";
      color = "#E5E5E5";
      align = "center";
      shadow = 1;
    };
    class AttributesImage {
      font = "Zeppelin32";
      color = "#E5E5E5";
      align = "left";
      shadow = 1;
    };
  };
  class RscListBoxZ {
    type = 5;
    canDrag = 0;
    style = "0 + 0x10";
    font = "Zeppelin32";
    sizeEx = 0.03221;
    rowHeight = 0.03;
    colorBackground[] = {0.8, 0.8, 1, 0.3};
    color[] = {1, 1, 1, 1};
    colorText[] = {1, 1, 1, 0.65};
    colorScrollbar[] = {0.95, 0.95, 0.95, 1};
    colorSelect[] = {0.95, 0.95, 0.95, 1};
    colorSelect2[] = {0.95, 0.95, 0.95, 1};
    colorSelectBackground[] = {0.6, 0.8392, 0.4706, 0.3};
    colorSelectBackground2[] = {0.6, 0.8392, 0.4706, 0.3};
    columns[] = {0.02, 0.78, 0.1};
    period = 0;
    maxHistoryDelay = 1;
    autoScrollSpeed = -1;
    autoScrollDelay = 5;
    autoScrollRewind = 0;
    soundSelect[] = {"\ca\ui\data\sound\new1", 0.09, 1};
    class ScrollBar {
      color[] = {1, 1, 1, 0.6};
      colorActive[] = {1, 1, 1, 1};
      colorDisabled[] = {1, 1, 1, 0.3};
      thumb = "\ca\ui\data\igui_scrollbar_thumb_ca.paa";
      arrowFull = "\ca\ui\data\igui_arrow_top_active_ca.paa";
      arrowEmpty = "\ca\ui\data\igui_arrow_top_ca.paa";
      border = "\ca\ui\data\igui_border_scroll_ca.paa";
    };
  };
  class RscTextZ {
    type = 0;
    style = 2;
    colorText[] = {0, 1, 0.5, 1};
    colorBackground[] = {1, 0, 0, 0.5};
    font = "TahomaB";
    sizeEx = 0.05;
    x = 0;
    y = 0;
    w = 0.1;
    h = 0.2;
  };
  class RscTextZ2 {
    type = 0;
    idc = -1;
    access = 0;
    lineSpacing = 1;
    style = "16+0x200";
    colorBackground[] = {0, 0, 0, 0};
    colorText[] = {1, 1, 1, 0.75};
    font = "Zeppelin32";
    size = 0.029;
    sizeEx = 0.028;
    text = "";
    class ScrollBar {
      color[] = {1, 1, 1, 0.6};
      colorActive[] = {1, 1, 1, 1};
      colorDisabled[] = {1, 1, 1, 0.3};
      thumb = "\ca\ui\data\igui_scrollbar_thumb_ca.paa";
      arrowFull = "\ca\ui\data\igui_arrow_top_active_ca.paa";
      arrowEmpty = "\ca\ui\data\igui_arrow_top_ca.paa";
      border = "\ca\ui\data\igui_border_scroll_ca.paa";
    };
  };
  movingEnable = 1;
  name = "OriginsExchange5";
  idd = 72055;
  enableSimulation = 1;
  controlsBackground[] = {"bg", "TraderIcon", "value1bg", "value2bg", "value1", "value2"};
  enableDisplay = 1;
  class controls {
    class listItems : RscListBoxZ {
      idc = 72056;
      x = "0.287 * safezoneW + safezoneX";
      y = "0.12 * safezoneH + safezoneY";
      w = "0.155 * safezoneW";
      h = "0.34 * safezoneH";
    };
    class listItems2 : RscListBoxZ {
      idc = 72058;
      x = "0.564 * safezoneW + safezoneX";
      y = "0.125 * safezoneH + safezoneY";
      w = "0.155 * safezoneW";
      h = "0.34 * safezoneH";
    };
    class listItems3 : RscListBoxZ {
      idc = 72057;
      x = "0.286 * safezoneW + safezoneX";
      y = "0.545 * safezoneH + safezoneY";
      w = "0.155 * safezoneW";
      h = "0.34 * safezoneH";
    };
    class listItems4 : RscListBoxZ {
      idc = 72059;
      x = "0.564 * safezoneW + safezoneX";
      y = "0.545 * safezoneH + safezoneY";
      w = "0.155 * safezoneW";
      h = "0.34 * safezoneH";
    };
    class zagolvok1 : RscTextZ {
      idc = -1;
      x = "0.275 * safezoneW + safezoneX";
      y = "0.07 * safezoneH + safezoneY";
      w = "0.17 * safezoneW";
      h = "0.04 * safezoneH";
      text = "Your items:";
      size = 0.045;
      sizeEx = 0.045;
      colorText[] = {0.75, 0.75, 0.75, 0.8};
      colorBackground[] = {0, 0.128, 0, 0};
    };
    class zagolvok2 : RscTextZ {
      idc = -1;
      x = "0.56 * safezoneW + safezoneX";
      y = "0.075 * safezoneH + safezoneY";
      w = "0.17 * safezoneW";
      h = "0.04 * safezoneH";
      text = "Trader's items:";
      size = 0.045;
      sizeEx = 0.045;
      colorText[] = {0.75, 0.75, 0.75, 0.8};
      colorBackground[] = {0, 0.128, 0, 0};
    };
    class zagolvok3 : RscTextZ {
      idc = -1;
      x = "0.28 * safezoneW + safezoneX";
      y = "0.9 * safezoneH + safezoneY";
      w = "0.17 * safezoneW";
      h = "0.04 * safezoneH";
      text = "You change:";
      size = 0.045;
      sizeEx = 0.045;
      colorText[] = {0.75, 0.75, 0.75, 0.8};
      colorBackground[] = {0, 0.128, 0, 0};
    };
    class zagolvok4 : RscTextZ {
      idc = -1;
      x = "0.56 * safezoneW + safezoneX";
      y = "0.9 * safezoneH + safezoneY";
      w = "0.17 * safezoneW";
      h = "0.04 * safezoneH";
      text = "Trader changes:";
      size = 0.045;
      sizeEx = 0.045;
      colorText[] = {0.75, 0.75, 0.75, 0.8};
      colorBackground[] = {0, 0.128, 0, 0};
    };
    class zagolvok5 : RscTextZ {
      idc = 72061;
      x = "0.410 * safezoneW + safezoneX";
      y = "0.01 * safezoneH + safezoneY";
      w = "0.20 * safezoneW";
      h = "0.06 * safezoneH";
      text = "";
      size = 0.06;
      sizeEx = 0.07;
      colorText[] = {0, 0, 0, 0.8};
      colorBackground[] = {0, 0.128, 0, 0};
    };
    class zagolvok7 : RscTextZ {
      idc = -1;
      x = "0.405 * safezoneW + safezoneX";
      y = "0.33 * safezoneH + safezoneY";
      w = "0.20 * safezoneW";
      h = "0.06 * safezoneH";
      text = "";
      size = 0.06;
      sizeEx = 0.04;
      colorText[] = {0.75, 0.75, 0.75, 0.8};
      colorBackground[] = {0, 0.128, 0, 0};
    };
    class zagolvok8 : RscTextZ {
      idc = -1;
      x = "0.405 * safezoneW + safezoneX";
      y = "0.37 * safezoneH + safezoneY";
      w = "0.20 * safezoneW";
      h = "0.06 * safezoneH";
      text = "";
      size = 0.06;
      sizeEx = 0.04;
      colorText[] = {0.75, 0.75, 0.75, 0.8};
      colorBackground[] = {0, 0.128, 0, 0};
    };
    class but_ok : Ori_Button {
      access = 1;
      idc = 72060;
      x = "0.453 * safezoneW + safezoneX";
      y = "0.7 * safezoneH + safezoneY";
      w = "0.10 * safezoneW";
      h = "0.045 * safezoneH";
      size = 0.045;
      sizeEx = 0.045;
      animTextureNormal = "\ori\ui\knopka_normal2.paa";
      animTextureDisabled = "\ori\ui\knopka_normal2.paa";
      animTextureOver = "\ori\ui\knopka_hover2.paa";
      animTextureFocused = "\ori\ui\knopka_hover2.paa";
      animTexturePressed = "\ori\ui\knopka_press2.paa";
      animTextureDefault = "\ori\ui\knopka_normal2.paa";
      text = "CHANGE";
      action = "CODEINPUT = []; closeDialog 0;";
    };
  };
  class TraderIcon : RscPictureZ {
    idc = 72064;
    x = "0.46 * safezoneW + safezoneX";
    y = "0.11 * safezoneH + safezoneY";
    w = "0.09 * safezoneW";
    h = "0.25 * safezoneH";
    text = "";
    colorBackground[] = {0, 0.128, 0, 1};
  };
  class bg : RscPictureZ {
    idc = -1;
    x = "0.255 * safezoneW + safezoneX";
    y = "0.01 * safezoneH + safezoneY";
    w = "0.50 * safezoneW";
    h = "0.96 * safezoneH";
    text = "\ori\ui\apooriginstraders.paa";
    colorBackground[] = {0, 0.128, 0, 1};
  };
  class value1bg : RscPictureZ {
    idc = -1;
    x = "0.284 * safezoneW + safezoneX";
    y = "0.49 * safezoneH + safezoneY";
    w = "0.272 * safezoneW";
    h = "0.025 * safezoneH";
    text = "\ori\ui\ui_messagebox_middle_ca.paa";
    colorBackground[] = {0, 0.128, 0, 1};
  };
  class value2bg : RscPictureZ {
    idc = -1;
    x = "0.561 * safezoneW + safezoneX";
    y = "0.491 * safezoneH + safezoneY";
    w = "0.275 * safezoneW";
    h = "0.025 * safezoneH";
    text = "\ori\ui\ui_messagebox_middle_ca.paa";
    colorBackground[] = {0, 0.128, 0, 1};
  };
  class value1 : RscPictureZ {
    idc = 72062;
    x = "0.286 * safezoneW + safezoneX";
    y = "0.49 * safezoneH + safezoneY";
    w = "0 * safezoneW";
    h = "0.022 * safezoneH";
    text = "#(argb,8,8,3)color(1,1,1,0.4)";
  };
  class value2 : RscPictureZ {
    idc = 72063;
    x = "0.563 * safezoneW + safezoneX";
    y = "0.491 * safezoneH + safezoneY";
    w = "0 * safezoneW";
    h = "0.022 * safezoneH";
    text = "#(argb,8,8,3)color(1,1,1,0.4)";
  };
};
class dOriSkills {
  class RscControlsGroup {
    class VScrollbar {
      color[] = {1, 1, 1, 1};
      width = 0.021;
      autoScrollSpeed = -1;
      autoScrollDelay = 5;
      autoScrollRewind = 0;
      shadow = 0;
    };
    class HScrollbar {
      color[] = {1, 1, 1, 1};
      height = 0;
      shadow = 0;
    };
    class ScrollBar {
      color[] = {1, 1, 1, 0.6};
      colorActive[] = {1, 1, 1, 1};
      colorDisabled[] = {1, 1, 1, 0.3};
      shadow = 0;
      thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
      arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
      arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
      border = "\ca\ui\data\ui_border_scroll_ca.paa";
    };
    class Controls {
    };
    type = 15;
    idc = -1;
    x = 0;
    y = 0;
    w = 1;
    h = 1;
    shadow = 0;
    style = "16+0x200+0x02";
    sizeEx = 0.015;
    size = 0.015;
  };
  class RscPictureK {
    type = 0;
    style = 48;
    colorText[] = {0.75, 0.75, 0.75, 1};
    colorBackground[] = {0, 0, 0, 0};
    font = "TahomaB";
    sizeEx = 0.025;
    lineSpacing = 0;
    fixedWidth = 0;
    soundClick[] = {"", 0.2, 1};
    soundEnter[] = {"", 0.2, 1};
    soundEscape[] = {"", 0.2, 1};
    soundPush[] = {"", 0.2, 1};
    w = 0.275;
    h = 0.04;
    text = "";
  };
  class RscButtonK {
    type = 1;
    style = 2;
    colorText[] = {0, 0, 0, 1};
    font = "TahomaB";
    sizeEx = 0.05;
    soundPush[] = {"", 0.2, 1};
    soundClick[] = {"\ca\ui\data\sound\new1", 0.2, 1};
    soundEscape[] = {"\ca\ui\data\sound\new1", 0.2, 1};
    default = 0;
    text = "";
    action = "";
    colorActive[] = {0, 0, 0, 0};
    colorDisabled[] = {0, 0, 0, 0.1};
    colorBackground[] = {0, 0, 0, 0.3};
    colorBackgroundActive[] = {0, 0, 0, 0.4};
    colorBackgroundDisabled[] = {0, 0, 0, 0.3};
    colorFocused[] = {0.84, 1, 0.55, 1};
    colorShadow[] = {1, 1, 1, 0.1};
    colorBorder[] = {0, 0, 0, 0.1};
    offsetX = 0;
    offsetY = 0;
    offsetPressedX = 0;
    offsetPressedY = 0;
    borderSize = 0;
    soundEnter[] = {"", 0.15, 1};
    period = 0;
    toolTip = "";
  };
  class Ori_Button {
    type = 16;
    style = 0;
    default = 0;
    x = 0.1;
    y = 0.1;
    w = 0.183825;
    h = 0.104575;
    color[] = {0.543, 0.5742, 0.4102, 1};
    color2[] = {0.95, 0.95, 0.95, 1};
    colorBackground[] = {1, 1, 1, 1};
    colorbackground2[] = {1, 1, 1, 1};
    colorDisabled[] = {1, 1, 1, 0.25};
    periodFocus = 1.2;
    periodOver = 0.8;
    class HitZone {
      left = 0.004;
      top = 0.009;
      right = 0.004;
      bottom = 0.009;
    };
    class ShortcutPos {
      left = 0.0145;
      top = 0.026;
      w = 0.0392157;
      h = 0.0522876;
    };
    class TextPos {
      left = 0.005;
      top = 0.005;
      right = 0.005;
      bottom = 0.005;
    };
    textureNoShortcut = "";
    animTextureNormal = "\ori\ui\knopka_normal.paa";
    animTextureDisabled = "\ori\ui\knopka_normal.paa";
    animTextureOver = "\ori\ui\knopka_hover.paa";
    animTextureFocused = "\ori\ui\knopka_hover.paa";
    animTexturePressed = "\ori\ui\knopka_press.paa";
    animTextureDefault = "\ori\ui\knopka_normal.paa";
    period = 0.4;
    font = "Zeppelin32";
    size = 0.05;
    sizeEx = 0.05;
    text = "";
    soundEnter[] = {"", 0.09, 1};
    soundPush[] = {"", 0.09, 1};
    soundClick[] = {"", 0.07, 1};
    soundEscape[] = {"", 0.09, 1};
    action = "";
    toolTip = "";
    class Attributes {
      font = "Zeppelin32";
      color = "#E5E5E5";
      align = "center";
      shadow = 1;
    };
    class AttributesImage {
      font = "Zeppelin32";
      color = "#E5E5E5";
      align = "center";
      shadow = 1;
    };
  };
  class RscListBoxK {
    type = 5;
    canDrag = 0;
    style = "0 + 0x10";
    font = "Zeppelin32";
    sizeEx = 0.04221;
    rowHeight = 0.03;
    colorBackground[] = {0.8, 0.8, 1, 0.7};
    colorText[] = {1, 1, 1, 0.75};
    colorScrollbar[] = {0.95, 0.95, 0.95, 1};
    colorSelect[] = {0.95, 0.95, 0.95, 1};
    colorSelect2[] = {0.95, 0.95, 0.95, 1};
    colorSelectBackground[] = {0.6, 0.8392, 0.4706, 1};
    colorSelectBackground2[] = {0.6, 0.8392, 0.4706, 1};
    columns[] = {0.1, 0.7, 0.1, 0.1};
    period = 0;
    maxHistoryDelay = 1;
    autoScrollSpeed = -1;
    autoScrollDelay = 5;
    autoScrollRewind = 0;
    soundSelect[] = {"\ca\ui\data\sound\new1", 0.09, 1};
    class ScrollBar {
      color[] = {1, 1, 1, 0.6};
      colorActive[] = {1, 1, 1, 1};
      colorDisabled[] = {1, 1, 1, 0.3};
      thumb = "\ca\ui\data\igui_scrollbar_thumb_ca.paa";
      arrowFull = "\ca\ui\data\igui_arrow_top_active_ca.paa";
      arrowEmpty = "\ca\ui\data\igui_arrow_top_ca.paa";
      border = "\ca\ui\data\igui_border_scroll_ca.paa";
    };
  };
  class RscTextK {
    type = 0;
    colorText[] = {0, 1, 0.5, 1};
    font = "Bitstream";
    shadow = 2;
    sizeEx = 0.08;
    x = 0;
    y = 0;
    w = 0.1;
    h = 0.2;
    style = 2;
    text = "";
  };
  idd = 73000;
  name = "dOriSkills";
  class controls {
    class pmed_b1 : RscButtonK {
      idc = 73021;
      x = "0.49178 * safezoneW + safezoneX";
      y = "0.1807 * safezoneH + safezoneY";
      w = "0.035* safezoneW";
      h = "0.03* safezoneH";
      text = "Help";
      sizeEx = 0.035;
      colorText[] = {1, 0.51, 0, 0.85};
    };
    class z_med : RscTextK {
      idc = 73023;
      type = 0;
      style = "16+0x200";
      x = "0.1995 * safezoneW + safezoneX";
      y = "0.5669 * safezoneH + safezoneY";
      w = "0.6 * safezoneW";
      h = "0.1 * safezoneH";
      size = 0.025;
      lineSpacing = 1;
      sizeEx = 0.025;
      colorText[] = {0.75, 0.75, 0.75, 0.7};
      colorBackground[] = {0, 0.128, 0, 0};
    };
    class pmed_1 : RscPictureK {
      idc = 73001;
      x = "0.3679 * safezoneW + safezoneX";
      y = "0.321 * safezoneH + safezoneY";
      w = "0.045* safezoneW";
      h = "0.045* safezoneH";
      style = "0x0C+ 0x30 + 0x800";
      text = "\ori\ui\unknown.paa";
      colorText[] = {1, 1, 1, 0.6};
    };
    class pmed_1done : pmed_1 {
      idc = 73002;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pmed_1pr_bar : RscPictureK {
      idc = 73003;
      x = "0.3882 * safezoneW + safezoneX";
      y = "0.3176 * safezoneH + safezoneY";
      w = "0.0435 * safezoneW";
      h = "0.051 * safezoneH";
      style = "0x0C+ 0x30 + 0x800";
      text = "";
      colorText[] = {0, 0.7, 0, 1};
    };
    class pmed_2 : RscPictureK {
      idc = 73004;
      x = "0.4105 * safezoneW + safezoneX";
      y = "0.321 * safezoneH + safezoneY";
      w = "0.045 * safezoneW";
      h = "0.045 * safezoneH";
      style = "0x0C+ 0x30 + 0x800";
      text = "\ori\ui\unknown.paa";
      colorText[] = {1, 1, 1, 0.6};
    };
    class pmed_2done : pmed_2 {
      idc = 73005;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pmed_2pr_bar : pmed_1pr_bar {
      idc = 73006;
      x = "0.4306 * safezoneW + safezoneX";
      y = "0.3176 * safezoneH + safezoneY";
    };
    class pmed_3 : RscPictureK {
      idc = 73007;
      x = "0.4531 * safezoneW + safezoneX";
      y = "0.321 * safezoneH + safezoneY";
      w = "0.045 * safezoneW";
      h = "0.045 * safezoneH";
      style = "0x0C+ 0x30 + 0x800";
      text = "\ori\ui\unknown.paa";
      colorText[] = {1, 1, 1, 0.6};
    };
    class pmed_3done : pmed_3 {
      idc = 73008;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pmed_3pr_bar : pmed_1pr_bar {
      idc = 73009;
      x = "0.473 * safezoneW + safezoneX";
      y = "0.3176 * safezoneH + safezoneY";
    };
    class pmed_4 : RscPictureK {
      idc = 73010;
      x = "0.3679 * safezoneW + safezoneX";
      y = "0.3709 * safezoneH + safezoneY";
      w = "0.045 * safezoneW";
      h = "0.045 * safezoneH";
      style = "0x0C+ 0x30 + 0x800";
      text = "\ori\ui\unknown.paa";
      colorText[] = {1, 1, 1, 0.6};
    };
    class pmed_4done : pmed_4 {
      idc = 73011;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pmed_4pr_bar : pmed_1pr_bar {
      idc = 73012;
      x = "0.3882 * safezoneW + safezoneX";
      y = "0.3677 * safezoneH + safezoneY";
    };
    class pmed_5 : RscPictureK {
      idc = 73013;
      x = "0.4105 * safezoneW + safezoneX";
      y = "0.3709 * safezoneH + safezoneY";
      w = "0.045 * safezoneW";
      h = "0.045 * safezoneH";
      style = "0x0C+ 0x30 + 0x800";
      text = "\ori\ui\unknown.paa";
      colorText[] = {1, 1, 1, 0.6};
    };
    class pmed_5done : pmed_5 {
      idc = 73014;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pmed_5pr_bar : pmed_1pr_bar {
      idc = 73015;
      x = "0.4306 * safezoneW + safezoneX";
      y = "0.3673 * safezoneH + safezoneY";
    };
    class pmed_6 : RscPictureK {
      idc = 73016;
      x = "0.4531 * safezoneW + safezoneX";
      y = "0.3709 * safezoneH + safezoneY";
      w = "0.045 * safezoneW";
      h = "0.045 * safezoneH";
      style = "0x0C+ 0x30 + 0x800";
      text = "\ori\ui\unknown.paa";
      colorText[] = {1, 1, 1, 0.6};
    };
    class pmed_6done : pmed_6 {
      idc = 73017;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pmed_6pr_bar : pmed_1pr_bar {
      idc = 73018;
      x = "0.473 * safezoneW + safezoneX";
      y = "0.3673 * safezoneH + safezoneY";
    };
    class Med_knopka : RscPictureK {
      idc = 73170;
      x = "0.382367 * safezoneW + safezoneX";
      y = "0.21 * safezoneH + safezoneY";
      w = "0.105 * safezoneW";
      h = "0.105 * safezoneH";
      text = "\ori\ui\icons_medic.paa";
      style = "0x0C+ 0x30 + 0x800";
      colorText[] = {1, 1, 1, 1};
      colorBackground[] = {1, 1, 1, 1};
    };
    class pmed_lvl : Med_knopka {
      idc = 73019;
      text = "";
    };
    class Mech_knopka : Med_knopka {
      idc = 73171;
      x = "0.562299 * safezoneW + safezoneX";
      text = "\ori\ui\icons_mechanic.paa";
    };
    class pmech_lvl : Mech_knopka {
      idc = 73020;
      text = "";
    };
    class mButRes : Ori_Button {
      idc = 73026;
      text = "Research";
      x = "0.3956 * safezoneW + safezoneX";
      y = "0.4582 * safezoneH + safezoneY";
      w = "0.08 * safezoneW";
      h = "0.03 * safezoneH";
      sizeEx = 0.01;
      size = 0.04;
    };
    class bgResearch : RscPictureK {
      idc = 73028;
      x = "0.180926 * safezoneW + safezoneX";
      y = "0.493829 * safezoneH + safezoneY";
      w = "0.7* safezoneW";
      h = "0.17 * safezoneH";
      text = "";
      colorBackground[] = {1, 0.1, 0.1, 1};
      size = 0.04;
      sizeEx = 0.04;
    };
    class Research_b1 : RscPictureK {
      idc = 73029;
      x = "0.192631 * safezoneW + safezoneX";
      y = "0.539391 * safezoneH + safezoneY";
      w = "0.105 * safezoneW";
      h = "0.105 * safezoneH";
      text = "";
      style = "0x0C+ 0x30 + 0x800";
      colorBackground[] = {1, 0.1, 0.1, 1};
    };
    class Research_items1 : RscPictureK {
      idc = 73030;
      x = "0.290218 * safezoneW + safezoneX";
      y = "0.537269 * safezoneH + safezoneY";
      w = "0.13* safezoneW";
      h = "0.11* safezoneH";
      text = "";
      colorBackground[] = {0.7, 0.7, 0.7, 0.7};
      colorText[] = {0.7, 0.7, 0.7, 0.7};
    };
    class Research_b2 : RscPictureK {
      idc = 73031;
      x = "0.413872 * safezoneW + safezoneX";
      y = "0.539391 * safezoneH + safezoneY";
      w = "0.105 * safezoneW";
      h = "0.105 * safezoneH";
      text = "";
      style = "0x0C+ 0x30 + 0x800";
      colorBackground[] = {1, 0.1, 0.1, 1};
    };
    class Research_items2 : RscPictureK {
      idc = 73032;
      x = "0.510758 * safezoneW + safezoneX";
      y = "0.537269 * safezoneH + safezoneY";
      w = "0.13* safezoneW";
      h = "0.11* safezoneH";
      text = "";
      colorBackground[] = {0.7, 0.7, 0.7, 0.7};
      colorText[] = {0.7, 0.7, 0.7, 0.7};
    };
    class Research_b3 : RscPictureK {
      idc = 73033;
      x = "0.634411 * safezoneW + safezoneX";
      y = "0.539391 * safezoneH + safezoneY";
      w = "0.105 * safezoneW";
      h = "0.105 * safezoneH";
      text = "";
      style = "0x0C+ 0x30 + 0x800";
      colorBackground[] = {1, 0.1, 0.1, 1};
    };
    class Research_items3 : RscPictureK {
      idc = 73034;
      x = "0.731298 * safezoneW + safezoneX";
      y = "0.537269 * safezoneH + safezoneY";
      w = "0.13* safezoneW";
      h = "0.11* safezoneH";
      text = "";
      colorBackground[] = {0.7, 0.7, 0.7, 0.7};
      colorText[] = {0.7, 0.7, 0.7, 0.7};
    };
    class bgResearch2 : RscPictureK {
      idc = 73109;
      x = "0.180926 * safezoneW + safezoneX";
      y = "0.651537 * safezoneH + safezoneY";
      w = "0.7* safezoneW";
      h = "0.17 * safezoneH";
      text = "\ori\ui\research_longer2.paa";
      colorBackground[] = {1, 0.1, 0.1, 1};
      size = 0.04;
      sizeEx = 0.04;
    };
    class Research2_b1 : RscPictureK {
      idc = 73110;
      x = "0.192631 * safezoneW + safezoneX";
      y = "0.698383 * safezoneH + safezoneY";
      w = "0.105 * safezoneW";
      h = "0.105 * safezoneH";
      text = "";
      style = "0x0C+ 0x30 + 0x800";
      colorBackground[] = {1, 0.1, 0.1, 1};
    };
    class Research2_items1 : RscPictureK {
      idc = 73111;
      x = "0.290218 * safezoneW + safezoneX";
      y = "0.696201 * safezoneH + safezoneY";
      w = "0.13* safezoneW";
      h = "0.11* safezoneH";
      text = "";
      colorBackground[] = {0.7, 0.7, 0.7, 0.7};
      colorText[] = {0.7, 0.7, 0.7, 0.7};
    };
    class Research2_b2 : RscPictureK {
      idc = 73112;
      x = "0.413872 * safezoneW + safezoneX";
      y = "0.698383 * safezoneH + safezoneY";
      w = "0.105 * safezoneW";
      h = "0.105 * safezoneH";
      text = "";
      style = "0x0C+ 0x30 + 0x800";
      colorBackground[] = {1, 0.1, 0.1, 1};
    };
    class Research2_items2 : RscPictureK {
      idc = 73113;
      x = "0.510758 * safezoneW + safezoneX";
      y = "0.696201 * safezoneH + safezoneY";
      w = "0.13* safezoneW";
      h = "0.11* safezoneH";
      text = "";
      colorBackground[] = {0.7, 0.7, 0.7, 0.7};
      colorText[] = {0.7, 0.7, 0.7, 0.7};
    };
    class Research2_b3 : RscPictureK {
      idc = 73114;
      x = "0.634411 * safezoneW + safezoneX";
      y = "0.698383 * safezoneH + safezoneY";
      w = "0.105 * safezoneW";
      h = "0.105 * safezoneH";
      text = "";
      style = "0x0C+ 0x30 + 0x800";
      colorBackground[] = {1, 0.1, 0.1, 1};
    };
    class Research2_items3 : RscPictureK {
      idc = 73115;
      x = "0.731298 * safezoneW + safezoneX";
      y = "0.696201 * safezoneH + safezoneY";
      w = "0.13* safezoneW";
      h = "0.11* safezoneH";
      text = "";
      colorBackground[] = {0.7, 0.7, 0.7, 0.7};
      colorText[] = {0.7, 0.7, 0.7, 0.7};
    };
    class pr_1 : RscPictureK {
      idc = 73035;
      x = "0.286021 * safezoneW + safezoneX";
      y = "0.543 * safezoneH + safezoneY";
      w = "0.046* safezoneW";
      h = "0.046* safezoneH";
      style = "0x0C+ 0x30 + 0x800";
      text = "\ori\ui\unknown.paa";
      colorText[] = {1, 1, 1, 0.6};
    };
    class pr_1done : pr_1 {
      idc = 73036;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr_1pr_bar : RscPictureK {
      idc = 73037;
      x = "0.300725 * safezoneW + safezoneX";
      y = "0.539 * safezoneH + safezoneY";
      w = "0.056* safezoneW";
      h = "0.056* safezoneH";
      style = "0x0C+ 0x30 + 0x800";
      text = "";
      colorText[] = {0, 0.7, 0, 1};
    };
    class pr_2 : pr_1 {
      idc = 73038;
      x = "0.32943 * safezoneW + safezoneX";
      y = "0.543 * safezoneH + safezoneY";
      w = "0.046* safezoneW";
      h = "0.046* safezoneH";
    };
    class pr_2done : pr_2 {
      idc = 73039;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr_2pr_bar : pr_1pr_bar {
      idc = 73040;
      x = "0.344134 * safezoneW + safezoneX";
      y = "0.539 * safezoneH + safezoneY";
      w = "0.056* safezoneW";
      h = "0.056* safezoneH";
      text = "";
    };
    class pr_3 : pr_1 {
      idc = 73041;
      x = "0.372138 * safezoneW + safezoneX";
      y = "0.543 * safezoneH + safezoneY";
    };
    class pr_3done : pr_3 {
      idc = 73042;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr_3pr_bar : pr_1pr_bar {
      idc = 73043;
      x = "0.386791 * safezoneW + safezoneX";
      y = "0.539 * safezoneH + safezoneY";
      text = "";
    };
    class pr_4 : pr_1 {
      idc = 73044;
      y = "0.597 * safezoneH + safezoneY";
    };
    class pr_4done : pr_4 {
      idc = 73045;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr_4pr_bar : pr_1pr_bar {
      idc = 73046;
      y = "0.5925 * safezoneH + safezoneY";
      text = "";
    };
    class pr_5 : pr_2 {
      idc = 73047;
      y = "0.597 * safezoneH + safezoneY";
    };
    class pr_5done : pr_5 {
      idc = 73048;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr_5pr_bar : pr_2pr_bar {
      idc = 73049;
      y = "0.5925 * safezoneH + safezoneY";
      text = "";
    };
    class pr_6 : pr_3 {
      idc = 73050;
      y = "0.597 * safezoneH + safezoneY";
    };
    class pr_6done : pr_6 {
      idc = 73051;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr_6pr_bar : pr_3pr_bar {
      idc = 73052;
      y = "0.5925 * safezoneH + safezoneY";
      text = "";
    };
    class pr2_1 : pr_1 {
      idc = 73053;
      x = "0.50726 * safezoneW + safezoneX";
    };
    class pr2_1done : pr2_1 {
      idc = 73054;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr2_1pr_bar : pr_1pr_bar {
      idc = 73055;
      x = "0.521964 * safezoneW + safezoneX";
    };
    class pr2_2 : pr_1 {
      idc = 73056;
      x = "0.550669 * safezoneW + safezoneX";
    };
    class pr2_2done : pr2_2 {
      idc = 73057;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr2_2pr_bar : pr_2pr_bar {
      idc = 73058;
      x = "0.565373 * safezoneW + safezoneX";
    };
    class pr2_3 : pr_1 {
      idc = 73059;
      x = "0.593377 * safezoneW + safezoneX";
    };
    class pr2_3done : pr2_3 {
      idc = 73060;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr2_3pr_bar : pr_3pr_bar {
      idc = 73061;
      x = "0.60803 * safezoneW + safezoneX";
    };
    class pr2_4 : pr2_1 {
      idc = 73062;
      y = "0.597 * safezoneH + safezoneY";
    };
    class pr2_4done : pr2_4 {
      idc = 73063;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr2_4pr_bar : pr2_1pr_bar {
      idc = 73064;
      y = "0.5925 * safezoneH + safezoneY";
    };
    class pr2_5 : pr2_2 {
      idc = 73065;
      y = "0.597 * safezoneH + safezoneY";
    };
    class pr2_5done : pr2_5 {
      idc = 73066;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr2_5pr_bar : pr2_2pr_bar {
      idc = 73067;
      y = "0.5925 * safezoneH + safezoneY";
    };
    class pr2_6 : pr2_3 {
      idc = 73068;
      y = "0.597 * safezoneH + safezoneY";
    };
    class pr2_6done : pr2_6 {
      idc = 73069;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr2_6pr_bar : pr2_3pr_bar {
      idc = 73070;
      y = "0.5925 * safezoneH + safezoneY";
    };
    class pr3_1 : pr_1 {
      idc = 73071;
      x = "0.727799 * safezoneW + safezoneX";
    };
    class pr3_1done : pr3_1 {
      idc = 73072;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr3_1pr_bar : pr_3pr_bar {
      idc = 73073;
      x = "0.742503 * safezoneW + safezoneX";
    };
    class pr3_2 : pr_1 {
      idc = 73074;
      x = "0.771208 * safezoneW + safezoneX";
    };
    class pr3_2done : pr3_2 {
      idc = 73075;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr3_2pr_bar : pr_3pr_bar {
      idc = 73076;
      x = "0.785912 * safezoneW + safezoneX";
    };
    class pr3_3 : pr_1 {
      idc = 73077;
      x = "0.813916 * safezoneW + safezoneX";
    };
    class pr3_3done : pr3_3 {
      idc = 73078;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr3_3pr_bar : pr_3pr_bar {
      idc = 73079;
      x = "0.828569 * safezoneW + safezoneX";
    };
    class pr3_4 : pr3_1 {
      idc = 73080;
      y = "0.597 * safezoneH + safezoneY";
    };
    class pr3_4done : pr3_4 {
      idc = 73081;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr3_4pr_bar : pr3_1pr_bar {
      idc = 73082;
      y = "0.5925 * safezoneH + safezoneY";
      text = "";
    };
    class pr3_5 : pr3_2 {
      idc = 73083;
      y = "0.597 * safezoneH + safezoneY";
    };
    class pr3_5done : pr3_5 {
      idc = 73084;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr3_5pr_bar : pr3_2pr_bar {
      idc = 73085;
      y = "0.5925 * safezoneH + safezoneY";
    };
    class pr3_6 : pr3_3 {
      idc = 73086;
      y = "0.597 * safezoneH + safezoneY";
    };
    class pr3_6done : pr3_6 {
      idc = 73087;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pr3_6pr_bar : pr3_3pr_bar {
      idc = 73088;
      y = "0.5925 * safezoneH + safezoneY";
    };
    class pmech_b1 : RscButtonK {
      idc = 73089;
      x = "0.673132 * safezoneW + safezoneX";
      y = "0.1807 * safezoneH + safezoneY";
      w = "0.035* safezoneW";
      h = "0.03* safezoneH";
      text = "Help";
      sizeEx = 0.035;
      colorText[] = {1, 0.51, 0, 0.85};
    };
    class pmech_1 : RscPictureK {
      idc = 73090;
      x = "0.549232 * safezoneW + safezoneX";
      y = "0.321 * safezoneH + safezoneY";
      w = "0.045* safezoneW";
      h = "0.045* safezoneH";
      style = "0x0C+ 0x30 + 0x800";
      text = "\ori\ui\unknown.paa";
      colorText[] = {1, 1, 1, 0.6};
    };
    class pmech_1done : pmech_1 {
      idc = 73091;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pmech_1pr_bar : RscPictureK {
      idc = 73092;
      x = "0.569532 * safezoneW + safezoneX";
      y = "0.3176 * safezoneH + safezoneY";
      w = "0.0435 * safezoneW";
      h = "0.051 * safezoneH";
      style = "0x0C+ 0x30 + 0x800";
      colorText[] = {0, 0.7, 0, 1};
    };
    class pmech_2 : RscPictureK {
      idc = 73093;
      x = "0.591832 * safezoneW + safezoneX";
      y = "0.321 * safezoneH + safezoneY";
      w = "0.045 * safezoneW";
      h = "0.045 * safezoneH";
      style = "0x0C+ 0x30 + 0x800";
      text = "\ori\ui\unknown.paa";
      colorText[] = {1, 1, 1, 0.6};
    };
    class pmech_2done : pmech_2 {
      idc = 73094;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pmech_2pr_bar : pmech_1pr_bar {
      idc = 73095;
      x = "0.611932 * safezoneW + safezoneX";
      y = "0.3176 * safezoneH + safezoneY";
    };
    class pmech_3 : RscPictureK {
      idc = 73096;
      x = "0.634432 * safezoneW + safezoneX";
      y = "0.321 * safezoneH + safezoneY";
      w = "0.045 * safezoneW";
      h = "0.045 * safezoneH";
      style = "0x0C+ 0x30 + 0x800";
      text = "\ori\ui\unknown.paa";
      colorText[] = {1, 1, 1, 0.6};
    };
    class pmech_3done : pmech_3 {
      idc = 73097;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pmech_3pr_bar : pmech_1pr_bar {
      idc = 73098;
      x = "0.654332 * safezoneW + safezoneX";
      y = "0.3176 * safezoneH + safezoneY";
    };
    class pmech_4 : pmech_1 {
      idc = 73099;
      y = "0.3709 * safezoneH + safezoneY";
    };
    class pmech_4done : pmech_4 {
      idc = 73100;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pmech_4pr_bar : pmech_1pr_bar {
      idc = 73101;
      y = "0.3677 * safezoneH + safezoneY";
    };
    class pmech_5 : pmech_2 {
      idc = 73102;
      y = "0.3709 * safezoneH + safezoneY";
    };
    class pmech_5done : pmech_5 {
      idc = 73103;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pmech_5pr_bar : pmech_2pr_bar {
      idc = 73104;
      y = "0.3673 * safezoneH + safezoneY";
    };
    class pmech_6 : pmech_3 {
      idc = 73105;
      y = "0.3709 * safezoneH + safezoneY";
    };
    class pmech_6done : pmech_6 {
      idc = 73106;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class pmech_6pr_bar : pmech_3pr_bar {
      idc = 73107;
      y = "0.3673 * safezoneH + safezoneY";
    };
    class mechButRes : Ori_Button {
      idc = 73108;
      text = "Research";
      x = "0.576932 * safezoneW + safezoneX";
      y = "0.4582 * safezoneH + safezoneY";
      w = "0.08 * safezoneW";
      h = "0.03 * safezoneH";
      sizeEx = 0.01;
      size = 0.04;
    };
    class prD2_1 : RscPictureK {
      idc = 73116;
      x = "0.286021 * safezoneW + safezoneX";
      y = "0.702094 * safezoneH + safezoneY";
      w = "0.046* safezoneW";
      h = "0.046* safezoneH";
      style = "0x0C+ 0x30 + 0x800";
      text = "\ori\ui\unknown.paa";
      colorText[] = {1, 1, 1, 0.6};
    };
    class prD2_1done : prD2_1 {
      idc = 73117;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD2_1pr_bar : RscPictureK {
      idc = 73118;
      x = "0.300725 * safezoneW + safezoneX";
      y = "0.697981 * safezoneH + safezoneY";
      w = "0.056* safezoneW";
      h = "0.056* safezoneH";
      style = "0x0C+ 0x30 + 0x800";
      text = "";
      colorText[] = {0, 0.7, 0, 1};
    };
    class prD2_2 : prD2_1 {
      idc = 73119;
      x = "0.32943 * safezoneW + safezoneX";
      w = "0.046* safezoneW";
      h = "0.046* safezoneH";
    };
    class prD2_2done : prD2_2 {
      idc = 73120;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD2_2pr_bar : prD2_1pr_bar {
      idc = 73121;
      x = "0.344134 * safezoneW + safezoneX";
    };
    class prD2_3 : prD2_1 {
      idc = 73122;
      x = "0.372138 * safezoneW + safezoneX";
    };
    class prD2_3done : prD2_3 {
      idc = 73123;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD2_3pr_bar : prD2_1pr_bar {
      idc = 73124;
      x = "0.386791 * safezoneW + safezoneX";
    };
    class prD2_4 : prD2_1 {
      idc = 73125;
      y = "0.757615 * safezoneH + safezoneY";
    };
    class prD2_4done : prD2_4 {
      idc = 73126;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD2_4pr_bar : prD2_1pr_bar {
      idc = 73127;
      y = "0.752988 * safezoneH + safezoneY";
    };
    class prD2_5 : prD2_2 {
      idc = 73128;
      y = "0.757615 * safezoneH + safezoneY";
    };
    class prD2_5done : prD2_5 {
      idc = 73129;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD2_5pr_bar : prD2_2pr_bar {
      idc = 73130;
      y = "0.752988 * safezoneH + safezoneY";
    };
    class prD2_6 : prD2_3 {
      idc = 73131;
      y = "0.757615 * safezoneH + safezoneY";
    };
    class prD2_6done : prD2_6 {
      idc = 73132;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD2_6pr_bar : prD2_3pr_bar {
      idc = 73133;
      y = "0.752988 * safezoneH + safezoneY";
    };
    class prD22_1 : prD2_1 {
      idc = 73134;
      x = "0.50726 * safezoneW + safezoneX";
    };
    class prD22_1done : prD22_1 {
      idc = 73135;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD22_1pr_bar : prD2_1pr_bar {
      idc = 73136;
      x = "0.521964 * safezoneW + safezoneX";
    };
    class prD22_2 : prD2_1 {
      idc = 73137;
      x = "0.550669 * safezoneW + safezoneX";
    };
    class prD22_2done : prD22_2 {
      idc = 73138;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD22_2pr_bar : prD2_2pr_bar {
      idc = 73139;
      x = "0.565373 * safezoneW + safezoneX";
    };
    class prD22_3 : prD2_1 {
      idc = 73140;
      x = "0.593377 * safezoneW + safezoneX";
    };
    class prD22_3done : prD22_3 {
      idc = 73141;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD22_3pr_bar : prD2_3pr_bar {
      idc = 73142;
      x = "0.60803 * safezoneW + safezoneX";
    };
    class prD22_4 : prD22_1 {
      idc = 73143;
      y = "0.757615 * safezoneH + safezoneY";
    };
    class prD22_4done : prD22_4 {
      idc = 73144;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD22_4pr_bar : prD22_1pr_bar {
      idc = 73145;
      y = "0.752988 * safezoneH + safezoneY";
    };
    class prD22_5 : prD22_2 {
      idc = 73146;
      y = "0.757615 * safezoneH + safezoneY";
    };
    class prD22_5done : prD22_5 {
      idc = 73147;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD22_5pr_bar : prD22_2pr_bar {
      idc = 73148;
      y = "0.752988 * safezoneH + safezoneY";
    };
    class prD22_6 : prD22_3 {
      idc = 73149;
      y = "0.757615 * safezoneH + safezoneY";
    };
    class prD22_6done : prD22_6 {
      idc = 73150;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD22_6pr_bar : prD22_3pr_bar {
      idc = 73151;
      y = "0.752988 * safezoneH + safezoneY";
    };
    class prD23_1 : prD2_1 {
      idc = 73152;
      x = "0.727799 * safezoneW + safezoneX";
    };
    class prD23_1done : prD23_1 {
      idc = 73153;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD23_1pr_bar : prD2_3pr_bar {
      idc = 73154;
      x = "0.742503 * safezoneW + safezoneX";
    };
    class prD23_2 : prD2_1 {
      idc = 73155;
      x = "0.771208 * safezoneW + safezoneX";
    };
    class prD23_2done : prD23_2 {
      idc = 73156;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD23_2pr_bar : prD2_3pr_bar {
      idc = 73157;
      x = "0.785912 * safezoneW + safezoneX";
    };
    class prD23_3 : prD2_1 {
      idc = 73158;
      x = "0.813916 * safezoneW + safezoneX";
    };
    class prD23_3done : prD23_3 {
      idc = 73159;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD23_3pr_bar : prD2_3pr_bar {
      idc = 73160;
      x = "0.828569 * safezoneW + safezoneX";
    };
    class prD23_4 : prD23_1 {
      idc = 73161;
      y = "0.757615 * safezoneH + safezoneY";
    };
    class prD23_4done : prD23_4 {
      idc = 73162;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD23_4pr_bar : prD23_1pr_bar {
      idc = 73163;
      y = "0.752988 * safezoneH + safezoneY";
    };
    class prD23_5 : prD23_2 {
      idc = 73164;
      y = "0.757615 * safezoneH + safezoneY";
    };
    class prD23_5done : prD23_5 {
      idc = 73165;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD23_5pr_bar : prD23_2pr_bar {
      idc = 73166;
      y = "0.752988 * safezoneH + safezoneY";
    };
    class prD23_6 : prD23_3 {
      idc = 73167;
      y = "0.757615 * safezoneH + safezoneY";
    };
    class prD23_6done : prD23_6 {
      idc = 73168;
      text = "";
      colorText[] = {1, 1, 1, 1};
    };
    class prD23_6pr_bar : prD23_3pr_bar {
      idc = 73169;
      y = "0.752988 * safezoneH + safezoneY";
    };
    class bgHelp : RscPictureK {
      idc = 73022;
      x = "0.18* safezoneW + safezoneX";
      y = "0.23* safezoneH + safezoneY";
      w = "0.91 * safezoneW";
      h = "0.63 * safezoneH";
      colorText[] = {0.9, 0.9, 0.9, 1};
      colorBackground[] = {1, 0.1, 0.1, 1};
    };
    class MyControls : RscControlsGroup {
      idc = 73025;
      x = "(safeZoneX + (SafezoneW * 0.178))";
      y = "(safeZoneY + (SafezoneH * 0.24))";
      w = "0.68 * safezoneW";
      h = "0.45 * safezoneH";
      class Controls {
        class z_medHelp : RscTextK {
          idc = 73024;
          type = 13;
          style = "16+0x200+0x02";
          x = 0.05;
          y = 0.05;
          w = "0.63 * safezoneW";
          h = "1.5 * safezoneH";
          text = "";
          size = 0.028;
          lineSpacing = 1;
          sizeEx = 0.028;
          colorText[] = {0.75, 0.75, 0.75, 0.3};
          colorBackground[] = {0, 0.128, 0, 0};
        };
      };
    };
  };
  class controlsBackground {
    class bg : RscPictureK {
      idc = -1;
      x = "0.18* safezoneW + safezoneX";
      y = "0.10* safezoneH + safezoneY";
      w = "0.7 * safezoneW";
      h = "0.85 * safezoneH";
      text = "\ori\ui\skilldialog_raw_grey.paa";
      colorText[] = {0.9, 0.9, 0.9, 1};
      colorBackground[] = {1, 1, 1, 0.8};
    };
  };
};
class RscButtonActionMenu : RscButton {
  SizeEx = 0.02674;
  colorBackground[] = {0.44, 0.7, 0.44, 1};
  colorBackgroundActive[] = {0.24, 0.5, 0.24, 1};
  colorBackgroundDisabled[] = {1, 1, 1, 0};
  colorFocused[] = {0.2, 0.5, 0.2, 1};
  colorShadow[] = {1, 1, 1, 0};
  borderSize = 0;
  w = "0.115 * safezoneW";
  h = "0.025 * safezoneH";
};
class RscDisplayGenderSelect {
  class RscPictureK {
    type = 0;
    idc = -1;
    style = 48;
    colorText[] = {0.75, 0.75, 0.75, 1};
    colorBackground[] = {0, 0, 0, 0};
    font = "Bitstream";
    sizeEx = 0.025;
    soundClick[] = {"", 0.2, 1};
    soundEnter[] = {"", 0.2, 1};
    soundEscape[] = {"", 0.2, 1};
    soundPush[] = {"", 0.2, 1};
    w = 0.275;
    h = 0.04;
    text = "";
  };
  class Ori_Button {
    type = 16;
    idc = -1;
    style = 0;
    default = 0;
    x = 0.1;
    y = 0.1;
    w = 0.183825;
    h = 0.104575;
    color[] = {0.543, 0.5742, 0.4102, 1};
    color2[] = {0.95, 0.95, 0.95, 1};
    colorBackground[] = {1, 1, 1, 1};
    colorbackground2[] = {1, 1, 1, 1};
    colorDisabled[] = {1, 1, 1, 0.25};
    periodFocus = 1.2;
    periodOver = 0.8;
    class HitZone {
      left = 0.015;
      top = 0.001;
      right = 0.045;
      bottom = 0.001;
    };
    class ShortcutPos {
      left = 0.0145;
      top = 0.026;
      w = 0.0392157;
      h = 0.0522876;
    };
    class TextPos {
      left = 0.005;
      top = 0.01;
      right = 0.005;
      bottom = 0.005;
    };
    textureNoShortcut = "";
    animTextureNormal = "";
    animTextureDisabled = "";
    animTextureOver = "";
    animTextureFocused = "";
    animTexturePressed = "";
    animTextureDefault = "";
    period = 0.4;
    font = "Zeppelin32";
    size = 0.05;
    sizeEx = 0.05;
    text = "";
    soundEnter[] = {"", 0.09, 1};
    soundPush[] = {"", 0.09, 1};
    soundClick[] = {"", 0.07, 1};
    soundEscape[] = {"", 0.09, 1};
    action = "";
    toolTip = "";
    class Attributes {
      font = "Zeppelin32";
      color = "#E5E5E5";
      align = "center";
      shadow = 1;
    };
    class AttributesImage {
      font = "Zeppelin32";
      color = "#E5E5E5";
      align = "left";
      shadow = 1;
    };
  };
  class RscTextK {
    type = 0;
    idc = -1;
    style = 2;
    colorText[] = {0, 1, 0.5, 1};
    font = "TahomaB";
    sizeEx = 0.08;
    x = 0;
    y = 0;
    w = 0.1;
    h = 0.2;
  };
  class RscTextK2 {
    type = 0;
    idc = -1;
    access = 0;
    lineSpacing = 1;
    style = 16;
    colorBackground[] = {0, 0, 0, 0};
    colorText[] = {1, 1, 1, 0.75};
    font = "Zeppelin32";
    size = 0.029;
    sizeEx = 0.028;
    text = "";
  };
  idd = 6902;
  enableDisplay = 1;
  controlsBackground[] = {"bg"};
  class controls {
    class but_left : Ori_Button {
      access = 0;
      x = "0.247 * safezoneW + safezoneX";
      y = "0.8 * safezoneH + safezoneY";
      w = "0.09 * safezoneW";
      h = "0.09 * safezoneH";
      size = 0.045;
      sizeEx = 0.045;
      textureNoShortcut = "";
      animTextureNormal = "\ori\ui\left_normal.paa";
      animTextureDisabled = "\ori\ui\left_normal.paa";
      animTextureOver = "\ori\ui\left_normal.paa";
      animTextureFocused = "\ori\ui\left_normal.paa";
      animTexturePressed = "\ori\ui\left_press.paa";
      animTextureDefault = "\ori\ui\left_normal.paa";
      text = "";
      action = "if(counter==0) then { counter=maxcounter; } else { counter=counter-1;}; _text_t = localize (workingar_d select counter); ctrlSetText [5151, ((workingar select counter) select 0)]; ctrlSetText [5152, _text_t]; dayz_selectGender = ((workingar select counter) select 1);";
    };
    class but_right : Ori_Button {
      access = 0;
      x = "0.388 * safezoneW + safezoneX";
      y = "0.8 * safezoneH + safezoneY";
      w = "0.09 * safezoneW";
      h = "0.09 * safezoneH";
      size = 0.045;
      sizeEx = 0.045;
      animTextureNormal = "\ori\ui\right_normal.paa";
      animTextureDisabled = "\ori\ui\right_normal.paa";
      animTextureOver = "\ori\ui\right_normal.paa";
      animTextureFocused = "\ori\ui\right_normal.paa";
      animTexturePressed = "\ori\ui\right_press.paa";
      animTextureDefault = "\ori\ui\right_normal.paa";
      text = "";
      action = "if(counter==maxcounter) then { counter=0; } else { counter=counter+1;}; _text_t = localize (workingar_d select counter); ctrlSetText [5151, ((workingar select counter) select 0)]; ctrlSetText [5152, _text_t]; dayz_selectGender = ((workingar select counter) select 1);";
    };
    class but_sman : Ori_Button {
      access = 0;
      x = "0.478 * safezoneW + safezoneX";
      y = "0.152 * safezoneH + safezoneY";
      w = "0.09 * safezoneW";
      h = "0.09 * safezoneH";
      size = 0.045;
      sizeEx = 0.045;
      animTextureNormal = "\ori\ui\man_normal.paa";
      animTextureDisabled = "\ori\ui\man_normal.paa";
      animTextureOver = "\ori\ui\man_hover.paa";
      animTextureFocused = "\ori\ui\man_normal.paa";
      animTexturePressed = "\ori\ui\man_press.paa";
      animTextureDefault = "\ori\ui\man_normal.paa";
      text = "";
      action = "workingar = orig_mans; workingar_d = mans_desc; maxcounter = (count orig_mans)-1; counter=0; ctrlSetText [5151, ((workingar select counter) select 0)]; _text_t = localize (workingar_d select counter); ctrlSetText [5152, _text_t]; dayz_selectGender = ((workingar select counter) select 1);";
    };
    class but_swoman : Ori_Button {
      access = 0;
      x = "0.571 * safezoneW + safezoneX";
      y = "0.152 * safezoneH + safezoneY";
      w = "0.09 * safezoneW";
      h = "0.09 * safezoneH";
      size = 0.045;
      sizeEx = 0.045;
      animTextureNormal = "\ori\ui\baba_normal.paa";
      animTextureDisabled = "\ori\ui\baba_normal.paa";
      animTextureOver = "\ori\ui\baba_hover.paa";
      animTextureFocused = "\ori\ui\baba_normal.paa";
      animTexturePressed = "\ori\ui\baba_press.paa";
      animTextureDefault = "\ori\ui\baba_normal.paa";
      text = "";
      action = "workingar = orig_womans; workingar_d = womans_desc; maxcounter = (count orig_womans)-1; counter=0; ctrlSetText [5151, ((workingar select counter) select 0)]; _text_t = localize (workingar_d select counter); ctrlSetText [5152, _text_t]; dayz_selectGender = ((workingar select counter) select 1);";
    };
    class but_ok : Ori_Button {
      access = 0;
      x = "0.479 * safezoneW + safezoneX";
      y = "0.687 * safezoneH + safezoneY";
      w = "0.25 * safezoneW";
      h = "0.055 * safezoneH";
      size = 0.055;
      sizeEx = 0.045;
      animTextureNormal = "\ori\ui\knopka_normal2.paa";
      animTextureDisabled = "\ori\ui\knopka_normal2.paa";
      animTextureOver = "\ori\ui\knopka_hover2.paa";
      animTextureFocused = "\ori\ui\knopka_hover2.paa";
      animTexturePressed = "\ori\ui\knopka_press2.paa";
      animTextureDefault = "\ori\ui\knopka_normal2.paa";
      text = "Let's go...";
      action = "closeDialog 0;";
    };
    class text : RscTextK2 {
      idc = 5152;
      x = "0.481 * safezoneW + safezoneX";
      y = "0.241 * safezoneH + safezoneY";
      w = "0.29 * safezoneW";
      h = "0.42 * safezoneH";
      text = "";
    };
    class skinp : RscPictureK {
      idc = 5151;
      x = "0.2515 * safezoneW + safezoneX";
      y = "0.1722 * safezoneH + safezoneY";
      w = "0.1908 * safezoneW";
      h = "0.6135 * safezoneH";
      text = "";
      colorBackground[] = {0, 0.128, 0, 1};
    };
    class skloS : RscPictureK {
      x = "0.2515 * safezoneW + safezoneX";
      y = "0.1722 * safezoneH + safezoneY";
      w = "0.1908 * safezoneW";
      h = "0.6135 * safezoneH";
      text = "\ori\ui\sloj_steklo.paa";
    };
    class zagolvok : RscTextK {
      x = "0.385 * safezoneW + safezoneX";
      y = "0.077 * safezoneH + safezoneY";
      w = "0.27 * safezoneW";
      h = "0.04 * safezoneH";
      size = 0.065;
      sizeEx = "0.065 * (safezoneW + safezoneX)";
      text = "Choose survivor";
      colorText[] = {0, 0, 0, 0.9};
      colorBackground[] = {0, 0.128, 0, 0};
    };
  };
  class bg : RscPictureK {
    x = "0.21 * safezoneW + safezoneX";
    y = "0.07 * safezoneH + safezoneY";
    w = "0.6 * safezoneW";
    h = "0.84 * safezoneH";
    text = "\ori\ui\fon2.paa";
    colorBackground[] = {0, 0.128, 0, 1};
  };
};
class RscDisplaySpawnlocationSelect {
  idd = 6903;
  enableDisplay = 1;
  class controls {
    class RscSelectedRegionBase : RscActiveText {
      idc = 73202;
      style = 48;
      text = "\ori\ui\ui_base_co.paa";
      x = "0.40 * safezoneW + safezoneX";
      y = "0.88 * safezoneH + safezoneY";
      w = "0.190 * safezoneW";
      h = "0.08 * safezoneH";
      color[] = {0.5, 0.5, 0.5, 1};
      colorActive[] = {1, 1, 1, 1};
      action = "closeDialog 0;dayz_selectRegion = 7;";
    };
    class RscSelectedRegion1 : RscActiveText {
      idc = -1;
      style = 48;
      text = "\ori\ui\ui_kameni_co.paa";
      x = "0.19 * safezoneW + safezoneX";
      y = "0.05 * safezoneH + safezoneY";
      w = "0.190 * safezoneW";
      h = "0.390 * safezoneH";
      color[] = {0.5, 0.5, 0.5, 1};
      colorActive[] = {1, 1, 1, 1};
      action = "closeDialog 0;dayz_selectRegion = 0;";
    };
    class RscSelectedRegion2 : RscActiveText {
      idc = -1;
      style = 48;
      text = "\ori\ui\ui_mitrovice_co.paa";
      x = "0.40 * safezoneW + safezoneX";
      y = "0.05 * safezoneH + safezoneY";
      w = "0.190 * safezoneW";
      h = "0.390 * safezoneH";
      color[] = {0.5, 0.5, 0.5, 1};
      colorActive[] = {1, 1, 1, 1};
      action = "closeDialog 0;dayz_selectRegion = 1;";
    };
    class RscSelectedRegionR : RscActiveText {
      idc = -1;
      style = 48;
      text = "\ori\ui\ui_random_co.paa";
      x = "0.61 * safezoneW + safezoneX";
      y = "0.05 * safezoneH + safezoneY";
      w = "0.190 * safezoneW";
      h = "0.390 * safezoneH";
      color[] = {0.5, 0.5, 0.5, 1};
      colorActive[] = {1, 1, 1, 1};
      action = "closeDialog 0;dayz_selectRegion = 2;";
    };
    class RscSelectedRegion4 : RscActiveText {
      idc = -1;
      style = 48;
      text = "\ori\ui\ui_seven_co.paa";
      x = "0.19 * safezoneW + safezoneX";
      y = "0.46 * safezoneH + safezoneY";
      w = "0.190 * safezoneW";
      h = "0.390 * safezoneH";
      color[] = {0.5, 0.5, 0.5, 1};
      colorActive[] = {1, 1, 1, 1};
      action = "closeDialog 0;dayz_selectRegion = 3;";
    };
    class RscSelectedRegion5 : RscActiveText {
      idc = -1;
      style = 48;
      text = "\ori\ui\ui_byelov_co.paa";
      x = "0.40 * safezoneW + safezoneX";
      y = "0.46 * safezoneH + safezoneY";
      w = "0.190 * safezoneW";
      h = "0.390 * safezoneH";
      color[] = {0.5, 0.5, 0.5, 1};
      colorActive[] = {1, 1, 1, 1};
      action = "closeDialog 0;dayz_selectRegion = 4;";
    };
    class RscSelectedRegion6 : RscActiveText {
      idc = -1;
      style = 48;
      text = "\ori\ui\ui_etanovsk_co.paa";
      x = "0.61 * safezoneW + safezoneX";
      y = "0.46 * safezoneH + safezoneY";
      w = "0.190 * safezoneW";
      h = "0.390 * safezoneH";
      color[] = {0.5, 0.5, 0.5, 1};
      colorActive[] = {1, 1, 1, 1};
      action = "closeDialog 0;dayz_selectRegion = 5;";
    };
  };
};
class DZ_ItemInteraction {
  idd = 6901;
  movingEnable = 0;
  class controlsBackground {
  };
  class objects {
  };
  class controls {
  };
};
class RscTitles {
  class Default {
    idd = -1;
    movingEnable = 0;
    duration = 4;
  };
  class playerKillScore {
    idd = 6902;
    movingEnable = 0;
    duration = 5;
    name = "playerKillScore";
    onLoad = "uiNamespace setVariable ['DAYZ_GUI_kills', _this select 0];";
    class ControlsBackground {
      class RscPicture_1201 : RscPictureGUI {
        idc = 1400;
        text = "\z\addons\dayz_code\gui\stats_kills_human_ca.paa";
        x = "0.044687 * safezoneW + safezoneX";
        y = "0.934779 * safezoneH + safezoneY";
        w = 0.06;
        h = 0.08;
      };
      class RscPicture_1200 : RscPictureGUI {
        idc = 1401;
        text = "\z\addons\dayz_code\gui\stats_kills_zombie_ca.paa";
        x = "0.044687 * safezoneW + safezoneX";
        y = "0.876025 * safezoneH + safezoneY";
        w = 0.06;
        h = 0.08;
      };
    };
    class Controls {
      class RscText1 : RscStructuredTextGUI {
        idc = 1410;
        text = "0";
        x = "(0.044687 * safezoneW + safezoneX) - 0.01";
        y = "0.934779 * safezoneH + safezoneY";
        w = 0.08;
        h = 0.08;
      };
      class RscText2 : RscStructuredTextGUI {
        idc = 1411;
        text = "0";
        x = "(0.044687 * safezoneW + safezoneX) - 0.01";
        y = "0.876025 * safezoneH + safezoneY";
        w = 0.08;
        h = 0.08;
      };
    };
  };
  class playerStatusWaiting {
    idd = 6901;
    movingEnable = 0;
    duration = 100000;
    name = "playerStatusWaiting";
    onLoad = "uiNamespace setVariable ['DAYZ_GUI_waiting', _this select 0];";
    class ControlsBackground {
      class RscText_1402 : RscPicture {
        idc = 1402;
        text = "#(argb,8,8,3)color(1,1,1,1)";
        x = "0.48 * safezoneW + safezoneX";
        y = "0.42 * safezoneH + safezoneY";
        w = "0.052 * safezoneW";
        h = "0.133 * safezoneH";
        colorText[] = {1, 1, 1, 1};
      };
      class RscText_1400 : RscPicture {
        idc = 1400;
        text = "#(argb,8,8,3)color(1,1,1,1)";
        x = "0.48 * safezoneW + safezoneX";
        y = "0.42 * safezoneH + safezoneY";
        w = "0.052 * safezoneW";
        h = 0;
        colorText[] = {0, 0, 0, 1};
      };
    };
    class Controls {
      class RscPicture_1401 : RscPictureGUI {
        idc = 1401;
        text = "\z\addons\dayz_code\gui\status_waiting_ca.paa";
        x = "0.434999 * safezoneW + safezoneX";
        y = "0.392207 * safezoneH + safezoneY";
        w = "0.141 * safezoneW";
        h = "0.188013 * safezoneH";
        colorText[] = {0.38, 0.63, 0.26, 1};
      };
    };
  };
  class playerStatusGUI {
    idd = 6900;
    movingEnable = 0;
    duration = 100000;
    name = "statusBorder";
    onLoad = "uiNamespace setVariable ['DAYZ_GUI_display', _this select 0];";
    class ControlsBackground {
      class RscPicture_1200 : RscPictureGUI {
        idc = 1200;
        text = "\z\addons\dayz_code\gui\status_blood_border_ca.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.859 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.4};
      };
      class RscPicture_1201 : RscPictureGUI {
        idc = 1201;
        text = "\z\addons\dayz_code\gui\status_food_border_ca.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.929 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.4};
      };
      class RscPicture_1202 : RscPictureGUI {
        idc = 1202;
        text = "\z\addons\dayz_code\gui\status_thirst_border_ca.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.789 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.4};
      };
      class RscPicture_1203 : RscPictureGUI {
        idc = 1203;
        text = "\z\addons\dayz_code\gui\status_fracture_ca.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.439 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.5};
      };
      class RscPicture_1204 : RscPictureGUI {
        idc = 1204;
        text = "\z\addons\dayz_code\gui\status_connection_ca.paa";
        x = "0.89 * safezoneW + safezoneX";
        y = "0.439 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.3};
      };
      class RscPicture_1205 : RscPictureGUI {
        idc = 1205;
        text = "\ori\ui\gui\ico_quest_yellow.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.369 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.4};
      };
      class RscPicture_1206 : RscPictureGUI {
        idc = 1206;
        text = "\ori\ui\gui\st_humanity_survivor.paa";
        x = "0.9 * safezoneW + safezoneX";
        y = "0.089 * safezoneH + safezoneY";
        w = "0.037 * safezoneW";
        h = "0.047 * safezoneH";
        colorText[] = {1, 1, 1, 0.7};
      };
      class RscPicture_1207 : RscPictureGUI {
        idc = 1207;
        text = "\z\addons\dayz_code\gui\status_combat_border_ca.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.649 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.4};
      };
      class RscPicture_1208 : RscPictureGUI {
        idc = 1208;
        text = "\z\addons\dayz_code\gui\status_temp_outside_ca.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.719 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.4};
      };
      class RscPicture_1209 : RscPictureGUI {
        idc = 1209;
        text = "\ori\ui\gui\st_humanity_hero.paa";
        x = "0.892 * safezoneW + safezoneX";
        y = "0.126 * safezoneH + safezoneY";
        w = "0.037 * safezoneW";
        h = "0.047 * safezoneH";
        colorText[] = {1, 1, 1, 0.75};
      };
      class RscPicture_1210 : RscPictureGUI {
        idc = 1210;
        text = "\ori\ui\gui\st_humanity_bandit.paa";
        x = "0.909 * safezoneW + safezoneX";
        y = "0.157 * safezoneH + safezoneY";
        w = "0.037 * safezoneW";
        h = "0.047 * safezoneH";
        colorText[] = {1, 1, 1, 0.75};
      };
      class RscPicture_1211 : RscPictureGUI {
        idc = 1211;
        text = "\ori\ui\gui\zombie.paa";
        x = "0.945 * safezoneW + safezoneX";
        y = "0.1755 * safezoneH + safezoneY";
        w = "0.037 * safezoneW";
        h = "0.047 * safezoneH";
        colorText[] = {1, 1, 1, 0.75};
      };
      class RscPicture_1501 : RscPictureGUI {
        idc = 1501;
        x = "0.945313 * safezoneW + safezoneX";
        y = "0.95 * safezoneH + safezoneY";
        w = 0.04;
        h = 0.053333;
      };
      class RscPicture_1502 : RscPictureGUI {
        idc = 1502;
        x = "0.945313 * safezoneW + safezoneX";
        y = "0.816666 * safezoneH + safezoneY";
        w = 0.04;
        h = 0.053333;
      };
      class RscPicture_1212 : RscPictureGUI {
        idc = 1212;
        text = "\ori\ui\gui\apo_weight_icon_border_ca.paa";
        x = "0.96 * safezoneW + safezoneX";
        y = "0.581 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.4};
      };
      class RscPicture_1213 : RscPictureGUI {
        idc = 1213;
        text = "\ori\ui\gui\apo_weight_indicator_border_ca.paa";
        x = "0.944235 * safezoneW + safezoneX";
        y = "0.581 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.4};
      };
      class RscPicture_1214 : RscPictureGUI {
        idc = 1214;
        text = "\ori\ui\icon_dream_stroke.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.509 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.4};
      };
      class RscPicture_1712 : RscPictureGUI {
        idc = 1712;
        text = "\ori\ui\ori_apo_bone_timer_border_ca.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.439 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.5};
      };
      class Ori_HBbg1 : Ori_HB_bg {
        idc = 73180;
        x = "safeZoneX+(0.3-0.0395)*SafeZoneW";
        text = "1";
        w = "0.06375*safezoneW";
      };
      class Ori_HBbg2 : Ori_HB_bg {
        idc = 73181;
        x = "safeZoneX+(0.3+0.025)*SafeZoneW";
        text = "2";
        w = "0.06375*safezoneW";
      };
      class Ori_HBbg3 : Ori_HB_bg {
        idc = 73182;
        x = "safeZoneX+(0.3+0.090)*SafeZoneW";
        text = "3";
      };
      class Ori_HBbg4 : Ori_HB_bg {
        idc = 73183;
        x = "safeZoneX+(0.3+0.135)*SafeZoneW";
        text = "4";
      };
      class Ori_HBbg5 : Ori_HB_bg {
        idc = 73184;
        x = "safeZoneX+(0.3+0.180)*SafeZoneW";
        text = "5";
      };
      class Ori_HBbg6 : Ori_HB_bg {
        idc = 73185;
        x = "safeZoneX+(0.3+0.225)*SafeZoneW";
        text = "6";
      };
      class Ori_HBbg7 : Ori_HB_bg {
        idc = 73186;
        x = "safeZoneX+(0.3+0.270)*SafeZoneW";
        text = "7";
      };
      class Ori_HBbg8 : Ori_HB_bg {
        idc = 73187;
        x = "safeZoneX+(0.3+0.315)*SafeZoneW";
        text = "8";
      };
      class Ori_HBbg9 : Ori_HB_bg {
        idc = 73188;
        x = "safeZoneX+(0.3+0.360)*SafeZoneW";
        text = "9";
      };
      class Ori_HBbg0 : Ori_HB_bg {
        idc = 73189;
        x = "safeZoneX+(0.3+0.405)*SafeZoneW";
        text = "0";
      };
    };
    class Controls {
      class ori_srv_logo : RscPictureGUI {
        idc = 73173;
        text = "\ori\ui\Origins_logo_ca.paa";
        x = "0.005 * safezoneW + safezoneX";
        y = "0.89 * safezoneH + safezoneY";
        w = "0.07 * safezoneW";
        h = "0.12 * safezoneH";
        colorText[] = {1, 1, 1, 0.38};
      };
      class ori_msg_w : RscStructuredText {
        idc = 73172;
        type = 13;
        style = "0x00 + 16";
        text = "";
        x = "0.5 * safezoneW + safezoneX";
        y = "0.1 * safezoneH + safezoneY";
        w = "0.3 * safezoneW";
        h = "0.4 * safezoneH";
        colorBackground[] = {0, 0, 0, 0};
        colorText[] = {1, 1, 1, 0};
        size = 0.03;
        sizeEx = 0.03;
        class Attributes {
          font = "TahomaB";
          color = "#FFFFFF";
          align = "left";
          valign = "middle";
          shadow = 0;
          shadowColor = "#ff0000";
          size = "1";
        };
      };
      class RscPicture_1300 : RscPictureGUI {
        idc = 1300;
        text = "\z\addons\dayz_code\gui\status_blood_inside_ca.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.859 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
      };
      class RscPicture_1301 : RscPictureGUI {
        idc = 1301;
        text = "\z\addons\dayz_code\gui\status_food_inside_ca.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.929 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
      };
      class RscPicture_1302 : RscPictureGUI {
        idc = 1302;
        text = "\z\addons\dayz_code\gui\status_thirst_inside_ca.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.789 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
      };
      class RscPicture_1303 : RscPictureGUI {
        idc = 1303;
        text = "\z\addons\dayz_code\gui\status_bleeding_ca.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.859 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.5};
      };
      class RscPicture_1304 : RscPictureGUI {
        idc = 1304;
        text = "";
        x = "0.935313 * safezoneW + safezoneX";
        y = "0.3 * safezoneH + safezoneY";
        w = 0.06;
        h = 0.08;
      };
      class RscPicture_1305 : RscPictureGUI {
        idc = 1305;
        text = "";
        x = "0.935313 * safezoneW + safezoneX";
        y = "0.37 * safezoneH + safezoneY";
        w = 0.06;
        h = 0.08;
      };
      class RscPicture_1306 : RscPictureGUI {
        idc = 1306;
        text = "\z\addons\dayz_code\gui\status_temp_ca.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.719 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
      };
      class RscPicture_1307 : RscPictureGUI {
        idc = 1307;
        text = "\z\addons\dayz_code\gui\status_combat_inside_ca.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.649 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
      };
      class RscPicture_1308 : RscPictureGUI {
        idc = 1308;
        text = "\ori\ui\gui\status_humanity_inside_survivor.paa";
        x = "0.929 * safezoneW + safezoneX";
        y = "0.08 * safezoneH + safezoneY";
        w = "0.068 * safezoneW";
        h = "0.088 * safezoneH";
        colorText[] = {1, 1, 1, 1};
      };
      class RscText_1309 : RscTextGUIK {
        idc = 1309;
        text = "0";
        x = "0.876 * safezoneW + safezoneX";
        y = "0.097 * safezoneH + safezoneY";
        w = "0.037 * safezoneW";
        h = "0.047 * safezoneH";
        colorText[] = {1, 1, 1, 0.75};
      };
      class RscText_1310 : RscTextGUIK {
        idc = 1310;
        text = "0";
        x = "0.874 * safezoneW + safezoneX";
        y = "0.129 * safezoneH + safezoneY";
        w = "0.037 * safezoneW";
        h = "0.047 * safezoneH";
        colorText[] = {1, 1, 1, 0.75};
      };
      class RscText_1311 : RscTextGUIK {
        idc = 1311;
        text = "0";
        x = "0.8905 * safezoneW + safezoneX";
        y = "0.1672 * safezoneH + safezoneY";
        w = "0.037 * safezoneW";
        h = "0.047 * safezoneH";
        colorText[] = {1, 1, 1, 0.75};
      };
      class RscText_1312 : RscTextGUIK {
        idc = 1312;
        text = "0";
        x = "0.945 * safezoneW + safezoneX";
        y = "0.203 * safezoneH + safezoneY";
        w = "0.037 * safezoneW";
        h = "0.047 * safezoneH";
        colorText[] = {1, 1, 1, 0.75};
      };
      class RscPicture_1313 : RscPictureGUI {
        idc = 1313;
        text = "\ori\ui\gui\status_humanity_border.paa";
        x = "0.929 * safezoneW + safezoneX";
        y = "0.09 * safezoneH + safezoneY";
        w = "0.068 * safezoneW";
        h = "0.085 * safezoneH";
        colorText[] = {1, 1, 1, 0.3};
      };
      class RscText_1314 : RscTextGUIK {
        idc = 1314;
        text = "2500";
        x = "0.944 * safezoneW + safezoneX";
        y = "0.14 * safezoneH + safezoneY";
        w = "0.037 * safezoneW";
        h = "0.047 * safezoneH";
        size = 0.0275;
        sizeEx = 0.0275;
        colorText[] = {1, 1, 1, 0.85};
      };
      class RscPicture_1315 : RscPictureGUI {
        idc = 1315;
        text = "\ori\ui\gui\apo_weight_icon_ca.paa";
        x = "0.96 * safezoneW + safezoneX";
        y = "0.581 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.6};
      };
      class RscPicture_1316 : RscPictureGUI {
        idc = 1316;
        text = "\ori\ui\gui\apo_weight_indicator_ca.paa";
        x = "0.944235 * safezoneW + safezoneX";
        y = "0.581 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.6};
      };
      class RscPicture_1317 : RscPictureGUI {
        idc = 1317;
        text = "\ori\ui\icon_dream_1.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.509 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.7};
      };
      class RscPicture_1701 : RscPictureGUI {
        idc = 1701;
        x = "0.945313 * safezoneW + safezoneX";
        y = "0.95 * safezoneH + safezoneY";
        w = 0.04;
        h = 0.053333;
      };
      class RscPicture_1702 : RscPictureGUI {
        idc = 1702;
        x = "0.945313 * safezoneW + safezoneX";
        y = "0.816666 * safezoneH + safezoneY";
        w = 0.04;
        h = 0.053333;
      };
      class RscPicture_1703 : RscPictureGUI {
        idc = 1703;
        text = "\ori\ui\ori_plus.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.929 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
      };
      class RscPicture_1704 : RscPictureGUI {
        idc = 1704;
        text = "\ori\ui\ori_plus.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.789 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
      };
      class RscPicture_1705 : RscPictureGUI {
        idc = 1705;
        text = "\ori\ui\ori_bolezni_1.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.859 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.4};
      };
      class RscPicture_1706 : RscPicture_1705 {
        idc = 1706;
        text = "\ori\ui\ori_bolezni_2.paa";
      };
      class RscPicture_1707 : RscPicture_1705 {
        idc = 1707;
        text = "\ori\ui\ori_bolezni_3.paa";
      };
      class RscPicture_1708 : RscPicture_1705 {
        idc = 1708;
        text = "\ori\ui\ori_bolezni_4.paa";
      };
      class RscPicture_1709 : RscPicture_1705 {
        idc = 1709;
        text = "\ori\ui\ori_bolezni_5.paa";
      };
      class RscPicture_1710 : RscPictureGUI {
        idc = 1710;
        text = "\ori\ui\ori_plus.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.719 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.6};
      };
      class RscPicture_1711 : RscPictureGUI {
        idc = 1711;
        text = "\ori\ui\ori_apo_bone_timer_7_ca.paa";
        x = "0.954235 * safezoneW + safezoneX";
        y = "0.439 * safezoneH + safezoneY";
        w = "0.0435 * safezoneW";
        h = "0.0535 * safezoneH";
        colorText[] = {1, 1, 1, 0.6};
      };
      class RscPicture_1713 : RscPicture_1705 {
        idc = 1713;
        text = "\ori\ui\ori_apo_blood_up_ca.paa";
      };
      class Ori_HBIt1 : Ori_HB_items {
        idc = 73190;
        x = "(safeZoneX+(0.3-0.04)*SafeZoneW)+0.015";
        text = "";
        w = "0.0459*safezoneW";
      };
      class Ori_HBIt2 : Ori_HB_items {
        idc = 73191;
        x = "(safeZoneX+(0.3+0.025)*SafeZoneW)+0.015";
        text = "";
        w = "0.0459*safezoneW";
      };
      class Ori_HBIt3 : Ori_HB_items {
        idc = 73192;
        x = "(safeZoneX+(0.3+0.090)*SafeZoneW)+0.015";
        text = "";
      };
      class Ori_HBIt4 : Ori_HB_items {
        idc = 73193;
        x = "(safeZoneX+(0.3+0.135)*SafeZoneW)+0.015";
        text = "";
      };
      class Ori_HBIt5 : Ori_HB_items {
        idc = 73194;
        x = "(safeZoneX+(0.3+0.180)*SafeZoneW)+0.015";
        text = "";
      };
      class Ori_HBIt6 : Ori_HB_items {
        idc = 73195;
        x = "(safeZoneX+(0.3+0.225)*SafeZoneW)+0.015";
        text = "";
      };
      class Ori_HBIt7 : Ori_HB_items {
        idc = 73196;
        x = "(safeZoneX+(0.3+0.270)*SafeZoneW)+0.015";
        text = "\ori\ui\item_pager_dis_ca.paa";
      };
      class Ori_HBIt8 : Ori_HB_items {
        idc = 73197;
        x = "(safeZoneX+(0.3+0.315)*SafeZoneW)+0.015";
        text = "\ori\ui\langauge_ca.paa";
        colorText[] = {1, 1, 1, 0.8};
      };
      class Ori_HBIt9 : Ori_HB_items {
        idc = 73198;
        x = "(safeZoneX+(0.3+0.360)*SafeZoneW)+0.015";
        text = "\ori\ui\headphones_ca.paa";
        colorText[] = {1, 1, 1, 0.8};
      };
      class Ori_HBIt0 : Ori_HB_items {
        idc = 73199;
        x = "(safeZoneX+(0.3+0.405)*SafeZoneW)+0.015";
        text = "\ori\ui\runner_disabled_ca.paa";
        colorText[] = {1, 1, 1, 0.8};
      };
    };
  };
  class rscDynamicTextOri {
    idd = -1;
    movingEnable = 1;
    duration = 1e+11;
    fadein = 0;
    fadeout = 0;
    name = "Info";
    onload = "uinamespace setvariable ['ori_dynamicText',_this select 0];";
    class controls {
      class Text : RscStructuredText {
        idc = 9999;
        style = "1 + 16";
        text = "";
        x = 0;
        y = 0.45;
        w = 1;
        h = 10000;
        colorText[] = {1, 1, 1, 1};
        colorBackground[] = {0, 0, 0, 0};
        size = "(0.05 / 1.17647) * safezoneH";
        sizeEx = 0.4;
        class Attributes {
          font = "TahomaB";
          color = "#ffffff";
          align = "center";
          shadow = 0;
          valign = "top";
        };
      };
    };
  };
};
class RscDisplayDebriefing {
  onLoad = "ctrlActivate ((_this select 0) displayCtrl 2);";
};
class RscIGUIShortcutButton : RscShortcutButton {
  w = 0.183825;
  h = 0.0522876;
  style = 2;
  color[] = {1, 1, 1, 1};
  color2[] = {1, 1, 1, 0.85};
  colorBackground[] = {1, 1, 1, 1};
  colorbackground2[] = {1, 1, 1, 0.85};
  colorDisabled[] = {1, 1, 1, 0.4};
  class HitZone {
    left = 0.002;
    top = 0.003;
    right = 0.002;
    bottom = 0.016;
  };
  class ShortcutPos {
    left = -0.006;
    top = -0.007;
    w = 0.0392157;
    h = 0.0522876;
  };
  class TextPos {
    left = 0.02;
    top = 0;
    right = 0.002;
    bottom = 0.016;
  };
  font = "TahomaB";
  period = 0;
  periodFocus = 0;
  periodOver = 0;
  animTextureNormal = "\ori\ui\esc_knopka_normal_ca.paa";
  animTextureDisabled = "\ori\ui\esc_knopka_normal_ca.paa";
  animTextureOver = "\ori\ui\esc_knopka_focus_ca.paa";
  animTextureFocused = "\ori\ui\esc_knopka_default_ca.paa";
  animTexturePressed = "\ori\ui\esc_knopka_down_ca.paa";
  animTextureDefault = "\ori\ui\esc_knopka_default_ca.paa";
  class Attributes {
    font = "Zeppelin32";
    color = "#E5E5E5";
    align = "center";
    shadow = 1;
  };
};
class RscGearShortcutButton : RscShortcutButton {
  w = 0.0392157;
  h = 0.0522876;
  style = 2;
  color[] = {1, 1, 1, 1};
  color2[] = {1, 1, 1, 0.85};
  colorBackground[] = {1, 1, 1, 1};
  colorbackground2[] = {1, 1, 1, 0.85};
  colorDisabled[] = {1, 1, 1, 0.4};
  class HitZone {
    left = 0;
    top = 0;
    right = 0;
    bottom = 0;
  };
  class ShortcutPos {
    left = -0.006;
    top = -0.007;
    w = 0.0392157;
    h = 0.0522876;
  };
  class TextPos {
    left = 0.003;
    top = 0.001;
    right = 0;
    bottom = 0;
  };
  sizeEx = 0.1;
  animTextureNormal = "\ori\ui\gear\igui_gear_normal_ca.paa";
  animTextureDisabled = "\ori\ui\gear\igui_gear_disabled_ca.paa";
  animTextureOver = "\ori\ui\gear\igui_gear_over_ca.paa";
  animTextureFocused = "\ori\ui\gear\igui_gear_focus_ca.paa";
  animTexturePressed = "\ori\ui\gear\igui_gear_down_ca.paa";
  animTextureDefault = "\ori\ui\gear\igui_gear_normal_ca.paa";
  class Attributes {
    font = "Zeppelin32";
    color = "#E5E5E5";
    align = "center";
    shadow = 0;
  };
};
class RscDisplayGear {
  idd = 106;
  enableDisplay = 1;
  onUnload = "[_this,'gearSync'] call handleGear;";
  class controls {
    class CA_Filter_Icon : RscPicture {
      idc = 148;
      style = "0x30 + 0x800";
      x = 0.04;
      y = 0.544098;
      w = 0.458;
      h = 0.075;
      text = "\ca\ui\data\igui_gear_filter_1_ca.paa";
    };
    class CA_Filter_Left_Icon : RscPicture {
      idc = 1301;
      style = "0x30 + 0x800";
      x = 0.05;
      y = 0.545098;
      w = 0.036;
      h = 0.075;
      text = "\ca\ui\data\arrow_left_ca.paa";
    };
    class CA_Filter_Right_Icon : RscPicture {
      idc = 1302;
      style = "0x30 + 0x800";
      x = 0.453;
      y = 0.545098;
      w = 0.036;
      h = 0.075;
      text = "\ca\ui\data\arrow_right_ca.paa";
    };
    class CA_Filter_Arrow_Left : RscButton {
      idc = 150;
      colorText[] = {1, 1, 1, 0};
      colorDisabled[] = {1, 1, 1, 0};
      colorBackground[] = {1, 1, 1, 0};
      colorBackgroundDisabled[] = {1, 1, 1, 0};
      colorBackgroundActive[] = {1, 1, 1, 0};
      colorShadow[] = {1, 1, 1, 0};
      colorFocused[] = {1, 1, 1, 0};
      x = 0.041;
      y = 0.545098;
      w = 0.056;
      h = 0.075;
      text = "";
    };
    class CA_Filter_Arrow_Right : RscButton {
      idc = 151;
      colorText[] = {1, 1, 1, 0};
      colorDisabled[] = {1, 1, 1, 0};
      colorBackground[] = {1, 1, 1, 0};
      colorBackgroundDisabled[] = {1, 1, 1, 0};
      colorBackgroundActive[] = {1, 1, 1, 0};
      colorShadow[] = {1, 1, 1, 0};
      colorFocused[] = {1, 1, 1, 0};
      x = 0.443;
      y = 0.545098;
      w = 0.056;
      h = 0.075;
      text = "";
    };
    class CA_Filter_Icon1 : RscButton {
      idc = 149;
      colorText[] = {1, 1, 1, 0};
      colorDisabled[] = {1, 1, 1, 0};
      colorBackground[] = {1, 1, 1, 0};
      colorBackgroundDisabled[] = {1, 1, 1, 0};
      colorBackgroundActive[] = {1, 1, 1, 0};
      colorShadow[] = {1, 1, 1, 0};
      colorFocused[] = {1, 1, 1, 0};
      x = 0.099;
      y = 0.545098;
      w = 0.341;
      h = 0.073;
      text = "";
    };
    class Gear_Title : CA_IGUI_Title {
      idc = 1001;
      x = 0.047634;
      y = -0.00102941;
      text = "Gear";
    };
    class Unit_Title : RscText {
      idc = 101;
      style = 2;
      x = 0.502419;
      y = 0.0492156;
      w = 0.456;
    };
    class Available_items_Text : RscText {
      idc = 156;
      x = 0.0433014;
      y = 0.0526966;
      w = 0.389709;
      h = 0.029412;
    };
    class CA_ItemName : Available_items_Text {
      idc = 1101;
      x = 0.0416704;
      y = 0.627451;
      text = "Gear of the unit:";
    };
    class CA_Money : RscText {
      idc = 1102;
      style = 1;
      show = 0;
      x = -2.50409;
      y = -2.85784;
      w = 0.228;
      text = "Money:";
    };
    class CA_Money_Value : RscText {
      idc = 1103;
      x = -2.72794;
      y = -2.85784;
      w = 0.228;
      text = "0";
    };
    class ListboxArrows : RscControlsGroup {
      x = 0.04;
      y = 0.0892447;
      w = 0.48;
      h = 0.449;
      idc = 155;
      class VScrollbar {
        autoScrollSpeed = -1;
        autoScrollDelay = 5;
        autoScrollRewind = 0;
        color[] = {1, 1, 1, 0};
        width = 0.001;
      };
      class HScrollbar {
        color[] = {1, 1, 1, 0};
        height = 0.001;
      };
      class Controls {
        class CA_B_Add : RscGearShortcutButton {
          idc = 146;
          x = -2;
          style = 2048;
          onSetFocus = "[_this,'onFocus'] call handleGear;";
          onButtonClick = "[_this,'onLBListSelChanged'] call handleGear;";
          text = "&lt;";
        };
        class Available_items : RscIGUIListNBox {
          idc = 105;
          columns[] = {0.075, 0.175, 0.81, 0.67};
          drawSideArrows = 1;
          idcRight = 147;
          idcLeft = 146;
          colorPlayerItem[] = {0.8784, 0.8471, 0.651, 1};
          colorSelectBackground[] = {0.5, 0.5, 0.5, 1};
          colorSelectBackground2[] = {0.5, 0.5, 0.5, 1};
          onKeyDown = "[_this,'onKeyDown',0,107,0,107] call handleGear;";
          onLBSelChanged = "[_this,'onLBSelChanged'] call handleGear;";
          onLBListSelChanged = "[_this,'onLBListSelChanged'] call handleGear;";
          onKillFocus = "[_this,'onKillFocus'] call handleGear;";
          x = 0;
          y = 0;
          w = 0.46;
          h = 0.449;
          canDrag = 1;
        };
        class CA_B_Remove : CA_B_Add {
          idc = 147;
          x = -2;
          onSetFocus = "[_this,'onFocus'] call handleGear;";
          onButtonClick = "[_this,'onLBListSelChanged'] call handleGear;";
          text = "&gt;";
        };
      };
    };
    class CA_CustomDescription : RscStructuredText {
      idc = 1106;
      x = 0.0414969;
      y = 0.663641;
      w = 0.458;
      h = 0.152;
      colorText[] = {0.95, 0.95, 0.95, 1};
      class Attributes {
        font = "Zeppelin32";
        color = "#F2F2F2";
        align = "left";
        shadow = 1;
      };
    };
    class CA_Item_Picture : RscPicture {
      idc = 1104;
      style = "0x30 + 0x800";
      x = 0.330883;
      y = 0.785541;
      w = 0.156863;
      h = 0.104575;
      text = "";
    };
    class G_Interaction : RscControlsGroup {
      idc = 6902;
      x = 0.503;
      y = "0.250 * safezoneH";
      w = "0.143 * safezoneW";
      h = 0;
      onMouseMoving = "[_this,'gearOffMenu'] call handleGear;";
      class VScrollbar {
        autoScrollSpeed = -1;
        autoScrollDelay = 5;
        autoScrollRewind = 0;
        color[] = {1, 1, 1, 0};
        width = 0.001;
      };
      class HScrollbar {
        color[] = {1, 1, 1, 0};
        height = 0.001;
      };
      class Controls {
        class RscButton_1600 : RscButtonActionMenu {
          idc = 1600;
          text = "";
          x = 0;
          y = "0 * safezoneH";
        };
        class RscButton_1601 : RscButtonActionMenu {
          idc = 1601;
          text = "";
          x = 0;
          y = "0.025 * safezoneH";
        };
        class RscButton_1602 : RscButtonActionMenu {
          idc = 1602;
          text = "";
          x = 0;
          y = "0.05 * safezoneH";
        };
        class RscButton_1603 : RscButtonActionMenu {
          idc = 1603;
          text = "";
          x = 0;
          y = "0.075 * safezoneH";
        };
        class RscButton_1604 : RscButtonActionMenu {
          idc = 1604;
          text = "";
          x = 0;
          y = "0.1 * safezoneH";
        };
        class RscButton_1605 : RscButtonActionMenu {
          idc = 1605;
          text = "";
          x = 0;
          y = "0.125 * safezoneH";
        };
        class RscButton_1606 : RscButtonActionMenu {
          idc = 1606;
          text = "";
          x = 0;
          y = "0.15 * safezoneH";
        };
        class RscButton_1607 : RscButtonActionMenu {
          idc = 1607;
          text = "";
          x = 0;
          y = "0.175 * safezoneH";
        };
        class RscButton_1608 : RscButtonActionMenu {
          idc = 1608;
          text = "";
          x = 0;
          y = "0.2 * safezoneH";
        };
        class RscButton_1609 : RscButtonActionMenu {
          idc = 1609;
          text = "";
          x = 0;
          y = "0.225 * safezoneH";
        };
      };
    };
    class G_GearItems : RscControlsGroup {
      idc = 160;
      x = 0.502;
      y = 0.09;
      w = 0.463;
      h = 0.776;
      class VScrollbar {
        autoScrollSpeed = -1;
        autoScrollDelay = 5;
        autoScrollRewind = 0;
        color[] = {1, 1, 1, 0};
        width = 0.001;
      };
      class HScrollbar {
        color[] = {1, 1, 1, 0};
        height = 0.001;
      };
      class Controls {
        class Item_attach1_bg : RscPicture {
          idc = -1;
          x = "0.53 - 0.502";
          y = "0.348 - 0.09";
          w = 0.041;
          h = 0.0553;
          text = "\ori\weapons\attachments\data\ui_gear_knopka_ca.paa";
          colorText[] = {1, 1, 1, 0.6};
        };
        class Item_attach1 : RscActiveText {
          idc = 73200;
          style = "0x30 + 0x800";
          text = "";
          x = "0.522 - 0.502";
          y = "0.350 - 0.09";
          w = 0.057;
          h = 0.053;
          color[] = {1, 1, 1, 0.7};
          colorActive[] = {1, 1, 1, 0.9};
          onMouseButtonDown = "[_this,'selectSlot'] call handleGear;";
        };
        class Item_attach2_bg : RscPicture {
          idc = -1;
          x = "0.605 - 0.502";
          y = "0.348 - 0.09";
          w = 0.041;
          h = 0.0553;
          text = "\ori\weapons\attachments\data\ui_gear_knopka_ca.paa";
          colorText[] = {1, 1, 1, 0.6};
        };
        class Item_attach2 : Item_attach1 {
          idc = 73201;
          style = "0x30 + 0x800";
          x = "0.597 - 0.502";
          y = "0.350 - 0.09";
          text = "";
        };
        class CA_Gear_slot_primary : RscActiveText {
          idc = 107;
          x = "0.502 - 0.502";
          y = "0.244 - 0.09";
          w = 0.172;
          h = 0.121;
          style = "0x30 + 0x800";
          onMouseButtonDown = "[_this,'selectSlot'] call handleGear;";
          soundDoubleClick[] = {"", 0.1, 1};
          color[] = {1, 1, 1, 1};
          colorBackground[] = {0.68, 0.68, 0.68, 0.75};
          colorBackgroundSelected[] = {0.68, 0.68, 0.68, 0.75};
          colorFocused[] = {0, 0, 0, 0};
          canDrag = 1;
        };
        class CA_Gear_slot_secondary : CA_Gear_slot_primary {
          idc = 108;
          x = "0.6763 - 0.502";
          y = "0.398 - 0.09";
          w = 0.1117;
          h = 0.15;
        };
        class CA_Gear_slot_item1 : CA_Gear_slot_primary {
          idc = 109;
          x = "0.790 - 0.502";
          y = "0.244 - 0.09";
          w = 0.055;
          h = 0.074;
        };
        class CA_Gear_slot_item2 : CA_Gear_slot_item1 {
          idc = 110;
          x = "0.847 - 0.502";
          y = "0.244 - 0.09";
        };
        class CA_Gear_slot_item3 : CA_Gear_slot_item1 {
          idc = 111;
          x = "0.904366 - 0.502";
          y = "0.244 - 0.09";
        };
        class CA_Gear_slot_item4 : CA_Gear_slot_item1 {
          idc = 112;
          x = "0.790 - 0.502";
          y = "0.321 - 0.09";
        };
        class CA_Gear_slot_item5 : CA_Gear_slot_item1 {
          idc = 113;
          x = "0.847 - 0.502";
          y = "0.321 - 0.09";
        };
        class CA_Gear_slot_item6 : CA_Gear_slot_item1 {
          idc = 114;
          x = "0.904366 - 0.502";
          y = "0.321 - 0.09";
        };
        class CA_Gear_slot_item7 : CA_Gear_slot_item1 {
          idc = 115;
          x = "0.790 - 0.502";
          y = "0.398 - 0.09";
        };
        class CA_Gear_slot_item8 : CA_Gear_slot_item7 {
          idc = 116;
          x = "0.847 - 0.502";
          y = "0.398 - 0.09";
        };
        class CA_Gear_slot_item9 : CA_Gear_slot_item7 {
          idc = 117;
          x = "0.904366 - 0.502";
          y = "0.398 - 0.09";
        };
        class CA_Gear_slot_item10 : CA_Gear_slot_item7 {
          idc = 118;
          x = "0.790 - 0.502";
          y = "0.474 - 0.09";
        };
        class CA_Gear_slot_item11 : CA_Gear_slot_item7 {
          idc = 119;
          x = "0.847 - 0.502";
          y = "0.474 - 0.09";
        };
        class CA_Gear_slot_item12 : CA_Gear_slot_item7 {
          idc = 120;
          x = "0.904366 - 0.502";
          y = "0.474 - 0.09";
        };
        class CA_Gear_slot_handgun : CA_Gear_slot_primary {
          idc = 121;
          x = "0.560 - 0.502";
          y = "0.551 - 0.09";
          w = 0.113;
          h = 0.15;
        };
        class CA_Gear_slot_handgun_item1 : CA_Gear_slot_item1 {
          idc = 122;
          x = "0.676 - 0.502";
          y = "0.551 - 0.09";
          w = 0.055;
          h = 0.074;
        };
        class CA_Gear_slot_handgun_item2 : CA_Gear_slot_handgun_item1 {
          idc = 123;
          x = "0.733 - 0.502";
          y = "0.551 - 0.09";
        };
        class CA_Gear_slot_handgun_item3 : CA_Gear_slot_handgun_item1 {
          idc = 124;
          x = "0.790 - 0.502";
        };
        class CA_Gear_slot_handgun_item4 : CA_Gear_slot_handgun_item1 {
          idc = 125;
          x = "0.847 - 0.502";
        };
        class CA_Gear_slot_handgun_item5 : CA_Gear_slot_handgun_item1 {
          idc = 126;
          x = "0.676 - 0.502";
          y = "0.628 - 0.09";
        };
        class CA_Gear_slot_handgun_item6 : CA_Gear_slot_handgun_item5 {
          idc = 127;
          x = "0.733 - 0.502";
          y = "0.628 - 0.09";
        };
        class CA_Gear_slot_handgun_item7 : CA_Gear_slot_handgun_item5 {
          idc = 128;
          x = "0.790 - 0.502";
          y = "0.628 - 0.09";
        };
        class CA_Gear_slot_handgun_item8 : CA_Gear_slot_handgun_item5 {
          idc = 129;
          x = "0.847 - 0.502";
          y = "0.628 - 0.09";
        };
        class CA_Gear_slot_special1 : CA_Gear_slot_item1 {
          idc = 130;
          x = "0.502 - 0.502";
          y = "0.09 - 0.09";
          w = 0.113;
          h = 0.15;
        };
        class CA_Gear_slot_special2 : CA_Gear_slot_special1 {
          idc = 131;
          x = "0.847 - 0.502";
          y = "0.09 - 0.09";
          w = 0.113;
          h = 0.15;
        };
        class CA_Gear_slot_inventory1 : CA_Gear_slot_special1 {
          idc = 134;
          x = "0.560 - 0.502";
          y = "0.705 - 0.09";
          w = 0.055;
          h = 0.074;
        };
        class CA_Gear_slot_inventory2 : CA_Gear_slot_inventory1 {
          idc = 135;
          x = "0.6175 - 0.502";
          y = "0.705 - 0.09";
        };
        class CA_Gear_slot_inventory3 : CA_Gear_slot_inventory1 {
          idc = 136;
          x = "0.676 - 0.502";
          y = "0.705 - 0.09";
        };
        class CA_Gear_slot_inventory4 : CA_Gear_slot_inventory1 {
          idc = 137;
          x = "0.733 - 0.502";
          y = "0.705 - 0.09";
        };
        class CA_Gear_slot_inventory5 : CA_Gear_slot_inventory1 {
          idc = 138;
          x = "0.790 - 0.502";
          y = "0.705 - 0.09";
        };
        class CA_Gear_slot_inventory6 : CA_Gear_slot_inventory1 {
          idc = 139;
          x = "0.847 - 0.502";
          y = "0.705 - 0.09";
        };
        class CA_Gear_slot_inventory7 : CA_Gear_slot_inventory1 {
          idc = 140;
          x = "0.560 - 0.502";
          y = "0.782 - 0.09";
        };
        class CA_Gear_slot_inventory8 : CA_Gear_slot_inventory7 {
          idc = 141;
          x = "0.6175 - 0.502";
          y = "0.782 - 0.09";
        };
        class CA_Gear_slot_inventory9 : CA_Gear_slot_inventory7 {
          idc = 142;
          x = "0.676 - 0.502";
          y = "0.782 - 0.09";
        };
        class CA_Gear_slot_inventory10 : CA_Gear_slot_inventory7 {
          idc = 143;
          x = "0.733 - 0.502";
          y = "0.782 - 0.09";
        };
        class CA_Gear_slot_inventory11 : CA_Gear_slot_inventory7 {
          idc = 144;
          x = "0.790 - 0.502";
          y = "0.782 - 0.09";
        };
        class CA_Gear_slot_inventory12 : CA_Gear_slot_inventory7 {
          idc = 145;
          x = "0.847 - 0.502";
          y = "0.782 - 0.09";
        };
        class CA_Gear_slot_inventory13 : CA_Gear_slot_inventory7 {
          idc = 1122;
          x = 10.1;
          y = 10.1;
        };
        class bSmena1 : RscActiveText {
          idc = 510;
          style = "0x30 + 0x800";
          text = "\ori\ui\gear\ui_arrow_normal2_ca.paa";
          x = "0.502 - 0.502";
          y = "0.400 - 0.09";
          w = 0.1735;
          h = 0.045;
          color[] = {1, 1, 1, 0.5};
          colorActive[] = {1, 1, 1, 0.8};
          onMouseButtonDown = "[_this,'selectSlot'] call handleGear;";
        };
        class CA_Gear_slot_shouder : RscActiveText {
          idc = 511;
          style = "0x30 + 0x800";
          x = "0.502 - 0.502";
          y = "0.440 - 0.09";
          w = 0.173;
          h = 0.109;
          color[] = {1, 1, 1, 0.82};
          colorActive[] = {1, 1, 1, 0.82};
        };
        class OriMedB : RscActiveText {
          idc = 512;
          style = "0x30 + 0x800";
          text = "";
          x = "0.502 - 0.502";
          y = "0.552 - 0.09";
          w = 0.055;
          h = 0.15;
          color[] = {1, 1, 1, 0.7};
          colorActive[] = {1, 1, 1, 0.9};
          onMouseButtonDown = "[_this,'selectSlot'] call handleGear;";
        };
        class OriVest : CA_Gear_slot_primary {
          idc = 513;
          style = "0x30 + 0x800";
          text = "";
          x = "0.678 - 0.502";
          y = "0.245 - 0.09";
          w = 0.109;
          h = 0.15;
          color[] = {1, 1, 1, 0.5};
          colorActive[] = {1, 1, 1, 0.8};
          onMouseButtonDown = "[_this,'selectSlot'] call handleGear;";
        };
        class OriMechB : RscActiveText {
          idc = 85023;
          style = "0x30 + 0x800";
          text = "";
          x = "0.502 - 0.502";
          y = "0.705 - 0.09";
          w = 0.055;
          h = 0.15;
          color[] = {1, 1, 1, 0.7};
          colorActive[] = {1, 1, 1, 0.9};
          onMouseButtonDown = "[_this,'selectSlot'] call handleGear;";
        };
        class odezhka_1_bg : RscPicture {
          idc = -1;
          x = "0.619 - 0.502";
          y = "0.0945 - 0.09";
          w = 0.055;
          h = 0.074;
          text = "\ori\ui\gear\ui_gear_odezhka_ca.paa";
          colorText[] = {1, 1, 1, 0.6};
        };
        class odezhka_1 : RscActiveText {
          idc = 73175;
          x = "0.619 - 0.502";
          y = "0.0945 - 0.09";
          w = 0.055;
          h = 0.074;
          style = "0x30 + 0x800";
          onMouseButtonDown = "[_this,'selectSlot'] call handleGear;";
          soundDoubleClick[] = {"", 0.1, 1};
          color[] = {1, 1, 1, 0.2};
          colorActive[] = {1, 1, 1, 0.3};
          colorBackground[] = {1, 1, 1, 0.3};
          colorBackground2[] = {1, 1, 1, 0.3};
          colorBackgroundSelected[] = {1, 1, 1, 1};
          canDrag = 0;
          text = "\ori\ui\gear\ui_gear_odezhka0_ca.paa";
        };
        class odezhka_2_bg : odezhka_1_bg {
          x = "0.0575+0.619 - 0.502";
        };
        class odezhka_2 : odezhka_1 {
          idc = 73176;
          x = "0.0575+0.619 - 0.502";
          text = "\ori\ui\gear\ui_gear_odezhka1_ca.paa";
        };
        class odezhka_3_bg : odezhka_1_bg {
          x = "0.114+0.619 - 0.502";
        };
        class odezhka_3 : odezhka_1 {
          idc = 73177;
          x = "0.114+0.619 - 0.502";
          text = "\ori\ui\gear\ui_gear_odezhka2_ca.paa";
        };
        class odezhka_4_bg : odezhka_1_bg {
          x = "0.171+0.619 - 0.502";
        };
        class odezhka_4 : odezhka_1 {
          idc = 73178;
          x = "0.171+0.619 - 0.502";
          text = "\ori\ui\gear\ui_gear_odezhka3_ca.paa";
        };
        class odezhka_5_bg : odezhka_1_bg {
          x = "0.619 - 0.502";
          y = "0.0755+0.0945 - 0.09";
        };
        class odezhka_5 : odezhka_1 {
          idc = 73179;
          x = "0.619 - 0.502";
          y = "0.075+0.0945 - 0.09";
          text = "\ori\ui\gear\ui_gear_odezhka4_ca.paa";
        };
        class odezhka_6_bg : odezhka_5_bg {
          x = "0.0575+0.619 - 0.502";
        };
        class odezhka_6 : odezhka_5 {
          idc = 73180;
          x = "0.0575+0.619 - 0.502";
          text = "\ori\ui\gear\ui_gear_odezhka5_ca.paa";
        };
        class odezhka_7_bg : odezhka_5_bg {
          x = "0.114+0.619 - 0.502";
        };
        class odezhka_7 : odezhka_5 {
          idc = 73181;
          x = "0.114+0.619 - 0.502";
          text = "\ori\ui\gear\ui_gear_odezhka6_ca.paa";
        };
        class odezhka_8_bg : odezhka_5_bg {
          x = "0.171+0.619 - 0.502";
        };
        class odezhka_8 : odezhka_5 {
          idc = 73182;
          x = "0.171+0.619 - 0.502";
          text = "\ori\ui\gear\ui_gear_odezhka7_ca.paa";
        };
      };
    };
    class G_sMedBItems : RscControlsGroup {
      idc = 514;
      x = 0.977;
      y = 0.473;
      w = 0.056;
      h = 0.576;
      class VScrollbar {
        autoScrollSpeed = -1;
        autoScrollDelay = 5;
        autoScrollRewind = 0;
        color[] = {1, 1, 1, 0};
        width = 0.001;
      };
      class HScrollbar {
        color[] = {1, 1, 1, 0};
        height = 0.001;
      };
      class Controls {
        class OriMedB_slide1 : RscActiveText {
          idc = 515;
          style = "0x30 + 0x800";
          text = "";
          x = "0";
          y = "0";
          w = 0.056;
          h = 0.076;
          color[] = {1, 1, 1, 0.8};
          colorActive[] = {1, 1, 1, 0.9};
          onMouseButtonDown = "[_this,'selectSlot'] call handleGear;";
          canDrag = 1;
        };
        class OriMedB_slide2 : OriMedB_slide1 {
          idc = 516;
          y = "0.076";
        };
        class OriMedB_slide3 : OriMedB_slide1 {
          idc = 517;
          y = "0.152";
        };
        class OriMedB_slide4 : OriMedB_slide1 {
          idc = 518;
          y = "0.228";
        };
        class OriMedB_slide5 : OriMedB_slide1 {
          idc = 519;
          y = "0.304";
        };
        class OriMedB_slide6 : OriMedB_slide1 {
          idc = 520;
          y = "0.381";
        };
      };
    };
    class G_sMechBItems : RscControlsGroup {
      idc = 85025;
      x = 0.977;
      y = 0.473;
      w = 0.056;
      h = 0.576;
      class VScrollbar {
        autoScrollSpeed = -1;
        autoScrollDelay = 5;
        autoScrollRewind = 0;
        color[] = {1, 1, 1, 0};
        width = 0.001;
      };
      class HScrollbar {
        color[] = {1, 1, 1, 0};
        height = 0.001;
      };
      class Controls {
        class OriMechB_slide1 : RscActiveText {
          idc = 85026;
          style = "0x30 + 0x800";
          text = "";
          x = "0";
          y = "0";
          w = 0.056;
          h = 0.076;
          color[] = {1, 1, 1, 0.8};
          colorActive[] = {1, 1, 1, 0.9};
          onMouseButtonDown = "[_this,'selectSlot'] call handleGear;";
          canDrag = 1;
        };
        class OriMechB_slide2 : OriMechB_slide1 {
          idc = 85027;
          y = "0.076";
        };
        class OriMechB_slide3 : OriMechB_slide1 {
          idc = 85028;
          y = "0.152";
        };
        class OriMechB_slide4 : OriMechB_slide1 {
          idc = 85029;
          y = "0.228";
        };
        class OriMechB_slide5 : OriMechB_slide1 {
          idc = 85030;
          y = "0.304";
        };
        class OriMechB_slide6 : OriMechB_slide1 {
          idc = 85031;
          y = "0.381";
        };
      };
    };
    class BagItemsGroup : RscControlsGroup {
      x = 0.502;
      y = 0.09;
      w = 0.463;
      h = 0.776;
      idc = 159;
      magW = 0.055;
      magH = 0.074;
      weaponW = 0.226;
      weaponH = 0.15;
      gunW = 0.113;
      gunH = 0.15;
      spacing = 0.002;
      text = "";
      color[] = {1, 1, 1, 1};
      colorBackground[] = {1, 1, 1, 1};
      colorBackgroundSelected[] = {1, 1, 1, 1};
      colorFocused[] = {1, 1, 1, 1};
      soundPush[] = {"", 0.1, 1};
      soundClick[] = {"", 0.1, 1};
      soundDoubleClick[] = {"", 0.1, 1};
      class VScrollbar {
        autoScrollSpeed = -1;
        autoScrollDelay = 5;
        autoScrollRewind = 0;
        color[] = {1, 1, 1, 0};
        width = 0.001;
      };
      class HScrollbar {
        color[] = {1, 1, 1, 0};
        height = 0.001;
      };
      class ScrollBar {
        color[] = {1, 1, 1, 0.6};
        colorActive[] = {1, 1, 1, 1};
        colorDisabled[] = {1, 1, 1, 0.3};
        thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
        arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
        arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
        border = "\ca\ui\data\ui_border_scroll_ca.paa";
      };
      class Controls {
      };
    };
    class Break_7 : RscLineBreak {
    };
    class ButtonFilters : RscIGUIShortcutButton {
      idc = 148;
      shortcuts[] = {"0x00050000 + 3"};
      x = 0.333336;
      y = 0.8913;
      text = "Filter";
    };
    class ButtonRearm : RscIGUIShortcutButton {
      idc = 132;
      shortcuts[] = {"0x00050000 + 2"};
      x = 0.554743;
      y = 0.8913;
      w = 0;
      h = 0;
      text = "Rearm";
    };
    class ButtonOpenBag : RscIGUIShortcutButton {
      idc = 157;
      shortcuts[] = {"0x00050000 + 2"};
      x = 0.554743;
      y = 0.8913;
      text = "Open bag";
    };
    class ButtonCloseBag : RscIGUIShortcutButton {
      idc = 158;
      shortcuts[] = {"0x00050000 + 2"};
      x = 0.554743;
      y = 0.8913;
      text = "Close bag";
    };
    class ButtonContinue : RscIGUIShortcutButton {
      idc = 1;
      shortcuts[] = {"0x00050000 + 0", 28, 57, 156};
      x = 0.76615;
      y = 0.8913;
      default = 1;
    };
    class ButtonClose : RscIGUIShortcutButton {
      idc = 2;
      shortcuts[] = {"0x00050000 + 1"};
      x = 0.046;
      y = 0.8911;
      text = "Close";
    };
  };
  class Filters {
    class All {
      name = "All";
      mask = -1;
      image = "\ori\ui\gear\igui_gear_filter_1_ca.paa";
    };
    class Primary {
      name = "Primary";
      mask = 769;
      image = "\ori\ui\gear\igui_gear_filter_2_ca.paa";
    };
    class Secondary {
      name = "Secondary";
      mask = 516;
      image = "\ori\ui\gear\igui_gear_filter_3_ca.paa";
    };
    class HandGun {
      name = "HandGun";
      mask = 18;
      image = "\ori\ui\gear\igui_gear_filter_4_ca.paa";
    };
    class Items {
      name = "Items";
      mask = 135168;
      image = "\ori\ui\gear\igui_gear_filter_5_ca.paa";
    };
  };
  movingEnable = 1;
  emptyGun = "\ori\ui\gear\ui_gear_gun_gs_ca.paa";
  emptySec = "\ori\ui\gear\ui_gear_sec_gs_small_ca.paa";
  emptyEq = "\ori\ui\gear\ui_gear_eq_gs_ca.paa";
  emptyMag = "\ori\ui\gear\ui_gear_mag_gs_ca.paa";
  emptyMag2 = "\ori\ui\gear\ui_gear_mag2_gs_ca.paa";
  emptyHGun = "\ori\ui\gear\ui_gear_hgun_gs_ca.paa";
  emptyHGunMag = "\ori\ui\gear\ui_gear_hgunmag_gs_ca.paa";
  onLoad = "[_this,'initDialog'] call handleGear;";
  class ControlsBackground {
    class Mainback : RscPicture {
      idc = 1005;
      x = 0.04;
      y = 0.01;
      w = 1.2549;
      h = 1.6732;
      moving = 1;
      text = "\ori\ui\gear\igui_background_gear_ca.paa";
    };
    class Ori_slot_bkW_bg : RscPicture {
      idc = 85011;
      x = "0.502";
      y = "0.43";
      w = 0.173;
      h = 0.119;
      text = "";
    };
    class Ori_slot_vestH_bg : RscPicture {
      idc = 85012;
      x = "0.676";
      y = "0.093";
      w = 0.112;
      h = 0.1455;
      text = "";
      colorText[] = {0.88, 0.88, 0.88, 0.6};
    };
    class CA_Gear_slot_vest_bg : RscPicture {
      idc = 85013;
      x = "0.677";
      y = "0.2445";
      w = 0.111;
      h = 0.152;
      text = "";
    };
    class CA_Gear_slot_vest2_bg : RscPicture {
      idc = 85014;
      x = "0.781";
      y = "0.246";
      w = 0.003;
      h = 0.15;
      text = "";
    };
    class CA_Gear_slot_medb_bg : RscPicture {
      idc = 85015;
      x = "0.503";
      y = "0.552";
      w = 0.055;
      h = 0.15;
      text = "";
    };
    class CA_Gear_slot_medbs_bg : RscPicture {
      idc = 85016;
      x = "0.965";
      y = "0.397";
      w = 0.072;
      h = 0.537;
      text = "";
    };
    class CA_Gear_slot_medbs1_bg : RscPicture {
      idc = 85017;
      x = "0.977";
      y = "0.4736";
      w = 0.055;
      h = 0.073;
      text = "";
    };
    class CA_Gear_slot_medbs2_bg : CA_Gear_slot_medbs1_bg {
      idc = 85018;
      y = "0.5498";
    };
    class CA_Gear_slot_medbs3_bg : CA_Gear_slot_medbs1_bg {
      idc = 85019;
      y = "0.6258";
    };
    class CA_Gear_slot_medbs4_bg : CA_Gear_slot_medbs1_bg {
      idc = 85020;
      y = "0.7018";
    };
    class CA_Gear_slot_medbs5_bg : CA_Gear_slot_medbs1_bg {
      idc = 85021;
      y = "0.7780";
    };
    class CA_Gear_slot_medbs6_bg : CA_Gear_slot_medbs1_bg {
      idc = 85022;
      y = "0.8548";
    };
    class CA_Gear_slot_mechb_bg : RscPicture {
      idc = 85024;
      x = "0.503";
      y = "0.705";
      w = 0.055;
      h = 0.15;
      text = "";
    };
  };
};
class RscShortcutButtonMainOri : RscShortcutButton {
  idc = -1;
  style = 0;
  default = 0;
  w = 0.313726;
  h = 0.104575;
  color[] = {0.8784, 0.8471, 0.651, 1};
  colorDisabled[] = {1, 1, 1, 0.25};
  class HitZone {
    left = 0;
    top = 0;
    right = 0;
    bottom = 0;
  };
  class ShortcutPos {
    left = 0.0204;
    top = 0.026;
    w = 0.0392157;
    h = 0.0522876;
  };
  class TextPos {
    left = 0.08;
    top = 0.034;
    right = 0.005;
    bottom = 0.005;
  };
  animTextureNormal = "\ori\ui\ui_knopka_menu_normal_ca.paa";
  animTextureDisabled = "\ori\ui\ui_knopka_menu_disabled_ca.paa";
  animTextureOver = "\ori\ui\ui_knopka_menu_over_ca.paa";
  animTextureFocused = "\ori\ui\ui_knopka_menu_focus_ca.paa";
  animTexturePressed = "\ori\ui\ui_knopka_menu_down_ca.paa";
  animTextureDefault = "\ori\ui\ui_knopka_menu_normal_ca.paa";
  period = 0.5;
  font = "Zeppelin32";
  size = 0.03921;
  sizeEx = 0.03921;
  text = "";
  soundEnter[] = {"\ca\ui\data\sound\onover", 0.09, 1};
  soundPush[] = {"\ca\ui\data\sound\new1", 0, 0};
  soundClick[] = {"\ca\ui\data\sound\onclick", 0.07, 1};
  soundEscape[] = {"\ca\ui\data\sound\onescape", 0.09, 1};
  action = "";
  class Attributes {
    font = "Zeppelin32";
    color = "#E5E5E5";
    align = "left";
    shadow = 0;
  };
  class AttributesImage {
    font = "Zeppelin32";
    color = "#E5E5E5";
    align = 0;
  };
};
class RscDisplayMPInterrupt : RscStandardDisplay {
  class controlsBackground {
    class Mainback : RscPicture {
      text = "\ori\ui\ui_menu_fon_ca.paa";
    };
    class ORI_Logo : RscPictureKeepAspect {
      x = 0.058;
      y = 0.403;
      w = 0.3;
      h = 0.3;
      text = "\ori\ui\origins_logo_ca.paa";
    };
  };
  class controls {
    // UNKNOWN ENTRY TYPE 4 at 130208
  };
};
class RscDisplayDSinterface : RscStandardDisplay {
  onLoad = "ctrlActivate ((_this select 0) displayCtrl 2);";
};
class RscDisplayMultiplayerSetup : RscStandardDisplay {
  class controlsBackground {
    // UNKNOWN ENTRY TYPE 4 at 131301
  };
  class controls {
    // UNKNOWN ENTRY TYPE 4 at 132404
  };
};
class CfgVehicles {
  class AllVehicles;
  class Animal;
  class Pastor;
  class Fin;
  class DZAnimal : Animal {
    scope = 0;
    side = 1;
    accuracy = 0.25;
    boneHead = "head";
    bonePrimaryWeapon = "head";
    triggerAnim = "";
    picture = "";
    icon = "\Ca\animals2\data\mapicon_animals_ca.paa";
    mapSize = 10;
    weaponSlots = 0;
    fsmFormation = "";
    fsmDanger = "";
    agentTasks[] = {};
    moves = "CfgMovesAnimal";
    memoryPointHeadAxis = "head_axis";
    woman = 0;
    faceType = "Default";
    boneLEye = "l_eye";
    boneREye = "r_eye";
    boneLEyelidUp = "eye_upl";
    boneREyelidUp = "eye_upr";
    boneLEyelidDown = "eye_lwl";
    boneREyelidDown = "eye_lwr";
    boneLPupil = "l_pupila";
    boneRPupil = "r_pupila";
    memoryPointAim = "aimPoint";
    memoryPointCameraTarget = "camera";
    extCameraPosition[] = {0, 0.5, -2.5};
    class EventHandlers {
    };
    class Wounds {
      tex[] = {};
      mat[] = {};
    };
    class VariablesScalar {
    };
    class VariablesString {
    };
  };
  class DZ_Pastor : Pastor {
    scope = 2;
    model = "\ca\animals2\Dogs\Pastor\Pastor";
    displayName = "Alsatian";
    moves = "CfgMovesDogDZ";
    gestures = "CfgGesturesDogDZ";
    fsmDanger = "";
    fsmFormation = "";
  };
  class DZ_Fin : Fin {
    scope = 2;
    model = "\ca\animals2\Dogs\Fin\Fin";
    displayName = "Fin";
    moves = "CfgMovesDogDZ";
    gestures = "CfgGesturesDogDZ";
    fsmDanger = "";
    fsmFormation = "";
  };
  class HouseBase;
  class House : HouseBase {
    class DestructionEffects;
  };
  class UH1Wreck_Ori : House {
    scope = 1;
    faction = "rth_copter_class";
    model = "\ori\wrecks\uh1wreck_Ori.p3d";
    icon = "\ca\air2\data\UI\icon_UH1Y_CA.paa";
    mapSize = 15;
    displayName = "Crashed UH-1Y";
    vehicleClass = "Wrecks";
  };
  class Strategic;
  class NonStrategic;
  class Land_A_FuelStation_Feed : Strategic {
    model = "\ca\structures\House\A_FuelStation\A_FuelStation_Feed";
    transportFuel = 0;
    nameSound = "fuelstation";
  };
  class Land_Ind_MalyKomin : House {
    scope = 1;
    armor = 100;
    featureSize = 40;
    model = "\Ca\buildings2\Ind_CementWorks\Ind_MalyKomin\Ind_MalyKomin";
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\Buildings2\Ind_CementWorks\Ind_MalyKomin\Ind_MalyKomin_ruins";
        position = "";
        intensity = 1;
        interval = 0.05;
        lifeTime = 1;
      };
    };
    ladders[] = {{"start", "end"}};
    class MarkerLights {
      class RedBlinking {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
  };
  class Land_Rail_Semafor : House {
    scope = 1;
    model = "\CA\Structures\Rail\Rail_Misc\rail_Semafor";
    destrType = "DestructTree";
    class MarkerLights {
      class GreenStill {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
  };
  class Land_Rail_Zavora : House {
    scope = 1;
    model = "\CA\Structures\Rail\Rail_Misc\rail_Zavora";
    destrType = "DestructTree";
    class MarkerLights {
      class WhiteBlinking {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
  };
  class Land_majak : House {
    scope = 1;
    model = "\ca\buildings\majak";
    displayName = "Lighthouse";
    animated = 1;
    ladders[] = {{"start", "end"}};
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\majak_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
    armor = 1000;
    class MarkerLights {
      class RedBlinking {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
    class Reflectors {
      class MainLight {
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        position = "";
        direction = "";
        hitpoint = "";
        selection = "";
        size = 0;
        brightness = 0;
        period[] = {0, 1};
      };
    };
  };
  class Land_majak2 : Land_majak {
    model = "\ca\buildings\majak2";
    class Reflectors {
      class MainLight {
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        position = "";
        direction = "";
        hitpoint = "";
        selection = "";
        size = 0;
        brightness = 0;
        period[] = {0, 1};
      };
    };
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\majak_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_Vysilac_FM : House {
    scope = 1;
    armor = 150;
    destrType = "DestructBuilding";
    ladders[] = {{"start", "end"}};
    model = "\ca\buildings\Vysilac_FM";
    class MarkerLights {
      class RedBlinking {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
    class Destruction {
      animations[] = {{"ca\buildings\rtm\vysilac_fm.rtm", 0.5, 3}};
    };
    displayName = "Radio 1";
  };
  class Land_telek1 : House {
    scope = 1;
    armor = 600;
    destrType = "DestructBuilding";
    model = "\ca\buildings\telek1";
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\telek1_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
    class MarkerLights {
      class RedBlinking {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
    displayName = "Telek 1";
    ladders[] = {{"start1", "end1"}, {"start2", "end2"}, {"start3", "end3"}};
  };
  class Land_komin : House {
    ladders[] = {{"start", "end"}};
    model = "\ca\buildings\komin";
    armor = 300;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\komin_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
    class MarkerLights {
      class RedBlinking {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
  };
  class Land_Stoplight01 : House {
    scope = 1;
    model = "\ca\buildings\Misc\stoplight01";
    armor = 50;
    class MarkerLights {
      class YellowTopBlinking {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
      class YellowLowBlinking {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
  };
  class Land_Stoplight02 : Land_Stoplight01 {
    model = "\ca\buildings\Misc\stoplight02";
    class MarkerLights {
      class YellowTopBlinking {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
  };
  class Land_NavigLight : House {
    scope = 1;
    displayName = "";
    model = "\ca\buildings\Misc\NavigLight";
    armor = 50;
    class MarkerLights {
      class WhiteStill {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
  };
  class Land_runway_edgelight : House {
    scope = 1;
    displayName = "";
    model = "\ca\buildings\Misc\runway_edgelight";
    armor = 20;
    class MarkerLights {
      class RedStill {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
  };
  class Land_VASICore : NonStrategic {
    scope = 1;
    animated = 0;
    reversed = 0;
    vehicleClass = "Objects";
    icon = "";
    model = "";
    displayName = "VASI";
    accuracy = 0.2;
    typicalCargo[] = {};
    destrType = "DestructBuilding";
    irTarget = 0;
    transportAmmo = 0;
    transportRepair = 0;
    transportFuel = 0;
    cost = 0;
    armor = 100;
    mapSize = 6.4;
    simulation = "house";
  };
  class Land_HouseB_Tenement : House {
    armor = 180;
    model = "\Ca\Structures\House\HouseBT\HouseB_Tenement";
    scope = 1;
    featureSize = 50;
    class HitPoints {
      class Hit1 {
        armor = 0.15;
        material = -1;
        name = "dam 1";
        visual = "damT1";
        passThrough = 0;
        convexComponent = "dam 1";
        class DestructionEffects {
          class Dust {
            simulation = "particles";
            type = "HousePartDust";
            position = "";
            intensity = 1;
            interval = 1;
            lifeTime = 0.01;
          };
          class Dust2 : Dust {
            type = "HousePartDustLong";
          };
          class Walls : Dust {
            type = "HousePartWall";
          };
        };
      };
    };
    class MarkerLights {
      class RedBlinking {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
    class AnimationSources {
      class Lights_1 {
        source = "user";
        animPeriod = 0.001;
        initPhase = 0;
      };
      class Lights_2 : Lights_1 {
      };
    };
  };
  class Land_Mil_ControlTower : House {
    scope = 1;
    armor = 400;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\Ca\Structures\Mil\Mil_ControlTower_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
    class HitPoints {
      class Hit1 {
        armor = 0.25;
        material = -1;
        name = "dam 1";
        visual = "damT1";
        passThrough = 1;
        convexComponent = "dam 1";
        class DestructionEffects {
          class Dust {
            simulation = "particles";
            type = "HousePartDust";
            position = "";
            intensity = 1;
            interval = 1;
            lifeTime = 0.01;
          };
          class Dust2 : Dust {
            type = "HousePartDustLong";
          };
          class Walls : Dust {
            type = "HousePartWall";
          };
        };
      };
      class Hit2 {
        armor = 0.25;
        material = -1;
        name = "dam 2";
        visual = "damT2";
        passThrough = 1;
        convexComponent = "dam 2";
        class DestructionEffects {
          class Dust {
            simulation = "particles";
            type = "HousePartDust";
            position = "";
            intensity = 1;
            interval = 1;
            lifeTime = 0.01;
          };
          class Dust2 : Dust {
            type = "HousePartDustLong";
          };
          class Walls : Dust {
            type = "HousePartWall";
          };
        };
      };
      class Hit3 {
        armor = 0.25;
        material = -1;
        name = "dam 3";
        visual = "damT3";
        passThrough = 1;
        convexComponent = "dam 3";
        class DestructionEffects {
          class Dust {
            simulation = "particles";
            type = "HousePartDust";
            position = "";
            intensity = 1;
            interval = 1;
            lifeTime = 0.01;
          };
          class Dust2 : Dust {
            type = "HousePartDustLong";
          };
          class Walls : Dust {
            type = "HousePartWall";
          };
        };
      };
      class Hit4 {
        armor = 0.25;
        material = -1;
        name = "dam 4";
        visual = "damT4";
        passThrough = 1;
        convexComponent = "dam 4";
        class DestructionEffects {
          class Dust {
            simulation = "particles";
            type = "HousePartDust";
            position = "";
            intensity = 1;
            interval = 1;
            lifeTime = 0.01;
          };
          class Dust2 : Dust {
            type = "HousePartDustLong";
          };
          class Walls : Dust {
            type = "HousePartWall";
          };
        };
      };
      class Hit5 {
        armor = 0.25;
        material = -1;
        name = "dam 5";
        visual = "damT5";
        passThrough = 1;
        convexComponent = "dam 5";
        class DestructionEffects {
          class Dust {
            simulation = "particles";
            type = "HousePartDust";
            position = "";
            intensity = 1;
            interval = 1;
            lifeTime = 0.01;
          };
          class Dust2 : Dust {
            type = "HousePartDustLong";
          };
          class Walls : Dust {
            type = "HousePartWall";
          };
        };
      };
      class Hit6 {
        armor = 0.25;
        material = -1;
        name = "dam 6";
        visual = "damT6";
        passThrough = 1;
        convexComponent = "dam 6";
        class DestructionEffects {
          class Dust {
            simulation = "particles";
            type = "HousePartDust";
            position = "";
            intensity = 1;
            interval = 1;
            lifeTime = 0.01;
          };
          class Dust2 : Dust {
            type = "HousePartDustLong";
          };
          class Walls : Dust {
            type = "HousePartWall";
          };
        };
      };
      class Hitglass {
        armor = 0.0005;
        material = -1;
        name = "dam glass";
        visual = "damTglass";
        passThrough = 0;
        convexComponent = "dam glass";
      };
      class Hittower {
        armor = 0.0005;
        material = -1;
        name = "dam tower";
        visual = "damTtower";
        passThrough = 0;
        convexComponent = "dam tower";
      };
    };
    replaceDamagedHitpoints[] = {"Hit1", "Hit2", "Hit3", "Hit4", "Hit5", "Hit6"};
    class Damage {
      tex[] = {};
      mat[] = {"CA\Structures\Mil\Data\Mil_ControlTower_windows1.rvmat", "CA\Structures\Mil\Data\destruct_half_Mil_ControlTower_windows1.rvmat", "CA\Structures\Mil\Data\destruct_full_Mil_ControlTower_windows1.rvmat"};
    };
    model = "\CA\Structures\Mil\Mil_ControlTower";
    ladders[] = {{"start1", "end1"}, {"start2", "end2"}};
    class AnimationSources {
      class dvere_spodni_R {
        animPeriod = 1;
        initPhase = 0;
        source = "user";
      };
      class dvere_spodni_L {
        animPeriod = 1;
        initPhase = 1;
        source = "user";
      };
      class dvere_vrchni {
        animPeriod = 1;
        initPhase = 1;
        source = "user";
      };
      class HitTower {
        source = "Hit";
        hitpoint = "HitTower";
        raw = 1;
      };
    };
    class UserActions {
      class OpenDoors1 {
        displayNameDefault = "<img image='\ca\ui\data\ui_action_open_ca.paa' size='4' />";
        displayName = "Open door";
        position = "Dvere_spodni_R_osa";
        radius = 3;
        onlyForPlayer = 0;
        condition = "this animationPhase ""Dvere_spodni_R"" < 0.5";
        statement = "this animate [""Dvere_spodni_R"", 1];this animate [""Dvere_spodni_L"", 1]";
      };
      class CloseDoors1 : OpenDoors1 {
        displayNameDefault = "<img image='\ca\ui\data\ui_action_close_ca.paa' size='4' />";
        displayName = "Close door";
        condition = "this animationPhase ""Dvere_spodni_R"" >= 0.5";
        statement = "this animate [""Dvere_spodni_R"", 0];this animate [""Dvere_spodni_L"", 0]";
      };
      class OpenDoors3 {
        displayNameDefault = "<img image='\ca\ui\data\ui_action_open_ca.paa' size='4' />";
        displayName = "Open door";
        position = "Dvere_Vrchni_osa";
        radius = 2;
        onlyForPlayer = 0;
        condition = "this animationPhase ""dvere_vrchni"" < 0.5";
        statement = "this animate [""dvere_vrchni"", 1]";
      };
      class CloseDoors3 : OpenDoors3 {
        displayNameDefault = "<img image='\ca\ui\data\ui_action_close_ca.paa' size='4' />";
        displayName = "Close door";
        condition = "this animationPhase ""dvere_vrchni"" >= 0.5";
        statement = "this animate [""dvere_vrchni"", 0]";
      };
    };
    actionBegin1 = "OpenDoors1";
    actionEnd1 = "OpenDoors1";
    actionBegin2 = "OpenDoors3";
    actionEnd2 = "OpenDoors3";
    class MarkerLights {
      class RedBlinking {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
    replaceDamaged = "Land_Mil_ControlTower_dam";
  };
  class Land_NAV_Lighthouse : House {
    scope = 1;
    armor = 500;
    featureSize = 15;
    model = "\Ca\Structures\NAV\NAV_Lighthouse";
    ladders[] = {{"start1", "end1"}};
    class MarkerLights {
      class RedBlinking {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
    class Reflectors {
      class MainLight {
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        position = "";
        direction = "";
        hitpoint = "";
        selection = "";
        size = 0;
        brightness = 0;
        period[] = {0, 1};
      };
    };
    class Damage {
      tex[] = {};
      mat[] = {"ca\structures\nav\data\nav_lighthouse_multi.rvmat", "ca\structures\nav\data\destruct_half_nav_lighthouse_multi.rvmat", "ca\structures\nav\data\destruct_full_nav_lighthouse_multi.rvmat", "ca\structures\nav\data\nav_lighthouse_windows.rvmat", "ca\structures\nav\data\destruct_half_lighthouse_windows.rvmat", "ca\structures\nav\data\destruct_full_lighthouse_windows.rvmat"};
    };
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\Ca\Structures\Nav\NAV_Lighthouse_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_NAV_Lighthouse2 : Land_NAV_Lighthouse {
    model = "\Ca\Structures\NAV\NAV_Lighthouse2";
    class Reflectors : Reflectors {
      class MainLight : MainLight {
        period[] = {0, 1};
      };
    };
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\Ca\Structures\Nav\NAV_Lighthouse_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_A_Crane_02b : House {
    scope = 1;
    armor = 110;
    featureSize = 30;
    model = "\ca\buildings2\A_Crane_02\A_Crane_02b";
    destrType = "DestructBuilding";
    ladders[] = {{"start3", "end3"}, {"start4", "end4"}, {"start5", "end5"}, {"start6", "end6"}};
    class MarkerLights {
      class RedBlinking {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
    class Destruction {
      animations[] = {{"ca\buildings2\A_Crane_02\data\anim\crane.rtm", 0.5, 3}};
    };
  };
  class Land_Farm_WTower : House {
    scope = 1;
    armor = 100;
    model = "\CA\buildings2\Farm_WTower\Farm_WTower";
    class MarkerLights {
      class RedBlinking {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\Ca\buildings2\Farm_WTower\Farm_WTower_ruins";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_A_TVTower_Mid : House {
    scope = 1;
    destrType = "DestructNo";
    model = "\ca\Structures\A_TVTower\A_TVTower_Mid";
    featureSize = 150;
    class MarkerLights {
      class RedStill {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
  };
  class Land_A_TVTower_Top : House {
    scope = 1;
    destrType = "DestructNo";
    model = "\ca\Structures\A_TVTower\A_TVTower_Top";
    featureSize = 150;
    class MarkerLights {
      class RedLight {
        name = "";
        color[] = {0, 0, 0, 0};
        ambient[] = {0, 0, 0, 0};
        brightness = 0;
        blinking = 0;
      };
    };
  };
  class GraveCrossHelmet_DZ : NonStrategic {
    scope = 2;
    model = "\ca\buildings\Misc\hrobecek_krizekhelma.p3d";
    vehicleClass = "Dead_bodies";
    destrType = "DestructTree";
    armor = 10;
    accuracy = 500;
    displayName = "Survival RIP";
  };
};
class CfgNonAIVehicles {
  access = 0;
  class StreetLamp {
    colorDiffuse[] = {0.9, 0.8, 0.6};
    colorAmbient[] = {0.02, 0.02, 0.02};
    brightness = 0.15;
  };
  class StreetLamp_BaseWeakYellow : StreetLamp {
    colorDiffuse[] = {0.5, 0.4, 0.1, 0};
    colorAmbient[] = {0.2, 0.15, 0.05, 0};
    brightness = 0.1;
  };
  class StreetLamp_BaseMediumOrange : StreetLamp {
    colorDiffuse[] = {0.6, 0.35, 0, 0};
    colorAmbient[] = {0.2, 0.1, 0, 0};
    brightness = 0.2;
  };
  class StreetLamp_BaseMediumPale : StreetLamp {
    colorDiffuse[] = {0.6, 0.7, 0.8, 0};
    colorAmbient[] = {0.06, 0.07, 0.1, 0};
    brightness = 0.15;
  };
  class StreetLamp_BaseStrongPale : StreetLamp {
    colorDiffuse[] = {0.6, 0.7, 0.85, 0};
    colorAmbient[] = {0.07, 0.1, 0.15, 0};
    brightness = 0.33;
  };
  class Land_lampa_sidl : StreetLamp_BaseMediumOrange {
    colorDiffuse[] = {0.6, 0.35, 0, 0};
    colorAmbient[] = {0.2, 0.1, 0, 0};
    brightness = 0.08;
    scope = 2;
    model = "\ca\buildings\Misc\lampa_sidl";
  };
  class Land_lampa_sidl_2 : StreetLamp_BaseMediumOrange {
    colorDiffuse[] = {0.6, 0.35, 0, 0};
    colorAmbient[] = {0.2, 0.1, 0, 0};
    brightness = 0.16;
    scope = 2;
    model = "\ca\buildings\Misc\lampa_sidl_2";
  };
  class Land_lampa_sidl_3 : StreetLamp_BaseMediumOrange {
    colorDiffuse[] = {0.6, 0.35, 0, 0};
    colorAmbient[] = {0.2, 0.1, 0, 0};
    brightness = 0.24;
    scope = 2;
    model = "\ca\buildings\Misc\lampa_sidl_3";
  };
  class Land_lampa_ind : StreetLamp_BaseWeakYellow {
    colorDiffuse[] = {0.5, 0.4, 0.1, 0};
    colorAmbient[] = {0.2, 0.15, 0.05, 0};
    brightness = 0.1;
    scope = 2;
    model = "\ca\buildings\Misc\lampa_ind";
  };
  class Land_lampa_ind_zebr : StreetLamp_BaseWeakYellow {
    colorDiffuse[] = {0.5, 0.4, 0.1, 0};
    colorAmbient[] = {0.2, 0.15, 0.05, 0};
    brightness = 0.1;
    scope = 2;
    model = "\ca\buildings\Misc\lampa_ind_zebr";
  };
};
class CfgLoot {
  trash[] = {{"TrashTinCan", "TrashJackDaniels", "ItemSodaEmpty"}, {1, 0.1, 0.5}};
  civilian[] = {{"TrashTinCan", "TrashJackDaniels", "ItemSodaEmpty", "ItemSodaCoke", "ItemSodaPepsi", "FoodCanBakedBeans", "FoodCanSardines", "FoodCanFrankBeans", "FoodCanPasta", "8Rnd_9x18_Makarov", "7Rnd_45ACP_1911", "2Rnd_shotgun_74Slug", "2Rnd_shotgun_74Pellets", "ItemBandage", "ItemPainkiller"}, {0.1, 0.1, 0.1, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.07, 0.05, 0.05, 0.05, 0.01, 0.06}};
  newGenShop[] = {{"ItemSodaEmpty", "ItemSodaCoke", "ItemSodaPepsi", "FoodCanBakedBeans", "FoodCanSardines", "FoodCanFrankBeans", "FoodCanPasta", "ItemBandage", "7Rnd_45ACP_1911", "5x_22_LR_17_HMR", "10x_303", "6Rnd_45ACP", "2Rnd_shotgun_74Slug", "2Rnd_shotgun_74Pellets", "8Rnd_9x18_Makarov", "15Rnd_W1866_Slug", "ItemPainkiller", "HandChemGreen", "HandChemBlue", "HandChemRed", "ItemHeatPack", "Skin_Sniper1_DZ", "ItemAntibiotic", "ItemBattery", "ItemSodaMdew"}, {0.13, 0.13, 0.13, 0.09, 0.13, 0.09, 0.09, 0.03, 0.09, 0.04, 0.03, 0.01, 0.04, 0.04, 0.05, 0.05, 0.09, 0.02, 0.02, 0.01, 0.03, 0.01, 0.04, 0.04, 0.02}};
  food[] = {{"TrashTinCan", "TrashJackDaniels", "ItemSodaEmpty", "ItemSodaCoke", "ItemSodaPepsi", "FoodCanBakedBeans", "FoodCanSardines", "FoodCanFrankBeans", "FoodCanPasta", "ItemBandage"}, {0.13, 0.13, 0.13, 0.09, 0.13, 0.09, 0.09, 0.09, 0.09, 0.02}};
  generic[] = {{"TrashTinCan", "ItemSodaEmpty", "ItemSodaCoke", "ItemSodaPepsi", "TrashJackDaniels", "FoodCanBakedBeans", "FoodCanSardines", "FoodCanFrankBeans", "FoodCanPasta", "ItemWaterbottleUnfilled", "ItemWaterbottle", "ItemBandage", "7Rnd_45ACP_1911", "5x_22_LR_17_HMR", "10x_303", "6Rnd_45ACP", "2Rnd_shotgun_74Slug", "2Rnd_shotgun_74Pellets", "8Rnd_9x18_Makarov", "15Rnd_W1866_Slug", "BoltSteel", "HandRoadFlare", "ItemPainkiller", "HandChemGreen", "HandChemBlue", "HandChemRed", "ItemHeatPack"}, {0.06, 0.03, 0.02, 0.04, 0.04, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.06, 0.03, 0.01, 0.04, 0.04, 0.05, 0.05, 0.09, 0.02, 0.04, 0.07, 0.02, 0.01, 0.03, 0.03, 0.04}};
  medical[] = {{"ItemBandage", "ItemPainkiller", "ItemMorphine", "ItemEpinephrine", "ItemAntibiotic", "ItemHeatPack"}, {0.8, 0.5, 0.5, 0.2, 0.2, 0.2}};
  hospital[] = {{"ItemBandage", "ItemPainkiller", "ItemMorphine", "ItemEpinephrine", "ItemBloodbag", "ItemAntibiotic"}, {0.33, 0.17, 0.13, 0.09, 0.17, 0.12}};
  military[] = {{"TrashTinCan", "ItemSodaEmpty", "ItemSodaCoke", "ItemSodaPepsi", "ItemBandage", "ItemAntibiotic", "ItemPainkiller", "ItemMorphine", "30Rnd_556x45_Stanag", "20Rnd_762x51_DMR", "17Rnd_9x19_glock17", "15Rnd_9x19_M9SD", "15Rnd_9x19_M9", "30Rnd_762x39_AK47", "30Rnd_545x39_AK", "5Rnd_762x51_M24", "7Rnd_45ACP_1911", "8Rnd_B_Beneli_74Slug", "1Rnd_HE_M203", "FlareWhite_M203", "FlareGreen_M203", "1Rnd_Smoke_M203", "200Rnd_556x45_M249", "HandGrenade_west", "SmokeShell", "SmokeShellRed", "SmokeShellGreen", "8Rnd_B_Beneli_Pellets", "30Rnd_556x45_StanagSD", "30Rnd_9x19_MP5", "30Rnd_9x19_MP5SD", "100Rnd_762x51_M240", "HandChemGreen", "HandChemBlue", "HandChemRed", "ItemHeatPack", "30Rnd_762x39_SA58", "30Rnd_556x45_G36", "30Rnd_556x45_G36SD", "1Rnd_HE_GP25", "75Rnd_545x39_RPK", "10Rnd_9x39_SP5_VSS", "20Rnd_9x39_SP5_VSS", "8Rnd_9x18_MakarovSD", "64Rnd_9x19_Bizon", "30Rnd_545x39_AKSD", "100Rnd_762x54_PK", "HandGrenade_East", "Ori_mosin_clip", "Ori_35Rnd_smg", "Ori_10Rnd_SKS", "Ori_12Rnd_maka", "Ori_8Rnd_TT", "Ori_20Rnd_APS", "Ori_20Rnd_APS_SD", "10Rnd_762x54_SVD", "FlareGreen_GP25", "FlareWhite_GP25", "FlareRed_GP25", "1Rnd_SMOKE_GP25", "1Rnd_SmokeRed_GP25", "1Rnd_SmokeGreen_GP25"}, {0.18, 0.01, 0.01, 0.01, 0.01, 0.04, 0.04, 0.01, 0.04, 0.01, 0.05, 0.01, 0.02, 0.04, 0.04, 0.01, 0.01, 0.04, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.04, 0.02, 0.02, 0.04, 0.01, 0.04, 0.01, 0.01, 0.02, 0.02, 0.02, 0.04, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.04, 0.01, 0.01, 0.01, 0.02, 0.02, 0.02, 0.02, 0.05, 0.05, 0.05, 0.04, 0.01, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02}};
  policeman[] = {{"ItemBandage", "7Rnd_45ACP_1911", "6Rnd_45ACP", "15Rnd_W1866_Slug", "8Rnd_B_Beneli_74Slug", "HandRoadFlare"}, {1, 0.8, 0.3, 0.3, 0.5, 0.3}};
  hunter[] = {{"ItemBandage", "5x_22_LR_17_HMR", "7Rnd_45ACP_1911", "10x_303", "ItemWaterbottleUnfilled", "BoltSteel", "ItemHeatPack"}, {1, 0.5, 0.2, 0.5, 0.2, 1, 0.2}};
  zBoss[] = {{"ItemGPS", "ItemMap", "ItemToolBox", "ItemEtool", "ItemSaw", "ItemHammer", "ItemPliers", "ItemRope"}, {0.3, 0.8, 0.6, 0.6, 0.5, 0.5, 0.5, 0.5}};
};
