class CfgPatches {
  class Taviana_parking_column {
    units[] = {"Land_parking_column"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CABuildings"};
  };
};
class CfgVehicles {
  class House;
  class Land_parking_column : House {
    model = "ori\misc\parking_column\parking_column.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
};
