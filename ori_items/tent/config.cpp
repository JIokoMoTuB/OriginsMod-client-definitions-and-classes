class CfgPatches {
  class rth_small_tent {
    units[] = {};
    weapons[] = {};
    requiredAddons[] = {"CAWeapons", "CABuildings", "CAMisc3"};
    armor = 10;
    magazines[] = {"ItemTent"};
  };
};
class CfgMagazines {
  class CA_Magazine;
  class ItemTent : CA_Magazine {
    scope = 2;
    count = 1;
    type = 256;
    displayName = "$STR_EQUIP_NAME_50";
    model = "\ori\items\tent\rth_tent_loot.p3d";
    picture = "\ori\items\tent\data\item_smallbox_ui.paa";
    descriptionShort = "$STR_EQUIP_DESC_50";
    class ItemActions {
      class Build {
        text = "$STR_PITCH_TENT";
        script = ";[_id,'tentPitch'] call fnc_use_item";
        create = "TentStorage";
      };
    };
  };
};
class CfgVehicles {
  class Land_A_tent;
  class TentStorage : Land_A_tent {
    vehicleClass = "Survival";
    displayName = "$STR_EQUIP_NAME_50";
    armor = 45;
    model = "\ori\items\tent\rth_tent.p3d";
    transportMaxMagazines = 70;
    transportMaxWeapons = 20;
    transportMaxBackpacks = 7;
  };
};
