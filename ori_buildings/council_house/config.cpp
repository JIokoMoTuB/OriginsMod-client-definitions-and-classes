class CfgPatches {
  class Taviana_domek_radnice {
    units[] = {"Land_domek_radnice"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CABuildings"};
  };
};
class CfgVehicles {
  class House;
  class Land_domek_radnice : House {
    model = "ori\buildings\council_house\domek_radnice.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
};
