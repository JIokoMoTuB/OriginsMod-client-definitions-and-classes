class CfgPatches {
  class Taviana_traf_light {
    units[] = {"Land_traf_light"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CABuildings"};
  };
};
class CfgVehicles {
  class House;
  class Land_traf_light : House {
    model = "ori\structures\traf_light\semafor.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
    destrType = "DestructTree";
  };
};
