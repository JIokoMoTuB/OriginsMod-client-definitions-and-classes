class CfgPatches {
  class SG_GRU {
    units[] = {"SG_GRU_Marksman", "SG_GRU_Sniper", "SG_GRU_Spotter"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CACharacters"};
  };
};
class CfgFactionClasses {
  class GRU {
    displayName = "GRU";
    priority = 20;
    side = "EAST";
  };
};
class CfgHeads {
  class DefaultHead;
  class MaskHead_Flora : DefaultHead {
    model = "\ori\characters\sg_gru\maskhead.p3d";
    class Wounds {
      tex[] = {};
      mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat", "ca\characters\heads\male\blackhead\data\hhl_black_Wounds1.rvmat", "ca\characters\heads\male\blackhead\data\hhl_black_Wounds2.rvmat"};
    };
  };
};
class CfgFaces {
  class Default;
  class Man : Default {
    class Default;
    class GRU_Balaclava_FLORA : Default {
      scope = 2;
      name = "Balaclava (Flora)";
      head = "MaskHead_Flora";
      identityTypes[] = {"GRU_HEAD"};
      texture = "\ca\characters\hhl\hhl_52_CO.paa";
      material = "\ca\characters\heads\male\defaulthead\data\hhl_white.rvmat";
      disabled = 1;
    };
    class GRU_Balaclava_Black : Default {
      scope = 2;
      name = "Balaclava (Black)";
      texture = "\ca\characters\hhl\hhl_52_CO.paa";
      material = "\ca\characters\heads\male\defaulthead\data\hhl_white.rvmat";
      identityTypes[] = {"GRU_HEAD"};
      head = "MaskHead_B";
      disabled = 1;
    };
    class SecretFace_W : Default {
      scope = 2;
      name = "Nick Leyland";
      texture = "\ori\characters\sg_gru\data\stag_camb_co.paa";
      head = "DefaultHead";
      identityTypes[] = {"SecretFace"};
      disabled = 1;
    };
  };
};
class CfgVehicles {
  class RU_Soldier_Base;
  class SG_GRU_Marksman : RU_Soldier_Base {
    scope = 2;
    displayName = "Heroe";
    model = "\ori\characters\sg_gru\soldier_gorka_4.p3d";
    TextPlural = "$STR_DN_Snipers";
    TextSingular = "$STR_DN_Sniper";
    nameSound = "veh_Sniper";
    vehicleClass = "Men";
    faction = "GRU";
    side = 1;
    languages[] = {"RU"};
    genericNames = "RussianMen";
    canCarryBackpack = 1;
    identityTypes[] = {"Language_RU", "RU_Glasses", "Head_RU_Camo"};
    class Wounds {
      tex[] = {};
      mat[] = {"ca\characters2\indepins\data\soldier_flecktarn.rvmat", "ca\characters2\rus\data\soldier_specnaz_partizan.rvmat", "ori\characters\sg_gru\data\wounds\gorka_body_w1.rvmat", "ori\characters\sg_gru\data\wounds\gorka_body_w2.rvmat", "ori\characters\sg_gru\data\wounds\gorka_legs_w1.rvmat", "ori\characters\sg_gru\data\wounds\gorka_legs_w2.rvmat"};
    };
    backpack = "";
    weapons[] = {"Throw", "Put"};
    magazines[] = {};
    respawnWeapons[] = {"Throw", "Put"};
    respawnMagazines[] = {};
    weaponSlots = "1 + 4 + 12* 256 + 2* 4096 + 2 + 8* 16 + 12*131072";
    canHideBodies = 1;
    accuracy = 0.02;
    camouflage = 2;
  };
  class SG_GRU_Sniper : RU_Soldier_Base {
    scope = 2;
    displayName = "Bandit";
    model = "\ori\characters\sg_gru\soldier_sniper.p3d";
    vehicleClass = "Men";
    faction = "GRU";
    side = 1;
    languages[] = {"RU"};
    genericNames = "RussianMen";
    canCarryBackpack = 1;
    identityTypes[] = {"Language_RU", "RU_Glasses", "Head_RU_Camo"};
    class Wounds {
      tex[] = {};
      mat[] = {"ca\characters2\indepins\data\soldier_flecktarn.rvmat", "ca\characters2\rus\data\soldier_specnaz_partizan.rvmat", "ori\characters\sg_gru\data\wounds\gorka_body_w1.rvmat", "ori\characters\sg_gru\data\wounds\gorka_body_w2.rvmat", "ori\characters\sg_gru\data\wounds\gorka_legs_w1.rvmat", "ori\characters\sg_gru\data\wounds\gorka_legs_w2.rvmat"};
    };
    backpack = "";
    weapons[] = {"Throw", "Put"};
    magazines[] = {};
    respawnWeapons[] = {"Throw", "Put"};
    respawnMagazines[] = {};
    weaponSlots = "1 + 4 + 12* 256 + 2* 4096 + 2 + 8* 16 + 12*131072";
    canHideBodies = 1;
    accuracy = 0.02;
    camouflage = 2;
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
  };
  class SG_GRU_Spotter : RU_Soldier_Base {
    scope = 2;
    side = 1;
    displayName = "Heroe";
    model = "\ori\characters\sg_gru\soldier_spotter.p3d";
    vehicleClass = "Men";
    faction = "GRU";
    languages[] = {"RU"};
    genericNames = "RussianMen";
    canCarryBackpack = 1;
    identityTypes[] = {"Language_RU", "RU_Glasses", "Head_RU_Camo"};
    class Wounds {
      tex[] = {};
      mat[] = {"ca\characters2\indepins\data\soldier_flecktarn.rvmat", "ca\characters2\rus\data\soldier_specnaz_partizan.rvmat", "ori\characters\sg_gru\data\wounds\gorka_body_w1.rvmat", "ori\characters\sg_gru\data\wounds\gorka_body_w2.rvmat", "ori\characters\sg_gru\data\wounds\gorka_legs_w1.rvmat", "ori\characters\sg_gru\data\wounds\gorka_legs_w2.rvmat"};
    };
    backpack = "";
    weapons[] = {"Throw", "Put"};
    magazines[] = {};
    respawnWeapons[] = {"Throw", "Put"};
    respawnMagazines[] = {};
    weaponSlots = "1 + 4 + 12* 256 + 2* 4096 + 2 + 8* 16 + 12*131072";
    canHideBodies = 1;
    accuracy = 0.02;
    camouflage = 2;
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
  };
};
