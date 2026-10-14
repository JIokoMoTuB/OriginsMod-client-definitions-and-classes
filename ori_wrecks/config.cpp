class CfgPatches {
  class ori_wrecks {
    units[] = {"Land_Fregata_1", "Land_Fregata_2", "Land_Fregata_3"};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"CABuildings"};
  };
};
class CfgVehicles {
  class House;
  class Land_Fregata_1 : House {
    model = "ori\wrecks\Fregata_1.p3d";
    armor = 10000;
    animated = 1;
    ladders[] = {{"start1", "end1"}};
  };
  class Land_Fregata_2 : House {
    model = "ori\wrecks\Fregata_2.p3d";
    armor = 10000;
    animated = 1;
    ladders[] = {{"start1", "end1"}};
  };
  class Land_Fregata_3 : House {
    model = "ori\wrecks\Fregata_3.p3d";
    armor = 10000;
    animated = 1;
    ladders[] = {{"start1", "end1"}};
  };
};
