class CfgPatches {
  class BB_OA_Female {
    units[] = {"BB_Merc_OA_Female", "BB_Merc_OA_Female_light", "BB_Merc_OA_Female_pilot2"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CACharacters", "CA_E", "CACharacters_E_Head", "CACharacters2"};
  };
};
class CfgFactionClasses {
  class Merc {
    displayName = "Mercenaries";
    priority = 100;
    side = 1;
    faction = 1;
  };
};
class CfgVehicleClasses {
  class Soldiers_Female {
    displayName = "Female Soldiers";
  };
};
class CfgHeads {
  class DefaultHead;
  class HerrerasHead : DefaultHead {
    model = "\ca\characters_E\Heads\Male\Herrera\Herrera";
    class Wounds {
      tex[] = {};
      mat[] = {"ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat"};
    };
  };
  class BBFemalehead : DefaultHead {
    model = "\ori\characters\bb_oa_female\heads\female_head.p3d";
    class Wounds {
      tex[] = {};
      mat[] = {"ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat", "ca\characters_e\woman\baker\data\baker.rvmat", "ori\characters\bb_oa_female\heads\textures\female_head_w1.rvmat", "ori\characters\bb_oa_female\heads\textures\female_head_w2.rvmat"};
    };
  };
  class BBFemalehead2 : DefaultHead {
    model = "\ori\characters\bb_oa_female\heads\female_head2.p3d";
    class Wounds {
      tex[] = {};
      mat[] = {"ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat", "ca\characters_e\woman\baker\data\baker.rvmat", "ori\characters\bb_oa_female\heads\textures\female_head_w1.rvmat", "ori\characters\bb_oa_female\heads\textures\female_head_w2.rvmat"};
    };
  };
  class BBFemalehead3 : DefaultHead {
    model = "\ori\characters\bb_oa_female\heads\female_head3.p3d";
    class Wounds {
      tex[] = {};
      mat[] = {"ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat", "ca\characters_e\woman\ensler\data\eurowoman02.rvmat", "ori\characters\bb_oa_female\heads\textures\female_head_w1.rvmat", "ori\characters\bb_oa_female\heads\textures\female_head_w2.rvmat"};
    };
  };
  class BBFemalehead4 : DefaultHead {
    model = "\ori\characters\bb_oa_female\heads\female_head4.p3d";
    class Wounds {
      tex[] = {};
      mat[] = {"ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat", "ca\characters_e\woman\ensler\data\ensler.rvmat", "ori\characters\bb_oa_female\heads\textures\female_head_w1.rvmat", "ori\characters\bb_oa_female\heads\textures\female_head_w2.rvmat"};
    };
  };
  class BBFemalehead_helmet : DefaultHead {
    model = "\ori\characters\bb_oa_female\heads\female_head_helmet.p3d";
    class Wounds {
      tex[] = {};
      mat[] = {"ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat", "ca\characters_e\woman\baker\data\baker.rvmat", "ori\characters\bb_oa_female\heads\textures\female_head_w1.rvmat", "ori\characters\bb_oa_female\heads\textures\female_head_w2.rvmat"};
    };
  };
  class BBFemalehead2_helmet : DefaultHead {
    model = "\ori\characters\bb_oa_female\heads\female_head2_helmet.p3d";
    class Wounds {
      tex[] = {};
      mat[] = {"ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat", "ca\characters_e\woman\baker\data\baker.rvmat", "ori\characters\bb_oa_female\heads\textures\female_head_w1.rvmat", "ori\characters\bb_oa_female\heads\textures\female_head_w2.rvmat"};
    };
  };
  class BBFemalehead3_helmet : DefaultHead {
    model = "\ori\characters\bb_oa_female\heads\female_head3_helmet.p3d";
    class Wounds {
      tex[] = {};
      mat[] = {"ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat", "ca\characters_e\woman\ensler\data\eurowoman02.rvmat", "ori\characters\bb_oa_female\heads\textures\female_head_w1.rvmat", "ori\characters\bb_oa_female\heads\textures\female_head_w2.rvmat"};
    };
  };
  class BBFemalehead4_helmet : DefaultHead {
    model = "\ori\characters\bb_oa_female\heads\female_head4_helmet.p3d";
    class Wounds {
      tex[] = {};
      mat[] = {"ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat", "ca\characters_e\Heads\male\DefaultHead\Data\hhl_Wounds.rvmat", "ca\characters_e\woman\ensler\data\ensler.rvmat", "ori\characters\bb_oa_female\heads\textures\female_head_w1.rvmat", "ori\characters\bb_oa_female\heads\textures\female_head_w2.rvmat"};
    };
  };
};
class CfgFaces {
  class Default {
    class Custom;
  };
  class Man : Default {
    class Default;
    class Herrera_head : Default {
      name = "Herrera";
      head = "HerrerasHead";
      identityTypes[] = {};
      texture = "\ca\characters\hhl\hhl_04_CO.paa";
      material = "\ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat";
      disabled = 0;
    };
    class Drake_head : Default {
      name = "Drake";
      head = "DrakeHead_EP1";
      identityTypes[] = {};
      texture = "\ca\characters\hhl\hhl_04_CO.paa";
      material = "\ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat";
      disabled = 0;
    };
    class Pierce_head : Default {
      name = "Pierce";
      head = "PierceHead_EP1";
      identityTypes[] = {};
      texture = "\ca\characters\hhl\hhl_26_CO.paa";
      material = "\ca\characters_e\heads\male\blackhead\data\hhl_black.rvmat";
      disabled = 0;
    };
    class Graves_head : Default {
      name = "Graves";
      head = "GravesHead_EP1";
      identityTypes[] = {};
      texture = "\ca\characters\hhl\hhl_04_CO.paa";
      material = "\ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat";
      disabled = 0;
    };
  };
  class bb_female {
    class Default {
      name = "Female";
      head = "BBFemaleHead";
      identityTypes[] = {};
      texture = "\ca\characters\hhl\hhl_04_CO.paa";
      material = "\ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat";
      disabled = 1;
    };
    class Custom {
      name = "Female";
      head = "BBFemaleHead";
      identityTypes[] = {};
      texture = "\ca\characters\hhl\hhl_04_CO.paa";
      material = "\ca\characters_e\heads\male\defaulthead\data\hhl_white.rvmat";
      disabled = 1;
    };
  };
};
class CfgGlasses {
  class Deltas_glasses {
    scope = 2;
    name = "$STR_EP1_DN_Delta_glasses";
    model = "\ca\characters_e\Heads\Glasses\Delta1G.p3d";
    identityTypes[] = {"Deltas_glasses", 1};
  };
};
class CfgIdentities {
  class Deltas_Glasses {
    name = "$STR_Anything";
    face = "Default";
    speaker = "Male02EN";
    pitch = 1;
    glasses = "Deltas_glasses";
  };
  class Head_BB_Fem {
    name = "$STR_Anything";
    face = "Default";
    speaker = "Female01EN_EP1";
    pitch = 1;
    glasses = "USMC_Glasses";
  };
  class Head_BB_Fem_helmet {
    name = "$STR_Anything";
    face = "Default";
    speaker = "Female01EN_EP1";
    pitch = 1;
    glasses = "USMC_Glasses";
  };
};
class CfgVehicles {
  class Man;
  class CAManBase : Man {
    class TalkTopics {
      core = "Core_E";
      core_en = "Core_Degenerated_E";
      core_tk = "Core_Degenerated_E";
    };
    class HitPoints {
      class HitHead;
      class HitBody;
    };
    htMin = 60;
    htMax = 1800;
    afMax = 30;
    mfMax = 0;
    mFact = 1;
    tBody = 37;
  };
  class US_Soldier_Base_EP1;
  class BB_Merc_OA_Female : US_Soldier_Base_EP1 {
    expansion = 1;
    faceType = "bb_female";
    scope = 0;
    side = 1;
    displayName = "Female Soldier (special)";
    vehicleClass = "Soldiers_Female";
    portrait = "\Ca\characters\data\portraits\comBarHead_civ_woman_ca";
    identityTypes[] = {"Language_W_EN_EP1", "Woman", "Head_BB_Fem"};
    class TalkTopics {
      core_en = "Core_Full_E";
    };
    genericNames = "EnglishWomen";
    languages[] = {"EN"};
    class SpeechVariants {
      class Default {
        speechSingular[] = {"veh_woman"};
        speechPlural[] = {"veh_women"};
      };
      class EN : Default {
      };
      class CZ {
        speechSingular[] = {"veh_woman_CZ"};
        speechPlural[] = {"veh_women_CZ"};
      };
      class CZ_Akuzativ {
        speechSingular[] = {"veh_woman_CZ4P"};
        speechPlural[] = {"veh_women_CZ4P"};
      };
      class RU {
        speechSingular[] = {"veh_woman_RU"};
        speechPlural[] = {"veh_women_RU"};
      };
    };
    TextPlural = "$STR_DN_women";
    TextSingular = "$STR_DN_woman";
    nameSound = "veh_woman";
    class HitDamage {
      class Group0 {
        hitSounds[] = {{{"ca\sounds\Characters\Noises\Damage\banz-hit-01", 0.177828, 1, 120}, 0.2}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-02", 0.177828, 1, 120}, 0.2}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-03", 0.177828, 1, 120}, 0.2}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-04", 0.177828, 1, 120}, 0.1}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-05", 0.177828, 1, 120}, 0.1}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-06", 0.177828, 1, 120}, 0.1}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-07", 0.177828, 1, 120}, 0.1}};
        damageSounds[] = {{"body", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-01", 0.0562341, 1, 120, 0.25, 5, 6, 10}}, {"body", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-02", 0.0562341, 1, 120, 0.25, 5, 7.5, 10}}, {"body", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-03", 0.0562341, 1, 120, 0.25, 5, 6, 10}}, {"body", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-04", 0.0562341, 1, 120, 0.25, 5, 7.5, 10}}, {"hands", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-07-arm", 0.0562341, 1, 120, 0.5, 0, 2.5, 5}}, {"hands", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-08-arm", 0.0562341, 1, 120, 0.5, 0, 2.5, 5}}, {"legs", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-05-leg", 0.0562341, 1, 120, 0.5, 0, 1, 2}}, {"legs", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-06-leg", 0.0562341, 1, 120, 0.5, 0, 1, 2}}};
      };
    };
    class SoundBreath {
      breath0[] = {{{{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-01", 0.0562341, 1, 8}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-02", 0.0562341, 1, 8}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-03", 0.0562341, 1, 8}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-04", 0.125893, 1, 8}, 0.25}}, {{{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-01", 0.0562341, 1, 15}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-02", 0.0562341, 1, 15}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-03", 0.0562341, 1, 15}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-04", 0.125893, 1, 15}, 0.25}}, {{{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-01", 0.1, 1, 20}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-02", 0.1, 1, 20}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-03", 0.1, 1, 20}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-04", 0.1, 1, 20}, 0.25}}};
    };
    class SoundGear {
      primary[] = {{"walk", {"", 0.00177828, 1, 10}}, {"run", {"", 0.00316228, 1, 15}}, {"sprint", {"", 0.00562341, 1, 20}}};
      secondary[] = {{"walk", {"", 0.00177828, 1, 10}}, {"run", {"", 0.00316228, 1, 10}}, {"sprint", {"", 0.00562341, 1, 10}}};
    };
    class SoundEquipment {
      soldier[] = {{"walk", {"", 0.00177828, 1, 13}}, {"run", {"", 0.00316228, 1, 20}}, {"sprint", {"", 0.00398107, 1, 25}}};
      civilian[] = {{"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-01", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-02", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-03", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-04", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-05", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-06", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-07", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-08", 0.177828, 1, 8}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-01", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-02", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-03", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-04", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-05", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-06", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-07", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-08", 0.1, 1, 15}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-01", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-02", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-03", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-04", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-05", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-06", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-07", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-08", 0.0562341, 1, 20}}};
    };
    canCarryBackPack = 1;
    weapons[] = {"Throw", "Put"};
    magazines[] = {};
    respawnWeapons[] = {"Throw", "Put"};
    respawnMagazines[] = {};
    weaponSlots = "1 + 4 + 12* 256 + 2* 4096 + 2 + 8* 16 + 12*131072";
    canHideBodies = 1;
    accuracy = 0.02;
    camouflage = 2;
    class Wounds {
      tex[] = {};
      mat[] = {"ca\characters_E\US\data\tex1.rvmat", "ca\characters_E\US\data\W1_tex1.rvmat", "ca\characters_E\US\data\W2_tex1.rvmat", "ori\characters\bb_oa_female\textures\acr_soldier_nic.rvmat", "ori\characters\bb_oa_female\textures\w1_acr_soldier_nic.rvmat", "ori\characters\bb_oa_female\textures\w2_acr_soldier_nic.rvmat"};
    };
  };
  class BB_Merc_OA_Female_light : BB_Merc_OA_Female {
    scope = 2;
    side = 1;
    displayName = "Heroe girl";
    faceType = "bb_female";
    weapons[] = {"Throw", "Put"};
    magazines[] = {};
    respawnWeapons[] = {"Throw", "Put"};
    respawnMagazines[] = {};
    weaponSlots = "1 + 4 + 12* 256 + 2* 4096 + 2 + 8* 16 + 12*131072";
    canHideBodies = 1;
    accuracy = 0.02;
    camouflage = 2;
    model = "\ori\characters\bb_oa_female\female_soldier_oa_light.p3d";
  };
  class BB_Merc_OA_Female_pilot2 : BB_Merc_OA_Female {
    scope = 2;
    side = 1;
    model = "\ori\characters\bb_oa_female\female_pilot2_oa.p3d";
    TextPlural = "$STR_DN_pilots";
    TextSingular = "$STR_DN_pilot";
    nameSound = "veh_pilot";
    identityTypes[] = {"Language_W_EN_EP1", "Woman", "Head_BB_Fem_helmet"};
    displayName = "Heroe girl";
    faceType = "bb_female";
    sensitivity = 2.6;
    cost = 20000;
    enableGPS = 0;
    weapons[] = {"Throw", "Put"};
    magazines[] = {};
    respawnWeapons[] = {"Throw", "Put"};
    respawnMagazines[] = {};
    weaponSlots = "1 + 4 + 12* 256 + 2* 4096 + 2 + 8* 16 + 12*131072";
    canHideBodies = 1;
    accuracy = 0.02;
    camouflage = 2;
    class Wounds {
      tex[] = {};
      mat[] = {"ori\characters\bb_oa_female\textures\pilot_soldier_nic.rvmat", "ori\characters\bb_oa_female\textures\w1_pilot_soldier_nic.rvmat", "ori\characters\bb_oa_female\textures\w2_pilot_soldier_nic.rvmat"};
    };
  };
};
