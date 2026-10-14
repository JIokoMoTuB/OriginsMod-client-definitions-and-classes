class CfgPatches {
  class Taviana_paf_stad_obj {
    units[] = {"Land_pbaflgoals", "Land_pblighttower", "Land_pbstade", "Land_pbstadr", "Land_pbstadrscore", "Land_pbstads"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CABuildings"};
  };
};
class CfgVehicles {
  class House;
  class Land_pbaflgoals : House {
    model = "ori\structures\stadium\pbaflgoals.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_pblighttower : House {
    model = "ori\structures\stadium\PBlighttower.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_pbstade : House {
    model = "ori\structures\stadium\PBstadE.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_pbstadr : House {
    model = "ori\structures\stadium\PBstadR.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_pbstadrscore : House {
    model = "ori\structures\stadium\PBstadRscore.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_pbstads : House {
    model = "ori\structures\stadium\PBstadS.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
};
