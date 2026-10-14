class CfgPatches {
  class Taviana_Lanovka {
    units[] = {"Land_kanovka_budova_snich", "Land_kanovka_budova"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CABuildings"};
  };
};
class CfgVehicles {
  class House;
  class Land_kanovka_budova_snich : House {
    model = "ori\structures\cablecar\kanovka_budova_snich.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_kanovka_budova : House {
    model = "ori\structures\cablecar\kanovka_budova.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
};
