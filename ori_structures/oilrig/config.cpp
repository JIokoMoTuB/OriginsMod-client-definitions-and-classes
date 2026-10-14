class CfgPatches {
  class usec_rig_a {
    units[] = {"Land_oilrig_base", "Land_buoy"};
    weapons[] = {};
    requiredAddons[] = {"CAData"};
    requiredVersion = 1;
  };
};
class CfgVehicleClasses {
  class usec_rig_a {
    displayName = "USEC - Objects";
  };
};
class cfgVehicles {
  class House;
  class Land_oilrig_base : House {
    scope = 2;
    armor = 2000;
    icon = "\ca\data\data\Unknown_object.paa";
    mapSize = 0.7;
    accuracy = 0.2;
    model = "ori\structures\oilrig\oilrig_base.p3d";
    ladders[] = {{"start5", "end5"}, {"start4", "end4"}, {"start3", "end3"}, {"start2", "end2"}, {"start1", "end1"}};
    displayName = "Oilrig V2.00";
    vehicleClass = "usec_rig_a";
  };
  class Land_buoy : House {
    scope = 2;
    armor = 2000;
    icon = "\ca\data\data\Unknown_object.paa";
    mapSize = 0.7;
    accuracy = 0.2;
    displayName = "Oilrig V2.00";
    vehicleClass = "usec_rig_a";
    model = "ori\structures\oilrig\buoy.p3d";
  };
};
