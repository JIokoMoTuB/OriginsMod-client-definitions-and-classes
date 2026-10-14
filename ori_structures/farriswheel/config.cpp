class CfgPatches {
  class Taviana_Ruske_kolo {
    units[] = {"Land_Ruske_kolo"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CABuildings"};
  };
};
class CfgVehicles {
  class House;
  class Land_Ruske_kolo : House {
    model = "ori\structures\farriswheel\ruske_kolo.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
};
