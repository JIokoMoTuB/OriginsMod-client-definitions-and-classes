class CfgPatches {
  class Taviana_banka {
    units[] = {"Land_Banka"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CABuildings"};
    magazines[] = {};
    ammo[] = {};
  };
};
class CfgVehicles {
  class House;
  class Land_Banka : House {
    model = "ori\buildings\bank\banka.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
};
