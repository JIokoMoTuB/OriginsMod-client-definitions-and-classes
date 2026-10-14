class CfgPatches {
  class ori_structures {
    units[] = {"Land_wall_middle", "Land_ori_damba1_1", "Land_ori_damba1_2", "Land_ori_damba2_1", "Land_ori_damba2_2", "Land_budova4_in_ori"};
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
  class Land_wall_middle : House {
    model = "ori\structures\sector_walls\wall_middle.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_ori_damba1_1 : House {
    scope = 1;
    model = "\ori\structures\dam\ori_damba1_1";
    destrType = "DestructNo";
    class DestructionEffects {
    };
  };
  class Land_ori_damba1_2 : Land_ori_damba1_1 {
    model = "\ori\structures\dam\ori_damba1_2";
  };
  class Land_ori_damba2_1 : Land_ori_damba1_1 {
    model = "\ori\structures\dam\ori_damba2_1";
    ladders[] = {{"start", "end"}};
  };
  class Land_ori_damba2_2 : Land_ori_damba1_1 {
    model = "\ori\structures\dam\ori_damba2_2";
  };
  class Land_budova4_in_ori : House {
    scope = 1;
    armor = 400;
    model = "\ori\Structures\budova4_in_ori\budova4_in_ori.p3d";
    class AnimationSources {
      class Dver1 {
        animPeriod = 1;
        initPhase = 0;
        source = "user";
      };
      class Dver2 {
        animPeriod = 1;
        initPhase = 0;
        source = "user";
      };
      class Dver3 {
        animPeriod = 1;
        initPhase = 0;
        source = "user";
      };
    };
    class UserActions {
      class OpenDoors1 {
        displayNameDefault = "<img image='\ca\ui\data\ui_action_open_ca.paa' size='4' />";
        displayName = "Open door";
        position = "otk_dver1";
        radius = 1.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""Dver1"" < 0.5";
        statement = "this animate [""Dver1"", 1]";
      };
      class CloseDoors1 : OpenDoors1 {
        displayNameDefault = "<img image='\ca\ui\data\ui_action_close_ca.paa' size='4' />";
        displayName = "Close door";
        condition = "this animationPhase ""Dver1"" >= 0.5";
        statement = "this animate [""Dver1"", 0]";
      };
      class OpenDoors2 : OpenDoors1 {
        position = "otk_dver2";
        condition = "this animationPhase ""Dver2"" < 0.5";
        statement = "this animate [""Dver2"", 1]";
      };
      class CloseDoors2 : OpenDoors2 {
        displayNameDefault = "<img image='\ca\ui\data\ui_action_close_ca.paa' size='4' />";
        displayName = "Close door";
        condition = "this animationPhase ""Dver2"" >= 0.5";
        statement = "this animate [""Dver2"", 0]";
      };
      class OpenDoors3 : OpenDoors1 {
        position = "otk_dver3";
        condition = "this animationPhase ""Dver3"" < 0.5";
        statement = "this animate [""Dver3"", 1]";
      };
      class CloseDoors3 : OpenDoors3 {
        displayNameDefault = "<img image='\ca\ui\data\ui_action_close_ca.paa' size='4' />";
        displayName = "Close door";
        condition = "this animationPhase ""Dver3"" >= 0.5";
        statement = "this animate [""Dver3"", 0]";
      };
    };
    actionBegin1 = "OpenDoors1";
    actionEnd1 = "OpenDoors1";
    actionBegin2 = "OpenDoors2";
    actionEnd2 = "OpenDoors2";
    actionBegin3 = "OpenDoors3";
    actionEnd3 = "OpenDoors3";
  };
};
