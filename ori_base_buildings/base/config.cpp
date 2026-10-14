class CfgPatches {
  class ori_traderbase {
    units[] = {"Land_sh_mid_left", "Land_sh_mid_right", "Land_sh_part1", "Land_sh_part1_budka", "Land_sh_part2", "Land_zabor1", "Land_zabor2", "Land_zabor3", "Land_zabor4", "Land_zabor5"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CAData", "CAStructures"};
    magazines[] = {};
    ammo[] = {};
  };
};
class CfgSounds {
  class ori_barter1 {
    name = "Ori_barter";
    sound[] = {"\ca\sounds_e\sfx\arabian_market_5.wss", 0.778279, 1, 100};
    titles[] = {};
  };
};
class CfgVehicles {
  class HouseBase;
  class House : HouseBase {
    class DestructionEffects;
  };
  class Land_sh_part1 : House {
    scope = 1;
    model = "ori\base_buildings\base\sh_part1.p3d";
    faction = "rth_copter_class";
    displayName = "Barter island";
    vehicleClass = "Survival";
    supplyRadius = 0.02;
    armor = 10000;
    animated = 1;
    accuracy = 0.2;
    destrType = "DestructNo";
    transportMaxMagazines = 0;
    transportMaxWeapons = 0;
    transportMaxBackpacks = 0;
    ladders[] = {{"start1", "end1"}, {"start2", "end2"}, {"start3", "end3"}, {"start4", "end4"}};
    class AnimationSources {
      class ani_grender1 {
        source = "user";
        animPeriod = 0.1;
        initPhase = 0;
      };
      class ani_grender2 : ani_grender1 {
      };
    };
  };
  class Land_sh_part1_budka : Land_sh_part1 {
    scope = 1;
    model = "ori\base_buildings\base\sh_part1_budka.p3d";
    ladders[] = {{"start1", "end1"}, {"start2", "end2"}, {"start3", "end3"}, {"start4", "end4"}};
  };
  class Land_sh_part2 : Land_sh_part1 {
    scope = 1;
    model = "ori\base_buildings\base\sh_part2.p3d";
    ladders[] = {{"start1", "end1"}, {"start2", "end2"}};
    featureSize = 10;
    simulation = "fountain";
    sound = "ori_barter1";
  };
  class Land_sh_mid_left : Land_sh_part1 {
    scope = 1;
    model = "ori\base_buildings\base\sh_mid_left.p3d";
    ladders[] = {{"start1", "end1"}, {"start2", "end2"}};
  };
  class Land_sh_mid_right : Land_sh_part1 {
    scope = 1;
    model = "ori\base_buildings\base\sh_mid_right.p3d";
    ladders[] = {{"start1", "end1"}, {"start2", "end2"}};
  };
  class Land_zabor1 : Land_sh_part1 {
    scope = 1;
    model = "ori\base_buildings\base\zabor1.p3d";
    ladders[] = {};
    class AnimationSources {
      class ani_grender1 {
        source = "user";
        animPeriod = 0.1;
        initPhase = 0;
      };
    };
  };
  class Land_zabor2 : Land_sh_part1 {
    scope = 1;
    model = "ori\base_buildings\base\zabor2.p3d";
    ladders[] = {};
    class AnimationSources {
      class ani_grender1 {
        source = "user";
        animPeriod = 0.1;
        initPhase = 0;
      };
    };
  };
  class Land_zabor3 : Land_sh_part1 {
    scope = 1;
    model = "ori\base_buildings\base\zabor3.p3d";
    ladders[] = {};
    class AnimationSources {
      class ani_grender1 {
        source = "user";
        animPeriod = 0.1;
        initPhase = 0;
      };
    };
  };
  class Land_zabor4 : Land_sh_part1 {
    scope = 1;
    model = "ori\base_buildings\base\zabor4.p3d";
    ladders[] = {};
    class AnimationSources {
      class ani_grender1 {
        source = "user";
        animPeriod = 0.1;
        initPhase = 0;
      };
    };
  };
  class Land_zabor5 : Land_sh_part1 {
    scope = 1;
    model = "ori\base_buildings\base\zabor5.p3d";
    ladders[] = {};
    class AnimationSources {
      class ani_grender1 {
        source = "user";
        animPeriod = 0.1;
        initPhase = 0;
      };
    };
  };
};
