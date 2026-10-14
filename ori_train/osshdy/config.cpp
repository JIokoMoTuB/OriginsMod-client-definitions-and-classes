class CfgPatches {
  class OSShDY {
    units[] = {"OSShDY_base", "Cher1", "CD2", "Cher2", "Ds", "DsCh"};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"CABuildings"};
    magazines[] = {};
    ammo[] = {};
  };
};
class cfgVehicleClasses {
  class OSShDY_vehclass {
    displayName = "$STR_class";
  };
};
class CfgVehicles {
  class Thing;
  class Strategic;
  class OSShDY_base : Strategic {
    scope = 1;
    vehicleClass = "OSShDY_vehclass";
    model = "\ori\train\osshdy\A.p3d";
    displayName = "$STR_1_CD";
    Icon = "\ori\train\osshdy\data\ico\CD1.paa";
    accuracy = 6;
    destrType = "DestructBuilding";
    transportAmmo = 0;
    transportRepair = 0;
    transportFuel = 0;
    mapSize = 24;
    cost = 0;
    armor = 800;
  };
  class Cher1 : OSShDY_base {
    hiddenSelections[] = {"Bok1", "Bok2", "Bok3", "Bok4"};
    hiddenSelectionsTextures[] = {"\ori\train\osshdy\data\BokB4_ch_co.paa", "\ori\train\osshdy\data\BokB4_ch_co.paa", "\ori\train\osshdy\data\BokB4_ch_co.paa", "\ori\train\osshdy\data\BokB4_ch_co.paa"};
    model = "ori\train\osshdy\ACh.p3d";
    Icon = "\ori\train\osshdy\data\ico\Cher1.paa";
    displayName = "$STR_1_Cher";
  };
  class CD2 : OSShDY_base {
    hiddenSelections[] = {"Bok1", "Bok2", "Bok3", "Bok4"};
    hiddenSelectionsTextures[] = {"\ori\train\osshdy\data\BokB4_ch_co.paa", "\ori\train\osshdy\data\BokB4_ch_co.paa", "\ori\train\osshdy\data\BokB4_ch_co.paa", "\ori\train\osshdy\data\BokB4_ch_co.paa"};
    model = "\ori\train\osshdy\B.p3d";
    Icon = "\ori\train\osshdy\data\ico\CD2.paa";
    displayName = "$STR_2_CD";
  };
  class Cher2 : OSShDY_base {
    hiddenSelections[] = {"Bok1", "Bok2", "Bok3", "Bok4"};
    hiddenSelectionsTextures[] = {"\ori\train\osshdy\data\BokB4_ch_co.paa", "\ori\train\osshdy\data\BokB4_ch_co.paa", "\ori\train\osshdy\data\BokB4_ch_co.paa", "\ori\train\osshdy\data\BokB4_ch_co.paa"};
    model = "\ori\train\osshdy\Bch.p3d";
    Icon = "\ori\train\osshdy\data\ico\Cher2.paa";
    displayName = "$STR_2_Cher";
  };
  class Ds : OSShDY_base {
    hiddenSelections[] = {"Bok1", "Bok2", "Bok3", "Bok4"};
    hiddenSelectionsTextures[] = {"\ori\train\osshdy\data\BokB4_ch_co.paa", "\ori\train\osshdy\data\BokB4_ch_co.paa", "\ori\train\osshdy\data\BokB4_ch_co.paa", "\ori\train\osshdy\data\BokB4_ch_co.paa"};
    model = "\ori\train\osshdy\Ds.p3d";
    Icon = "\ori\train\osshdy\data\ico\CDcar.paa";
    displayName = "$STR_3_CD";
  };
  class DsCh : OSShDY_base {
    hiddenSelections[] = {"Bok1", "Bok2", "Bok3", "Bok4"};
    hiddenSelectionsTextures[] = {"\ori\train\osshdy\data\BokB4_ch_co.paa", "\ori\train\osshdy\data\BokB4_ch_co.paa", "\ori\train\osshdy\data\BokB4_ch_co.paa", "\ori\train\osshdy\data\BokB4_ch_co.paa"};
    model = "\ori\train\osshdy\DsCh.p3d";
    Icon = "\ori\train\osshdy\data\ico\Chercar.paa";
    displayName = "$STR_3_Cher";
  };
};
