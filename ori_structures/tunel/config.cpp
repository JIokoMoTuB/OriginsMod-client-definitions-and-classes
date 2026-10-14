class CfgPatches {
  class Taviana_Tunel {
    units[] = {"Land_casino", "Land_p6"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CABuildings"};
  };
};
class CfgVehicles {
  class House;
  class Land_casino : House {
    model = "ori\structures\tunel\casino.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_p6 : House {
    model = "ori\structures\tunel\p6.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
};
