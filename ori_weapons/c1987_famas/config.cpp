class Mode_SemiAuto {
};
class Mode_Burst : Mode_SemiAuto {
};
class Mode_FullAuto : Mode_SemiAuto {
};
class CfgPatches {
  class C1987_Famas {
    Units[] = {};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {};
  };
};
class CfgWeapons {
  class M16a4;
  class C1987_Famas_g2 : M16a4 {
    displayName = "FAMAS G2";
    model = "\ori\weapons\c1987_famas\Famas_g2.p3d";
    picture = "\ori\weapons\c1987_famas\equip\famas_g2.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
    reloadMagazineSound[] = {"\ori\weapons\c1987_famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
    modes[] = {"Single", "Fullauto"};
    class Single : Mode_SemiAuto {
      sound[] = {"\ori\weapons\c1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
      recoil = "recoil_single_primary_3outof10";
      recoilProne = "recoil_single_primary_prone_3outof10";
    };
    class FullAuto : Mode_FullAuto {
      sound[] = {"\ori\weapons\c1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
      recoil = "recoil_single_primary_3outof10";
      recoilProne = "recoil_single_primary_prone_3outof10";
    };
    descriptionShort = "The FAMAS G2 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
  };
  class C1987_Famas_g2_aim : M16a4 {
    displayName = "FAMAS G2 AimPoint";
    model = "\ori\weapons\c1987_famas\Famas_g2_aim.p3d";
    picture = "\ori\weapons\c1987_famas\equip\famas_g2_aim.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
    reloadMagazineSound[] = {"\ori\weapons\c1987_famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
    modes[] = {"Single", "Fullauto"};
    class Single : Mode_SemiAuto {
      sound[] = {"\ori\weapons\c1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
      recoil = "recoil_single_primary_3outof10";
      recoilProne = "recoil_single_primary_prone_3outof10";
    };
    class FullAuto : Mode_FullAuto {
      sound[] = {"\ori\weapons\c1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
      recoil = "recoil_single_primary_3outof10";
      recoilProne = "recoil_single_primary_prone_3outof10";
    };
    descriptionShort = "The FAMAS G2 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
  };
  class C1987_Famas_g2_eot : M16a4 {
    displayName = "FAMAS G2 Holo";
    model = "\ori\weapons\c1987_famas\Famas_g2_eot.p3d";
    picture = "\ori\weapons\c1987_famas\equip\famas_g2_eot.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
    reloadMagazineSound[] = {"\ori\weapons\c1987_famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
    modes[] = {"Single", "Fullauto"};
    class Single : Mode_SemiAuto {
      sound[] = {"\ori\weapons\c1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
      recoil = "recoil_single_primary_3outof10";
      recoilProne = "recoil_single_primary_prone_3outof10";
    };
    class FullAuto : Mode_FullAuto {
      sound[] = {"\ori\weapons\c1987_famas\sound\Famas.wss", 1.77828, 1, 1000};
      recoil = "recoil_single_primary_3outof10";
      recoilProne = "recoil_single_primary_prone_3outof10";
    };
    descriptionShort = "The FAMAS G2 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
  };
  class C1987_Famas_g2_sd : M16a4 {
    displayName = "FAMAS G2 SD";
    model = "\ori\weapons\c1987_famas\Famas_g2_sd.p3d";
    picture = "\ori\weapons\c1987_famas\equip\famas_g2_sd.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
    reloadMagazineSound[] = {"\ori\weapons\c1987_famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
    fireLightDuration = 0;
    fireLightIntensity = 0;
    modes[] = {"Single", "Fullauto"};
    magazines[] = {"30Rnd_556x45_StanagSD", "30Rnd_556x45_G36SD", "30Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "30Rnd_556x45_G36"};
    class Single : Mode_SemiAuto {
      sound[] = {"\ori\weapons\c1987_famas\sound\Famas_sd.wss", 1, 1, 300};
      recoil = "recoil_single_primary_3outof10";
      recoilProne = "recoil_single_primary_prone_3outof10";
    };
    class FullAuto : Mode_FullAuto {
      sound[] = {"\ori\weapons\c1987_famas\sound\Famas_sd.wss", 1, 1, 300};
      recoil = "recoil_single_primary_3outof10";
      recoilProne = "recoil_single_primary_prone_3outof10";
    };
    descriptionShort = "The FAMAS G2 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
  };
  class C1987_Famas_g2_aim_sd : M16a4 {
    displayName = "FAMAS G2 AimPoint SD";
    model = "\ori\weapons\c1987_famas\Famas_g2_aim_sd.p3d";
    picture = "\ori\weapons\c1987_famas\equip\famas_g2_aim_sd.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
    reloadMagazineSound[] = {"\ori\weapons\c1987_famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
    fireLightDuration = 0;
    fireLightIntensity = 0;
    modes[] = {"Single", "Fullauto"};
    magazines[] = {"30Rnd_556x45_StanagSD", "30Rnd_556x45_G36SD", "30Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "30Rnd_556x45_G36"};
    class Single : Mode_SemiAuto {
      sound[] = {"\ori\weapons\c1987_famas\sound\Famas_sd.wss", 1, 1, 300};
      recoil = "recoil_single_primary_3outof10";
      recoilProne = "recoil_single_primary_prone_3outof10";
    };
    class FullAuto : Mode_FullAuto {
      sound[] = {"\ori\weapons\c1987_famas\sound\Famas_sd.wss", 1, 1, 300};
      recoil = "recoil_single_primary_3outof10";
      recoilProne = "recoil_single_primary_prone_3outof10";
    };
    descriptionShort = "The FAMAS G2 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
  };
  class C1987_Famas_g2_eot_sd : M16a4 {
    displayName = "FAMAS G2 Holo SD";
    model = "\ori\weapons\c1987_famas\Famas_g2_eot_sd.p3d";
    picture = "\ori\weapons\c1987_famas\equip\famas_g2_eot_sd.paa";
    handAnim[] = {"OFP2_ManSkeleton", "\CA\weapons\Data\Anim\Bizon.rtm"};
    reloadMagazineSound[] = {"\ori\weapons\c1987_famas\sound\Famas_Reload.wss", 0.056234, 1, 20};
    fireLightDuration = 0;
    fireLightIntensity = 0;
    modes[] = {"Single", "Fullauto"};
    magazines[] = {"30Rnd_556x45_StanagSD", "30Rnd_556x45_G36SD", "30Rnd_556x45_Stanag", "20Rnd_556x45_Stanag", "30Rnd_556x45_G36"};
    class Single : Mode_SemiAuto {
      sound[] = {"\ori\weapons\c1987_famas\sound\Famas_sd.wss", 1, 1, 300};
      recoil = "recoil_single_primary_3outof10";
      recoilProne = "recoil_single_primary_prone_3outof10";
    };
    class FullAuto : Mode_FullAuto {
      sound[] = {"\ori\weapons\c1987_famas\sound\Famas_sd.wss", 1, 1, 300};
      recoil = "recoil_single_primary_3outof10";
      recoilProne = "recoil_single_primary_prone_3outof10";
    };
    descriptionShort = "The FAMAS G2 is a French Assault Rifle Weapon, Factory of St. Etienne. Caliber 5.56x45mm NATO";
  };
};
