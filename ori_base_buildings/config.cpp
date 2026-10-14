class CfgPatches {
  class ori_base_buildings {
    units[] = {"Uroven1DrevenaBudka", "Uroven2KladaDomek", "Uroven3DrevenyDomek", "Uroven1VelkaBudka", "Uroven2MalyDomek", "Uroven3VelkyDomek", "malaGaraz", "velkaGaraz", "kingramida", "ori_safe", "krepost", "ori_atertower1", "ori_atertower2", "ori_atertower3", "ori_atertower4", "Dom4_level_green", "Dom4_level_red", "Dom4_level", "ori_korobka", "elektro3", "elektro2", "elektro", "elektro_hero", "elektro2_hero", "elektro3_hero", "vil_watchtower", "vil_watchtowerg_ghost", "vil_watchtowerg_ghostg_gs", "wood_fence", "wood_gate", "wood_gate_red", "wood_gate_green", "dirt_fence", "dirt_fence_green", "dirt_fence_red", "full_tower1_green", "full_tower1_red", "full_tower2_green", "full_tower2_red", "full_tower3_green", "full_tower3_red", "full_tower4_green", "full_tower4_red", "box_pokazatel", "ghost_fence", "ghost_fence2", "ghost_dirt_fence", "ghost_fence_green", "ghost_fence2_green", "ghost_dirt_fence_green", "banditiUroven1DrevenaBudka_ghost", "ori_krepost_ghost", "ori_krepost_ghost_gs", "banditiUroven2KladaDomek_ghost", "banditiUroven3DrevenyDomek_ghost", "gerojUroven1VelkaBudka_ghost", "gerojUroven2MalyDomek_ghost", "gerojUroven3VelkyDomek_ghost", "malaGaraz_ghost", "velkaGaraz_ghost", "banditiUroven1DrevenaBudka_ghostg_gs", "banditiUroven2KladaDomek_ghostg_gs", "banditiUroven3DrevenyDomek_ghostg_gs", "gerojUroven1VelkaBudka_ghostg_gs", "gerojUroven2MalyDomek_ghostg_gs", "gerojUroven3VelkyDomek_ghostg_gs", "malaGaraz_ghostg_gs", "velkaGaraz_ghostg_gs", "ori_base_lamp", "great_m_1", "great_m_1_g", "great_m_1_r", "great_m_2", "great_m_2_g", "great_m_2_r", "great_m_3", "great_m_3_g", "great_m_3_r", "great_m_4", "great_m_4_g", "great_m_4_r", "great_m_5", "great_m_5_g", "great_m_5_r", "ori_base_lamp_green", "ori_base_lamp_red", "ori_korob_sector", "ori_fence_ladder", "ori_fence_ladder_green", "ori_fence_ladder_red", "ori_small_fence_ladder", "ori_small_fence_green", "ori_small_fence_red"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CAMisc3"};
    magazines[] = {};
    ammo[] = {};
  };
};
class CfgSounds {
  class origins_door_creak {
    name = "Door Creak";
    sound[] = {"\ori\sounds\doorCreak.ogg", 0.562341, 1, 100};
    titles[] = {};
  };
  class origins_pisat {
    name = "pisat";
    sound[] = {"\ori\sounds\pisat.ogg", 0.562341, 1, 100};
    titles[] = {};
  };
  class origins_garage_door {
    name = "Door Creak";
    sound[] = {"\ori\sounds\metalGates.ogg", 0.562341, 1, 100};
    titles[] = {};
  };
  class origins_door_nest {
    name = "Door Creak";
    sound[] = {"\ori\sounds\hatch_close.ogg", 0.5, 1, 100};
    titles[] = {};
  };
};
class CfgActions {
  class None;
  class Rearm : None {
    show = 0;
  };
  class Heal : None {
    show = 0;
  };
  class HealSoldier : None {
    show = 0;
  };
  class FirstAid : None {
    show = 0;
  };
  class TakeMagazine : None {
    show = 0;
  };
  class TakeWeapon : None {
    show = 0;
  };
};
class CfgVehicles {
  class HouseBase;
  class House : HouseBase {
    class DestructionEffects;
  };
  class Land_A_tent;
  class ori_base_lamp : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\lamp\lamp.p3d";
    faction = "rth_copter_class";
    displayName = "Base Lamp";
    vehicleClass = "Survival";
    supplyRadius = 0.01;
    armor = 10000;
    accuracy = 0.2;
    destrType = "DestructNo";
    transportMaxMagazines = 0;
    transportMaxWeapons = 0;
    transportMaxBackpacks = 0;
    armorLights = 1;
    placement = "vertical";
    class HitPoints {
      class HitLight {
        armor = 0.3;
        material = 60;
        name = "lampa";
        passThrough = 1;
      };
    };
    class AnimationSources {
      class light {
        source = "user";
        hitpoint = "lampa";
        animPeriod = 1;
        initPhase = 1;
      };
    };
  };
  class great_m_1 : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\statues\best_friend.p3d";
    faction = "rth_copter_class";
    displayName = "Dog";
    vehicleClass = "Survival";
    supplyRadius = 4;
    memoryPointSupply = "gear";
    armor = 10000;
    accuracy = 0.2;
    destrType = "DestructNo";
    transportMaxMagazines = 100;
    transportMaxWeapons = 0;
    transportMaxBackpacks = 0;
    placement = "vertical";
    class AnimationSources {
      class foundation {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class stupenJeden : foundation {
      };
      class stupenDva : foundation {
      };
      class stupenTri : foundation {
      };
      class stupen4tiri : foundation {
      };
    };
  };
  class great_m_1_g : Land_A_tent {
    scope = 1;
    displayName = "Dog";
    model = "ori\base_buildings\statues\green\best_friend_green.p3d";
    placement = "vertical";
  };
  class great_m_1_r : Land_A_tent {
    scope = 1;
    displayName = "Dog";
    model = "ori\base_buildings\statues\red\best_friend_red.p3d";
    placement = "vertical";
  };
  class great_m_2 : great_m_1 {
    model = "ori\base_buildings\statues\buddha.p3d";
    displayName = "Buddha";
  };
  class great_m_2_g : Land_A_tent {
    scope = 1;
    displayName = "Buddha";
    model = "ori\base_buildings\statues\green\buddha_green.p3d";
    placement = "vertical";
  };
  class great_m_2_r : Land_A_tent {
    scope = 1;
    displayName = "Buddha";
    model = "ori\base_buildings\statues\red\buddha_red.p3d";
    placement = "vertical";
  };
  class great_m_3 : great_m_1 {
    model = "ori\base_buildings\statues\lenin.p3d";
    displayName = "Lenin";
  };
  class great_m_3_g : Land_A_tent {
    scope = 1;
    displayName = "Lenin";
    model = "ori\base_buildings\statues\green\lenin_green.p3d";
    placement = "vertical";
  };
  class great_m_3_r : Land_A_tent {
    scope = 1;
    displayName = "Lenin";
    model = "ori\base_buildings\statues\red\lenin_red.p3d";
    placement = "vertical";
  };
  class great_m_4 : great_m_1 {
    model = "ori\base_buildings\statues\RapaNuiMoai.p3d";
    displayName = "Rapa Nui Moai";
  };
  class great_m_4_g : Land_A_tent {
    scope = 1;
    displayName = "Rapa Nui Moai";
    model = "ori\base_buildings\statues\green\RapaNuiMoai_green.p3d";
    placement = "vertical";
  };
  class great_m_4_r : Land_A_tent {
    scope = 1;
    displayName = "Rapa Nui Moai";
    model = "ori\base_buildings\statues\red\RapaNuiMoai_red.p3d";
    placement = "vertical";
  };
  class great_m_5 : great_m_1 {
    model = "ori\base_buildings\statues\the_lord.p3d";
    displayName = "Jesus";
  };
  class great_m_5_g : Land_A_tent {
    scope = 1;
    displayName = "Jesus";
    model = "ori\base_buildings\statues\green\the_lord_green.p3d";
    placement = "vertical";
  };
  class great_m_5_r : Land_A_tent {
    scope = 1;
    displayName = "Jesus";
    model = "ori\base_buildings\statues\red\the_lord_red.p3d";
    placement = "vertical";
  };
  class ori_base_lamp_green : Land_A_tent {
    scope = 1;
    displayName = "Base Lamp";
    model = "ori\base_buildings\ghost\lamp_ghost_gs.p3d";
    placement = "vertical";
  };
  class ori_base_lamp_red : Land_A_tent {
    scope = 1;
    displayName = "Base Lamp";
    model = "ori\base_buildings\ghost\lamp_ghost.p3d";
    placement = "vertical";
  };
  class ori_korob_sector : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\korob_sector.p3d";
    faction = "rth_copter_class";
    displayName = "SB Supply box";
    vehicleClass = "Survival";
    supplyRadius = 0.2;
    memoryPointSupply = "gear";
    armor = 10000;
    transportMaxMagazines = 380;
    transportMaxWeapons = 150;
    transportMaxBackpacks = 20;
  };
  class ori_fence_ladder : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\fence_ladder.p3d";
    faction = "rth_copter_class";
    displayName = "$STR_ori_fence_ladder";
    vehicleClass = "Survival";
    ladders[] = {{"start2", "end2"}, {"start1", "end1"}};
  };
  class ori_fence_ladder_green : Land_A_tent {
    scope = 1;
    displayName = "$STR_ori_fence_ladder";
    model = "ori\base_buildings\ghost\ghost_fence_ladder_green.p3d";
  };
  class ori_fence_ladder_red : Land_A_tent {
    scope = 1;
    displayName = "$STR_ori_fence_ladder";
    model = "ori\base_buildings\ghost\ghost_fence_ladder_red.p3d";
  };
  class ori_small_fence_ladder : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\fence_ladder_small.p3d";
    faction = "rth_copter_class";
    displayName = "$STR_ori_fence_ladder_small";
    vehicleClass = "Survival";
    ladders[] = {{"start2", "end2"}, {"start1", "end1"}};
  };
  class ori_small_fence_green : Land_A_tent {
    scope = 1;
    displayName = "$STR_ori_fence_ladder_small";
    model = "ori\base_buildings\ghost\ghost_fence_ladder_small_green.p3d";
  };
  class ori_small_fence_red : Land_A_tent {
    scope = 1;
    displayName = "$STR_ori_fence_ladder_small";
    model = "ori\base_buildings\ghost\ghost_fence_ladder_small_red.p3d";
  };
  class Dom4_level_green : Land_A_tent {
    scope = 1;
    displayName = "Mansion (Level 4) green";
    model = "ori\base_buildings\house4\Lvl4_house_last_g.p3d";
  };
  class Dom4_level_red : Land_A_tent {
    scope = 1;
    displayName = "Mansion (Level 4) red";
    model = "ori\base_buildings\house4\Lvl4_house_last_r.p3d";
  };
  class Dom4_level : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\house4\lvl4_house_last.p3d";
    faction = "rth_copter_class";
    displayName = "Mansion (Level 4)";
    vehicleClass = "Survival";
    supplyRadius = 0.02;
    simulation = "house";
    memoryPointSupply = "gear";
    armor = 10000;
    animated = 1;
    accuracy = 0.2;
    destrType = "DestructNo";
    transportMaxMagazines = 580;
    transportMaxWeapons = 70;
    transportMaxBackpacks = 16;
    ladders[] = {{"l_start1", "l_end1"}, {"l_start2", "l_end2"}, {"l_start3", "l_end3"}};
    class AnimationSources {
      class ani_vtoroy {
        source = "user";
        animPeriod = 1;
        initPhase = 1;
      };
      class ani_tretiy : ani_vtoroy {
      };
      class ani_chetv : ani_vtoroy {
      };
      class ani_piatiy : ani_vtoroy {
      };
      class ani_shest : ani_vtoroy {
      };
      class ani_sem : ani_vtoroy {
      };
      class ani_vosem : ani_vtoroy {
      };
      class garagedoor {
        source = "user";
        animPeriod = 3;
        initPhase = 0;
      };
      class ani_gvratka : garagedoor {
        animPeriod = 2;
      };
      class ani_kalitka : garagedoor {
        animPeriod = 2;
      };
      class ani_dverV1 : garagedoor {
        animPeriod = 2;
      };
      class ani_dver1 : garagedoor {
      };
      class ani_dver2 : garagedoor {
      };
      class ani_oknoL1 : garagedoor {
      };
      class ani_oknoL2 : garagedoor {
      };
      class ani_oknoR1 : garagedoor {
      };
      class ani_oknoR2 : garagedoor {
      };
      class ani_oknoTF : garagedoor {
      };
      class ani_oknoTR : garagedoor {
      };
      class ani_oknoTL : garagedoor {
      };
      class ani_oknoTB : garagedoor {
      };
      class ani_vkl1 : garagedoor {
        animPeriod = 1;
      };
      class ani_vkl2 : garagedoor {
        animPeriod = 1;
      };
      class ani_vkl3 : garagedoor {
        animPeriod = 1;
      };
    };
    class UserActions {
      class lOknoOpen1 {
        displayName = "Open window";
        position = "p_oknoL1";
        radius = 0.8;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_oknoL1"" < 0.5 and this animationPhase ""ani_shest"" < 0.5";
        statement = "this animate [""ani_oknoL1"", 1];";
      };
      class lOknoClose1 {
        displayName = "Close window";
        position = "p_oknoL1";
        radius = 0.8;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_oknoL1"" >= 0.5 and this animationPhase ""ani_shest"" < 0.5";
        statement = "this animate [""ani_oknoL1"", 0];";
      };
      class lOknoOpen2 {
        displayName = "Open window";
        position = "p_oknoL2";
        radius = 0.8;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_oknoL2"" < 0.5 and this animationPhase ""ani_shest"" < 0.5";
        statement = "this animate [""ani_oknoL2"", 1];";
      };
      class lOknoClose2 {
        displayName = "Close window";
        position = "p_oknoL2";
        radius = 0.8;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_oknoL2"" >= 0.5 and this animationPhase ""ani_shest"" < 0.5";
        statement = "this animate [""ani_oknoL2"", 0];";
      };
      class rOknoOpen1 {
        displayName = "Open window";
        position = "p_oknoR1";
        radius = 0.7;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_oknoR1"" < 0.5 and this animationPhase ""ani_shest"" < 0.5";
        statement = "this animate [""ani_oknoR1"", 1];";
      };
      class rOknoClose1 {
        displayName = "Close window";
        position = "p_oknoR1";
        radius = 0.7;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_oknoR1"" >= 0.5 and this animationPhase ""ani_shest"" < 0.5";
        statement = "this animate [""ani_oknoR1"", 0];";
      };
      class rOknoOpen2 {
        displayName = "Open window";
        position = "p_oknoR2";
        radius = 0.7;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_oknoR2"" < 0.5 and this animationPhase ""ani_shest"" < 0.5";
        statement = "this animate [""ani_oknoR2"", 1];";
      };
      class rOknoClose2 {
        displayName = "Close window";
        position = "p_oknoR2";
        radius = 0.7;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_oknoR2"" >= 0.5 and this animationPhase ""ani_shest"" < 0.5";
        statement = "this animate [""ani_oknoR2"", 0];";
      };
      class rDOpenA2 {
        displayName = "$STR_OPEN_DOOR_FRONT";
        position = "p_dverka";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_dverV1"" < 0.5 and this animationPhase ""ani_tretiy"" < 0.5";
        statement = "this animate [""ani_dverV1"", 1];";
      };
      class rDCloseA2 {
        displayName = "$STR_CLOSE_DOOR_FRONT";
        position = "p_dverkb";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_dverV1"" >= 0.5 and this animationPhase ""ani_tretiy"" < 0.5";
        statement = "this animate [""ani_dverV1"", 0];";
      };
      class rDOpen2 {
        displayName = "Open door";
        position = "p_dver1";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_dver1"" < 0.5 and this animationPhase ""ani_shest"" < 0.5";
        statement = "this animate [""ani_dver1"", 1];";
      };
      class rDClose2 {
        displayName = "Close door";
        position = "p_dver1";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_dver1"" >= 0.5 and this animationPhase ""ani_shest"" < 0.5";
        statement = "this animate [""ani_dver1"", 0];";
      };
      class lDOpen2 {
        displayName = "Open door";
        position = "p_dver2";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_dver2"" < 0.5 and this animationPhase ""ani_shest"" < 0.5";
        statement = "this animate [""ani_dver2"", 1];";
      };
      class lDClose2 {
        displayName = "Close door";
        position = "p_dver2";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_dver2"" >= 0.5 and this animationPhase ""ani_shest"" < 0.5";
        statement = "this animate [""ani_dver2"", 0];";
      };
      class tOknoOpen1 {
        displayName = "Open front window";
        position = "p_oknoT";
        radius = 1;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_oknoTF"" < 0.5 and this animationPhase ""ani_vosem"" < 0.5";
        statement = "this animate [""ani_oknoTF"", 1];";
      };
      class tOknoClose1 {
        displayName = "Close front window";
        position = "p_oknoT";
        radius = 1;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_oknoTF"" >= 0.5 and this animationPhase ""ani_vosem"" < 0.5";
        statement = "this animate [""ani_oknoTF"", 0];";
      };
      class tOknoOpen2 {
        displayName = "Open right window";
        position = "p_oknoT";
        radius = 1;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_oknoTR"" < 0.5 and this animationPhase ""ani_vosem"" < 0.5";
        statement = "this animate [""ani_oknoTR"", 1];";
      };
      class tOknoClose2 {
        displayName = "Close right window";
        position = "p_oknoT";
        radius = 1;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_oknoTR"" >= 0.5 and this animationPhase ""ani_vosem"" < 0.5";
        statement = "this animate [""ani_oknoTR"", 0];";
      };
      class tOknoOpen3 {
        displayName = "Open left window";
        position = "p_oknoT";
        radius = 1;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_oknoTL"" < 0.5 and this animationPhase ""ani_vosem"" < 0.5";
        statement = "this animate [""ani_oknoTL"", 1];";
      };
      class tOknoClose3 {
        displayName = "Close left window";
        position = "p_oknoT";
        radius = 1;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_oknoTL"" >= 0.5 and this animationPhase ""ani_vosem"" < 0.5";
        statement = "this animate [""ani_oknoTL"", 0];";
      };
      class tOknoOpen4 {
        displayName = "Open back window";
        position = "p_oknoT";
        radius = 1;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_oknoTB"" < 0.5 and this animationPhase ""ani_vosem"" < 0.5";
        statement = "this animate [""ani_oknoTB"", 1];";
      };
      class tOknoClose4 {
        displayName = "Close back window";
        position = "p_oknoT";
        radius = 1;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_oknoTB"" >= 0.5 and this animationPhase ""ani_vosem"" < 0.5";
        statement = "this animate [""ani_oknoTB"", 0];";
      };
    };
  };
  class ori_korobka : Land_A_tent {
    scope = 1;
    model = "\ca\weapons\AmmoBoxes\RUBasicAmmo.p3d";
    faction = "rth_copter_class";
    displayName = "Traider storage";
    vehicleClass = "Survival";
    armor = 10000;
    accuracy = 0.2;
    destrType = "DestructNo";
    transportMaxMagazines = 150;
    transportMaxWeapons = 15;
    transportMaxBackpacks = 2;
  };
  class ori_safe : Land_A_tent {
    scope = 2;
    model = "ori\items\safe";
    faction = "rth_copter_class";
    displayName = "$STR_TAVISAFE";
    vehicleClass = "Survival";
    supplyRadius = 0.02;
    memoryPointSupply = "gear";
    armor = 10000;
    animated = 1;
    accuracy = 0.2;
    destrType = "DestructNo";
    transportMaxMagazines = 150;
    transportMaxWeapons = 7;
    transportMaxBackpacks = 2;
    class AnimationSources {
      class safe {
        source = "user";
        animPeriod = 5;
        initPhase = 0;
      };
    };
  };
  class ori_atertower1 : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\towers\full_tower1.p3d";
    faction = "rth_copter_class";
    displayName = "Big tower";
    vehicleClass = "Survival";
    armor = 10000;
    animated = 1;
    accuracy = 0.2;
    destrType = "DestructNo";
    transportMaxMagazines = 0;
    transportMaxWeapons = 0;
    transportMaxBackpacks = 0;
    ladders[] = {{"start1", "end1"}, {"start2", "end2"}};
    class AnimationSources {
      class ani_fOkno {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class ani_bOkno : ani_fOkno {
      };
      class ani_lOkno : ani_fOkno {
      };
      class ani_rOkno : ani_fOkno {
      };
      class ani_perviy : ani_fOkno {
      };
      class ani_tretiy1 : ani_fOkno {
      };
      class ani_perviyl1 : ani_fOkno {
      };
      class ani_tretiy : ani_fOkno {
      };
      class ani_vtoroy : ani_fOkno {
      };
    };
    class UserActions {
      class fOknoOpen {
        displayName = "Open front window";
        position = "f_okno_sw";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_fOkno"" < 0.5 and this animationPhase ""ani_vtoroy"" < 0.5";
        statement = "this animate [""ani_fOkno"", 1];";
      };
      class fOknoClose {
        displayName = "Close front window";
        position = "f_okno_sw";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_fOkno"" >= 0.5 and this animationPhase ""ani_vtoroy"" < 0.5";
        statement = "this animate [""ani_fOkno"", 0];";
      };
      class bOknoOpen {
        displayName = "Open back window";
        position = "b_okno_sw";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_bOkno"" < 0.5 and this animationPhase ""ani_vtoroy"" < 0.5";
        statement = "this animate [""ani_bOkno"", 1];";
      };
      class bOknoClose {
        displayName = "Close back window";
        position = "b_okno_sw";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_bOkno"" >= 0.5 and this animationPhase ""ani_vtoroy"" < 0.5";
        statement = "this animate [""ani_bOkno"", 0];";
      };
      class lOknoOpen {
        displayName = "Open left window";
        position = "l_okno_sw";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_lOkno"" < 0.5 and this animationPhase ""ani_vtoroy"" < 0.5";
        statement = "this animate [""ani_lOkno"", 1];";
      };
      class lOknoClose {
        displayName = "Close left window";
        position = "l_okno_sw";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_lOkno"" >= 0.5 and this animationPhase ""ani_vtoroy"" < 0.5";
        statement = "this animate [""ani_lOkno"", 0];";
      };
      class rOknoOpen {
        displayName = "Open right window";
        position = "r_okno_sw";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_rOkno"" < 0.5 and this animationPhase ""ani_vtoroy"" < 0.5";
        statement = "this animate [""ani_rOkno"", 1];";
      };
      class rOknoClose {
        displayName = "Close right window";
        position = "r_okno_sw";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_rOkno"" >= 0.5 and this animationPhase ""ani_vtoroy"" < 0.5";
        statement = "this animate [""ani_rOkno"", 0];";
      };
    };
  };
  class ori_atertower2 : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\towers\full_tower2.p3d";
    faction = "rth_copter_class";
    displayName = "Nest tower";
    vehicleClass = "Survival";
    armor = 10000;
    animated = 1;
    accuracy = 0.2;
    destrType = "DestructNo";
    transportMaxMagazines = 0;
    transportMaxWeapons = 0;
    transportMaxBackpacks = 0;
    ladders[] = {{"start1", "end1"}};
    class AnimationSources {
      class ani_krisha {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class ani_perviy : ani_krisha {
      };
      class ani_vtoroy : ani_krisha {
      };
      class ani_tretiy : ani_krisha {
      };
      class ani_chetl : ani_krisha {
      };
      class ani_tretiy1 : ani_krisha {
      };
    };
    class UserActions {
      class fOknoOpen {
        displayName = "Close roof";
        position = "krisha_sw";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_krisha"" < 0.5 and this animationPhase ""ani_tretiy"" < 0.5";
        statement = "this animate [""ani_krisha"", 1]; this animate [""ani_tretiy1"", 1];";
      };
      class fOknoClose {
        displayName = "Open roof";
        position = "krisha_sw";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_krisha"" > 0.5  and this animationPhase ""ani_tretiy"" < 0.5";
        statement = "this animate [""ani_krisha"", 0];  this animate [""ani_tretiy1"", 0];";
      };
    };
  };
  class ori_atertower3 : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\towers\full_tower3.p3d";
    faction = "rth_copter_class";
    displayName = "Open tower";
    vehicleClass = "Survival";
    armor = 10000;
    animated = 1;
    accuracy = 0.2;
    destrType = "DestructNo";
    transportMaxMagazines = 0;
    transportMaxWeapons = 0;
    transportMaxBackpacks = 0;
    class AnimationSources {
      class ani_perviy1 {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class ani_perviy : ani_perviy1 {
      };
      class ani_vtoroy : ani_perviy1 {
      };
      class ani_tretiy : ani_perviy1 {
      };
    };
  };
  class ori_atertower4 : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\towers\full_tower4.p3d";
    faction = "rth_copter_class";
    displayName = "Long tower";
    vehicleClass = "Survival";
    armor = 10000;
    animated = 1;
    accuracy = 0.2;
    destrType = "DestructNo";
    transportMaxMagazines = 0;
    transportMaxWeapons = 0;
    transportMaxBackpacks = 0;
    class AnimationSources {
      class ani_perviy1 {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class ani_perviy : ani_perviy1 {
      };
      class ani_vtoroy : ani_perviy1 {
      };
      class ani_tretiy : ani_perviy1 {
      };
      class ani_def1 : ani_perviy1 {
      };
      class ani_def2 : ani_perviy1 {
      };
      class ani_def3 : ani_perviy1 {
      };
      class ani_def4 : ani_perviy1 {
      };
      class ani_def5 : ani_perviy1 {
      };
    };
    class UserActions {
      class fOknoOpen {
        displayName = "Defence up";
        position = "def_sw";
        radius = 3;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_def1"" < 0.5";
        statement = "this animate [""ani_def1"", 1];this animate [""ani_def2"", 1];this animate [""ani_def3"", 1];this animate [""ani_def4"", 1];this animate [""ani_def5"", 1];";
      };
      class fOknoClose {
        displayName = "Defence down";
        position = "def_sw";
        radius = 3;
        onlyForPlayer = 1;
        condition = "this animationPhase ""ani_def1"" >= 0.5";
        statement = "this animate [""ani_def1"", 0];this animate [""ani_def2"", 0];this animate [""ani_def3"", 0];this animate [""ani_def4"", 0];this animate [""ani_def5"", 0];";
      };
    };
  };
  class elektro3 : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\electro\bandit_electro3.p3d";
    faction = "rth_copter_class";
    displayName = "Bandits - Nest (Level 3)";
    vehicleClass = "Survival";
    supplyRadius = 0.01;
    memoryPointSupply = "gear";
    armor = 10000;
    accuracy = 0.2;
    destrType = "DestructNo";
    transportMaxMagazines = 500;
    transportMaxWeapons = 55;
    transportMaxBackpacks = 15;
    ladders[] = {{"start1", "end1"}, {"start2", "end2"}};
    hiddenSelections[] = {"logo"};
    hiddenSelectionsTextures[] = {""};
    class Reflectors {
      class LightMidUpper {
        color[] = {0.9, 0.8, 0.8, 1};
        ambient[] = {0.1, 0.1, 0.1, 1};
        brightness = 1;
        position = "lightRU";
        direction = "lightEndRU";
        hitpoint = "lightRU";
        selection = "lightRU";
        size = 500;
      };
      class LightMidLower {
        color[] = {0.9, 0.8, 0.8, 1};
        ambient[] = {0.1, 0.1, 0.1, 1};
        brightness = 1;
        position = "lightRU2";
        direction = "lightEndRU2";
        hitpoint = "lightRU2";
        selection = "lightRU2";
        size = 500;
      };
      class LightRightLower {
        color[] = {0.9, 0.8, 0.8, 1};
        ambient[] = {0.1, 0.1, 0.1, 1};
        brightness = 1;
        position = "lightRU3";
        direction = "lightEndRU3";
        hitpoint = "lightRU3";
        selection = "lightRU3";
        size = 500;
      };
      class LightRightUpper {
        color[] = {0.9, 0.8, 0.8, 1};
        ambient[] = {0.1, 0.1, 0.1, 1};
        brightness = 1;
        position = "lightRU4";
        direction = "lightEndRU4";
        hitpoint = "lightRU4";
        selection = "lightRU4";
        size = 500;
      };
    };
    class AnimationSources {
      class light {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class svetla : light {
      };
      class lesnicaGuard : light {
      };
      class lesnica2guard : light {
      };
      class lesnicaDver : light {
      };
      class lesnicaDver2 : light {
      };
      class elektro1Jeden : light {
      };
      class elektro1Dva : light {
      };
      class elektro1Tri : light {
      };
      class elektro14tiri : light {
      };
      class elektro2Jeden : light {
      };
      class elektro2Dva : light {
      };
      class elektro2Tri : light {
      };
      class elektro24tiri : light {
      };
      class elektro3Jeden : light {
      };
      class elektro3Dva : light {
      };
      class elektro3Tri : light {
      };
      class elektro34tiri : light {
      };
      class lesnica1 : light {
      };
      class lesnica2 : light {
      };
      class hatch_hide : light {
      };
      class heli1_hide : light {
      };
      class heli2_hide : light {
      };
      class heli3_hide : light {
      };
      class heli4_hide : light {
      };
      class heli5_hide : light {
      };
      class heli6_hide : light {
      };
      class heli7_hide : light {
      };
      class heli8_hide : light {
      };
      class vin1 {
        source = "user";
        animPeriod = 3;
        initPhase = 0;
      };
      class vin2 : vin1 {
      };
      class vin3 : vin1 {
      };
      class vin4 : vin1 {
      };
      class dvere1 : vin1 {
      };
      class heli1 {
        source = "user";
        animPeriod = 10;
        initPhase = 0;
      };
      class heli2 : heli1 {
      };
      class heli3 : heli1 {
      };
      class heli4 : heli1 {
      };
      class heli5 : heli1 {
      };
      class heli6 : heli1 {
      };
      class heli7 : heli1 {
      };
      class heli8 : heli1 {
      };
      class vaha : heli1 {
      };
      class svich {
        source = "user";
        animPeriod = 2;
        initPhase = 0;
      };
    };
    class UserActions {
      class openOkno1 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "Open right window";
        position = "pos_okno1";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin1"" == 0) && (this animationPhase ""elektro1Tri"" == 0)";
        statement = "this animate [""vin1"",1]";
      };
      class closeOkno1 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "Close right window";
        position = "pos_okno1";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin1"" == 1) && (this animationPhase ""elektro1Tri"" == 0)";
        statement = "this animate [""vin1"",0]";
      };
      class openOkno2 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "Open front window";
        position = "pos_okno2";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin2"" == 0) && (this animationPhase ""elektro1Tri"" == 0)";
        statement = "this animate [""vin2"",1]";
      };
      class closeOkno2 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "Close front window";
        position = "pos_okno2";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin2"" == 1) && (this animationPhase ""elektro1Tri"" == 0)";
        statement = "this animate [""vin2"",0]";
      };
      class openOkno3 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "Open left window";
        position = "pos_okno3";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin3"" == 0) && (this animationPhase ""elektro1Tri"" == 0)";
        statement = "this animate [""vin3"",1]";
      };
      class closeOkno3 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "Close leftt window";
        position = "pos_okno3";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin3"" == 1) && (this animationPhase ""elektro1Tri"" == 0)";
        statement = "this animate [""vin3"",0]";
      };
      class openOkno4 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "Open right window";
        position = "pos_okno4";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin4"" == 0) && (this animationPhase ""elektro1Tri"" == 0)";
        statement = "this animate [""vin4"",1]";
      };
      class closeOkno4 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "Close right window";
        position = "pos_okno4";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin4"" == 1) && (this animationPhase ""elektro1Tri"" == 0)";
        statement = "this animate [""vin4"",0]";
      };
      class lightOn {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "Turn on light";
        position = "gear";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""svetla"" == 0)&&(this animationPhase ""light"" == 1)";
        statement = "this animate [""light"",0]";
      };
      class lightOff {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "Turn off light";
        position = "gear";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""svetla"" == 0)&&(this animationPhase ""light"" == 0)";
        statement = "this animate [""light"",1]";
      };
    };
  };
  class elektro2 : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\electro\bandit_electro2.p3d";
    faction = "rth_copter_class";
    displayName = "Bandits - Nest (Level 2)";
    vehicleClass = "Survival";
    supplyRadius = 0.01;
    memoryPointSupply = "gear";
    armor = 10000;
    accuracy = 0.2;
    destrType = "DestructNo";
    transportMaxMagazines = 500;
    transportMaxWeapons = 30;
    transportMaxBackpacks = 10;
    ladders[] = {{"start1", "end1"}};
    class AnimationSources {
      class light {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class svetla : light {
      };
      class lesnicaGuard : light {
      };
      class lesnica2guard : light {
      };
      class lesnicaDver : light {
      };
      class lesnicaDver2 : light {
      };
      class elektro1Jeden : light {
      };
      class elektro1Dva : light {
      };
      class elektro1Tri : light {
      };
      class elektro14tiri : light {
      };
      class elektro2Jeden : light {
      };
      class elektro2Dva : light {
      };
      class elektro2Tri : light {
      };
      class elektro24tiri : light {
      };
      class elektro3Jeden : light {
      };
      class elektro3Dva : light {
      };
      class elektro3Tri : light {
      };
      class elektro34tiri : light {
      };
      class lesnica1 : light {
      };
      class lesnica2 : light {
      };
      class hatch_hide : light {
      };
      class heli1_hide : light {
      };
      class heli2_hide : light {
      };
      class heli3_hide : light {
      };
      class heli4_hide : light {
      };
      class heli5_hide : light {
      };
      class heli6_hide : light {
      };
      class heli7_hide : light {
      };
      class heli8_hide : light {
      };
      class vin1 {
        source = "user";
        animPeriod = 3;
        initPhase = 0;
      };
      class vin2 : vin1 {
      };
      class vin3 : vin1 {
      };
      class vin4 : vin1 {
      };
      class vin21 : vin1 {
      };
      class vin22 : vin1 {
      };
      class vin23 : vin1 {
      };
      class dvere1 : vin1 {
      };
      class dvere2 : vin1 {
      };
      class heli1 {
        source = "user";
        animPeriod = 10;
        initPhase = 0;
      };
      class heli2 : heli1 {
      };
      class heli3 : heli1 {
      };
      class heli4 : heli1 {
      };
      class heli5 : heli1 {
      };
      class heli6 : heli1 {
      };
      class heli7 : heli1 {
      };
      class heli8 : heli1 {
      };
      class vaha : heli1 {
      };
      class svich {
        source = "user";
        animPeriod = 2;
        initPhase = 0;
      };
    };
    class UserActions {
      class openOkno1 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "Open left window";
        position = "pos_okno1";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin21"" == 0) && (this animationPhase ""elektro2Dva"" == 0)";
        statement = "this animate [""vin21"",1]";
      };
      class closeOkno1 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "Close left window";
        position = "pos_okno1";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin21"" == 1) && (this animationPhase ""elektro2Dva"" == 0)";
        statement = "this animate [""vin21"",0]";
      };
      class openOkno2 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "Open right window";
        position = "pos_okno2";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin22"" == 0) && (this animationPhase ""elektro2Dva"" == 0)";
        statement = "this animate [""vin22"",1]";
      };
      class closeOkno2 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "Close right window";
        position = "pos_okno2";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin22"" == 1) && (this animationPhase ""elektro2Dva"" == 0)";
        statement = "this animate [""vin22"",0]";
      };
      class openOkno3 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "Open back window";
        position = "pos_okno3";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin23"" == 0) && (this animationPhase ""elektro2Dva"" == 0)";
        statement = "this animate [""vin23"",1]";
      };
      class closeOkno3 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "Close back window";
        position = "pos_okno3";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin23"" == 1) && (this animationPhase ""elektro2Dva"" == 0)";
        statement = "this animate [""vin23"",0]";
      };
      class openDoor {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "Open WC door";
        position = "pos_okno2";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""dvere2"" == 0) && (this animationPhase ""elektro2Tri"" == 0)";
        statement = "this animate [""dvere2"",1]";
      };
      class closeDoor {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "Close WC door";
        position = "pos_okno2";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""dvere2"" == 1) && (this animationPhase ""elektro2Tri"" == 0)";
        statement = "this animate [""dvere2"",0]";
      };
      class pee {
        displayName = "Relieve yourself";
        position = "pos_okno2";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""dvere2"" == 1) && (this animationPhase ""elektro2Tri"" == 0)";
        statement = "(this say ""origins_pisat"")";
      };
    };
  };
  class elektro : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\electro\bandit_electro.p3d";
    faction = "rth_copter_class";
    displayName = "Bandits - Nest (Level 1)";
    vehicleClass = "Survival";
    supplyRadius = 0.01;
    memoryPointSupply = "gear";
    armor = 10000;
    accuracy = 0.2;
    destrType = "DestructNo";
    transportMaxMagazines = 500;
    transportMaxWeapons = 15;
    transportMaxBackpacks = 5;
    ladders[] = {{"start1", "end1"}};
    class AnimationSources {
      class light {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class svetla : light {
      };
      class lesnicaGuard : light {
      };
      class lesnica2guard : light {
      };
      class lesnicaDver : light {
      };
      class lesnica2uard : light {
      };
      class lesnica2Dver : light {
      };
      class lesnicaDver2 : light {
      };
      class elektro1Jeden : light {
      };
      class elektro1Dva : light {
      };
      class elektro1Tri : light {
      };
      class elektro14tiri : light {
      };
      class elektro2Jeden : light {
      };
      class elektro2Dva : light {
      };
      class elektro2Tri : light {
      };
      class elektro24tiri : light {
      };
      class elektro3Jeden : light {
      };
      class elektro3Dva : light {
      };
      class elektro3Tri : light {
      };
      class elektro34tiri : light {
      };
      class lesnica1 : light {
      };
      class lesnica2 : light {
      };
      class hatch_hide : light {
      };
      class heli1_hide : light {
      };
      class heli2_hide : light {
      };
      class heli3_hide : light {
      };
      class heli4_hide : light {
      };
      class heli5_hide : light {
      };
      class heli6_hide : light {
      };
      class heli7_hide : light {
      };
      class heli8_hide : light {
      };
      class vin1 {
        source = "user";
        animPeriod = 3;
        initPhase = 0;
      };
      class vin2 : vin1 {
      };
      class vin3 : vin1 {
      };
      class vin4 : vin1 {
      };
      class vin21 : vin1 {
      };
      class vin22 : vin1 {
      };
      class vin23 : vin1 {
      };
      class vin31 : vin1 {
      };
      class vin32 : vin1 {
      };
      class vin33 : vin1 {
      };
      class vin34 : vin1 {
      };
      class dvere1 : vin1 {
      };
      class dvere2 : vin1 {
      };
      class heli1 {
        source = "user";
        animPeriod = 10;
        initPhase = 0;
      };
      class heli2 : heli1 {
      };
      class heli3 : heli1 {
      };
      class heli4 : heli1 {
      };
      class heli5 : heli1 {
      };
      class heli6 : heli1 {
      };
      class heli7 : heli1 {
      };
      class heli8 : heli1 {
      };
      class vaha : heli1 {
      };
      class svich {
        source = "user";
        animPeriod = 2;
        initPhase = 0;
      };
    };
    class UserActions {
      class openOkno1 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "Open front window";
        position = "pos_okno1";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin31"" == 0) && (this animationPhase ""elektro3Dva"" == 0)";
        statement = "this animate [""vin31"",1]";
      };
      class closeOkno1 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "Close front window";
        position = "pos_okno1";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin31"" == 1) && (this animationPhase ""elektro3Dva"" == 0)";
        statement = "this animate [""vin31"",0]";
      };
      class openOkno2 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "Open left window";
        position = "pos_okno2";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin32"" == 0) && (this animationPhase ""elektro3Dva"" == 0)";
        statement = "this animate [""vin32"",1]";
      };
      class closeOkno2 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "Close left window";
        position = "pos_okno2";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin32"" == 1) && (this animationPhase ""elektro3Dva"" == 0)";
        statement = "this animate [""vin32"",0]";
      };
      class openOkno3 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "Open back window";
        position = "pos_okno3";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin33"" == 0) && (this animationPhase ""elektro3Dva"" == 0)";
        statement = "this animate [""vin33"",1]";
      };
      class closeOkno3 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "Close back window";
        position = "pos_okno3";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin33"" == 1) && (this animationPhase ""elektro3Dva"" == 0)";
        statement = "this animate [""vin33"",0]";
      };
      class openOkno4 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "Open right window";
        position = "pos_okno4";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin34"" == 0) && (this animationPhase ""elektro3Dva"" == 0)";
        statement = "this animate [""vin34"",1]";
      };
      class closeOkno4 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "Close right window";
        position = "pos_okno4";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""vin34"" == 1) && (this animationPhase ""elektro3Dva"" == 0)";
        statement = "this animate [""vin34"",0]";
      };
    };
  };
  class elektro_hero : elektro {
    model = "ori\base_buildings\electro\hero_electro.p3d";
    displayName = "Heroes - Nest (Level 1)";
  };
  class elektro2_hero : elektro2 {
    model = "ori\base_buildings\electro\hero_electro2.p3d";
    displayName = "Heroes - Nest (Level 2)";
  };
  class elektro3_hero : elektro3 {
    model = "ori\base_buildings\electro\hero_electro3.p3d";
    displayName = "Heroes - Nest (Level 3)";
  };
  class Uroven1DrevenaBudka : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\banditiUroven1DrevenaBudka.p3d";
    faction = "rth_copter_class";
    displayName = "Bandits - Wooden Shed (Level 1)";
    vehicleClass = "Survival";
    supplyRadius = 0.01;
    memoryPointSupply = "gear";
    armor = 10000;
    accuracy = 0.2;
    destrType = "DestructNo";
    transportMaxMagazines = 500;
    transportMaxWeapons = 15;
    transportMaxBackpacks = 5;
    class AnimationSources {
      class dvereJedna {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class dvereDva : dvereJedna {
      };
      class dvereTri : dvereJedna {
      };
      class dvere4tiri : dvereJedna {
      };
      class dvereJednaA : dvereJedna {
      };
      class dvereDvaA : dvereJedna {
      };
      class vratka : dvereJedna {
      };
      class dvereGarazLeve : dvereJedna {
        animPeriod = 2;
      };
      class dvereGarazPrave : dvereGarazLeve {
      };
      class dvereGarazLeveDva : dvereGarazLeve {
      };
      class dvereGarazPraveDva : dvereGarazLeve {
      };
    };
    class UserActions {
      class zavritDvereJednaA {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_CLOSE_DOOR_FRONT";
        position = "pos_door_1";
        radius = 2.5;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaA"" == 1)";
        statement = "this animate [""dvereJednaA"", 0]";
      };
      class otevritDvereInter {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_OPEN_DOOR_FRONT";
        position = "pos_slider";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaA"" == 0)";
        statement = "this animate [""dvereJednaA"", 1]";
      };
      class otevritDvereDira {
        displayName = "$STR_OPEN_DOOR_SLIDER";
        position = "pos_slider";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaADira"" == 0) && (this animationPhase ""dvereJednaA"" == 0)";
        statement = "this animate [""dvereJednaADira"", 1]";
      };
      class zavritDvereDira {
        displayName = "$STR_CLOSE_DOOR_SLIDER";
        position = "pos_slider";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaADira"" == 1) && (this animationPhase ""dvereJednaA"" == 0)";
        statement = "this animate [""dvereJednaADira"", 0]";
      };
    };
  };
  class Uroven2KladaDomek : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\banditiUroven2KladaDomek.p3d";
    faction = "rth_copter_class";
    displayName = "Bandits - Log House (Level 2)";
    supplyRadius = 0.05;
    memoryPointSupply = "gear";
    vehicleClass = "Survival";
    armor = 10000;
    accuracy = 0.2;
    destrType = "DestructNo";
    transportMaxMagazines = 500;
    transportMaxWeapons = 30;
    transportMaxBackpacks = 10;
    class AnimationSources {
      class dvereJedna {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class dvereDva : dvereJedna {
      };
      class dvereTri : dvereJedna {
      };
      class dvere4tiri : dvereJedna {
      };
      class dvereJednaA : dvereJedna {
      };
      class dvereDvaA : dvereJedna {
      };
      class vratkaDva : dvereJedna {
      };
      class dvereGarazLeve : dvereJedna {
        animPeriod = 2;
      };
      class dvereGarazPrave : dvereGarazLeve {
      };
      class dvereGarazLeveDva : dvereGarazLeve {
      };
      class dvereGarazPraveDva : dvereGarazLeve {
      };
    };
    class UserActions {
      class zavritDvereJedna {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_CLOSE_DOOR_FRONT";
        position = "pos_door_1";
        radius = 2.5;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJedna"" == 1)";
        statement = "this animate [""dvereJedna"", 0]";
      };
      class otevritDvereInter {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_OPEN_DOOR_FRONT";
        position = "pos_slider";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJedna"" == 0)";
        statement = "this animate [""dvereJedna"", 1]";
      };
      class zavritDvereDvaA {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "Close door";
        position = "pos_door_2a";
        radius = 2;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupen4tiri"" == 0) && (this animationPhase ""dvereDvaA"" == 1)";
        statement = "this animate [""dvereDvaA"", 0]";
      };
      class otevritDvereDvaAInter {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "Open door";
        position = "pos_door_2a";
        radius = 2;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupen4tiri"" == 0) && (this animationPhase ""dvereDvaA"" == 0)";
        statement = "this animate [""dvereDvaA"", 1]";
      };
      class zavritDvereTri {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "Close WC door";
        position = "pos_door_3";
        radius = 2;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupen4tiri"" == 0) && (this animationPhase ""dvereTri"" == 1)";
        statement = "this animate [""dvereTri"", 0]";
      };
      class otevritDvereTri {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "Open WC door";
        position = "pos_door_3";
        radius = 2;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupen4tiri"" == 0) && (this animationPhase ""dvereTri"" == 0)";
        statement = "this animate [""dvereTri"", 1]";
      };
      class otevritDvereDira {
        displayName = "$STR_OPEN_DOOR_SLIDER";
        position = "pos_slider";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJednaDira"" == 0) && (this animationPhase ""dvereJedna"" == 0)";
        statement = "this animate [""dvereJednaDira"", 1]";
      };
      class zavritDvereDira {
        displayName = "$STR_CLOSE_DOOR_SLIDER";
        position = "pos_slider";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJednaDira"" == 1) && (this animationPhase ""dvereJedna"" == 0)";
        statement = "this animate [""dvereJednaDira"", 0]";
      };
    };
  };
  class Uroven3DrevenyDomek : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\banditiUroven3DrevenyDomek.p3d";
    faction = "rth_copter_class";
    displayName = "Bandits - Wooden House (Level 3)";
    vehicleClass = "Survival";
    armor = 10000;
    accuracy = 0.2;
    supplyRadius = 0.05;
    memoryPointSupply = "gear";
    destrType = "DestructNo";
    transportMaxMagazines = 500;
    transportMaxWeapons = 50;
    transportMaxBackpacks = 15;
    class AnimationSources {
      class dvereJedna {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class dvereDva : dvereJedna {
      };
      class dvereTri : dvereJedna {
      };
      class dvere4tiri : dvereJedna {
      };
      class dvereJednaA : dvereJedna {
      };
      class dvereDvaB : dvereJedna {
      };
      class vratkaDva : dvereJedna {
      };
      class dvereGarazLeve : dvereJedna {
        animPeriod = 2;
      };
      class vrataGaraz2 : dvereGarazLeve {
      };
      class dvereGarazPrave : dvereGarazLeve {
      };
      class dvereGarazLeveDva : dvereGarazLeve {
      };
      class dvereGarazPraveDva : dvereGarazLeve {
      };
    };
    class UserActions {
      class zavritDvereJedna {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_CLOSE_DOOR_FRONT";
        position = "pos_door_1";
        radius = 2.5;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJedna"" == 1)";
        statement = "this animate [""dvereJedna"", 0]";
      };
      class otevritDvereInter {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_OPEN_DOOR_FRONT";
        position = "pos_slider";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJedna"" == 0)";
        statement = "this animate [""dvereJedna"", 1]";
      };
      class otevritDvereDira {
        displayName = "$STR_OPEN_DOOR_SLIDER";
        position = "pos_slider";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJednaDira"" == 0) && (this animationPhase ""dvereJedna"" == 0)";
        statement = "this animate [""dvereJednaDira"", 1]";
      };
      class zavritDvereDira {
        displayName = "$STR_CLOSE_DOOR_SLIDER";
        position = "pos_slider";
        radius = 2;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJednaDira"" == 1) && (this animationPhase ""dvereJedna"" == 0)";
        statement = "this animate [""dvereJednaDira"", 0]";
      };
      class otevritDvereDvaDira {
        displayName = "$STR_OPEN_DOOR_SLIDER";
        position = "pos_slider2";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereDvaBDira"" == 0) && (this animationPhase ""dvereDvaB"" == 0)";
        statement = "this animate [""dvereDvaBDira"", 1]";
      };
      class zavritDvereDvaDira {
        displayName = "$STR_CLOSE_DOOR_SLIDER";
        position = "pos_slider2";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereDvaBDira"" == 1) && (this animationPhase ""dvereDvaB"" == 0)";
        statement = "this animate [""dvereDvaBDira"", 0]";
      };
      class zavritDvereDva {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_CLOSE_DOOR_SIDE";
        position = "pos_door_2";
        radius = 2;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereDvaB"" == 1)";
        statement = "this animate [""dvereDvaB"", 0]";
      };
      class otevritDvereDvaInter {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_OPEN_DOOR_SIDE";
        position = "pos_slider2";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereDvaB"" == 0)";
        statement = "this animate [""dvereDvaB"", 1]";
      };
      class zavritGarazDvere {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_CLOSE_DOOR_GARAGE";
        position = "pos_door_garage";
        radius = 3;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""upgrd_1_stage_3"" == 0) && (this animationPhase ""dvereGarazLeve"" == 1) && (this animationPhase ""dvereGarazPrave"" == 1)";
        statement = "(this animate [""dvereGarazLeve"", 0]) && (this animate [""dvereGarazPrave"", 0])";
      };
    };
  };
  class Uroven1VelkaBudka : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\gerojUroven1VelkaBudka.p3d";
    faction = "rth_copter_class";
    displayName = "Heroes - Large Shed (Level 1)";
    vehicleClass = "Survival";
    supplyRadius = 0.05;
    memoryPointSupply = "gear";
    armor = 10000;
    accuracy = 0.2;
    destrType = "DestructNo";
    transportMaxMagazines = 500;
    transportMaxWeapons = 15;
    transportMaxBackpacks = 5;
    class AnimationSources {
      class dvereJedna {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class dvereDva : dvereJedna {
      };
      class dvereTri : dvereJedna {
      };
      class dvere4tiri : dvereJedna {
      };
      class dvereJednaA : dvereJedna {
      };
      class dvereDvaA : dvereJedna {
      };
      class vratka : dvereJedna {
      };
      class dvereGarazLeve : dvereJedna {
        animPeriod = 2;
      };
      class dvereGarazPrave : dvereGarazLeve {
      };
      class dvereGarazLeveDva : dvereGarazLeve {
      };
      class dvereGarazPraveDva : dvereGarazLeve {
      };
    };
    class UserActions {
      class zavritDvereJedna {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_CLOSE_DOOR_FRONT";
        position = "pos_door_1";
        radius = 2.5;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaA"" == 1)";
        statement = "this animate [""dvereJednaA"", 0]";
      };
      class otevritDvereInter {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_OPEN_DOOR_FRONT";
        position = "pos_slider";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaA"" == 0)";
        statement = "this animate [""dvereJednaA"", 1]";
      };
      class otevritDvereDira {
        displayName = "$STR_OPEN_DOOR_SLIDER";
        position = "pos_slider";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaADira"" == 0) && (this animationPhase ""dvereJednaA"" == 0)";
        statement = "this animate [""dvereJednaADira"", 1]";
      };
      class zavritDvereDira {
        displayName = "$STR_CLOSE_DOOR_SLIDER";
        position = "pos_slider";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaADira"" == 1) && (this animationPhase ""dvereJednaA"" == 0)";
        statement = "this animate [""dvereJednaADira"", 0]";
      };
    };
  };
  class Uroven2MalyDomek : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\gerojUroven2MalyDomek.p3d";
    faction = "rth_copter_class";
    displayName = "Heroes - Small House (Level 2)";
    vehicleClass = "Survival";
    supplyRadius = 0.05;
    memoryPointSupply = "gear";
    armor = 10000;
    accuracy = 0.2;
    destrType = "DestructNo";
    transportMaxMagazines = 500;
    transportMaxWeapons = 30;
    transportMaxBackpacks = 10;
    class AnimationSources {
      class dvereJedna {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class dvereDva : dvereJedna {
      };
      class dvereTri : dvereJedna {
      };
      class dvere4tiri : dvereJedna {
      };
      class dvereJednaA : dvereJedna {
      };
      class dvereDvaA : dvereJedna {
      };
      class vratkaDva : dvereJedna {
      };
      class dvereGarazLeve : dvereJedna {
        animPeriod = 2;
      };
      class dvereGarazPrave : dvereGarazLeve {
      };
      class dvereGarazLeveDva : dvereGarazLeve {
      };
      class dvereGarazPraveDva : dvereGarazLeve {
      };
    };
    class UserActions {
      class zavritDvereJedna {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_CLOSE_DOOR_FRONT";
        position = "pos_door_1";
        radius = 2.5;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJedna"" == 1)";
        statement = "this animate [""dvereJedna"", 0]";
      };
      class otevritDvereInter {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_OPEN_DOOR_FRONT";
        position = "pos_slider";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJedna"" == 0)";
        statement = "this animate [""dvereJedna"", 1]";
      };
      class otevritDvereDira {
        displayName = "$STR_OPEN_DOOR_SLIDER";
        position = "pos_slider";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJednaDira"" == 0) && (this animationPhase ""dvereJedna"" == 0)";
        statement = "this animate [""dvereJednaDira"", 1]";
      };
      class zavritDvereDira {
        displayName = "$STR_CLOSE_DOOR_SLIDER";
        position = "pos_slider";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereJednaDira"" == 1) && (this animationPhase ""dvereJedna"" == 0)";
        statement = "this animate [""dvereJednaDira"", 0]";
      };
    };
  };
  class Uroven3VelkyDomek : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\gerojUroven3VelkyDomek.p3d";
    faction = "rth_copter_class";
    displayName = "Heroes - Big House (Level 3)";
    vehicleClass = "Survival";
    armor = 10000;
    accuracy = 0.2;
    supplyRadius = 0.05;
    memoryPointSupply = "gear";
    destrType = "DestructNo";
    transportMaxMagazines = 500;
    transportMaxWeapons = 55;
    transportMaxBackpacks = 15;
    class AnimationSources {
      class dvereJedna {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class dvereDva : dvereJedna {
      };
      class dvereTri : dvereJedna {
      };
      class dvere4tiri : dvereJedna {
      };
      class dvereJednaA : dvereJedna {
      };
      class dvereDvaA : dvereJedna {
      };
      class vratka : dvereJedna {
      };
      class vrataGaraz : dvereJedna {
      };
      class dvereGarazLeve : dvereJedna {
        animPeriod = 2;
      };
      class dvereGarazPrave : dvereGarazLeve {
      };
      class dvereGarazLeveDva : dvereGarazLeve {
      };
      class dvereGarazPraveDva : dvereGarazLeve {
      };
    };
    class UserActions {
      class zavritDvereJedna {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_CLOSE_DOOR_FRONT";
        position = "pos_door_1";
        radius = 2.5;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaA"" == 1)";
        statement = "this animate [""dvereJednaA"", 0]";
      };
      class OtevritDvereInter {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_OPEN_DOOR_FRONT";
        position = "pos_slider";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaA"" == 0)";
        statement = "this animate [""dvereJednaA"", 1]";
      };
      class otevritDvereDira {
        displayName = "$STR_OPEN_DOOR_SLIDER";
        position = "pos_slider";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaADira"" == 0) && (this animationPhase ""dvereJednaA"" == 0)";
        statement = "this animate [""dvereJednaADira"", 1]";
      };
      class zavritDvereDira {
        displayName = "$STR_CLOSE_DOOR_SLIDER";
        position = "pos_slider";
        radius = 2;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereJednaADira"" == 1) && (this animationPhase ""dvereJednaA"" == 0)";
        statement = "this animate [""dvereJednaADira"", 0]";
      };
      class otevritDvereDvaDira {
        displayName = "$STR_OPEN_DOOR_SLIDER";
        position = "pos_slider2";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereDvaDira"" == 0) && (this animationPhase ""dvereDva"" == 0)";
        statement = "this animate [""dvereDvaDira"", 1]";
      };
      class zavritDvereDvaDira {
        displayName = "$STR_CLOSE_DOOR_SLIDER";
        position = "pos_slider2";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereDvaDira"" == 1) && (this animationPhase ""dvereDva"" == 0)";
        statement = "this animate [""dvereDvaDira"", 0]";
      };
      class zavritDvereDva {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_CLOSE_DOOR_SIDE";
        position = "pos_door_2";
        radius = 2;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereDva"" == 1)";
        statement = "this animate [""dvereDva"", 0]";
      };
      class otevritDvereDvaInter {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_OPEN_DOOR_SIDE";
        position = "pos_slider2";
        radius = 1;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenDva"" == 0) && (this animationPhase ""stupenDva"" == 0) && (this animationPhase ""dvereDva"" == 0)";
        statement = "this animate [""dvereDva"", 1]";
      };
      class zavritGarazDvere {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_CLOSE_DOOR_GARAGE";
        position = "pos_door_garage";
        radius = 3;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""upgrd_1_stage_3"" == 0) && (this animationPhase ""dvereGarazLeve"" == 1) && (this animationPhase ""dvereGarazPrave"" == 1)";
        statement = "(this animate [""dvereGarazLeve"", 0]) && (this animate [""dvereGarazPrave"", 0])";
      };
    };
  };
  class malaGaraz : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\malaGaraz.p3d";
    faction = "rth_copter_class";
    displayName = "Small garage";
    vehicleClass = "Survival";
    armor = 10000;
    accuracy = 0.2;
    supplyRadius = 0.05;
    memoryPointSupply = "gear";
    destrType = "DestructNo";
    transportMaxMagazines = 500;
    transportMaxWeapons = 15;
    transportMaxBackpacks = 5;
    class AnimationSources {
      class dvereJedna {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class dvereDva : dvereJedna {
      };
      class dvereTri : dvereJedna {
      };
      class dvere4tiri : dvereJedna {
      };
      class vrataGaraz : dvereJedna {
        animPeriod = 2;
      };
      class vrataGaraz2 : dvereJedna {
        animPeriod = 2;
      };
      class dvereGarazLeve : dvereJedna {
        animPeriod = 2;
      };
      class dvereGarazPrave : dvereGarazLeve {
      };
      class dvereGarazLeveDva : dvereGarazLeve {
      };
      class dvereGarazPraveDva : dvereGarazLeve {
      };
    };
    class UserActions {
      class zavritGarazDvere {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_CLOSE_DOOR_GARAGE";
        position = "pos_door_garage";
        radius = 3;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereGarazLeveDva"" == 1) && (this animationPhase ""dvereGarazPraveDva"" == 1)";
        statement = "(this animate [""dvereGarazLeveDva"", 0]) && (this animate [""dvereGarazPraveDva"", 0])";
      };
    };
  };
  class velkaGaraz : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\velkaGaraz.p3d";
    faction = "rth_copter_class";
    displayName = "Big garage";
    vehicleClass = "Survival";
    armor = 10000;
    accuracy = 0.2;
    supplyRadius = 0.05;
    memoryPointSupply = "gear";
    destrType = "DestructNo";
    transportMaxMagazines = 500;
    transportMaxWeapons = 55;
    transportMaxBackpacks = 15;
    class AnimationSources {
      class dvereJedna {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class dvereDva : dvereJedna {
      };
      class dvereTri : dvereJedna {
      };
      class dvere4tiri : dvereJedna {
      };
      class vrataGaraz : dvereJedna {
        animPeriod = 2;
      };
      class vrataGaraz2 : dvereJedna {
        animPeriod = 2;
      };
      class dvereGarazLeve : dvereJedna {
        animPeriod = 2;
      };
      class dvereGarazPrave : dvereGarazLeve {
      };
      class dvereGarazLeveDva : dvereGarazLeve {
      };
      class dvereGarazPraveDva : dvereGarazLeve {
      };
    };
    class UserActions {
      class zavritGarazDvere {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_CLOSE_DOOR_GARAGE";
        position = "pos_door_garage";
        radius = 3;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenTri"" == 0) && (this animationPhase ""dvereGarazLeveDva"" == 1) && (this animationPhase ""dvereGarazPraveDva"" == 1)";
        statement = "(this animate [""dvereGarazLeveDva"", 0]) && (this animate [""dvereGarazPraveDva"", 0])";
      };
    };
  };
  class kingramida : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\kingramida.p3d";
    faction = "rth_copter_class";
    displayName = "Origins Mod King's Pyramid";
    vehicleClass = "Survival";
    armor = 10000;
    accuracy = 0.2;
    supplyRadius = 0.05;
    memoryPointSupply = "gear";
    destrType = "DestructNo";
    transportMaxMagazines = 500;
    transportMaxWeapons = 100;
    transportMaxBackpacks = 20;
    class AnimationSources {
      class dvereJednaC {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
    };
    class UserActions {
      class otevritDverePyramidy {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "Open pyramid";
        position = "pos_door";
        radius = 2;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenJeden"" == 0) && (this animationPhase ""dvereJednaC"" == 0)";
        statement = "this animate [""dvereJednaC"", 1]";
      };
      class zavritDverePyramidy {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "Close pyramid";
        position = "pos_door";
        radius = 8;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenJeden"" == 0) && (this animationPhase ""dvereJednaC"" == 1)";
        statement = "this animate [""dvereJednaC"", 0]";
      };
      class vyvesitPrapor {
        displayName = "Raise flag";
        position = "pos_door";
        radius = 2;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenJeden"" == 0) && (this animationPhase ""prapor"" == 1)";
        statement = "this animate [""prapor"", 0]";
      };
      class snizitPrapor {
        displayName = "Lower flag";
        position = "pos_door";
        radius = 2;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""stupenJeden"" == 0) && (this animationPhase ""prapor"" == 0)";
        statement = "this animate [""prapor"", 1]";
      };
    };
  };
  class krepost : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\fortress\krepost.p3d";
    faction = "rth_copter_class";
    displayName = "Stronghold";
    vehicleClass = "Survival";
    armor = 10000;
    accuracy = 0.2;
    supplyRadius = 3;
    memoryPointSupply = "gear";
    destrType = "DestructNo";
    transportMaxMagazines = 610;
    transportMaxWeapons = 210;
    transportMaxBackpacks = 30;
    class AnimationSources {
      class vrata {
        source = "user";
        animPeriod = 10;
        initPhase = 0;
      };
      class hridel : vrata {
      };
      class kolo1 : vrata {
      };
      class kolo2 : vrata {
      };
      class vaha : vrata {
      };
      class svich {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class door1 {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class door2 : door1 {
      };
      class door3 : door1 {
      };
      class door4 : door1 {
      };
      class door5 : door1 {
      };
      class door6 : door1 {
      };
      class door7 : door1 {
      };
      class door8 : door1 {
      };
    };
    class UserActions {
      class naplnitVodu {
        displayName = "Fill water bottle";
        position = "pos_water";
        radius = 2;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""pumpa"" == 0)";
        statement = "this call func_naplnitVodu;";
      };
      class spat {
        displayName = "Go to sleep";
        position = "pos_sleep";
        radius = 2;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""sleep_stupen4tiri"" == 0)";
        statement = "[0,0,0,[""zeeping"",this]] execVM ""\z\addons\dayz_code\init\player_act.sqf"";";
      };
      class outfit {
        displayName = "Change outfit";
        position = "pos_sleep";
        radius = 2;
        onlyForPlayer = 1;
        condition = "(this animationPhase ""sleep_stupen4tiri"" == 0)";
        statement = "[0,0,0,[""clanoutfit"",this]] execVM ""\z\addons\dayz_code\init\player_act.sqf"";";
      };
    };
  };
  class vil_watchtower : Land_A_tent {
    scope = 2;
    model = "ori\base_buildings\vil_watchtower.p3d";
    faction = "rth_copter_class";
    displayName = "$STR_WATCHTOWER";
    vehicleClass = "Survival";
    armor = 10000;
    accuracy = 0.2;
    destrType = "DestructNo";
    ladders[] = {{"start", "end"}};
  };
  class vil_watchtowerg_ghost : Land_A_tent {
    model = "\ori\base_buildings\ghost\ghost_vil_watchtower_red";
    displayName = "Watchtower(ghost red)";
    vehicleClass = "Survival";
    scope = 1;
  };
  class vil_watchtowerg_ghostg_gs : Land_A_tent {
    model = "\ori\base_buildings\ghost\ghost_vil_watchtower_green";
    vehicleClass = "Survival";
    displayName = "Watchtower(ghost green)";
    scope = 1;
  };
  class wood_fence : Land_A_tent {
    model = "\ori\base_buildings\fences\wood_fence";
    armor = 25;
    scope = 2;
    vehicleClass = "Survival";
    displayName = "Wooden fence";
    faction = "rth_copter_class";
    destrType = "DestructTree";
    class AnimationSources {
      class Hitzabor1 {
        source = "Hit";
        hitpoint = "Hitzabor1";
        raw = 1;
      };
      class Hitzabor2 {
        source = "Hit";
        hitpoint = "Hitzabor2";
        raw = 1;
      };
      class Hitzabor3 {
        source = "Hit";
        hitpoint = "Hitzabor3";
        raw = 1;
      };
      class Hitzabor4 {
        source = "Hit";
        hitpoint = "Hitzabor4";
        raw = 1;
      };
    };
    class HitPoints {
      class Hitzabor1 {
        armor = 0.5;
        material = -1;
        name = "zabor1";
        visual = "zabor1";
        passThrough = 0;
      };
      class Hitzabor2 {
        armor = 0.5;
        material = -1;
        name = "zabor2";
        visual = "zabor2";
        passThrough = 0;
      };
      class Hitzabor3 {
        armor = 0.5;
        material = -1;
        name = "zabor3";
        visual = "zabor3";
        passThrough = 0;
      };
      class Hitzabor4 {
        armor = 0.5;
        material = -1;
        name = "zabor4";
        visual = "zabor4";
        passThrough = 0;
      };
    };
  };
  class wood_gate : Land_A_tent {
    model = "\ori\base_buildings\fences\fence_gate";
    armor = 25;
    scope = 2;
    vehicleClass = "Survival";
    displayName = "Gate";
    faction = "rth_copter_class";
    destrType = "DestructNo";
    hiddenSelections[] = {"Camo01"};
    class AnimationSources {
      class dvere1 {
        source = "user";
        animPeriod = 10;
        initPhase = 0;
      };
      class dvere2 : dvere1 {
      };
      class dvere : dvere1 {
      };
      class upgrd1_1 {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class upgrd1_2 : upgrd1_1 {
      };
      class orig1_1 : upgrd1_1 {
      };
      class orig1_2 : upgrd1_1 {
      };
      class dvereDira : upgrd1_1 {
      };
      class orig1 : upgrd1_1 {
      };
      class upgrd1 : upgrd1_1 {
      };
    };
  };
  class wood_gate_red : Land_A_tent {
    model = "\ori\base_buildings\fences\fence_gate_red";
    scope = 2;
  };
  class wood_gate_green : Land_A_tent {
    model = "\ori\base_buildings\fences\fence_gate_green";
    scope = 2;
  };
  class wood_fence2 : Land_A_tent {
    model = "\ori\base_buildings\fences\wood_fence2";
    armor = 45;
    vehicleClass = "Survival";
    displayName = "Reinforced Wooden Fence";
    destrType = "DestructTree";
    class AnimationSources {
      class Hitzabor1 {
        source = "Hit";
        hitpoint = "Hitzabor1";
        raw = 1;
      };
      class Hitzabor2 {
        source = "Hit";
        hitpoint = "Hitzabor2";
        raw = 1;
      };
      class Hitzabor3 {
        source = "Hit";
        hitpoint = "Hitzabor3";
        raw = 1;
      };
      class Hitzabor4 {
        source = "Hit";
        hitpoint = "Hitzabor4";
        raw = 1;
      };
    };
    class HitPoints {
      class Hitzabor1 {
        armor = 0.9;
        material = -1;
        name = "zabor1";
        visual = "zabor1";
        passThrough = 0;
      };
      class Hitzabor2 {
        armor = 0.9;
        material = -1;
        name = "zabor2";
        visual = "zabor2";
        passThrough = 0;
      };
      class Hitzabor3 {
        armor = 0.9;
        material = -1;
        name = "zabor3";
        visual = "zabor3";
        passThrough = 0;
      };
      class Hitzabor4 {
        armor = 0.9;
        material = -1;
        name = "zabor4";
        visual = "zabor4";
        passThrough = 0;
      };
    };
  };
  class dirt_fence : Land_A_tent {
    model = "\ori\base_buildings\fences\dirt_fence";
    vehicleClass = "Survival";
    displayName = "Dirt Fence";
    scope = 2;
    destrType = "DestructNo";
    ladders[] = {{"start1", "end1"}};
    class AnimationSources {
      class ani_upgrade1 {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class ani_upgrade1l : ani_upgrade1 {
      };
      class ani_dup : ani_upgrade1 {
      };
    };
  };
  class dirt_fence_green : Land_A_tent {
    displayName = "Dirt Fence Green";
    model = "\ori\base_buildings\fences\dirt_fence_green";
    scope = 1;
  };
  class dirt_fence_red : Land_A_tent {
    displayName = "Dirt Fence Red";
    model = "\ori\base_buildings\fences\dirt_fence_red";
    scope = 1;
  };
  class full_tower1_green : Land_A_tent {
    model = "\ori\base_buildings\towers\full_tower1_green";
    scope = 1;
  };
  class full_tower1_red : Land_A_tent {
    model = "\ori\base_buildings\towers\full_tower1_red";
    scope = 1;
  };
  class full_tower2_green : Land_A_tent {
    model = "\ori\base_buildings\towers\full_tower2_green";
    scope = 1;
  };
  class full_tower2_red : Land_A_tent {
    model = "\ori\base_buildings\towers\full_tower2_red";
    scope = 1;
  };
  class full_tower3_green : Land_A_tent {
    model = "\ori\base_buildings\towers\full_tower3_green";
    scope = 1;
  };
  class full_tower3_red : Land_A_tent {
    model = "\ori\base_buildings\towers\full_tower3_red";
    scope = 1;
  };
  class full_tower4_green : Land_A_tent {
    model = "\ori\base_buildings\towers\full_tower4_green";
    scope = 1;
  };
  class full_tower4_red : Land_A_tent {
    model = "\ori\base_buildings\towers\full_tower4_red";
    scope = 1;
  };
  class box_pokazatel : Land_A_tent {
    model = "\ori\items\box_pokazatel";
    scope = 1;
  };
  class ghost_fence : Land_A_tent {
    model = "\ori\base_buildings\fences\ghost_fence";
    scope = 1;
  };
  class ghost_fence2 : ghost_fence {
    model = "\ori\base_buildings\fences\ghost_fence2";
  };
  class ghost_dirt_fence : ghost_fence {
    model = "\ori\base_buildings\fences\ghost_dirt_fence";
  };
  class ghost_fence_green : ghost_fence {
    model = "\ori\base_buildings\fences\ghost_fence_green";
  };
  class ghost_fence2_green : ghost_fence {
    model = "\ori\base_buildings\fences\ghost_fence2_green";
  };
  class ghost_dirt_fence_green : ghost_fence {
    model = "\ori\base_buildings\fences\ghost_dirt_fence_green";
  };
  class banditiUroven1DrevenaBudka_ghost : Land_A_tent {
    scope = 1;
    model = "ori\base_buildings\ghost\banditiUroven1DrevenaBudka_ghost";
    faction = "rth_copter_class";
    vehicleClass = "Survival";
  };
  class ori_krepost_ghost : banditiUroven1DrevenaBudka_ghost {
    model = "\ori\base_buildings\ghost\krepost_ghost";
    vehicleClass = "Survival";
    displayName = "Fortress(ghost red)";
    scope = 1;
  };
  class ori_krepost_ghost_gs : banditiUroven1DrevenaBudka_ghost {
    model = "\ori\base_buildings\ghost\green\krepost_ghost_gs";
    vehicleClass = "Survival";
    displayName = "Fortress(ghost green)";
    scope = 1;
  };
  class banditiUroven2KladaDomek_ghost : banditiUroven1DrevenaBudka_ghost {
    model = "ori\base_buildings\ghost\banditiUroven2KladaDomek_ghost";
  };
  class banditiUroven3DrevenyDomek_ghost : banditiUroven1DrevenaBudka_ghost {
    model = "ori\base_buildings\ghost\banditiUroven3DrevenyDomek_ghost";
  };
  class gerojUroven1VelkaBudka_ghost : banditiUroven1DrevenaBudka_ghost {
    model = "ori\base_buildings\ghost\gerojUroven1VelkaBudka_ghost";
  };
  class gerojUroven2MalyDomek_ghost : banditiUroven1DrevenaBudka_ghost {
    model = "ori\base_buildings\ghost\gerojUroven2MalyDomek_ghost";
  };
  class gerojUroven3VelkyDomek_ghost : banditiUroven1DrevenaBudka_ghost {
    model = "ori\base_buildings\ghost\gerojUroven3VelkyDomek_ghost";
  };
  class malaGaraz_ghost : banditiUroven1DrevenaBudka_ghost {
    model = "ori\base_buildings\ghost\malaGaraz_ghost";
  };
  class velkaGaraz_ghost : banditiUroven1DrevenaBudka_ghost {
    model = "ori\base_buildings\ghost\velkaGaraz_ghost";
  };
  class banditiUroven1DrevenaBudka_ghostg_gs : banditiUroven1DrevenaBudka_ghost {
    model = "ori\base_buildings\ghost\green\banditiUroven1DrevenaBudka_ghostg_gs";
  };
  class banditiUroven2KladaDomek_ghostg_gs : banditiUroven1DrevenaBudka_ghost {
    model = "ori\base_buildings\ghost\green\banditiUroven2KladaDomek_ghostg_gs";
  };
  class banditiUroven3DrevenyDomek_ghostg_gs : banditiUroven1DrevenaBudka_ghost {
    model = "ori\base_buildings\ghost\green\banditiUroven3DrevenyDomek_ghostg_gs";
  };
  class gerojUroven1VelkaBudka_ghostg_gs : banditiUroven1DrevenaBudka_ghost {
    model = "ori\base_buildings\ghost\green\gerojUroven1VelkaBudka_ghostg_gs";
  };
  class gerojUroven2MalyDomek_ghostg_gs : banditiUroven1DrevenaBudka_ghost {
    model = "ori\base_buildings\ghost\green\gerojUroven2MalyDomek_ghostg_gs";
  };
  class gerojUroven3VelkyDomek_ghostg_gs : banditiUroven1DrevenaBudka_ghost {
    model = "ori\base_buildings\ghost\green\gerojUroven3VelkyDomek_ghostg_gs";
  };
  class malaGaraz_ghostg_gs : banditiUroven1DrevenaBudka_ghost {
    model = "ori\base_buildings\ghost\green\malaGaraz_ghostg_gs";
  };
  class velkaGaraz_ghostg_gs : banditiUroven1DrevenaBudka_ghost {
    model = "ori\base_buildings\ghost\green\velkaGaraz_ghostg_gs";
  };
};
