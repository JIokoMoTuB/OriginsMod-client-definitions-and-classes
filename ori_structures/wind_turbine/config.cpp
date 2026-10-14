class CfgPatches {
  class Taviana_wind_turbine {
    units[] = {"Land_vetrak1", "Land_vetrak2"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CABuildings"};
  };
};
class CfgVehicles {
  class House;
  class Land_vetrak1 : House {
    model = "ori\structures\wind_turbine\vetrak1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_vetrak2 : House {
    model = "ori\structures\wind_turbine\vetrak2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
};
