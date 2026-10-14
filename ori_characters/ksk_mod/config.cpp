class CfgPatches {
  class ksk_mod {
    units[] = {"GER_Soldier_EP1_wdl"};
    weapons[] = {};
    requiredVersion = 1.02;
    requiredAddons[] = {"CACharacters"};
  };
};
class CfgVehicles {
  class Man;
  class USMC_Soldier_Base;
  class GER_Soldier_EP1_wdl : USMC_Soldier_Base {
    scope = 2;
    side = 1;
    displayName = "Bandit";
    model = "\ori\characters\ksk_mod\ger_rifleman_wdl.p3d";
    backpack = "";
    weapons[] = {"Throw", "Put"};
    magazines[] = {};
    respawnWeapons[] = {"Throw", "Put"};
    respawnMagazines[] = {};
    weaponSlots = "1 + 4 + 12* 256 + 2* 4096 + 2 + 8* 16 + 12*131072";
    canHideBodies = 1;
    accuracy = 0.02;
    camouflage = 2;
  };
};
