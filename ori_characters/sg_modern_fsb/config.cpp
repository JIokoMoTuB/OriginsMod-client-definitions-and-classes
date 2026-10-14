class CfgPatches {
  class SG_Modern_FSB {
    units[] = {"SG_FSB_Modern_MC_GL"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CACharacters"};
  };
};
class CfgFactionClasses {
  class FSB {
    displayName = "FSB";
    priority = 20;
    side = "EAST";
  };
};
class CfgVehicleClasses {
  class Men_MC {
    displayName = "Men (Multicam)";
  };
};
class CfgVehicles {
  class MVD_Soldier_Base;
  class SG_FSB_Modern_MC_GL : MVD_Soldier_Base {
    scope = 2;
    model = "\ori\characters\sg_modern_fsb\FSB_Soldier_MC_GL.p3d";
    vehicleClass = "Men_MC";
    faction = "FSB";
    side = 1;
    languages[] = {"RU"};
    genericNames = "RussianMen";
    identityTypes[] = {"Language_RU", "USMC_Glasses", "Head_RU"};
    faceType = "Man";
    portrait = "\Ca\characters\data\portraits\comBarHead_fr_spec_ca";
    canCarryBackpack = 1;
    backpack = "";
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
      mat[] = {"ori\characters\sg_modern_fsb\data\wounds\BDU_w1.rvmat", "ori\characters\sg_modern_fsb\data\wounds\BDU_w2.rvmat", "ca\characters_e\TK\Data\Tak_Soldier.rvmat", "Ca\characters2\usmc\marines\data\usmc_soldier.rvmat", "ca\characters2\data\USMC_soldier_W1.rvmat", "ca\characters2\data\USMC_soldier_W2.rvmat", "Ca\characters2\usmc\marines\data\usmc_soldier_at.rvmat", "ca\characters2\data\USMC_soldier_W1.rvmat", "ca\characters2\data\USMC_soldier_W2.rvmat", "Ca\characters2\usmc\marines\data\usmc_soldier_CO.rvmat", "ca\characters2\data\USMC_soldier_W1.rvmat", "ca\characters2\data\USMC_soldier_W2.rvmat", "Ca\characters2\usmc\marines\data\usmc_soldier_DMR.rvmat", "ca\characters2\data\USMC_soldier_W1.rvmat", "ca\characters2\data\USMC_soldier_W2.rvmat", "Ca\characters2\usmc\marines\data\usmc_soldier_med.rvmat", "ca\characters2\data\USMC_soldier_W1.rvmat", "ca\characters2\data\USMC_soldier_W2.rvmat", "Ca\characters2\usmc\marines\data\usmc_soldier_mine.rvmat", "ca\characters2\data\USMC_soldier_W1.rvmat", "ca\characters2\data\USMC_soldier_W2.rvmat", "Ca\characters2\usmc\marines\data\usmc_soldier_saw.rvmat", "ca\characters2\data\USMC_soldier_W1.rvmat", "ca\characters2\data\USMC_soldier_W2.rvmat", "Ca\characters2\usmc\marines\data\usmc_soldier_scout.rvmat", "ca\characters2\data\USMC_soldier_W1.rvmat", "ca\characters2\data\USMC_soldier_W2.rvmat", "Ca\characters2\usmc\marines\data\usmc_soldier_tl.rvmat", "ca\characters2\data\USMC_soldier_W1.rvmat", "ca\characters2\data\USMC_soldier_W2.rvmat", "Ca\characters2\usmc\marines\data\usmc_Crew.rvmat", "ca\characters2\data\USMC_soldier_W1.rvmat", "ca\characters2\data\USMC_soldier_W2.rvmat", "ca\characters2\usmc\data\usmc_officer_body.rvmat", "ca\characters2\data\USMC_soldier_W1.rvmat", "ca\characters2\data\USMC_soldier_W2.rvmat", "Ca\characters2\USMC\data\us_Crew.rvmat", "Ca\characters2\USMC\data\W1_us_crew.rvmat", "Ca\characters2\USMC\data\W2_us_crew.rvmat"};
    };
  };
};
