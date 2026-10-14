class CfgPatches {
  class ori_buildings {
    units[] = {"Land_majak", "Land_majak2", "Land_wagon_tanker_posol", "Land_wreck_wagon_tanker_posol", "Land_autobusak", "Land_tv_bud", "Land_huge_block", "Land_autosalon", "Land_big_church", "Land_big_banelak", "Land_bouda1_zima", "Land_bufet", "Land_bus_depo", "Land_bus_stojan_bud", "Land_cinzak_corner2", "Land_cinzak_corner", "Land_cinzak_long", "Land_cinzak_long_centr", "Land_cinzak_long_double", "Land_cinzak_roh2", "Land_cinzak_roh3", "Land_cinzak_trojuhlenik", "Land_cisticka", "Land_deutshe_mini", "Land_domek01", "Land_domek02", "Land_domek03", "Land_domek04", "Land_domek05", "Land_domek_hospoda", "Land_domek_vilka", "Land_dum_mesto", "Land_dum_patrovy01c", "Land_dum_patrovy02", "Land_dum_patrovy03", "Land_dum_patrovy06", "Land_dum_patrovy_bez_vylohy", "Land_dum_rasovna", "Land_ensk_kostel", "Land_galerie", "Land_garaz_bez_tanku", "Land_garaz_velka", "Land_hokej_stadion", "Land_hospoda", "Land_hotel", "Land_hotel_marcomio", "Land_hotel_riviera1", "Land_hotel_riviera2", "Land_house1", "Land_houseblock_d1_ex1", "Land_housev_2i_snow", "Land_hrusevka", "Land_kasarna", "Land_kasarna_brana", "Land_kasarna_prujezd", "Land_kasarna_rohova", "Land_kiosk2", "Land_konecna", "Land_malboro", "Land_muzeum", "Land_nabrezi", "Land_nabrezi_najezd", "Land_nadrazi_sabina", "Land_panelak", "Land_parlament", "Land_podloubi_double_low", "Land_podloubi_end_low_1", "Land_podloubi_end_low_2", "Land_posta", "Land_rybarna", "Land_sara_domek_sedy", "Land_sara_domek_sedy_bez", "Land_shop", "Land_shopping_bor", "Land_shopping_sab1", "Land_shopping_sab2", "Land_shopping_sab5", "Land_skola2", "Land_skola", "Land_skola_res", "Land_spital", "Land_stojan_bus", "Land_teplarna", "Land_train_st1", "Land_train_st2", "Land_train_st2_bezzdi", "Land_tram_depo", "Land_tv_tower", "Land_tv_tower_base", "Land_tv_towoer_mid", "Land_univerzita", "Land_veznica_kridlo", "Land_veznica_middle", "Land_veznica_vchod", "Land_vokzal_big", "Land_water_pub", "Land_zachytka", "Land_zachytka_nov", "Land_roh_nam", "Land_rov_nam", "Land_kitchen_svickova2", "Land_piskoviste", "Land_houpacka", "Land_memorialplanck", "Land_grass", "Land_grass2", "Land_nabrezi_5", "Land_bus_depo_geo2", "Land_bus_depo_geo1", "Land_nabrezi_4", "Land_parlament_geo2", "Land_parlament_geo1", "Land_shopping_sab1_geo2", "Land_shopping_sab1_geo3", "Land_tunel_podchod_geo", "Land_tavi_wall_normal", "Land_tavi_wall_tower", "Land_tavi_wall_door", "Land_tavi_wall_hole", "Land_avtovokzal", "Land_flowershop", "Land_kulata_prolezacka", "Land_shopping_sab1_geo", "Land_budky", "Land_parlament_geo3", "Land_muz_a_zena", "Land_zastavka", "Land_zastavka2", "Land_nabrezi_2xx", "Land_nabrezi_4x", "Land_nabrezi_2xx_corner", "Land_nabrezi_2x", "Land_nabrezi_3", "Land_nabrezi_1", "Land_lenin_pod", "Land_nabrezi_2_small", "Land_nabrezi_2_small_2", "Land_zvezda", "Land_spital_geo", "Land_huge_block_geo", "Land_casino_geo", "Land_helfenburk", "Land_helfenburk_cimburi", "Land_helfenburk_brana", "Land_helfenburk_zed", "Land_terc", "Land_helfenburk_budova2", "Land_stand", "Land_tavi_destroyer", "Land_skala_molotov", "Land_2", "Land_3", "Land_4", "Land_reaktor_part3", "Land_5", "Land_reaktor_part2", "Land_8", "Land_6", "Land_reaktor_part1", "Land_7", "Land_kabel_holder", "Land_1", "Land_veznica_zabradli", "Land_semafor", "Land_ind_coltan_tunnel_ep1", "Land_kamaz", "Land_kamaz_hasic", "Land_zygul_wrecked", "Land_sedan_weck", "Land_Trabant_wreck", "Land_tavi_destroyer_front", "Land_tavi_destroyer_back", "Land_camonet_nato_var1", "Land_roadbarrier_light", "Land_stan_east", "Land_stan", "Land_astan", "Land_tav_Barrack2", "Land_tav_tovarna2", "Land_tav_HouseV2_01B", "Land_wf_depot", "Land_wf_bunker", "Land_build_arh_part1", "Land_build_arh_part2", "Land_build_exp_01", "Land_build_hall", "Land_build_Start_admin_part1", "Land_build_Start_admin_part2", "Land_hall_lev1_03", "Land_hall_lev3_03", "Land_elek_komin", "Land_pipeline_rad", "Land_reaktor", "Land_rozvodna1", "Land_rozvodna2", "Land_tavi_tower", "Land_r1", "Land_r2", "Land_r3", "Land_r4", "Land_r5", "Land_r6", "Land_r7", "Land_r8", "Land_r9", "Land_r10", "Land_r11", "Land_r12", "Land_r13", "Land_r14", "Land_r15", "Land_r16", "Land_casino_1", "Land_casino_2", "Land_casino_3", "Land_casino_4", "Land_casino_5", "Land_casino_6", "Land_casino_7"};
    weapons[] = {};
    requiredVersion = 1;
    requiredAddons[] = {"CAData", "CABuildings", "CABuildings2", "CATEC"};
  };
};
class CfgVehicles {
  class HouseBase;
  class Strategic;
  class Base_WarfareBVehicleServicePoint;
  class House : HouseBase {
    class DestructionEffects;
  };
  class Ruins;
  class Land_majak : House {
    scope = 1;
    model = "\ca\buildings\majak";
    displayName = "Lighthouse";
    animated = 1;
    ladders[] = {{"start", "end"}};
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\majak_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
    armor = 10000;
    class MarkerLights {
      class RedBlinking {
        name = "cerveny pozicni blik";
        color[] = {0.64, 0.064, 0.064, 1};
        ambient[] = {0.1, 0.01, 0.01, 1};
        brightness = 0.02;
        blinking = 1;
      };
    };
    class Reflectors {
      class MainLight {
        color[] = {0.9, 0.8, 0.8, 1};
        ambient[] = {0.1, 0.1, 0.1, 1};
        position = "Source_MainLight";
        direction = "Direction_MainLight";
        hitpoint = "MainLight";
        selection = "LightFlare";
        size = 5;
        brightness = 3;
        period[] = {4.6, 2.4};
      };
    };
  };
  class Land_majak2 : Land_majak {
    model = "\ca\buildings\majak2";
    class Reflectors {
      class MainLight {
        color[] = {0.9, 0.8, 0.8, 1};
        ambient[] = {0.1, 0.1, 0.1, 1};
        position = "Source_MainLight";
        direction = "Direction_MainLight";
        hitpoint = "MainLight";
        selection = "LightFlare";
        size = 5;
        brightness = 3;
        period[] = {2.4, 4.6};
      };
    };
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\majak_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_wagon_tanker_posol : House {
    scope = 1;
    vehicleClass = "Misc";
    armor = 60;
    model = "\ori\train\wagon_tanker_posol";
    displayName = "$STR_WAGON_TANKER";
    icon = "\Ca\buildings2\data\Icons\icon_tankSmall_ca.paa";
    mapSize = 5.5;
    accuracy = 0.2;
    ladders[] = {{"start1", "end1"}, {"start2", "end2"}};
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ori\train\wreck_wagon_tanker_posol";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_wreck_wagon_tanker_posol : Ruins {
    scope = 1;
    vehicleClass = "Ruins";
    model = "\ori\train\wreck_wagon_tanker_posol";
    displayName = "$STR_WAGON_TANKER";
  };
  class Land_volcano : House {
    model = "ori\structures\tunel\volcano.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_autobusak : House {
    model = "ori\buildings\Autobusak.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_tv_bud : House {
    model = "ori\buildings\tv_bud.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_huge_block : House {
    model = "ori\buildings\huge_block.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_autosalon : House {
    model = "ori\buildings\Autosalon.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_big_church : House {
    model = "ori\buildings\big_church.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_big_banelak : House {
    model = "ori\buildings\Big_Panelak.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_bouda1_zima : House {
    model = "ori\buildings\bouda1_zima.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_bufet : House {
    model = "ori\buildings\Bufet.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_bus_depo : House {
    model = "ori\buildings\bus_depo.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_bus_stojan_bud : House {
    model = "ori\buildings\Bus_Stojan_Bud.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_cinzak_corner2 : House {
    model = "ori\buildings\Cinzak_corner2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_cinzak_corner : House {
    model = "ori\buildings\Cinzak_corner.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_cinzak_long : House {
    model = "ori\buildings\Cinzak_long.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_cinzak_long_centr : House {
    model = "ori\buildings\Cinzak_long_centr.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_cinzak_long_double : House {
    model = "ori\buildings\Cinzak_long_double.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_cinzak_roh2 : House {
    model = "ori\buildings\Cinzak_roh2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_cinzak_roh3 : House {
    model = "ori\buildings\Cinzak_roh3.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_cinzak_trojuhlenik : House {
    model = "ori\buildings\Cinzak_trojuhlenik.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_cisticka : House {
    model = "ori\buildings\cisticka.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_deutshe_mini : House {
    model = "ori\buildings\Deutshe_mini.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_domek01 : House {
    model = "ori\buildings\domek01.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_domek02 : House {
    model = "ori\buildings\domek02.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_domek03 : House {
    model = "ori\buildings\domek03.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_domek04 : House {
    model = "ori\buildings\domek04.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_domek05 : House {
    model = "ori\buildings\domek05.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_domek_hospoda : House {
    model = "ori\buildings\domek_hospoda.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_domek_vilka : House {
    model = "ori\buildings\domek_vilka.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_dum_mesto : House {
    model = "ori\buildings\Dum_mesto.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_dum_patrovy01c : House {
    model = "ori\buildings\dum_patrovy01c.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_dum_patrovy02 : House {
    model = "ori\buildings\dum_patrovy02.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_dum_patrovy03 : House {
    model = "ori\buildings\dum_patrovy03.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_dum_patrovy06 : House {
    model = "ori\buildings\dum_patrovy06.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_dum_patrovy_bez_vylohy : House {
    model = "ori\buildings\dum_patrovy_bez_vylohy.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_dum_rasovna : House {
    model = "ori\buildings\dum_rasovna.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_ensk_kostel : House {
    model = "ori\buildings\Ensk_kostel.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_galerie : House {
    model = "ori\buildings\Galerie.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_garaz_bez_tanku : House {
    model = "ori\buildings\garaz_bez_tanku.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_garaz_velka : House {
    model = "ori\buildings\Garaz_velka.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_hokej_stadion : House {
    model = "ori\buildings\hokej_stadion.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_hospoda : House {
    model = "ori\buildings\hospoda.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_hotel : House {
    model = "ori\buildings\Hotel.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_hotel_marcomio : House {
    model = "ori\buildings\Hotel_Marcomio.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_hotel_riviera1 : House {
    model = "ori\buildings\hotel_riviera1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_hotel_riviera2 : House {
    model = "ori\buildings\hotel_riviera2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_house1 : House {
    model = "ori\buildings\house1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_houseblock_d1_ex1 : House {
    model = "ori\buildings\HouseBlock_D1_ex1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_housev_2i_snow : House {
    model = "ori\buildings\HouseV_2I_snow.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_hrusevka : House {
    model = "ori\buildings\hrusevka.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_kasarna : House {
    model = "ori\buildings\kasarna.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_kasarna_brana : House {
    model = "ori\buildings\kasarna_brana.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_kasarna_prujezd : House {
    model = "ori\buildings\kasarna_prujezd.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_kasarna_rohova : House {
    model = "ori\buildings\kasarna_rohova.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_kiosk2 : House {
    model = "ori\buildings\Kiosk2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_konecna : House {
    model = "ori\buildings\konecna.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_malboro : House {
    model = "ori\buildings\Malboro.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_muzeum : House {
    model = "ori\buildings\Muzeum.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_nabrezi : House {
    model = "ori\buildings\nabrezi.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_nabrezi_najezd : House {
    model = "ori\buildings\nabrezi_najezd.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_nadrazi_sabina : House {
    model = "ori\buildings\Nadrazi_sabina.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_panelak : House {
    model = "ori\buildings\Panelak.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_parlament : House {
    model = "ori\buildings\Parlament.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_podloubi_double_low : House {
    model = "ori\buildings\Podloubi_double_low.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_podloubi_end_low_1 : House {
    model = "ori\buildings\Podloubi_End_Low_1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_podloubi_end_low_2 : House {
    model = "ori\buildings\Podloubi_End_Low_2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_posta : House {
    model = "ori\buildings\Posta.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_rybarna : House {
    model = "ori\buildings\Rybarna.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_sara_domek_sedy : House {
    model = "ori\buildings\Sara_domek_sedy.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_sara_domek_sedy_bez : House {
    model = "ori\buildings\Sara_domek_sedy_BEZ.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_shop : House {
    model = "ori\buildings\shop.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_shopping_bor : House {
    model = "ori\buildings\shopping_bor.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_shopping_sab1 : House {
    model = "ori\buildings\shopping_sab1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_shopping_sab2 : House {
    model = "ori\buildings\shopping_sab2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_shopping_sab5 : House {
    model = "ori\buildings\shopping_sab5.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_skola2 : House {
    model = "ori\buildings\Skola2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_skola : House {
    model = "ori\buildings\skola.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_skola_res : House {
    model = "ori\buildings\skola_res.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_spital : House {
    model = "ori\buildings\spital.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_stojan_bus : House {
    model = "ori\buildings\Stojan_Bus.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_teplarna : House {
    model = "ori\buildings\Teplarna.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_train_st1 : House {
    model = "ori\buildings\train_st1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_train_st2 : House {
    model = "ori\buildings\train_st2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_train_st2_bezzdi : House {
    model = "ori\buildings\train_st2_bezzdi.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_tram_depo : House {
    model = "ori\buildings\Tram_Depo.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_tv_tower : House {
    model = "ori\buildings\tv_tower.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_tv_tower_base : House {
    model = "ori\buildings\tv_tower_base.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_tv_towoer_mid : House {
    model = "ori\buildings\tv_towoer_mid.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_univerzita : House {
    model = "ori\buildings\Univerzita.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_veznica_kridlo : House {
    model = "ori\buildings\veznica_kridlo.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_veznica_middle : House {
    model = "ori\buildings\veznica_middle.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_veznica_vchod : House {
    model = "ori\buildings\veznica_vchod.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_vokzal_big : House {
    model = "ori\buildings\vokzal_big.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_water_pub : House {
    model = "ori\buildings\water pub.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_zachytka : House {
    model = "ori\buildings\zachytka.p3d";
    armor = 10000;
    scope = 1;
    ladders[] = {{"start1", "end1"}};
    accuracy = 0.2;
  };
  class Land_zachytka_nov : House {
    model = "ori\buildings\zachytka_nov.p3d";
    armor = 10000;
    scope = 1;
    ladders[] = {{"start1", "end1"}};
    accuracy = 0.2;
  };
  class Land_roh_nam : House {
    model = "ori\buildings\roh_nam.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_rov_nam : House {
    model = "ori\buildings\rov_nam.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_kitchen_svickova2 : House {
    model = "ori\misc\kitchen_svickova2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_piskoviste : House {
    model = "ca\misc\piskoviste.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_houpacka : House {
    model = "ca\misc\houpacka.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_memorialplanck : House {
    model = "ori\structures\statues\memorialplanck.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_grass : House {
    model = "ori\structures\tunel\grass.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_grass2 : House {
    model = "ori\structures\tunel\grass2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_nabrezi_5 : House {
    model = "ori\structures\tunel\nabrezi_5.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_bus_depo_geo2 : House {
    model = "ori\buildings\bus_depo_geo2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_bus_depo_geo1 : House {
    model = "ori\buildings\bus_depo_geo1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_nabrezi_4 : House {
    model = "ori\structures\tunel\nabrezi_4.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_parlament_geo2 : House {
    model = "ori\buildings\parlament_geo2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_parlament_geo1 : House {
    model = "ori\buildings\parlament_geo1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_shopping_sab1_geo2 : House {
    model = "ori\buildings\shopping_sab1_geo2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_shopping_sab1_geo3 : House {
    model = "ori\buildings\shopping_sab1_geo3.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_tunel_podchod_geo : House {
    model = "ori\structures\tunel\tunel_podchod_geo.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_tavi_wall_normal : House {
    model = "ori\structures\sector_walls\tavi_wall_normal.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_tavi_wall_tower : House {
    model = "ori\structures\sector_walls\tavi_wall_tower.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_tavi_wall_door : House {
    model = "ori\structures\sector_walls\tavi_wall_door.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_tavi_wall_hole : House {
    model = "ori\structures\sector_walls\tavi_wall_hole.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_avtovokzal : House {
    model = "ori\buildings\avtovokzal.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_flowershop : House {
    model = "ori\buildings\flowershop.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_kulata_prolezacka : House {
    model = "ori\misc\kulata_prolezacka.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_shopping_sab1_geo : House {
    model = "ori\buildings\shopping_sab1_geo.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_budky : House {
    model = "ori\structures\bratislav\budky.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_parlament_geo3 : House {
    model = "ori\buildings\parlament_geo3.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_muz_a_zena : House {
    model = "ori\structures\statues\muz_a_zena.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_zastavka : House {
    model = "ori\train\tram\zastavka.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_zastavka2 : House {
    model = "ori\train\tram\zastavka2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_nabrezi_2xx : House {
    model = "ori\structures\tunel\nabrezi_2xx.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_nabrezi_4x : House {
    model = "ori\structures\tunel\nabrezi_4x.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_nabrezi_2xx_corner : House {
    model = "ori\structures\tunel\nabrezi_2xx_corner.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_nabrezi_2x : House {
    model = "ori\structures\tunel\nabrezi_2x.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_nabrezi_3 : House {
    model = "ori\structures\tunel\nabrezi_3.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_nabrezi_1 : House {
    model = "ori\structures\tunel\nabrezi_1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_lenin_pod : House {
    model = "ori\structures\statues\lenin_pod.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_nabrezi_2_small : House {
    model = "ori\structures\tunel\nabrezi_2_small.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_nabrezi_2_small_2 : House {
    model = "ori\structures\tunel\nabrezi_2_small_2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_zvezda : House {
    model = "ori\structures\statues\zvezda.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_spital_geo : House {
    model = "ori\buildings\spital_geo.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_huge_block_geo : House {
    model = "ori\buildings\huge_block_geo.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_casino_geo : House {
    model = "ori\structures\tunel\casino_geo.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_helfenburk : House {
    model = "ori\buildings\helfenburk\helfenburk.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_helfenburk_cimburi : House {
    model = "ori\buildings\helfenburk\helfenburk_cimburi.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_helfenburk_brana : House {
    model = "ori\buildings\helfenburk\helfenburk_brana.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_helfenburk_zed : House {
    model = "ori\buildings\helfenburk\helfenburk_zed.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_terc : House {
    model = "ori\misc\terc.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_helfenburk_budova2 : House {
    model = "ori\buildings\helfenburk\helfenburk_budova2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_stand : House {
    model = "ori\roads\race_track\stand.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_tavi_destroyer : House {
    model = "ori\misc\tavi_destroyer.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_skala_molotov : House {
    model = "ori\buildings\skala_molotov.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_2 : House {
    model = "ori\buildings\npp\geo\2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_3 : House {
    model = "ori\buildings\npp\geo\3.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_4 : House {
    model = "ori\buildings\npp\geo\4.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_reaktor_part3 : House {
    model = "ori\buildings\npp\reaktor_part3.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_5 : House {
    model = "ori\buildings\npp\geo\5.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_reaktor_part2 : House {
    model = "ori\buildings\npp\reaktor_part2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_8 : House {
    model = "ori\buildings\npp\geo\8.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_6 : House {
    model = "ori\buildings\npp\geo\6.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_reaktor_part1 : House {
    model = "ori\buildings\npp\reaktor_part1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_7 : House {
    model = "ori\buildings\npp\geo\7.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_kabel_holder : House {
    model = "ori\structures\bratislav\kabel_holder.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_1 : House {
    model = "ori\buildings\npp\geo\1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_veznica_zabradli : House {
    model = "ori\buildings\veznica_zabradli.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_semafor : House {
    model = "ori\structures\traf_light\semafor.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
    destrType = "DestructTree";
  };
  class Land_ind_coltan_tunnel_ep1 : House {
    model = "CA\structures_e\Ind\Ind_Coltan_Mine\Ind_Coltan_Tunnel_EP1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
    destrType = "DestructNo";
  };
  class Land_Tav_Panelak3 : House {
    model = "\ori\buildings\tav_panelak3";
    armor = 10000;
    ladders[] = {{"start2", "end2"}, {"start1", "end1"}};
    animated = 1;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\panelak3_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
    class AnimationSources {
      class Dvere1 {
        animPeriod = 1;
        initPhase = 0;
      };
      class Dvere2 : Dvere1 {
      };
    };
    class UserActions {
      class OpenDoors1 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_O_DOOR";
        position = "osa_dvere1";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""Dvere1"" < 0.5";
        statement = "this animate [""Dvere1"", 1]";
      };
      class CloseDoors1 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_C_DOOR";
        position = "osa_dvere1";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""Dvere1"" >= 0.5";
        statement = "this animate [""Dvere1"", 0]";
      };
      class OpenDoors2 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_O_DOOR";
        position = "osa_dvere2";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""Dvere2"" < 0.5";
        statement = "this animate [""Dvere2"", 1]";
      };
      class CloseDoors2 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_C_DOOR";
        position = "osa_dvere2";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""Dvere2"" >= 0.5";
        statement = "this animate [""Dvere2"", 0]";
      };
    };
    actionBegin1 = "OpenDoors1";
    actionEnd1 = "OpenDoors1";
    actionBegin2 = "OpenDoors2";
    actionEnd2 = "OpenDoors2";
  };
  class Land_watertower1 : House {
    model = "\ori\buildings\watertower1";
    armor = 10000;
    ladders[] = {{"start", "end"}};
    animated = 1;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\panelak3_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_Tav_Panelak2 : House {
    model = "\ori\buildings\Tav_Panelak2";
    armor = 10000;
    ladders[] = {{"start", "end"}};
    animated = 1;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\panelak3_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_Tav_Panelak : House {
    model = "\ori\buildings\Tav_Panelak";
    armor = 10000;
    ladders[] = {{"start", "end"}};
    animated = 1;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\panelak3_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_budky2 : House {
    model = "\ori\structures\bratislav\budky2";
    armor = 10000;
    animated = 1;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\panelak3_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_pan_big_novi : House {
    model = "\ori\buildings\pan_big_novi";
    armor = 10000;
    animated = 1;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\panelak3_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_tav_houseblock_b1 : House {
    model = "\ori\buildings\tav_houseblock_b1";
    armor = 10000;
    animated = 1;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\panelak3_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_tav_houseblock_b4 : House {
    model = "\ori\buildings\tav_houseblock_b4";
    armor = 10000;
    animated = 1;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\panelak3_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_tav_houseblock_b4_in : House {
    model = "\ori\buildings\tav_houseblock_b4_in";
    armor = 10000;
    animated = 1;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\panelak3_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_tav_HouseV_2L : House {
    model = "\ori\buildings\tav_HouseV_2L";
    armor = 10000;
    animated = 1;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\panelak3_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_Domek_zluty_BEZ : House {
    model = "\ori\buildings\Domek_zluty_BEZ";
    armor = 10000;
    animated = 1;
    accuracy = 0.2;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\panelak3_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_small_bunker : House {
    model = "\ori\buildings\bunkers\small_bunker";
    armor = 10000;
    animated = 1;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\panelak3_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_Bulding_r : House {
    model = "\ori\buildings\riga_tower\Bulding_r";
    armor = 10000;
    animated = 1;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\panelak3_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_radio_box : House {
    model = "\ori\misc\radio_box";
    armor = 10000;
    animated = 1;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\panelak3_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_zombie_spawn : House {
    model = "\ori\misc\zombie_spawn";
    armor = 10000;
    animated = 1;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\panelak3_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_Plane_wreck : House {
    model = "\ori\wrecks\Plane_wreck";
    armor = 10000;
    animated = 1;
    class DestructionEffects : DestructionEffects {
      class Ruin1 {
        simulation = "ruin";
        type = "\ca\buildings\ruins\panelak3_ruins.p3d";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
      };
    };
  };
  class Land_kamaz : House {
    model = "\ori\vehicles\kamaz";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_kamaz_hasic : House {
    model = "\ori\vehicles\kamaz_hasic";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_zygul_wrecked : House {
    model = "\ori\wrecks\zygul_wrecked";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_sedan_weck : House {
    model = "\ori\wrecks\sedan_weck";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_Trabant_wreck : House {
    model = "\ori\wrecks\Trabant_wreck";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_tavi_destroyer_front : Strategic {
    model = "\ori\misc\tavi_destroyer_front";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_tavi_destroyer_back : Strategic {
    model = "\ori\misc\tavi_destroyer_back";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_camonet_nato_var1 : Strategic {
    model = "\ca\misc3\camonet_nato_var1";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_roadbarrier_light : Strategic {
    model = "\ca\data\library\roadbarrier_light";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_stan_east : Strategic {
    model = "\ca\buildings\tents\stan_east";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_stan : Strategic {
    model = "\ca\buildings\tents\stan";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_astan : Strategic {
    model = "\ca\buildings\tents\astan";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_tav_Barrack2 : Strategic {
    model = "\ori\buildings\tav_Barrack2";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
    class AnimationSources {
      class door {
        animPeriod = 1;
        initPhase = 0;
      };
    };
    class UserActions {
      class OpenDoors1 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_O_DOOR";
        position = "door_axis";
        radius = 3;
        onlyForPlayer = 0;
        condition = "this animationPhase ""door"" >= 0.5";
        statement = "this animate [""door"", 0]";
      };
      class CloseDoors1 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_C_DOOR";
        position = "door_axis";
        radius = 3;
        onlyForPlayer = 0;
        condition = "this animationPhase ""door"" < 0.5";
        statement = "this animate [""door"", 1]";
      };
    };
    actionBegin1 = "OpenDoors1";
    actionEnd1 = "OpenDoors1";
  };
  class Land_tav_tovarna2 : Strategic {
    model = "\ori\buildings\tav_tovarna2";
    ladders[] = {{"start1", "end1"}, {"start3", "end3"}, {"start4", "end4"}, {"start5", "end5"}};
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_tav_Ind_Pec_03_nov : House {
    model = "\ori\buildings\tav_Ind_Pec_03_nov";
    armor = 10000;
    animated = 1;
    ladders[] = {{"start1", "end1"}, {"start2", "end2"}, {"start3", "end3"}, {"start4", "end4"}};
  };
  class Land_tav_Ind_Pec_03 : House {
    model = "\ori\buildings\tav_Ind_Pec_03";
    armor = 10000;
    animated = 1;
    ladders[] = {{"start1", "end1"}, {"start2", "end2"}, {"start3", "end3"}, {"start4", "end4"}};
  };
  class Land_tav_HouseV2_01B : Strategic {
    model = "\ori\buildings\tav_HouseV2_01B";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_wf_depot : Strategic {
    model = "\ca\misc3\wf\wf_depot";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_wf_bunker : Strategic {
    model = "\ca\misc3\wf\wf_bunker";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_big_panelak : House {
    model = "\ori\buildings\big_panelak.p3d";
    armor = 10000;
    animated = 1;
    ladders[] = {{"start2", "end2"}, {"start1", "end1"}};
    class AnimationSources {
      class door1 {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class door2 : door1 {
      };
    };
    class UserActions {
      class OpenDoors1 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_O_DOOR";
        position = "pos_door1";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""door1"" < 0.5";
        statement = "this animate [""door1"", 1]";
      };
      class CloseDoors1 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_C_DOOR";
        position = "pos_door1";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""door1"" >= 0.5";
        statement = "this animate [""door1"", 0]";
      };
      class OpenDoors2 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_O_DOOR";
        position = "pos_door2";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""door2"" < 0.5";
        statement = "this animate [""door2"", 1]";
      };
      class CloseDoors2 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_C_DOOR";
        position = "pos_door2";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""door2"" >= 0.5";
        statement = "this animate [""door2"", 0]";
      };
    };
  };
  class Land_autobusik : House {
    model = "\ori\wrecks\autobusik";
    armor = 10000;
    animated = 1;
  };
  class Land_buchanka : House {
    model = "\ori\wrecks\buchanka";
    armor = 10000;
    animated = 1;
  };
  class Land_buchankamedi : House {
    model = "\ori\wrecks\buchankamedi";
    armor = 10000;
    animated = 1;
  };
  class Land_buchankamil : House {
    model = "\ori\wrecks\buchankamil";
    armor = 10000;
    animated = 1;
  };
  class Land_buldozer : House {
    model = "\ori\wrecks\buldozer";
    armor = 10000;
    animated = 1;
  };
  class Land_cisterna : House {
    model = "\ori\wrecks\cisterna";
    armor = 10000;
    animated = 1;
  };
  class Land_cisterna_mleko : House {
    model = "\ori\wrecks\cisterna_mleko";
    armor = 10000;
    animated = 1;
  };
  class Land_cisternickaprivez : House {
    model = "\ori\wrecks\cisternickaprivez";
    armor = 10000;
    animated = 1;
  };
  class Land_gazik : House {
    model = "\ori\wrecks\gazik";
    armor = 10000;
    animated = 1;
  };
  class Land_kompresor : House {
    model = "\ori\wrecks\kompresor";
    armor = 10000;
    animated = 1;
  };
  class Land_moskvic : House {
    model = "\ori\wrecks\moskvic";
    armor = 10000;
    animated = 1;
  };
  class Land_moskvic_side : House {
    model = "\ori\wrecks\moskvic_side";
    armor = 10000;
    animated = 1;
  };
  class Land_prives : House {
    model = "\ori\wrecks\prives";
    armor = 10000;
    animated = 1;
  };
  class Land_prives_down : House {
    model = "\ori\wrecks\prives_down";
    armor = 10000;
    animated = 1;
  };
  class Land_tahac : House {
    model = "\ori\wrecks\tahac";
    armor = 10000;
    animated = 1;
  };
  class Land_traktorbezkola : House {
    model = "\ori\wrecks\traktorbezkola";
    armor = 10000;
    animated = 1;
  };
  class Land_traktorkabina : House {
    model = "\ori\wrecks\traktorkabina";
    armor = 10000;
    animated = 1;
  };
  class Land_traktorpredek : House {
    model = "\ori\wrecks\traktorpredek";
    armor = 10000;
    animated = 1;
  };
  class Land_valec : House {
    model = "\ori\wrecks\valec";
    armor = 10000;
    animated = 1;
  };
  class Land_zaporozec : House {
    model = "\ori\wrecks\zaporozec";
    armor = 10000;
    animated = 1;
  };
  class Land_zaporozeccrash : House {
    model = "\ori\wrecks\zaporozeccrash";
    armor = 10000;
    animated = 1;
  };
  class Land_tavi_wall_corner : House {
    model = "\ori\structures\sector_walls\tavi_wall_corner";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_guardhouse : House {
    model = "\ori\buildings\tav_guardhouse.p3d";
    armor = 10000;
    animated = 1;
    class AnimationSources {
      class door1 {
        source = "user";
        animPeriod = 1;
        initPhase = 0;
      };
      class door2 : door1 {
      };
    };
    class UserActions {
      class OpenDoors1 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_O_DOOR";
        position = "pos_door1";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""door1"" < 0.5";
        statement = "this animate [""door1"", 1]";
      };
      class CloseDoors1 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_C_DOOR";
        position = "pos_door1";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""door1"" >= 0.5";
        statement = "this animate [""door1"", 0]";
      };
      class OpenDoors2 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_O_DOOR";
        position = "pos_door2";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""door2"" < 0.5";
        statement = "this animate [""door2"", 1]";
      };
      class CloseDoors2 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_C_DOOR";
        position = "pos_door2";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""door2"" >= 0.5";
        statement = "this animate [""door2"", 0]";
      };
    };
  };
  class Land_small_panelak : House {
    model = "\ori\buildings\small_panelak";
    armor = 10000;
    animated = 1;
    accuracy = 0.2;
    class AnimationSources {
      class door1 {
        animPeriod = 1;
        initPhase = 0;
        source = "user";
      };
      class door2 : door1 {
      };
      class door_inter : door1 {
      };
      class lift {
        animPeriod = 25;
        initPhase = 0;
        source = "user";
      };
    };
    class UserActions {
      class OpenDoors1 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_O_DOOR";
        position = "pos_door1";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""door1"" < 0.5 and this animationPhase ""lift"" == 0";
        statement = "this animate [""door1"", 1] and this animate [""door_inter"", 1]";
      };
      class CloseDoors1 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_C_DOOR";
        position = "pos_door1";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""door1"" > 0.5 and this animationPhase ""lift"" == 0";
        statement = "this animate [""door1"", 0] and this animate [""door_inter"", 0]";
      };
      class OpenDoors2 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_O_DOOR";
        position = "pos_door2";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""door2"" < 0.5 and this animationPhase ""lift"" == 1";
        statement = "this animate [""door2"", 1] and this animate [""door_inter"", 1]";
      };
      class CloseDoors2 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_C_DOOR";
        position = "pos_door2";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""door2"" > 0.5 and this animationPhase ""lift"" == 1";
        statement = "this animate [""door2"", 0] and this animate [""door_inter"", 0]";
      };
      class CallDown {
        displayName = "Call lift";
        position = "pos_door1";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""lift"" == 1";
        statement = "this animate [""lift"", 0] and this animate [""door1"", 0] and this animate [""door2"", 0] and this animate [""door2_inter"", 0]";
      };
      class CallUp {
        displayName = "Call lift";
        position = "pos_door2";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""lift"" == 0";
        statement = "this animate [""lift"", 1] and this animate [""door1"", 0] and this animate [""door2"", 0] and this animate [""door2_inter"", 0]";
      };
      class LiftUp {
        displayName = "Go up";
        position = "pos_lift";
        radius = 1;
        onlyForPlayer = 0;
        condition = "this animationPhase ""lift"" == 0";
        statement = "this animate [""door1"", 0] and this animate [""door_inter"", 0] and this animate [""lift"", 1]";
      };
      class LiftDown {
        displayName = "Go down";
        position = "pos_door2";
        radius = 2.5;
        onlyForPlayer = 0;
        condition = "this animationPhase ""lift"" == 1";
        statement = "this animate [""door2"", 0] and this animate [""door_inter"", 0] and this animate [""lift"", 0]";
      };
    };
  };
  class Land_ori_tmz_top : House {
    model = "\ori\buildings\ori_tmz\ori_tmz_top.p3d";
    armor = 10000;
    animated = 1;
    ladders[] = {{"start1", "end1"}, {"start2", "end2"}};
  };
  class Land_ori_tmz_base : House {
    model = "\ori\buildings\ori_tmz\ori_tmz_base.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_ori_tmz_tracks : House {
    model = "\ori\buildings\ori_tmz\ori_tmz_tracks.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_ori_tmz_rotor : House {
    model = "\ori\buildings\ori_tmz\ori_tmz_rotor.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_ori_tmz_front : House {
    model = "\ori\buildings\ori_tmz\ori_tmz_front.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_ori_tmz_back : House {
    model = "\ori\buildings\ori_tmz\ori_tmz_back.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_ah665 : House {
    model = "\ori\buildings\tav_ah665.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_nov_Ind_Pec_02_mig : House {
    model = "\ori\buildings\nov_Ind_Pec_02_mig.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_nov_Ind_Pec_02_tanky : House {
    model = "\ori\buildings\nov_Ind_Pec_02_tanky.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_nov_Ind_Pec_02_v3s : House {
    model = "\ori\buildings\nov_Ind_Pec_02_v3s.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_nov_Ind_SawMill : House {
    model = "\ori\buildings\nov_Ind_SawMill.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_bunker_b1 : House {
    model = "\ori\buildings\tav_bunker_b1.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_cernja_basnja : House {
    model = "\ori\buildings\tav_cernja_basnja.p3d";
    armor = 10000;
    animated = 1;
    class AnimationSources {
      class kolo1 {
        animPeriod = 1;
        initPhase = 0;
        source = "user";
      };
      class kolo2 : kolo1 {
      };
      class kolo3 : kolo1 {
      };
      class motor : kolo1 {
      };
    };
  };
  class Land_tav_cinzak_long_centr : House {
    model = "\ori\buildings\tav_cinzak_long_centr.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_HouseBlock_D1_ex1 : House {
    model = "\ori\buildings\tav_HouseBlock_D1_ex1.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_HouseBlock_D1_ex2 : House {
    model = "\ori\buildings\tav_HouseBlock_D1_ex2.p3d";
    armor = 10000;
    animated = 1;
    class AnimationSources {
      class ani_door1 {
        animPeriod = 0.05;
        initPhase = 0;
        source = "user";
      };
    };
  };
  class Land_tav_hut_old02 : House {
    model = "\ori\buildings\tav_hut_old02.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_Ind_Pec_02_mig : House {
    model = "\ori\buildings\tav_Ind_Pec_02_mig.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_Ind_Pec_02_tanky : House {
    model = "\ori\buildings\tav_Ind_Pec_02_tanky.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_Ind_Pec_02_v3s : House {
    model = "\ori\buildings\tav_Ind_Pec_02_v3s.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_Ind_SawMill : House {
    model = "\ori\buildings\tav_Ind_SawMill.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_obelisk : House {
    model = "\ori\buildings\tav_obelisk.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_rozhledna : House {
    model = "\ori\buildings\tav_rozhledna.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_sabina_nad_1 : House {
    model = "\ori\buildings\tav_sabina_nad_1.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_sabina_nad_2 : House {
    model = "\ori\buildings\tav_sabina_nad_2.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_sabina_nad_3 : House {
    model = "\ori\buildings\tav_sabina_nad_3.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_sabina_nad_4 : House {
    model = "\ori\buildings\tav_sabina_nad_4.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_sabina_nad_station : House {
    model = "\ori\buildings\tav_sabina_nad_station.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_synagoga : House {
    model = "\ori\buildings\tav_synagoga.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_tunel1 : House {
    model = "\ori\buildings\tav_tunel1.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_tunel2 : House {
    model = "\ori\buildings\tav_tunel2.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_tunel3 : House {
    model = "\ori\buildings\tav_tunel3.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_tunel4 : House {
    model = "\ori\buildings\tav_tunel4.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_geo_20x20_vert : House {
    model = "\ori\buildings\holders\geo_20x20_vert.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_ori_cover : House {
    model = "\ori\buildings\holders\ori_cover.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_ori_cover_hole : House {
    model = "\ori\buildings\holders\ori_cover_hole.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_skola_wall_small : House {
    model = "\ori\buildings\holders\skola_wall_small.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_ori_belaz : House {
    model = "\ori\wrecks\ori_belaz.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_ori_kombajn : House {
    model = "\ori\wrecks\ori_kombajn.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_ori_trolejbus : House {
    model = "\ori\wrecks\ori_trolejbus.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_susbmarine : House {
    model = "\ori\wrecks\tav_susbmarine.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_dinosaur_kostra : House {
    model = "\ori\misc\dinosaur_kostra.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_pioner_lager_sign : House {
    model = "\ori\misc\pioner_lager_sign.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_casino_geo2 : House {
    model = "\ori\structures\tunel\casino_geo2.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_most_old_mostar : House {
    model = "\ori\roads\most_old_mostar.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_most_old_mostar_geo : House {
    model = "\ori\roads\most_old_mostar_geo.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_most_trikut1 : House {
    model = "\ori\roads\most_trikut1.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_most_trikut2 : House {
    model = "\ori\roads\most_trikut2.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_most_trikut3 : House {
    model = "\ori\roads\most_trikut3.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_most_trikut4 : House {
    model = "\ori\roads\most_trikut4.p3d";
    armor = 10000;
    animated = 1;
  };
  class Land_tav_cargo_container : House {
    model = "\ori\misc\tav_cargo_container.p3d";
    armor = 10000;
    animated = 1;
    class AnimationSources {
      class door_1_1 {
        animPeriod = 2;
        initPhase = 1;
      };
      class door_1_2 : door_1_1 {
      };
    };
    class UserActions {
      class OpenDoors1 {
        displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_O_DOOR";
        position = "Door_Action1";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""door_1_1"" >= 0.5";
        statement = "this animate [""door_1_1"", 0];this animate [""door_1_2"", 0]";
      };
      class CloseDoors1 {
        displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
        displayName = "$STR_DN_OUT_C_DOOR";
        position = "Door_Action1";
        radius = 2;
        onlyForPlayer = 1;
        condition = "this animationPhase ""door_1_1"" < 0.5";
        statement = "this animate [""door_1_1"", 1];this animate [""door_1_2"", 1]";
      };
    };
  };
  class Land_build_arh_part1 : House {
    model = "ori\buildings\npp\build_arh_part1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_build_arh_part2 : House {
    model = "ori\buildings\npp\build_arh_part2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_build_exp_01 : House {
    model = "ori\buildings\npp\build_exp_01.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_build_hall : House {
    model = "ori\buildings\npp\build_hall.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_build_Start_admin_part1 : House {
    model = "ori\buildings\npp\build_Start_admin_part1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_build_Start_admin_part2 : House {
    model = "ori\buildings\npp\build_Start_admin_part2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_hall_lev1_03 : House {
    model = "ori\buildings\npp\hall_lev1_03.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_hall_lev3_03 : House {
    model = "ori\buildings\npp\hall_lev3_03.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_elek_komin : House {
    model = "ori\buildings\npp\Elek_komin.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_pipeline_rad : House {
    model = "ori\buildings\npp\Pipeline_rad.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_reaktor : House {
    model = "ori\buildings\npp\Reaktor.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_rozvodna1 : House {
    model = "ori\buildings\npp\rozvodna1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_rozvodna2 : House {
    model = "ori\buildings\npp\rozvodna2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_tavi_tower : House {
    model = "ori\buildings\npp\tavi_tower.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_r1 : House {
    model = "ori\buildings\npp\r1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_r2 : House {
    model = "ori\buildings\npp\r2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_r3 : House {
    model = "ori\buildings\npp\r3.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_r4 : House {
    model = "ori\buildings\npp\r4.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_r5 : House {
    model = "ori\buildings\npp\r5.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_r6 : House {
    model = "ori\buildings\npp\r6.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_r7 : House {
    model = "ori\buildings\npp\r7.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_r8 : House {
    model = "ori\buildings\npp\r8.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_r9 : House {
    model = "ori\buildings\npp\r9.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_r10 : House {
    model = "ori\buildings\npp\r10.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_r11 : House {
    model = "ori\buildings\npp\r11.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_r12 : House {
    model = "ori\buildings\npp\r12.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_r13 : House {
    model = "ori\buildings\npp\r13.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_r14 : House {
    model = "ori\buildings\npp\r14.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_r15 : House {
    model = "ori\buildings\npp\r15.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_r16 : House {
    model = "ori\buildings\npp\r16.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_casino_1 : House {
    model = "ori\buildings\casino_1.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_casino_2 : House {
    model = "ori\buildings\casino_2.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_casino_3 : House {
    model = "ori\buildings\casino_3.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_casino_4 : House {
    model = "ori\buildings\casino_4.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_casino_5 : House {
    model = "ori\buildings\casino_5.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_casino_6 : House {
    model = "ori\buildings\casino_6.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
  class Land_casino_7 : House {
    model = "ori\buildings\casino_7.p3d";
    armor = 10000;
    scope = 1;
    accuracy = 0.2;
  };
};
