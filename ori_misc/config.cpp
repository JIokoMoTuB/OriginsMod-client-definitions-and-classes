class CfgPatches {
  class ori_misc {
    units[] = {"Land_x"};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"CABuildings"};
  };
};
class CfgVehicles {
  class HouseBase;
  class House : HouseBase {
    class DestructionEffects;
  };
  class Land_x : House {
    model = "ori\misc\x\x.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
    destrType = "DestructNo";
  };
};
