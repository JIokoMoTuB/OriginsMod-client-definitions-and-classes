class CfgPatches {
  class Taviana_Bratislav {
    units[] = {"Land_kasa"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CABuildings"};
  };
};
class CfgVehicles {
  class House;
  class Land_kasa : House {
    model = "ori\structures\bratislav\kasa.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
};
