class CfgPatches {
  class bunkry {
    units[] = {"small_bunker", "Land_bunker_try_ruins"};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"CABuildings"};
  };
};
class CfgVehicles {
  class HouseBase;
  class House : HouseBase {
    class DestructionEffects;
  };
  class Ruins;
  class Land_bunker_try_ruins : Ruins {
    scope = 1;
    vehicleClass = "Ruins";
    model = "\taviana\Budovy\Bunkry\small_bunker_ruins.p3d";
  };
  class small_bunker : House {
    model = "\taviana\Budovy\Bunkry\small_bunker.p3d";
    accuracy = 1000;
    armor = 5000;
    destrType = "DestructBuilding";
    scope = 1;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\taviana\Budovy\Bunkry\small_bunker_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
};
