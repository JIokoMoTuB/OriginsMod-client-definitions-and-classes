class CfgPatches {
  class Taviana_Castle {
    units[] = {"Land_ctirglav"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CABuildings"};
  };
};
class CfgVehicles {
  class House;
  class Land_ctirglav : House {
    model = "ori\buildings\castle\ctirglav.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
};
