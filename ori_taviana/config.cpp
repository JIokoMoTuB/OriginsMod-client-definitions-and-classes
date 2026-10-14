class CfgPatches {
  class ori_taviana {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"CAData", "Chernarus", "CABuildings", "CABuildings2", "CAMisc", "CAMisc2", "CAMisc3", "CAStructures"};
    version = "3.7";
    fileName = "ori_taviana.pbo";
    author = "OriginsMod Team";
    mail = "";
  };
};
class CfgWorlds {
  class DefaultWorld {
    class Weather;
  };
  class CAWorld : DefaultWorld {
    class Grid {
    };
    class DayLightingBrightAlmost;
    class DayLightingRainy;
    class DefaultClutter;
    class Weather : Weather {
      class Lighting;
    };
  };
  class DefaultLighting;
  class Taviana : CAWorld {
    class CfgEnvSounds;
    access = 3;
    worldId = 4;
    cutscenes[] = {};
    description = "$STR_tavi";
    worldName = "ori\taviana\taviana.wrp";
    pictureShot = "ori\taviana\data\tav_picture_ca.paa";
    icon = "";
    pictureMap = "";
    plateFormat = "PT$ - #####";
    plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
    centerPosition[] = {5120, 5120, 200};
    seagullPos[] = {2720, 2462, 500};
    longitude = 18.9404;
    latitude = 55.8383;
    LandGrid = 12;
    startTime = "06:00";
    startDate = "15/10/1987";
    startWeather = 0.1;
    startFog = 0;
    forecastWeather = 0.4;
    forecastFog = 0;
    clutterGrid = 1;
    clutterDist = 150;
    noDetailDist = 40;
    fullDetailDist = 15;
    midDetailTexture = "ca\utes\data\ut_middle_mco.paa";
    minTreesInForestSquare = 2;
    minRocksInRockSquare = 2;
    class Subdivision {
      class Fractal {
        rougness = 10;
        maxRoad = 0.2;
        maxTrack = 1;
        maxSlopeFactor = 0.05;
      };
      class WhiteNoise {
        rougness = 5;
        maxRoad = 0.1;
        maxTrack = 0.5;
        maxSlopeFactor = 0.025;
      };
      minY = -0;
      minSlope = 0.02;
    };
    ilsPosition[] = {16516, 11282};
    ilsDirection[] = {0, 0.099, 1};
    ilsTaxiIn[] = {16515, 10210, 16520, 10187, 16545, 10174, 16639, 10175, 16664, 10207, 16664, 10806};
    ilsTaxiOff[] = {16664, 10806, 16666, 11381, 16592, 11394, 16515, 11384};
    class SecondaryAirports {
      class Jaroslavski {
        ilsPosition[] = {9943, 18680};
        ilsDirection[] = {-0.4384, 0.156, 0.8988};
        ilsTaxiIn[] = {10449, 17643, 10464, 17627, 10488, 17628, 10575, 17671, 10585, 17708, 10321, 18247};
        ilsTaxiOff[] = {10321, 18247, 10077, 18749, 10036, 18764, 9956, 18725, 9939, 18703, 9949, 18669};
      };
      class Krasnoznamensk {
        ilsPosition[] = {7656, 7669};
        ilsDirection[] = {0.788, 0.156, -0.6157};
        ilsTaxiIn[] = {6726, 8395, 6715, 8414, 6721, 8436, 6777, 8507, 6817, 8514, 7259, 8166};
        ilsTaxiOff[] = {7259, 8166, 7738, 7793, 7743, 7762, 7677, 7679, 7650, 7676, 7625, 7692};
      };
    };
    class Sounds {
      sounds[] = {};
    };
    class EnvSounds : CfgEnvSounds {
      class Sea {
        sound[] = {"\ca\Sounds\Enviroment\wave_break_01", 0.01, 1};
        volume = "sea";
        name = "Sea";
        soundNight[] = {"\ca\Sounds\Enviroment\wave_break_02", 0.01, 1};
      };
      class Rain {
        sound[] = {"\Ca\sounds\Ambient\rain\rain_hard1", 0.177828, 1};
        volume = "rain";
        name = "Rain";
        soundNight[] = {"\Ca\sounds\Ambient\rain\rain_hard1", 0.177828, 1};
      };
      class Trees {
        name = "Trees";
        sound[] = {"", 0.000177828, 1};
        volume = "trees*(1-rain)*(1-night)";
      };
      class Hills {
        name = "Hills";
        sound[] = {"", 0.000177828, 1};
        volume = "hills";
      };
      class Wind {
        name = "Wind";
        sound[] = {"", 0.000177828, 1};
        volume = "(1-hills)*windy*0.5";
      };
      class WindForestHigh {
        name = "WindForestHigh";
        sound[] = {"ca\sounds\Ambient\forest\wind-forest-1", 0.0398107, 1};
        volume = "forest*(windy factor[0,1])*(0.1+(hills factor[0,1])*0.9)-(night*0.25)";
      };
      class WindNoForestHigh {
        name = "WindNoForestHigh";
        sound[] = {"ca\sounds\Ambient\forest\wind-global-2", 0.0398107, 1};
        volume = "(1-forest)*(windy factor[0,1])*(0.1+(hills factor[0,1])*0.9)-(night*0.25)";
      };
      class Meadows {
        sound[] = {"\ca\sounds\Ambient\meadows\wind-meadow-2", 0.0236228, 1};
        name = "Meadows";
        volume = "(1-forest)*(1-houses)*(1-night)*(1-sea)";
      };
      class MeadowsRnd {
        sound[] = {"\ca\sounds\Ambient\meadows\wind-meadow-2", 0.0001, 1};
        name = "MeadowsRnd";
        volume = "(1-forest)*(1-houses)*(1-night)*(1-sea)";
        randSamp1[] = {"ca\sounds\animals\crickets06", 100, 1, 25, 0.05, 5, 15, 22};
        randSamp2[] = {"ca\sounds\animals\f_lark1", 210, 1, 25, 0.1, 8, 15, 20};
        randSamp3[] = {"ca\sounds\animals\f_lark2", 210, 1, 25, 0.1, 10, 15, 25};
        randSamp4[] = {"ca\sounds\Ambient\meadows\meadow_sfx_04_crickets", 0.01, 1, 25, 0.15, 15, 30, 40};
        randSamp5[] = {"ca\sounds\Ambient\meadows\meadow_sfx_05_crickets", 0.0056, 1, 25, 0.1, 8, 15, 30};
        randSamp6[] = {"ca\sounds\Ambient\meadows\meadow_sfx_06", 0.01, 1, 25, 0.1, 9, 17, 25};
        randSamp7[] = {"ca\sounds\animals\f_lark3", 100, 1, 25, 0.05, 8, 16, 26};
        randSamp8[] = {"ca\sounds\animals\f_lark4", 100, 1, 25, 0.1, 12, 16, 26};
        randSamp9[] = {"ca\sounds\animals\f_lark5", 100, 1, 25, 0.1, 8, 16, 26};
        randSamp10[] = {"ca\sounds\animals\f_lark6", 100, 1, 25, 0.1, 12, 16, 26};
        randSamp11[] = {"ca\sounds\animals\f_lark7", 100, 1, 25, 0.05, 8, 16, 36};
        random[] = {"randSamp1", "randSamp2", "randSamp3", "randSamp4", "randSamp5", "randSamp6", "randSamp7", "randSamp8", "randSamp9", "randSamp10", "randSamp11"};
      };
      class MeadowsNight {
        sound[] = {"\ca\sounds\Ambient\meadows\wind-meadow-2", 0.0157828, 1};
        name = "MeadowsNight";
        volume = "(1-forest)*(1-houses)*night*(1-sea)";
        randSamp1[] = {"ca\sounds\Ambient\meadows\meadow_sfx_01", 0.4, 1, 25, 0.15, 29, 35, 49};
        randSamp2[] = {"ca\sounds\Ambient\meadows\meadow_sfx_02", 0.4, 1, 25, 0.15, 17, 21, 27};
        randSamp3[] = {"ca\sounds\Ambient\meadows\meadow_sfx_03", 0.4, 1, 25, 0.15, 15, 30, 40};
        randSamp4[] = {"ca\sounds\Ambient\meadows\meadow_sfx_04_crickets", 0.01, 1, 25, 0.15, 15, 30, 40};
        randSamp5[] = {"ca\sounds\Ambient\meadows\meadow_sfx_05_crickets", 0.00562341, 1, 25, 0.1, 8, 15, 20};
        random[] = {"randSamp1", "randSamp2", "randSamp3", "randSamp4", "randSamp5"};
      };
      class ForestNight {
        name = "ForestNight";
        sound[] = {"ca\sounds\Ambient\forest\forest-night-1", 0.0162341, 1};
        volume = "forest*night*windy";
      };
      class ForestNightRnd {
        name = "ForestNightRnd";
        sound[] = {"ca\sounds\Ambient\forest\forest-night-1", 0.0001, 1};
        volume = "2*forest*night";
        randSamp1[] = {"ca\sounds\Ambient\forest\forest-night-sfx-1", 1.2, 1, 25, 0.15, 8, 15, 20};
        randSamp2[] = {"ca\sounds\Ambient\forest\forest-night-sfx-2", 1.2, 1, 25, 0.05, 8, 15, 30};
        randSamp3[] = {"ca\sounds\Ambient\forest\forest-sfx-10bird-flapping", 1.2, 1, 25, 0.09, 15, 30, 40};
        randSamp4[] = {"ca\sounds\Ambient\forest\forest-sfx-11holub-flapping", 1.2, 1, 25, 0.1, 15, 30, 40};
        randSamp5[] = {"ca\sounds\Ambient\forest\forest-sfx-1", 1.15623, 1, 25, 0.08, 8, 15, 20};
        randSamp6[] = {"ca\sounds\Ambient\forest\forest-sfx-2", 1.15623, 1, 25, 0.08, 8, 10, 20};
        randSamp7[] = {"ca\sounds\Ambient\forest\forest-sfx-3", 1.15623, 1, 25, 0.08, 8, 10, 20};
        randSamp8[] = {"ca\sounds\Ambient\forest\forest-sfx-4", 1.15623, 1, 25, 0.08, 8, 10, 20};
        randSamp9[] = {"ca\sounds\Ambient\forest\forest-night-sfx-2", 1, 1, 25, 0.1, 8, 15, 30};
        random[] = {"randSamp1", "randSamp2", "randSamp3", "randSamp4", "randSamp5", "randSamp6", "randSamp7", "randSamp8", "randSamp9"};
      };
      class Forest {
        name = "Forest";
        sound[] = {"ca\sounds\Ambient\forest\forest-day-2", 0.0198107, 1};
        volume = "forest*(1-night)*windy";
      };
      class ForestRnd {
        name = "ForestRnd";
        sound[] = {"ca\sounds\Ambient\forest\forest-day-2", 0.0001, 1};
        volume = "forest*(1-night)";
        randSamp12[] = {"ca\sounds\Ambient\forest\forest-sfx-13vetev", 1, 1, 30, 0.03, 10, 20, 30};
        randSamp11[] = {"ca\sounds\Ambient\forest\forest-sfx-9bird", 1, 1, 30, 0.14, 5, 8, 10};
        randSamp10[] = {"ca\sounds\Ambient\forest\forest-sfx-12datel", 1, 1, 30, 0.125, 10, 20, 40};
        randSamp0[] = {"ca\sounds\Ambient\forest\forest-sfx-5bird", 1, 1, 30, 0.13, 4, 8, 12};
        randSamp1[] = {"ca\sounds\Ambient\forest\forest-sfx-6bird", 1, 1, 30, 0.125, 4, 8, 12};
        randSamp2[] = {"ca\sounds\Ambient\forest\forest-sfx-7bird", 1, 1, 30, 0.125, 4, 8, 12};
        randSamp3[] = {"ca\sounds\Ambient\forest\forest-sfx-8bird", 1, 1, 30, 0.1, 4, 8, 12};
        randSamp8[] = {"ca\sounds\Ambient\forest\forest-sfx-10bird-flapping", 1, 1, 30, 0.04, 10, 20, 40};
        randSamp9[] = {"ca\sounds\Ambient\forest\forest-sfx-11holub-flapping", 1, 1, 30, 0.04, 10, 20, 40};
        randSamp4[] = {"ca\sounds\Ambient\forest\forest-sfx-1", 1, 1, 30, 0.025, 4, 8, 10};
        randSamp5[] = {"ca\sounds\Ambient\forest\forest-sfx-2", 1, 1, 30, 0.03, 4, 8, 10};
        randSamp6[] = {"ca\sounds\Ambient\forest\forest-sfx-3", 1, 1, 30, 0.055, 4, 8, 10};
        randSamp7[] = {"ca\sounds\Ambient\forest\forest-sfx-4", 1, 1, 30, 0.035, 4, 8, 10};
        random[] = {"randSamp11", "randSamp10", "randSamp0", "randSamp1", "randSamp2", "randSamp3", "randSamp8", "randSamp9", "randSamp4", "randSamp5", "randSamp6", "randSamp7", "randSamp12"};
      };
      class Houses {
        name = "Houses";
        sound[] = {"ca\sounds\Ambient\houses\house-1", 0.01, 1};
        volume = "(houses-0.75)*4";
        randSamp11[] = {"ca\sounds\Ambient\houses\houses-sfx-07", 0.177828, 1, 25, 0.077, 10, 25, 40};
        randSamp10[] = {"ca\sounds\Ambient\houses\houses-sfx-08", 0.177828, 1, 25, 0.077, 10, 25, 40};
        randSamp0[] = {"ca\sounds\Ambient\houses\houses-sfx-09", 0.177828, 1, 25, 0.077, 10, 25, 40};
        randSamp1[] = {"ca\sounds\Ambient\houses\houses-sfx-04", 0.177828, 1, 25, 0.077, 10, 35, 60};
        randSamp2[] = {"ca\sounds\Ambient\houses\houses-sfx-05", 0.177828, 1, 25, 0.077, 10, 25, 40};
        randSamp3[] = {"ca\sounds\Ambient\houses\houses-sfx-12", 0.177828, 1, 25, 0.077, 10, 25, 40};
        randSamp8[] = {"ca\sounds\Ambient\houses\houses-sfx-07", 0.177828, 1, 25, 0.077, 10, 55, 80};
        randSamp9[] = {"ca\sounds\Ambient\houses\houses-sfx-08", 0.177828, 1, 25, 0.077, 20, 30, 40};
        randSamp4[] = {"ca\sounds\Ambient\houses\houses-sfx-09", 0.177828, 1, 25, 0.077, 10, 25, 40};
        randSamp5[] = {"ca\sounds\Ambient\houses\houses-sfx-08", 0.177828, 1, 25, 0.077, 10, 75, 100};
        randSamp6[] = {"ca\sounds\Ambient\houses\houses-sfx-04", 0.177828, 1, 25, 0.077, 10, 25, 70};
        randSamp7[] = {"ca\sounds\Ambient\houses\houses-sfx-12", 0.177828, 1, 25, 0.077, 10, 25, 40};
        random[] = {"randSamp11", "randSamp10", "randSamp0", "randSamp1", "randSamp2", "randSamp3", "randSamp8", "randSamp9", "randSamp4", "randSamp5", "randSamp6", "randSamp7"};
      };
    };
    class Animation {
      vehicles[] = {};
    };
    class Grid : Grid {
      offsetX = 0;
      offsetY = 0;
      class Zoom1 {
        zoomMax = 0.15;
        format = "XY";
        formatX = "000";
        formatY = "000";
        stepX = 100;
        stepY = 100;
      };
      class Zoom2 {
        zoomMax = 0.85;
        format = "XY";
        formatX = "00";
        formatY = "00";
        stepX = 1000;
        stepY = 1000;
      };
      class Zoom3 {
        zoomMax = 1e+30;
        format = "XY";
        formatX = "0";
        formatY = "0";
        stepX = 10000;
        stepY = 10000;
      };
    };
    class Lighting : DefaultLighting {
      groundReflection[] = {0.06, 0.06, 0.03};
    };
    class DayLightingBrightAlmost : DayLightingBrightAlmost {
      deepNight[] = {-15, {0.05, 0.05, 0.06}, {0.001, 0.001, 0.002}, {0.02, 0.02, 0.05}, {0.003, 0.003, 0.003}, {0.0001, 0.0001, 0.0002}, {0.0001, 0.0001, 0.0002}, 0};
      fullNight[] = {-5, {0.05, 0.05, 0.05}, {0.02, 0.02, 0.02}, {0.04, 0.04, 0.04}, {0.04, 0.04, 0.04}, {0.01, 0.01, 0.02}, {0.08, 0.06, 0.06}, 0};
      sunMoon[] = {-3.75, {0.045, 0.04, 0.04}, {0.04, 0.04, 0.04}, {0.045, 0.04, 0.04}, {0.04, 0.04, 0.04}, {0.04, 0.035, 0.04}, {0.1, 0.08, 0.09}, 0.5};
      earlySun[] = {-2.5, {0.12, 0.1, 0.1}, {0.08, 0.06, 0.07}, {0.12, 0.1, 0.1}, {0.08, 0.06, 0.07}, {0.08, 0.07, 0.08}, {0.1, 0.1, 0.12}, 1};
      sunrise[] = {0, {{0.7, 0.45, 0.45}, "5.16+(-4)"}, {{0.07, 0.09, 0.12}, "4.0+(-4)"}, {{0.6, 0.47, 0.25}, "4.66+(-4)"}, {{0.1, 0.09, 0.1}, "4.3+(-4)"}, {{0.5, 0.4, 0.4}, "6.49+(-4)"}, {{0.88, 0.51, 0.24}, "8.39+(-4)"}, 1};
      earlyMorning[] = {3, {{0.65, 0.55, 0.55}, "6.04+(-4)"}, {{0.08, 0.09, 0.11}, "4.5+(-4)"}, {{0.55, 0.47, 0.25}, "5.54+(-4)"}, {{0.1, 0.09, 0.1}, "5.02+(-4)"}, {{0.5, 0.4, 0.4}, "7.05+(-4)"}, {{0.88, 0.51, 0.24}, "8.88+(-4)"}, 1};
      midMorning[] = {8, {{0.98, 0.85, 0.8}, "8.37+(-4)"}, {{0.08, 0.09, 0.11}, "6.42+(-4)"}, {{0.87, 0.47, 0.25}, "7.87+(-4)"}, {{0.09, 0.09, 0.1}, "6.89+(-4)"}, {{0.5, 0.4, 0.4}, "8.9+(-4)"}, {{0.88, 0.51, 0.24}, "10.88+(-4)"}, 1};
      morning[] = {16, {{1, 1, 0.9}, "13.17+(-4)"}, {{0.17, 0.18, 0.19}, "10.26+(-4)"}, {{1, 1, 0.9}, "12.67+(-4)"}, {{0.17, 0.18, 0.19}, "11.71+(-4)"}, {{0.15, 0.15, 0.15}, "12.42+(-4)"}, {{0.17, 0.17, 0.15}, "14.42+(-4)"}, 1};
      noon[] = {45, {{1, 1, 1}, "17+(-4)"}, {{1, 1.3, 1.55}, "13.5+(-4)"}, {{1, 1, 1}, "15+(-4)"}, {{0.36, 0.37, 0.38}, "13.5+(-4)"}, {{1, 1, 1}, "16+(-4)"}, {{1, 1, 1}, "17+(-4)"}, 1};
    };
    class DayLightingRainy : DayLightingRainy {
      deepNight[] = {-15, {0.0034, 0.0034, 0.004}, {0.003, 0.003, 0.003}, {0.0034, 0.0034, 0.004}, {0.003, 0.003, 0.003}, {0.001, 0.001, 0.002}, {0.001, 0.001, 0.002}, 0};
      fullNight[] = {-5, {0.023, 0.023, 0.023}, {0.02, 0.02, 0.02}, {0.023, 0.023, 0.023}, {0.02, 0.02, 0.02}, {0.01, 0.01, 0.02}, {0.08, 0.06, 0.06}, 0};
      sunMoon[] = {-3.75, {0.04, 0.04, 0.05}, {0.04, 0.04, 0.05}, {0.04, 0.04, 0.05}, {0.04, 0.04, 0.05}, {0.04, 0.035, 0.04}, {0.11, 0.08, 0.09}, 0.5};
      earlySun[] = {-2.5, {0.0689, 0.0689, 0.0804}, {0.06, 0.06, 0.07}, {0.0689, 0.0689, 0.0804}, {0.06, 0.06, 0.07}, {0.08, 0.07, 0.08}, {0.14, 0.1, 0.12}, 0.5};
      earlyMorning[] = {0, {{1, 1, 1}, "(-4)+3.95"}, {{1, 1, 1}, "(-4)+3.0"}, {{1, 1, 1}, "(-4)+3.95"}, {{1, 1, 1}, "(-4)+3.0"}, {{1, 1, 1}, "(-4)+4"}, {{1, 1, 1}, "(-4)+5.5"}, 1};
      morning[] = {5, {{1, 1, 1}, "(-4)+5.7"}, {{1, 1, 1}, "(-4)+4.5"}, {{1, 1, 1}, "(-4)+5.7"}, {{1, 1, 1}, "(-4)+4.5"}, {{1, 1, 1}, "(-4)+7"}, {{1, 1, 1}, "(-4)+8"}, 1};
      lateMorning[] = {25, {{1, 1, 1}, "(-4)+10.45"}, {{1, 1, 1}, "(-4)+9.75"}, {{1, 1, 1}, "(-4)+10.45"}, {{1, 1, 1}, "(-4)+9.75"}, {{1, 1, 1}, "(-4)+12"}, {{1, 1, 1}, "(-4)+12.75"}, 1};
      noon[] = {70, {{1, 1, 1}, "(-4)+12.5"}, {{1, 1, 1}, "(-4)+11"}, {{1, 1, 1}, "(-4)+12"}, {{1, 1, 1}, "(-4)+11"}, {{1, 1, 1}, "(-4)+13.5"}, {{1, 1, 1}, "(-4)+14"}, 1};
    };
    class Weather : Weather {
      class Lighting : Lighting {
        class BrightAlmost : DayLightingBrightAlmost {
          overcast = 0;
        };
        class Rainy : DayLightingRainy {
          overcast = 1;
        };
      };
    };
    class Clutter {
      class tav_AutumnFlowers : DefaultClutter {
        model = "ca\plants2\clutter\c_autumn_flowers.p3d";
        affectedByWind = 0.4;
        swLighting = 1;
        scaleMin = 0.7;
        scaleMax = 1;
      };
      class tav_GrassCrooked : DefaultClutter {
        model = "ca\plants2\clutter\c_GrassCrooked.p3d";
        affectedByWind = 0.3;
        swLighting = 1;
        scaleMin = 0.7;
        scaleMax = 1.4;
      };
      class tav_GrassCrookedGreen : DefaultClutter {
        model = "ca\plants2\clutter\c_GrassCrookedGreen.p3d";
        affectedByWind = 0.3;
        swLighting = 1;
        scaleMin = 0.9;
        scaleMax = 1.3;
      };
      class tav_WeedDead : DefaultClutter {
        model = "ca\plants2\clutter\c_WeedDead.p3d";
        affectedByWind = 0.3;
        swLighting = 1;
        scaleMin = 0.75;
        scaleMax = 1.1;
      };
      class tav_fern : DefaultClutter {
        model = "ca\plants2\clutter\c_fern.p3d";
        affectedByWind = 0.3;
        swLighting = 1;
        scaleMin = 0.75;
        scaleMax = 0.7;
      };
      class tav_ferntall : DefaultClutter {
        model = "ca\plants2\clutter\c_ferntall.p3d";
        affectedByWind = 0.3;
        swLighting = 1;
        scaleMin = 0.75;
        scaleMax = 0.6;
      };
      class tav_grasstall : DefaultClutter {
        model = "ca\plants2\clutter\c_grasstall.p3d";
        affectedByWind = 0.3;
        swLighting = 1;
        scaleMin = 0.75;
        scaleMax = 1;
      };
      class tav_stubble : DefaultClutter {
        model = "ca\plants2\clutter\c_stubble.p3d";
        affectedByWind = 0.1;
        swLighting = 1;
        scaleMin = 0.75;
        scaleMax = 0.85;
      };
      class tav_grassautumn : DefaultClutter {
        model = "ca\plants2\clutter\c_grassautumn_t.p3d";
        affectedByWind = 0.5;
        swLighting = 1;
        scaleMin = 0.75;
        scaleMax = 1;
      };
      class tav_autumnfl : DefaultClutter {
        model = "ca\plants2\clutter\c_autumn_flowers.p3d";
        affectedByWind = 0.4;
        swLighting = 1;
        scaleMin = 0.75;
        scaleMax = 1.2;
      };
      class tav_grassdlb : DefaultClutter {
        model = "ca\plants2\clutter\c_grassdrylongbunch.p3d";
        affectedByWind = 0.4;
        swLighting = 1;
        scaleMin = 0.75;
        scaleMax = 0.9;
      };
      class tav_mushmmu : DefaultClutter {
        model = "ca\plants2\clutter\c_mushroommuchomurka.p3d";
        affectedByWind = 0.1;
        swLighting = 1;
        scaleMin = 0.15;
        scaleMax = 0.45;
      };
      class tav_grassautumnbrown : DefaultClutter {
        model = "ca\plants2\clutter\c_grassautumnbrown.p3d";
        affectedByWind = 0.6;
        swLighting = 1;
        scaleMin = 1;
        scaleMax = 1.2;
      };
      class tav_caluna : DefaultClutter {
        model = "ca\plants2\clutter\c_caluna.p3d";
        affectedByWind = 0.5;
        swLighting = 1;
        scaleMin = 1;
        scaleMax = 1.2;
      };
      class tav_deadgrassbunch : DefaultClutter {
        model = "ca\plants2\clutter\c_deadgrassbunch.p3d";
        affectedByWind = 0.3;
        swLighting = 1;
        scaleMin = 0.8;
        scaleMax = 1;
      };
      class tav_leaves : DefaultClutter {
        model = "ca\plants2\clutter\c_leaves.p3d";
        affectedByWind = 0.1;
        swLighting = 1;
        scaleMin = 0.25;
        scaleMax = 0.3;
      };
      class tav_Helianthus : DefaultClutter {
        model = "ca\plants2\Plant\p_Helianthus.p3d";
        affectedByWind = 0.1;
        swLighting = 1;
        scaleMin = 0.4;
        scaleMax = 0.5;
      };
      class tav_repka : DefaultClutter {
        model = "ori\plants\flowers\clutter_repka.p3d";
        affectedByWind = 0.1;
        swLighting = 1;
        scaleMin = 1.5;
        scaleMax = 2;
      };
      class tav_malina : DefaultClutter {
        model = "ca\plants2\clutter\c_raspberry.p3d";
        affectedByWind = 0.1;
        swLighting = 1;
        scaleMin = 1.2;
        scaleMax = 2;
      };
      class tav_boruvka : tav_malina {
        model = "ca\plants2\clutter\c_blueberry.p3d";
      };
      class tav_babka : DefaultClutter {
        model = "ca\plants2\clutter\c_mushroombabka.p3d";
        affectedByWind = 0.1;
        swLighting = 1;
        scaleMin = 1.5;
        scaleMax = 2.5;
      };
      class tav_horcak : tav_babka {
        model = "ca\plants2\clutter\c_mushroomhorcak.p3d";
      };
      class tav_muchomurka : tav_babka {
        model = "ca\plants2\clutter\c_mushroommuchomurka.p3d";
      };
      class tav_prasivky : tav_babka {
        model = "ca\plants2\clutter\c_mushroomprasivky.p3d";
      };
      class tav_kamen : DefaultClutter {
        model = "ca\rocks2\r2_stone.p3d";
        affectedByWind = 0.1;
        swLighting = 1;
        scaleMin = 1.5;
        scaleMax = 2.5;
      };
    };
    class Names {
      class zatok {
        name = "$STR_zatok";
        position[] = {14804, 9510.57, 0};
        type = "NameMarine";
        radiusA = 30;
        radiusB = 30;
      };
      class bjelagora {
        name = "$STR_bjelagora";
        position[] = {13191.6, 10566.6, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class podgorica {
        name = "$STR_podgorica";
        position[] = {14631.4, 9723.67, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class lespodgoricak {
        name = "$STR_lespodgoricak";
        position[] = {14158.3, 10141.5, 0};
        type = "VegetationBroadleaf";
        radiusA = 10;
        radiusB = 10;
      };
      class ujezd {
        name = "$STR_ujezd";
        position[] = {15193.1, 10128.3, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class kopec {
        name = "$STR_kopec";
        position[] = {16500.9, 8339.07, 0};
        type = "NameVillage";
        radiusA = 25;
        radiusB = 25;
      };
      class AcityC_kopec {
        name = "";
        position[] = {16500.9, 8339.07, 0};
        type = "CityCenter";
        radiusA = 25;
        radiusB = 25;
        demography[] = {"CIV", 0.4, "CIV_RU", 0.6};
        neighbors[] = {"AcityC_postojna", "AcityC_boje", "AcityC_bielov", "AcityC_sabina"};
      };
      class krushevic {
        name = "$STR_krushevic";
        position[] = {16244.2, 7406.14, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class postojna {
        name = "$STR_postojna";
        position[] = {15501.5, 8512.26, 0};
        type = "NameVillage";
        radiusA = 25;
        radiusB = 25;
      };
      class AcityC_postojna {
        name = "";
        position[] = {15501.5, 8512.26, 0};
        type = "CityCenter";
        radiusA = 25;
        radiusB = 25;
        demography[] = {"CIV", 0.8, "CIV_RU", 0.2};
        neighbors[] = {"AcityC_kopec", "AcityC_sabina", "AcityC_boje"};
      };
      class noviboch {
        name = "$STR_noviboc";
        position[] = {16873.2, 8158.5, 0};
        type = "NameVillage";
        radiusA = 25;
        radiusB = 25;
      };
      class les8 {
        name = "";
        position[] = {17651.9, 4347.67, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class boje {
        name = "$STR_boje";
        position[] = {15201, 7886.56, 0};
        type = "NameVillage";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_boje {
        name = "";
        position[] = {15201, 7886.56, 0};
        type = "CityCenter";
        radiusA = 30;
        radiusB = 30;
        demography[] = {"CIV", 0.5, "CIV_RU", 0.5};
        neighbors[] = {"AcityC_postojna", "AcityC_kopec"};
      };
      class balticnomore {
        name = "$STR_balticnomore";
        position[] = {12060.2, 4711.31};
        type = "NameMarine";
        radiusA = 400;
        radiusB = 400;
      };
      class lespodgradcak {
        name = "$STR_lespodgradcak";
        position[] = {17530.5, 6845.75, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class zutagora {
        name = "$STR_zutagora";
        position[] = {17468.7, 5239.15, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class starisad {
        name = "$STR_starisad";
        position[] = {17555.4, 6343.25, 0};
        type = "NameVillage";
        radiusA = 25;
        radiusB = 25;
      };
      class AcityC_starisad {
        name = "";
        position[] = {17555.4, 6343.25, 0};
        type = "CityCenter";
        radiusA = 25;
        radiusB = 25;
        demography[] = {"CIV", 0.7, "CIV_RU", 0.3};
        neighbors[] = {"AcityC_bielov"};
      };
      class les9 {
        name = "";
        position[] = {16657.5, 5590.51, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class ljubolskijzaliv {
        name = "$STR_ljubolskijzaliv";
        position[] = {9973.7, 14999.9, 0};
        type = "NameMarine";
        radiusA = 50;
        radiusB = 50;
      };
      class certovooko {
        name = "$STR_certovooko";
        position[] = {17925.8, 5039.47, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class les1 {
        name = "";
        position[] = {18274.8, 5477.9, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class les2 {
        name = "";
        position[] = {17039.9, 8205.55, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class leskrusevak {
        name = "$STR_leskrusevak";
        position[] = {16459.8, 6608.39, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class les4 {
        name = "";
        position[] = {16874.1, 7544.71, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class les5 {
        name = "";
        position[] = {16361.4, 7974.87, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class nizina {
        name = "$STR_nizina";
        position[] = {17751.4, 5737.78, 0};
        type = "NameLocal";
        radiusA = 10;
        radiusB = 10;
      };
      class bielov {
        name = "$STR_biel";
        position[] = {17319.5, 7487.96, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_bielov {
        name = "";
        position[] = {17319.5, 7487.96, 0};
        type = "CityCenter";
        radiusA = 30;
        radiusB = 30;
        demography[] = {"CIV", 0.6, "CIV_RU", 0.4};
        neighbors[] = {"AcityC_starisad", "AcityC_kopec"};
      };
      class les10 {
        name = "";
        position[] = {15153.7, 7476.7, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class lesvrse {
        name = "$STR_lesvrse";
        position[] = {17725.2, 7915.35, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class cement1 {
        name = "$STR_cement1";
        position[] = {17305.4, 8142.75, 0};
        type = "NameLocal";
        radiusA = 5;
        radiusB = 5;
      };
      class cement2 {
        name = "$STR_cement2";
        position[] = {17305.3, 8104.2, 0};
        type = "NameLocal";
        radiusA = 5;
        radiusB = 5;
      };
      class spicak {
        name = "$STR_spicak";
        position[] = {17474.7, 9216.06, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class balticnomore2 {
        name = "$STR_balticnomore2";
        position[] = {22327.6, 5360.23, 0};
        type = "NameMarine";
        radiusA = 400;
        radiusB = 400;
      };
      class slovane {
        name = "$STR_slovane";
        position[] = {15250.3, 9386.37, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class sabina {
        name = "$STR_sabina";
        position[] = {15022.2, 9693.54, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_sabina {
        name = "";
        position[] = {15022.2, 9693.54, 0};
        type = "CityCenter";
        radiusA = 80;
        radiusB = 80;
        demography[] = {"CIV", 0.4, "CIV_RU", 0.6};
        neighbors[] = {"AcityC_postojna", "AcityC_kopec", "AcityC_dubovo", "AcityC_novibor"};
      };
      class starepole {
        name = "$STR_starepole";
        position[] = {16912.3, 6213.9, 0};
        type = "NameLocal";
        radiusA = 10;
        radiusB = 10;
      };
      class lessumav {
        name = "$STR_lessumav";
        position[] = {16215.5, 9371.08, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class skalka {
        name = "$STR_skalka";
        position[] = {18311.1, 6596.5, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class bolota {
        name = "$STR_bolota";
        position[] = {16274.8, 9866.61, 0};
        type = "NameMarine";
        radiusA = 30;
        radiusB = 30;
      };
      class chlumek {
        name = "$STR_chlumek";
        position[] = {13908.5, 9022.43, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class chlumec {
        name = "$STR_chlumec";
        position[] = {13261, 9969.38, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class certovastjena {
        name = "$STR_certovastjena";
        position[] = {13044.6, 8575.23, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class les11 {
        name = "";
        position[] = {12669.2, 9137.91, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class novibor {
        name = "$STR_novibor";
        position[] = {14507.3, 11346.6, 0};
        type = "NameVillage";
        radiusA = 25;
        radiusB = 25;
      };
      class AcityC_novibor {
        name = "";
        position[] = {14507.3, 11346.6, 0};
        type = "CityCenter";
        radiusA = 30;
        radiusB = 30;
        demography[] = {"CIV", 0.4, "CIV_RU", 0.6};
        neighbors[] = {"AcityC_sabina", "AcityC_prilep"};
      };
      class vrsina {
        name = "$STR_vrsina";
        position[] = {17392.8, 10215.2, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class klet {
        name = "$STR_klet";
        position[] = {17305.9, 10800.6, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class djelnica {
        name = "$STR_djelnica";
        position[] = {15471, 9560.89, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class centr {
        name = "$STR_centr";
        position[] = {15140.5, 9836.14, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class petrovice {
        name = "$STR_petrovice";
        position[] = {14592.7, 10252.1, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class les12 {
        name = "";
        position[] = {14836.4, 11526.4, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class jezeroumag {
        name = "$STR_jezeroumag";
        position[] = {15451.4, 11600.5, 0};
        type = "NameMarine";
        radiusA = 30;
        radiusB = 30;
      };
      class les13 {
        name = "";
        position[] = {18003, 10778.3, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les14 {
        name = "";
        position[] = {10932.1, 11627.8, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class aero1 {
        name = "$STR_aero1";
        position[] = {16442.4, 10940.6, 0};
        type = "NameLocal";
        radiusA = 5;
        radiusB = 5;
      };
      class balticnomore3 {
        name = "$STR_balticnomore3";
        position[] = {22252.5, 13237.4, 0};
        type = "NameMarine";
        radiusA = 400;
        radiusB = 400;
      };
      class otok {
        name = "$STR_otok";
        position[] = {13605.7, 3643.98, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class prilep {
        name = "$STR_prilep";
        position[] = {14159.2, 11912.4, 0};
        type = "NameVillage";
        radiusA = 25;
        radiusB = 25;
      };
      class AcityC_prilep {
        name = "";
        position[] = {14159.2, 11912.4, 0};
        type = "CityCenter";
        radiusA = 10;
        radiusB = 10;
        demography[] = {"CIV", 0.9, "CIV_RU", 0.1};
        neighbors[] = {"AcityC_novibor", "AcityC_solibor"};
      };
      class solibor {
        name = "$STR_solibor";
        position[] = {13999.6, 12240.2, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_solibor {
        name = "";
        position[] = {13999.6, 12240.2, 0};
        type = "CityCenter";
        radiusA = 30;
        radiusB = 30;
        demography[] = {"CIV", 0.6, "CIV_RU", 0.4};
        neighbors[] = {"AcityC_prilep", "AcityC_vinograd", "AcityC_Etanovsk", "AcityC_dorijanov"};
      };
      class cgradok {
        name = "$STR_cgradok";
        position[] = {12713.8, 14482.6, 0};
        type = "NameCity";
        radiusA = 10;
        radiusB = 10;
      };
      class AcityC_cgradok {
        name = "";
        position[] = {12713.8, 14482.6, 0};
        type = "CityCenter";
        radiusA = 20;
        radiusB = 20;
        demography[] = {"CIV", 0.4, "CIV_RU", 0.6};
        neighbors[] = {"AcityC_Lepestok", "AcityC_Zabjela", "AcityC_nina", "AcityC_dorijanov", "AcityC_vinograd"};
      };
      class sokol {
        name = "$STR_sokol";
        position[] = {12464.1, 13415.9, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class vinograd {
        name = "$STR_vinograd";
        position[] = {13585.4, 13478.3, 0};
        type = "NameVillage";
        radiusA = 25;
        radiusB = 25;
      };
      class AcityC_vinograd {
        name = "";
        position[] = {13585.4, 13478.3, 0};
        type = "CityCenter";
        radiusA = 10;
        radiusB = 10;
        demography[] = {"CIV", 0.7, "CIV_RU", 0.3};
        neighbors[] = {"AcityC_solibor", "AcityC_Zabjela", "AcityC_cgradok"};
      };
      class dorijanov {
        name = "$STR_dorijanov";
        position[] = {12487.2, 13740.8, 0};
        type = "NameVillage";
        radiusA = 25;
        radiusB = 25;
      };
      class AcityC_dorijanov {
        name = "";
        position[] = {12487.2, 13740.8, 0};
        type = "CityCenter";
        radiusA = 20;
        radiusB = 20;
        demography[] = {"CIV", 0.6, "CIV_RU", 0.4};
        neighbors[] = {"AcityC_Lepestok", "AcityC_Etanovsk", "AcityC_cgradok", "AcityC_vinograd"};
      };
      class Bolota2 {
        name = "$STR_bolota2";
        position[] = {13220.1, 13930, 0};
        type = "NameMarine";
        radiusA = 30;
        radiusB = 30;
      };
      class triglav {
        name = "$STR_triglav";
        position[] = {14859.6, 13637.9, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class veles {
        name = "$STR_veles";
        position[] = {14581.5, 12783.3, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class marovit {
        name = "$STR_marovit";
        position[] = {13950.5, 15439.1, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class perun {
        name = "$STR_perun";
        position[] = {13203.6, 16667.6, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class molotovsk {
        name = "$STR_molotovsk";
        position[] = {16957.7, 12694.3, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_molotovsk {
        name = "";
        position[] = {16957.7, 12694.3, 0};
        type = "CityCenter";
        radiusA = 25;
        radiusB = 25;
        demography[] = {"CIV", 0.2, "CIV_RU", 0.8};
        neighbors[] = {"AcityC_dubovo", "AcityC_martin"};
      };
      class mzaliv {
        name = "$STR_mzaliv";
        position[] = {17353.1, 12723.8, 0};
        type = "NameMarine";
        radiusA = 15;
        radiusB = 15;
      };
      class dubovo {
        name = "$STR_dubovo";
        position[] = {16222.5, 11600.2, 0};
        type = "NameVillage";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_dubovo {
        name = "";
        position[] = {16222.5, 11600.2, 0};
        type = "CityCenter";
        radiusA = 25;
        radiusB = 25;
        demography[] = {"CIV", 0.4, "CIV_RU", 0.6};
        neighbors[] = {"AcityC_sabina", "AcityC_molotovsk", "AcityC_martin"};
      };
      class Martin {
        name = "$STR_martin";
        position[] = {16136.3, 13632.5, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_martin {
        name = "";
        position[] = {16136.3, 13632.5, 0};
        type = "CityCenter";
        radiusA = 25;
        radiusB = 25;
        demography[] = {"CIV", 0.5, "CIV_RU", 0.5};
        neighbors[] = {"AcityC_dubovo", "AcityC_molotovsk", "AcityC_martin", "AcityC_gorka", "AcityC_Sevastopol"};
      };
      class vokzal1 {
        name = "$STR_vokzal1";
        position[] = {16373.7, 13718, 0};
        type = "NameLocal";
        radiusA = 5;
        radiusB = 5;
      };
      class gorka {
        name = "$STR_gorka";
        position[] = {15122.4, 14882.2, 0};
        type = "NameVillage";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_gorka {
        name = "";
        position[] = {15122.4, 14882.2, 0};
        type = "CityCenter";
        radiusA = 10;
        radiusB = 10;
        demography[] = {"CIV", 0.4, "CIV_RU", 0.6};
        neighbors[] = {"AcityC_martin", "AcityC_Sevastopol"};
      };
      class mjelkij {
        name = "$STR_mjelkij";
        position[] = {15174.9, 14512.1, 0};
        type = "NameMarine";
        radiusA = 10;
        radiusB = 10;
      };
      class brdo {
        name = "$STR_brdo";
        position[] = {15511.6, 13207, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class ivan {
        name = "$STR_ivan";
        position[] = {15680.6, 13423.1, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class radyne {
        name = "$STR_radyne";
        position[] = {16852.1, 14114.7, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class fab1 {
        name = "$STR_fab1";
        position[] = {16068.6, 14248.2, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class dolina {
        name = "$STR_dolina";
        position[] = {15315.8, 14254.1, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class birjeza {
        name = "$STR_birjeza";
        position[] = {16871.2, 13661, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class les_15 {
        name = "";
        position[] = {13932.2, 11624.3, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class vokzal2 {
        name = "$STR_vokzal1";
        position[] = {15251.6, 16302.5, 0};
        type = "NameLocal";
        radiusA = 5;
        radiusB = 5;
      };
      class Lepestok {
        name = "$STR_lepestok";
        position[] = {11608.1, 15476.1, 0};
        type = "NameCity";
        radiusA = 200;
        radiusB = 200;
      };
      class AcityC_Lepestok {
        name = "";
        position[] = {11608.1, 15476.1, 0};
        type = "CityCenter";
        radiusA = 100;
        radiusB = 100;
        demography[] = {"CIV", 0.8, "CIV_RU", 0.2};
        neighbors[] = {"AcityC_Ljubol", "AcityC_Jaroslav", "AcityC_duge", "AcityC_Kustik", "AcityC_Nina", "AcityC_cgradok", "AcityC_dorijanov"};
      };
      class Ljubol {
        name = "$STR_ljubol";
        position[] = {10405.1, 16832, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_Ljubol {
        name = "";
        position[] = {10405.1, 16832, 0};
        type = "CityCenter";
        radiusA = 20;
        radiusB = 20;
        demography[] = {"CIV", 0.8, "CIV_RU", 0.2};
        neighbors[] = {"AcityC_Jaroslav", "AcityC_duge", "AcityC_Lepestok"};
      };
      class Sevastopol {
        name = "$STR_seva";
        position[] = {15464.8, 16269.3, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_Sevastopol {
        name = "";
        position[] = {15464.8, 16269.3, 0};
        type = "CityCenter";
        radiusA = 35;
        radiusB = 35;
        demography[] = {"CIV", 0.7, "CIV_RU", 0.3};
        neighbors[] = {"AcityC_gorka", "AcityC_martin", "AcityC_Dalnogorsk"};
      };
      class Dalnogorsk {
        name = "$STR_dalno";
        position[] = {15007.9, 18182.2, 0};
        type = "NameVillage";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_Dalnogorsk {
        name = "";
        position[] = {15007.9, 18182.2, 0};
        type = "CityCenter";
        radiusA = 10;
        radiusB = 10;
        demography[] = {"CIV", 0.1, "CIV_RU", 0.9};
        neighbors[] = {"AcityC_Sevastopol", "AcityC_Chotanovsk"};
      };
      class Chotanovsk {
        name = "$STR_chot";
        position[] = {13468, 19387.3, 0};
        type = "NameVillage";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_Chotanovsk {
        name = "";
        position[] = {13468, 19387.3, 0};
        type = "CityCenter";
        radiusA = 10;
        radiusB = 10;
        demography[] = {"CIV", 0.1, "CIV_RU", 0.9};
        neighbors[] = {"AcityC_Dalnogorsk", "AcityC_duge", "AcityC_ekat"};
      };
      class balticno_more_4 {
        name = "$STR_balticnomore3";
        position[] = {17730, 20080, 0};
        type = "NameMarine";
        radiusA = 400;
        radiusB = 400;
      };
      class Zabjela {
        name = "$STR_zabjela";
        position[] = {13090.5, 14523.9, 0};
        type = "NameVillage";
        radiusA = 10;
        radiusB = 10;
      };
      class AcityC_Zabjela {
        name = "";
        position[] = {13090.5, 14523.9, 0};
        type = "CityCenter";
        radiusA = 20;
        radiusB = 20;
        demography[] = {"CIV", 0.4, "CIV_RU", 0.6};
        neighbors[] = {"AcityC_nina", "AcityC_kustik", "AcityC_vinograd"};
      };
      class Kustik {
        name = "$STR_kustik";
        position[] = {12958.3, 15053.7, 0};
        type = "NameVillage";
        radiusA = 10;
        radiusB = 10;
      };
      class AcityC_Kustik {
        name = "";
        position[] = {12958.3, 15053.7, 0};
        type = "CityCenter";
        radiusA = 20;
        radiusB = 20;
        demography[] = {"CIV", 0.8, "CIV_RU", 0.2};
        neighbors[] = {"AcityC_nina", "AcityC_Lepestok", "AcityC_Zabjela"};
      };
      class Nina {
        name = "$STR_nina";
        position[] = {12663.6, 15112.6, 0};
        type = "NameVillage";
        radiusA = 10;
        radiusB = 10;
      };
      class AcityC_Nina {
        name = "";
        position[] = {12663.6, 15112.6, 0};
        type = "CityCenter";
        radiusA = 20;
        radiusB = 20;
        demography[] = {"CIV", 0.7, "CIV_RU", 0.3};
        neighbors[] = {"AcityC_Lepestok", "AcityC_kustik"};
      };
      class Stadion {
        name = "$STR_stad";
        position[] = {11555.2, 15308.7, 0};
        type = "NameLocal";
        radiusA = 5;
        radiusB = 5;
      };
      class Zelenogorod {
        name = "$STR_zeleno";
        position[] = {12229.4, 15392.9, 0};
        type = "NameLocal";
        radiusA = 5;
        radiusB = 5;
      };
      class Dubravka {
        name = "$STR_dubravka";
        position[] = {11802.8, 15590.1, 0};
        type = "NameLocal";
        radiusA = 5;
        radiusB = 5;
      };
      class starigrad {
        name = "$STR_star";
        position[] = {11187, 15350.8, 0};
        type = "NameLocal";
        radiusA = 5;
        radiusB = 5;
      };
      class Viskov {
        name = "$STR_viskov";
        position[] = {11387.3, 15908, 0};
        type = "NameLocal";
        radiusA = 5;
        radiusB = 5;
      };
      class Bori {
        name = "$STR_bori";
        position[] = {11581.8, 14986.2, 0};
        type = "NameLocal";
        radiusA = 5;
        radiusB = 5;
      };
      class Lazar {
        name = "$STR_lazar";
        position[] = {11511.5, 12968.3, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class Kozak {
        name = "$STR_kozak";
        position[] = {9517.48, 17307.5, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class z_vrh {
        name = "$STR_zvrh";
        position[] = {15730.1, 17089, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class Normansk {
        name = "$STR_normansk";
        position[] = {15377.4, 17677, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class Krakov {
        name = "$STR_krakov";
        position[] = {10425.3, 17003, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class les_16 {
        name = "";
        position[] = {12437, 12296.6, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_17 {
        name = "";
        position[] = {12712.4, 14037.3, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_18 {
        name = "";
        position[] = {14240.6, 12762.7, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_19 {
        name = "";
        position[] = {12032, 15945.7, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_20 {
        name = "";
        position[] = {10976.8, 15611.4, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_21 {
        name = "";
        position[] = {11374.9, 16123.8, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_22 {
        name = "";
        position[] = {10327.4, 17260.8, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_23 {
        name = "";
        position[] = {11229.1, 17377.1, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_24 {
        name = "";
        position[] = {12531.1, 18958.1, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_25 {
        name = "";
        position[] = {13540.1, 19080.2, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_26 {
        name = "";
        position[] = {14590.2, 18033.3, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_27 {
        name = "";
        position[] = {15013, 16318, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_28 {
        name = "";
        position[] = {16666.7, 14927.6, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_29 {
        name = "";
        position[] = {16684.5, 14310.4, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_30 {
        name = "";
        position[] = {17217.1, 13189.8, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_31 {
        name = "";
        position[] = {15794.8, 13601.4, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_32 {
        name = "$STR_zrog";
        position[] = {9390.65, 15215.7, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_33 {
        name = "$STR_cles";
        position[] = {11163.4, 14550.4, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class les_34 {
        name = "$STR_cles";
        position[] = {10268.7, 13487, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class vokzal3 {
        name = "$STR_vokzal1";
        position[] = {11538.7, 15985.9, 0};
        type = "NameLocal";
        radiusA = 5;
        radiusB = 5;
      };
      class Jaroslav {
        name = "$STR_jaro";
        position[] = {10164, 19080.4, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_Jaroslav {
        name = "";
        position[] = {10164, 19080.4, 0};
        type = "CityCenter";
        radiusA = 40;
        radiusB = 40;
        demography[] = {"CIV", 0.2, "CIV_RU", 0.8};
        neighbors[] = {"AcityC_ekat", "AcityC_Lepestok", "AcityC_Ljubol", "AcityC_kameni"};
      };
      class vokzal5 {
        name = "$STR_vokzal1";
        position[] = {10842.7, 18754.7, 0};
        type = "NameLocal";
        radiusA = 5;
        radiusB = 5;
      };
      class kameni {
        name = "$STR_kameni";
        position[] = {8850.92, 19436.6, 0};
        type = "NameVillage";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_kameni {
        name = "";
        position[] = {8850.92, 19436.6, 0};
        type = "CityCenter";
        radiusA = 10;
        radiusB = 10;
        demography[] = {"CIV", 0.5, "CIV_RU", 0.5};
        neighbors[] = {"AcityC_Jaroslav"};
      };
      class duge {
        name = "$STR_duge";
        position[] = {11289.8, 17814.5, 0};
        type = "NameVillage";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_duge {
        name = "";
        position[] = {11289.8, 17814.5, 0};
        type = "CityCenter";
        radiusA = 10;
        radiusB = 10;
        demography[] = {"CIV", 0.6, "CIV_RU", 0.4};
        neighbors[] = {"AcityC_ekat", "AcityC_Chotanovsk", "AcityC_Lepestok", "AcityC_Ljubol", "AcityC_Jaroslav"};
      };
      class ekat {
        name = "$STR_ekat";
        position[] = {11020.4, 18790.6, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_ekat {
        name = "";
        position[] = {11020.4, 18790.6, 0};
        type = "CityCenter";
        radiusA = 40;
        radiusB = 40;
        demography[] = {"CIV", 0.7, "CIV_RU", 0.3};
        neighbors[] = {"AcityC_Chotanovsk", "AcityC_duge", "AcityC_Jaroslav"};
      };
      class Etanovsk {
        name = "$STR_etan";
        position[] = {12664.7, 11921, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_Etanovsk {
        name = "";
        position[] = {12664.7, 11921, 0};
        type = "CityCenter";
        radiusA = 40;
        radiusB = 40;
        demography[] = {"CIV", 0.8, "CIV_RU", 0.2};
        neighbors[] = {"AcityC_Chotanovsk", "AcityC_duge", "AcityC_Jaroslav"};
      };
      class balticno_more_5 {
        name = "$STR_balticnomore3";
        position[] = {3689.7, 19269.7, 0};
        type = "NameMarine";
        radiusA = 400;
        radiusB = 400;
      };
      class Niva {
        name = "$STR_niva";
        position[] = {11416.9, 18831.2, 0};
        type = "NameMarine";
        radiusA = 10;
        radiusB = 10;
      };
      class Helf {
        name = "$STR_helf";
        position[] = {8160.54, 21286, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class loket_kanal {
        name = "$STR_loket";
        position[] = {11567.9, 20146.5, 0};
        type = "NameMarine";
        radiusA = 250;
        radiusB = 250;
      };
      class sibenik {
        name = "$STR_sibenik";
        position[] = {11970, 20993.4, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class kres {
        name = "$STR_kres";
        position[] = {1202.7, 13916.7, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class lesik_1 {
        name = "";
        position[] = {11637.9, 18212.1, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik_2 {
        name = "";
        position[] = {7809.25, 20884.3, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik_3 {
        name = "";
        position[] = {8428.22, 21566.3, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik_4 {
        name = "$STR_ryzas";
        position[] = {9382.46, 20294, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class rigs {
        name = "$STR_rigs";
        position[] = {16297.4, 23158.6, 0};
        type = "NameMarine";
        radiusA = 250;
        radiusB = 250;
      };
      class Jeleni {
        name = "$STR_jelen";
        position[] = {9190.55, 17868.5, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class aero4 {
        name = "$STR_aero2";
        position[] = {10134.8, 18157.9, 0};
        type = "NameLocal";
        radiusA = 10;
        radiusB = 10;
      };
      class Jezero_slepjac {
        name = "$STR_sljepac";
        position[] = {8480.45, 7067.79, 0};
        type = "NameMarine";
        radiusA = 30;
        radiusB = 30;
      };
      class Jezero_bled {
        name = "$STR_bled";
        position[] = {8593.25, 4557.06, 0};
        type = "NameMarine";
        radiusA = 30;
        radiusB = 30;
      };
      class as {
        name = "$STR_as";
        position[] = {6048.94, 1410.87, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class Knin {
        name = "$STR_knin";
        position[] = {3429.83, 2164.9, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class klis {
        name = "$STR_klis";
        position[] = {13624.7, 3596.88, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class Grad_bled {
        name = "$STR_bledg";
        position[] = {7955.22, 5404.22, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class Tresnjevo {
        name = "$STR_Tresnjevo";
        position[] = {8192.9, 4999.26, 0};
        type = "NameVillage";
        radiusA = 25;
        radiusB = 25;
      };
      class AcityC_Tresnjevo {
        name = "";
        position[] = {8192.9, 4999.26, 0};
        type = "CityCenter";
        radiusA = 25;
        radiusB = 25;
        demography[] = {"CIV", 0.4, "CIV_RU", 0.6};
        neighbors[] = {"AcityC_Branibor", "AcityC_Poljanka"};
      };
      class repkov {
        name = "$STR_repkov";
        position[] = {9559.96, 5712.55, 0};
        type = "NameVillage";
        radiusA = 25;
        radiusB = 25;
      };
      class AcityC_repkov {
        name = "";
        position[] = {9559.96, 5712.55, 0};
        type = "CityCenter";
        radiusA = 25;
        radiusB = 25;
        demography[] = {"CIV", 0.5, "CIV_RU", 0.5};
        neighbors[] = {"AcityC_komarovo", "AcityC_kryvoe"};
      };
      class Poljanka {
        name = "$STR_Poljanka";
        position[] = {8490.77, 5606.31, 0};
        type = "NameVillage";
        radiusA = 25;
        radiusB = 25;
      };
      class AcityC_Poljanka {
        name = "";
        position[] = {8490.77, 5606.31, 0};
        type = "CityCenter";
        radiusA = 25;
        radiusB = 25;
        demography[] = {"CIV", 0.8, "CIV_RU", 0.2};
        neighbors[] = {"AcityC_kryvoe", "AcityC_stari_dvor"};
      };
      class Kryvoe {
        name = "$STR_Kryvoe";
        position[] = {9114.96, 5402.52, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_Kryvoe {
        name = "";
        position[] = {9114.96, 5402.52, 0};
        type = "CityCenter";
        radiusA = 30;
        radiusB = 30;
        demography[] = {"CIV", 0.8, "CIV_RU", 0.2};
        neighbors[] = {"AcityC_kryvoe", "AcityC_stari_dvor", "AcityC_vodice"};
      };
      class Komarovo {
        name = "$STR_Komarovo";
        position[] = {10591.6, 6565.65, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_Komarovo {
        name = "";
        position[] = {10591.6, 6565.65, 0};
        type = "CityCenter";
        radiusA = 45;
        radiusB = 45;
        demography[] = {"CIV", 0.7, "CIV_RU", 0.3};
        neighbors[] = {"AcityC_repkov", "AcityC_Krasnoznamensk"};
      };
      class Krasnoznamensk {
        name = "$STR_Krasnoznamensk";
        position[] = {9176.12, 8060.1, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_Krasnoznamensk {
        name = "";
        position[] = {9176.12, 8060.1, 0};
        type = "CityCenter";
        radiusA = 150;
        radiusB = 150;
        demography[] = {"CIV", 0.6, "CIV_RU", 0.4};
        neighbors[] = {"AcityC_Komarovo", "AcityC_bilgrad"};
      };
      class Novi_dvor {
        name = "$STR_Novi_dvor";
        position[] = {7925.88, 6725.89, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_Novi_dvor {
        name = "";
        position[] = {7925.88, 6725.89, 0};
        type = "CityCenter";
        radiusA = 30;
        radiusB = 30;
        demography[] = {"CIV", 0.4, "CIV_RU", 0.6};
        neighbors[] = {"AcityC_stari_dvor", "AcityC_bilgrad", "AcityC_Krasnoznamensk"};
      };
      class Vedic {
        name = "$STR_Vedic";
        position[] = {6705.53, 9868.36, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_Vedic {
        name = "";
        position[] = {6705.53, 9868.36, 0};
        type = "CityCenter";
        radiusA = 30;
        radiusB = 30;
        demography[] = {"CIV", 0.4, "CIV_RU", 0.6};
        neighbors[] = {"AcityC_Krasnoznamensk", "AcityC_Cernovar"};
      };
      class Cernovar {
        name = "$STR_Cernovar";
        position[] = {5827.36, 9879.22, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_Cernovar {
        name = "";
        position[] = {5827.36, 9879.22, 0};
        type = "CityCenter";
        radiusA = 30;
        radiusB = 30;
        demography[] = {"CIV", 0.7, "CIV_RU", 0.3};
        neighbors[] = {"AcityC_Vedic", "AcityC_bilgrad"};
      };
      class bilgrad {
        name = "$STR_bilgrad";
        position[] = {5452.96, 8827.01, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_bilgrad {
        name = "";
        position[] = {5452.96, 8827.01, 0};
        type = "CityCenter";
        radiusA = 85;
        radiusB = 85;
        demography[] = {"CIV", 0.4, "CIV_RU", 0.6};
        neighbors[] = {"AcityC_Cernovar", "AcityC_Mitrovice"};
      };
      class Stangrad {
        name = "$STR_Stangrad";
        position[] = {3323.68, 7552.9, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_Stangrad {
        name = "";
        position[] = {3323.68, 7552.9, 0};
        type = "CityCenter";
        radiusA = 25;
        radiusB = 25;
        demography[] = {"CIV", 0.6, "CIV_RU", 0.4};
        neighbors[] = {"AcityC_Mitrovice"};
      };
      class Mitrovice {
        name = "$STR_Mitrovice";
        position[] = {3795.29, 7222.12, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_Mitrovice {
        name = "";
        position[] = {3795.29, 7222.12, 0};
        type = "CityCenter";
        radiusA = 75;
        radiusB = 75;
        demography[] = {"CIV", 0.4, "CIV_RU", 0.6};
        neighbors[] = {"AcityC_Branibor", "AcityC_bilgrad"};
      };
      class stari_dvor {
        name = "$STR_stari_dvor";
        position[] = {8234.42, 6092.46, 0};
        type = "NameVillage";
        radiusA = 25;
        radiusB = 25;
      };
      class AcityC_stari_dvor {
        name = "";
        position[] = {8234.42, 6092.46, 0};
        type = "CityCenter";
        radiusA = 75;
        radiusB = 75;
        demography[] = {"CIV", 0.4, "CIV_RU", 0.6};
        neighbors[] = {"AcityC_Poljanka", "AcityC_Novi_dvor"};
      };
      class vilas {
        name = "$STR_vilas";
        position[] = {6073.41, 7406.17, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class Roztoc {
        name = "$STR_Roztoc";
        position[] = {7139.91, 5930.24, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class Morana {
        name = "$STR_Morana";
        position[] = {8542.44, 8757.95, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class Visocina {
        name = "$STR_Visocina";
        position[] = {9617.19, 6579.51, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class radegast {
        name = "$STR_radegast";
        position[] = {8497.52, 4038.19, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class Berstuk {
        name = "$STR_Berstuk";
        position[] = {7317.38, 8848.8, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class Zmey {
        name = "$STR_Zmey";
        position[] = {6487.27, 9309.52, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class Vucar {
        name = "$STR_Vucar";
        position[] = {6605.93, 10235.3, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class Borovka {
        name = "$STR_Borovka";
        position[] = {5943.5, 10527.1, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class airport_krasno {
        name = "$STR_airport_krasno";
        position[] = {7169.38, 8050.25, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class borska_polje2 {
        name = "$STR_borska_polje2";
        position[] = {6394.68, 8607.36, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class primorsk {
        name = "$STR_primorsk";
        position[] = {4647.02, 8168.15, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class stare_boriste2 {
        name = "Stare Boriste";
        position[] = {5666.27, 9374.34, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class Racetrack {
        name = "$STR_Racetrack";
        position[] = {2065.14, 7288.99, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class sobor1 {
        name = "$STR_sobor1";
        position[] = {8579.25, 6941.41, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class pole2 {
        name = "$STR_pole2";
        position[] = {9437.74, 5439.89, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class pole3 {
        name = "$STR_pole3";
        position[] = {8674.96, 5519.58, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class AES {
        name = "$STR_AES";
        position[] = {9437.92, 4457.95, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class lesik1 {
        name = "";
        position[] = {5849.55, 10212.7, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik2 {
        name = "";
        position[] = {7446.79, 9666.38, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik3 {
        name = "$STR_Nekmir";
        position[] = {8135.07, 9024.4, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik4 {
        name = "";
        position[] = {7559.25, 9185.52, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik5 {
        name = "";
        position[] = {5965.29, 9013.6, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik6 {
        name = "";
        position[] = {6254.52, 8277.13, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik7 {
        name = "";
        position[] = {5160.09, 7890.84, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik8 {
        name = "";
        position[] = {4211.92, 7113.04, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik9 {
        name = "";
        position[] = {5127.32, 6559.86, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik10 {
        name = "";
        position[] = {6535.44, 5764.86, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik11 {
        name = "";
        position[] = {2790.87, 7654.01, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesi111 {
        name = "";
        position[] = {2017.71, 7842.29, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik12 {
        name = "";
        position[] = {1045.48, 7158.64, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik13 {
        name = "$STR_lesik13";
        position[] = {3158.16, 6964.19, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik14 {
        name = "";
        position[] = {10498.5, 2924.18, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik15 {
        name = "";
        position[] = {9996.2, 4728.05, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesi16 {
        name = "";
        position[] = {9927.63, 5826.79, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class lesi17 {
        name = "";
        position[] = {10286.3, 7419.44, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class lesi18 {
        name = "";
        position[] = {11037.9, 6984.25, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class lesi19 {
        name = "";
        position[] = {9612.05, 8197.02, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class lesi20 {
        name = "";
        position[] = {7736.69, 4981.08, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class lesi21 {
        name = "";
        position[] = {8093.48, 5805.58, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class lesi22 {
        name = "";
        position[] = {7419.41, 7006.87, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class lesi23 {
        name = "";
        position[] = {9982.31, 6572.21, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class lesi233 {
        name = "";
        position[] = {9184.85, 6434.09, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class lesi24 {
        name = "";
        position[] = {9486.94, 7306.79, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class lesi25 {
        name = "Zlaty Les";
        position[] = {8715.48, 6016.74, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class lesi26 {
        name = "Polinki  Les";
        position[] = {8281.67, 8195.68, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik27 {
        name = "";
        position[] = {8045.15, 7597.77, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik28 {
        name = "Les Spicak";
        position[] = {6372.55, 5237.41, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik29 {
        name = "";
        position[] = {6965.3, 4692.56, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik30 {
        name = "";
        position[] = {5781.65, 5658.62, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class Balticno_more10 {
        name = "$STR_balticnomore3";
        position[] = {2263.3, 10929.5, 0};
        type = "NameMarine";
        radiusA = 400;
        radiusB = 400;
      };
      class Balticno_more11 {
        name = "$STR_balticnomore3";
        position[] = {4699.25, 3524.91, 0};
        type = "NameMarine";
        radiusA = 400;
        radiusB = 400;
      };
      class Grad_krkav {
        name = "$STR_krkav";
        position[] = {11008.4, 6677.76, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class branibor {
        name = "$STR_Branibor";
        position[] = {7682.46, 4312.29, 0};
        type = "NameCityCapital";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_branibor {
        name = "";
        position[] = {7682.46, 4312.29, 0};
        type = "CityCenter";
        radiusA = 275;
        radiusB = 275;
        demography[] = {"CIV", 0.3, "CIV_RU", 0.7};
        neighbors[] = {"AcityC_Tresnjevo", "AcityC_Mitrovice", "AcityC_Topolka"};
      };
      class Topolka {
        name = "$STR_Topolka";
        position[] = {8881.93, 2308.74, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_Topolka {
        name = "";
        position[] = {8881.93, 2308.74, 0};
        type = "CityCenter";
        radiusA = 35;
        radiusB = 35;
        demography[] = {"CIV", 0.3, "CIV_RU", 0.7};
        neighbors[] = {"AcityC_Zhabinka", "AcityC_Kosovo"};
      };
      class Seven {
        name = "$STR_Seven";
        position[] = {10985.4, 759.202, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_Seven {
        name = "";
        position[] = {10985.4, 759.202, 0};
        type = "CityCenter";
        radiusA = 35;
        radiusB = 35;
        demography[] = {"CIV", 0.7, "CIV_RU", 0.3};
        neighbors[] = {"AcityC_Marina", "AcityC_Blato"};
      };
      class Blato {
        name = "$STR_Blato";
        position[] = {11787.8, 747.01, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class AcityC_Blato {
        name = "";
        position[] = {11787.8, 747.01, 0};
        type = "CityCenter";
        radiusA = 35;
        radiusB = 35;
        demography[] = {"CIV", 0.7, "CIV_RU", 0.3};
        neighbors[] = {"AcityC_Seven"};
      };
      class Zhabinka {
        name = "$STR_Zhabinka";
        position[] = {8213.12, 2987.59, 0};
        type = "NameVillage";
        radiusA = 25;
        radiusB = 25;
      };
      class AcityC_Zhabinka {
        name = "";
        position[] = {8213.12, 2987.59, 0};
        type = "CityCenter";
        radiusA = 15;
        radiusB = 15;
        demography[] = {"CIV", 0.7, "CIV_RU", 0.3};
        neighbors[] = {"AcityC_Topolka"};
      };
      class Marina {
        name = "$STR_Marina";
        position[] = {10009.6, 1377.64, 0};
        type = "NameVillage";
        radiusA = 25;
        radiusB = 25;
      };
      class AcityC_Marina {
        name = "";
        position[] = {10009.6, 1377.64, 0};
        type = "CityCenter";
        radiusA = 25;
        radiusB = 25;
        demography[] = {"CIV", 0.3, "CIV_RU", 0.7};
        neighbors[] = {"AcityC_Kosovo", "AcityC_Seven"};
      };
      class Kosovo {
        name = "$STR_Kosovo";
        position[] = {9623.59, 1767.75, 0};
        type = "NameVillage";
        radiusA = 25;
        radiusB = 25;
      };
      class AcityC_Kosovo {
        name = "";
        position[] = {9623.59, 1767.75, 0};
        type = "CityCenter";
        radiusA = 10;
        radiusB = 10;
        demography[] = {"CIV", 0.3, "CIV_RU", 0.7};
        neighbors[] = {"AcityC_Topolka", "AcityC_Marina"};
      };
      class Vodice {
        name = "$STR_Vodice";
        position[] = {11817.5, 1418.28, 0};
        type = "NameVillage";
        radiusA = 25;
        radiusB = 25;
      };
      class AcityC_Vodice {
        name = "";
        position[] = {11817.5, 1418.28, 0};
        type = "CityCenter";
        radiusA = 10;
        radiusB = 10;
        demography[] = {"CIV", 0.3, "CIV_RU", 0.7};
        neighbors[] = {"AcityC_Seven", "AcityC_Blato"};
      };
      class Nehaj {
        name = "$STR_Nehaj";
        position[] = {14873.3, 11913.6, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class lesik31 {
        name = "";
        position[] = {11601.5, 1575.13, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik32 {
        name = "";
        position[] = {11845, 1060.47, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik33 {
        name = "";
        position[] = {11001.9, 956.84, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik34 {
        name = "";
        position[] = {8879.72, 2547.66, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik35 {
        name = "";
        position[] = {7922.4, 3569.31, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik36 {
        name = "";
        position[] = {8140.71, 4025.3, 0};
        type = "VegetationFir";
        radiusA = 15;
        radiusB = 15;
      };
      class lesik39 {
        name = "";
        position[] = {11257, 1285.83, 0};
        type = "VegetationBroadleaf";
        radiusA = 15;
        radiusB = 15;
      };
      class rod {
        name = "$STR_rod";
        position[] = {10730.5, 1726.36, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class Georgiev {
        name = "$STR_geo";
        position[] = {24405.9, 1367.89, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class karelski_kanal2 {
        name = "$STR_karelskikanal";
        position[] = {12175.9, 7140.64, 0};
        type = "NameMarine";
        radiusA = 250;
        radiusB = 250;
      };
      class sektor_b {
        name = "$STR_sektor";
        position[] = {22572.3, 19627.5, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class krk {
        name = "$STR_krk";
        position[] = {6552.09, 13113.6, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class miet {
        name = "$STR_miet";
        position[] = {9881.26, 9021.67, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class zoo {
        name = "$STR_zoo";
        position[] = {19140.7, 2957.32, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class vladimir {
        name = "$STR_vladimir";
        position[] = {1942.44, 17177, 0};
        type = "NameCityCapital";
        radiusA = 30;
        radiusB = 30;
      };
      class silo {
        name = "$STR_silo";
        position[] = {2453.91, 17703.5, 0};
        type = "NameLocal";
        radiusA = 15;
        radiusB = 15;
      };
      class krivozhopol {
        name = "$STR_krivozhopol";
        position[] = {3885.24, 17724, 0};
        type = "NameCity";
        radiusA = 30;
        radiusB = 30;
      };
      class boleslava {
        name = "$STR_boleslava";
        position[] = {2796.64, 17274, 0};
        type = "NameVillage";
        radiusA = 20;
        radiusB = 20;
      };
      class bohdan {
        name = "$STR_bohdan";
        position[] = {2770.5, 16711.4, 0};
        type = "NameVillage";
        radiusA = 5;
        radiusB = 5;
      };
      class vratnica {
        name = "$STR_vratnica";
        position[] = {2385.34, 16339.5, 0};
        type = "NameVillage";
        radiusA = 5;
        radiusB = 5;
      };
      class gostivar {
        name = "$STR_gostivar";
        position[] = {4206.99, 14062.7, 0};
        type = "NameVillage";
        radiusA = 5;
        radiusB = 5;
      };
      class gord {
        name = "$STR_gord";
        position[] = {5657.46, 16112.1, 0};
        type = "NameVillage";
        radiusA = 5;
        radiusB = 5;
      };
      class bijsk {
        name = "$STR_bijsk";
        position[] = {5530.9, 16761.7, 0};
        type = "NameVillage";
        radiusA = 5;
        radiusB = 5;
      };
      class ilya {
        name = "$STR_ilya";
        position[] = {5878.21, 17480.9, 0};
        type = "NameVillage";
        radiusA = 10;
        radiusB = 10;
      };
      class alexandr {
        name = "$STR_alexandr";
        position[] = {4973.97, 17701.7, 0};
        type = "NameCityCapital";
        radiusA = 30;
        radiusB = 30;
      };
      class kiyala {
        name = "$STR_kiyala";
        position[] = {3146.02, 17137.1, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class kozacok {
        name = "$STR_kozacok";
        position[] = {3730.83, 17105, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class lysa {
        name = "$STR_lysa";
        position[] = {2243.8, 18994.6, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class duryn {
        name = "$STR_duryn";
        position[] = {3294.01, 18122.6, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class radobyl {
        name = "$STR_radobyl";
        position[] = {4897.23, 14065.8, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class bulbanya {
        name = "$STR_bulbanya";
        position[] = {5529.52, 18210.6, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class yuzhnyj_sad {
        name = "$STR_yuzhnyj_sad";
        position[] = {5396.69, 17431.4, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class grushnoe {
        name = "$STR_grushnoe";
        position[] = {5451.26, 14741.8, 0};
        type = "NameCityCapital";
        radiusA = 30;
        radiusB = 30;
      };
      class bolsaja_plan {
        name = "$STR_bolsaja_plan";
        position[] = {2432.09, 16521.5, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class lastochnikno_gnezdo {
        name = "$STR_lastochnikno_gnezdo";
        position[] = {3777.34, 17173.7, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class bronka {
        name = "$STR_bronka";
        position[] = {5466.52, 19677.8, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class vin1 {
        name = "";
        position[] = {5870.86, 16302.3, 0};
        type = "VegetationVineyard";
        radiusA = 5;
        radiusB = 5;
      };
      class vin2 {
        name = "";
        position[] = {4062.66, 17695.1, 0};
        type = "VegetationVineyard";
        radiusA = 5;
        radiusB = 5;
      };
      class for1 {
        name = "";
        position[] = {2631.88, 16541.2, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for2 {
        name = "$STR_for2";
        position[] = {1940.13, 16395.3, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for3 {
        name = "";
        position[] = {2152.45, 16925.4, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for4 {
        name = "";
        position[] = {3101.73, 16871.7, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for5 {
        name = "";
        position[] = {2955.26, 17206.8, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class dead_forest {
        name = "$STR_dead_forest";
        position[] = {2468.88, 17182.9, 0};
        type = "VegetationFir";
        radiusA = 10;
        radiusB = 10;
      };
      class for6 {
        name = "";
        position[] = {2934.63, 17618.1, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for7 {
        name = "";
        position[] = {2703.87, 18045, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for8 {
        name = "";
        position[] = {1986.89, 17664.2, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for9 {
        name = "";
        position[] = {3064.76, 18492.9, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for10 {
        name = "";
        position[] = {4202.17, 18637.4, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for11 {
        name = "";
        position[] = {4454.58, 13706.1, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for12 {
        name = "";
        position[] = {4932.88, 15486, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for13 {
        name = "";
        position[] = {4091.71, 16783.9, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for14 {
        name = "";
        position[] = {5495.84, 15424.2, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for15 {
        name = "";
        position[] = {5423.63, 16565.8, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for16 {
        name = "";
        position[] = {4882.12, 17397.8, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for17 {
        name = "";
        position[] = {6296.96, 17536.3, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for18 {
        name = "";
        position[] = {6237.25, 16583, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class Izh {
        name = "$STR_izh";
        position[] = {6329.81, 15521.2, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class plashki {
        name = "$STR_plashki";
        position[] = {7836.5, 11796, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class paklenica {
        name = "$STR_paklenica";
        position[] = {6175.79, 18021.4, 0};
        type = "VegetationFir";
        radiusA = 10;
        radiusB = 10;
      };
      class les_sirach {
        name = "$STR_les_sirach";
        position[] = {4825.71, 14379, 0};
        type = "VegetationFir";
        radiusA = 10;
        radiusB = 10;
      };
      class for19 {
        name = "";
        position[] = {7956.65, 11298.3, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class klenivnik {
        name = "$STR_klenivnik";
        position[] = {9406.09, 10481.4, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for20 {
        name = "";
        position[] = {9331.48, 11296.2, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class border {
        name = "";
        position[] = {8424.33, 10884.8, 0};
        type = "BorderCrossing";
        radiusA = 50;
        radiusB = 50;
      };
      class zabak {
        name = "$STR_zabak";
        position[] = {9329.79, 10899, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class mikolaj {
        name = "$STR_mikolaj";
        position[] = {8716.31, 11342.6, 0};
        type = "Hill";
        radiusA = 25;
        radiusB = 25;
      };
      class oko {
        name = "$STR_oko";
        position[] = {8472.17, 11418.2, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class rybnik {
        name = "$STR_rybnik";
        position[] = {3253.58, 17652.3, 0};
        type = "NameMarine";
        radiusA = 5;
        radiusB = 5;
      };
      class baltskaja_guba {
        name = "$STR_baltskaja_guba";
        position[] = {4942.01, 18884.4, 0};
        type = "NameMarine";
        radiusA = 30;
        radiusB = 30;
      };
      class zelenyj_kilim {
        name = "$STR_zelenyj_kilim";
        position[] = {2263.38, 18200.3, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class border2 {
        name = "";
        position[] = {9562.41, 12633.7, 0};
        type = "BorderCrossing";
        radiusA = 50;
        radiusB = 50;
      };
      class border3 {
        name = "";
        position[] = {9337.34, 12632.2, 0};
        type = "BorderCrossing";
        radiusA = 50;
        radiusB = 50;
      };
      class border4 {
        name = "";
        position[] = {9608.59, 13502.6, 0};
        type = "BorderCrossing";
        radiusA = 50;
        radiusB = 50;
      };
      class border5 {
        name = "";
        position[] = {10475.8, 10881.7, 0};
        type = "BorderCrossing";
        radiusA = 50;
        radiusB = 50;
      };
      class sedoy {
        name = "$STR_sedoy";
        position[] = {8466.01, 12156.8, 0};
        type = "NameVillage";
        radiusA = 20;
        radiusB = 20;
      };
      class nagornoe {
        name = "$STR_nagornoe";
        position[] = {9653.81, 11844.3, 0};
        type = "NameVillage";
        radiusA = 40;
        radiusB = 40;
      };
      class vufelki {
        name = "$STR_vufelki";
        position[] = {9219.33, 13399, 0};
        type = "NameVillage";
        radiusA = 20;
        radiusB = 20;
      };
      class ovisoj {
        name = "$STR_ovisoj";
        position[] = {9614.09, 13456.1, 0};
        type = "NameVillage";
        radiusA = 20;
        radiusB = 20;
      };
      class tlen {
        name = "$STR_tlen";
        position[] = {8530.9, 13546.5, 0};
        type = "NameVillage";
        radiusA = 20;
        radiusB = 20;
      };
      class norilsk {
        name = "$STR_norilsk";
        position[] = {8677.97, 14808.7, 0};
        type = "NameVillage";
        radiusA = 20;
        radiusB = 20;
      };
      class antonovka {
        name = "$STR_antonovka";
        position[] = {9660.5, 12620, 0};
        type = "NameVillage";
        radiusA = 20;
        radiusB = 20;
      };
      class varna {
        name = "$STR_varna";
        position[] = {11026.6, 10397.9, 0};
        type = "NameVillage";
        radiusA = 10;
        radiusB = 10;
      };
      class zagorye {
        name = "$STR_zagorye";
        position[] = {11492.1, 10033.7, 0};
        type = "NameVillage";
        radiusA = 20;
        radiusB = 20;
      };
      class vishka {
        name = "$STR_vishka";
        position[] = {9163.74, 11719.2, 0};
        type = "NameVillage";
        radiusA = 20;
        radiusB = 20;
      };
      class slavjansk {
        name = "$STR_slavjansk";
        position[] = {8939.58, 12564, 0};
        type = "NameVillage";
        radiusA = 20;
        radiusB = 20;
      };
      class romanov {
        name = "$STR_romanov";
        position[] = {11626.9, 9063.69, 0};
        type = "NameCityCapital";
        radiusA = 30;
        radiusB = 30;
      };
      class luzin {
        name = "$STR_luzin";
        position[] = {11164.5, 11617, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class olga1 {
        name = "$STR_olga";
        position[] = {8652.61, 12762.1, 0};
        type = "NameMarine";
        radiusA = 5;
        radiusB = 5;
      };
      class olga2 {
        name = "$STR_olga";
        position[] = {8987, 13348.4, 0};
        type = "NameMarine";
        radiusA = 5;
        radiusB = 5;
      };
      class olga3 {
        name = "$STR_olga";
        position[] = {9698.88, 12177.7, 0};
        type = "NameMarine";
        radiusA = 5;
        radiusB = 5;
      };
      class olga4 {
        name = "$STR_olga";
        position[] = {10577.7, 11081.2, 0};
        type = "NameMarine";
        radiusA = 5;
        radiusB = 5;
      };
      class olga5 {
        name = "$STR_olga";
        position[] = {10822.9, 9695.06, 0};
        type = "NameMarine";
        radiusA = 5;
        radiusB = 5;
      };
      class svir {
        name = "$STR_svir";
        position[] = {11462.4, 9835.3, 0};
        type = "NameMarine";
        radiusA = 5;
        radiusB = 5;
      };
      class baranovka {
        name = "$STR_baranovka";
        position[] = {10516.6, 9955.95, 0};
        type = "NameVillage";
        radiusA = 40;
        radiusB = 40;
      };
      class tarakansk_oil {
        name = "$STR_tarakansk_oil";
        position[] = {8473.03, 16721.1, 0};
        type = "NameLocal";
        radiusA = 80;
        radiusB = 80;
      };
      class tarakansk_oil2 {
        name = "$STR_tarakansk_oil2";
        position[] = {8489.29, 16311.8, 0};
        type = "NameLocal";
        radiusA = 80;
        radiusB = 80;
      };
      class tarakansk_oil3 {
        name = "$STR_tarakansk_oil3";
        position[] = {8857.9, 15544.6, 0};
        type = "NameLocal";
        radiusA = 80;
        radiusB = 80;
      };
      class tarakansk_military {
        name = "$STR_tarakansk_military";
        position[] = {9152.02, 14794.3, 0};
        type = "NameLocal";
        radiusA = 80;
        radiusB = 80;
      };
      class tarakansk1 {
        name = "$STR_tarakansk1";
        position[] = {8642.89, 15896.9, 0};
        type = "NameLocal";
        radiusA = 30;
        radiusB = 30;
      };
      class tarakansk2 {
        name = "$STR_tarakansk2";
        position[] = {8925.29, 15235.8, 0};
        type = "NameLocal";
        radiusA = 30;
        radiusB = 30;
      };
      class milolaja {
        name = "$STR_milolaja";
        position[] = {8681.32, 15142.5, 0};
        type = "NameLocal";
        radiusA = 7;
        radiusB = 7;
      };
      class for192 {
        name = "";
        position[] = {8606.33, 16095.1, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for202 {
        name = "";
        position[] = {8858.98, 14911.8, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for212 {
        name = "";
        position[] = {9451.07, 13855.9, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for222 {
        name = "";
        position[] = {9244.51, 13038.1, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for232 {
        name = "";
        position[] = {8503.16, 12518.7, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class for242 {
        name = "";
        position[] = {8693.38, 12018.7, 0};
        type = "VegetationFir";
        radiusA = 5;
        radiusB = 5;
      };
      class vin4 {
        name = "";
        position[] = {11167.3, 9660.45, 0};
        type = "VegetationVineyard";
        radiusA = 5;
        radiusB = 5;
      };
      class vin5 {
        name = "";
        position[] = {9162.94, 11857.2, 0};
        type = "VegetationVineyard";
        radiusA = 5;
        radiusB = 5;
      };
      class vin6 {
        name = "";
        position[] = {9386.58, 11820.9, 0};
        type = "VegetationVineyard";
        radiusA = 5;
        radiusB = 5;
      };
      class ostrov_hvar {
        name = "$STR_ostrov_hvar";
        position[] = {8592.5, 13142.5, 0};
        type = "NameLocal";
        radiusA = 40;
        radiusB = 40;
      };
      class velika_luka {
        name = "$STR_velika_luka";
        position[] = {9630.61, 13902.4, 0};
        type = "NameLocal";
        radiusA = 10;
        radiusB = 10;
      };
      class mala_luka {
        name = "$STR_mala_luka";
        position[] = {9501.79, 13178.4, 0};
        type = "NameLocal";
        radiusA = 10;
        radiusB = 10;
      };
      class bashka_luka {
        name = "$STR_bashka_luka";
        position[] = {11444.9, 9512.22, 0};
        type = "NameLocal";
        radiusA = 50;
        radiusB = 50;
      };
      class stare_plashki {
        name = "$STR_stare_plashki";
        position[] = {8203.81, 12117.6, 0};
        type = "NameLocal";
        radiusA = 10;
        radiusB = 10;
      };
      class for252 {
        name = "";
        position[] = {10931.3, 9465.58, 0};
        type = "VegetationBroadleaf";
        radiusA = 5;
        radiusB = 5;
      };
      class for262 {
        name = "";
        position[] = {11357.5, 9944.63, 0};
        type = "VegetationBroadleaf";
        radiusA = 5;
        radiusB = 5;
      };
      class pinsk {
        name = "$STR_pinsk";
        position[] = {7917.94, 14247.3, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class pskov {
        name = "$STR_pskov";
        position[] = {9548.47, 14485.5, 0};
        type = "NameLocal";
        radiusA = 20;
        radiusB = 20;
      };
      class obsironsk {
        name = "$STR_obsironsk";
        position[] = {9179.1, 14136.6, 0};
        type = "NameCityCapital";
        radiusA = 30;
        radiusB = 30;
      };
      class for263 {
        name = "";
        position[] = {16759.3, 4281.31, 0};
        type = "VegetationBroadleaf";
        radiusA = 100;
        radiusB = 100;
      };
      class for264 {
        name = "";
        position[] = {15966.3, 4545.03, 0};
        type = "VegetationBroadleaf";
        radiusA = 100;
        radiusB = 100;
      };
      class for265 {
        name = "";
        position[] = {12453.5, 8335.34, 0};
        type = "VegetationBroadleaf";
        radiusA = 100;
        radiusB = 100;
      };
      class for266 {
        name = "";
        position[] = {14814.9, 5344.08, 0};
        type = "VegetationFir";
        radiusA = 100;
        radiusB = 100;
      };
      class blanik {
        name = "$STR_blanik";
        position[] = {13711.1, 6610.76, 0};
        type = "Hill";
        radiusA = 100;
        radiusB = 100;
      };
      class slovanka {
        name = "$STR_slovanka";
        position[] = {14121.9, 6422.8, 0};
        type = "Hill";
        radiusA = 50;
        radiusB = 50;
      };
      class vrsinka {
        name = "$STR_vrsinka";
        position[] = {15080.7, 6032.4, 0};
        type = "Hill";
        radiusA = 50;
        radiusB = 50;
      };
      class cech {
        name = "$STR_cech";
        position[] = {14291.2, 6800.85, 0};
        type = "NameMarine";
        radiusA = 30;
        radiusB = 30;
      };
      class Lech {
        name = "$STR_lech";
        position[] = {14323.7, 6651.13, 0};
        type = "NameMarine";
        radiusA = 30;
        radiusB = 30;
      };
      class Rus {
        name = "$STR_rus";
        position[] = {14504.2, 6533.09, 0};
        type = "NameMarine";
        radiusA = 30;
        radiusB = 30;
      };
      class krcin {
        name = "$STR_krcin";
        position[] = {15313.8, 5939.05, 0};
        type = "NameMarine";
        radiusA = 30;
        radiusB = 30;
      };
      class Damba {
        name = "$STR_damba";
        position[] = {15064, 6946.47, 0};
        type = "NameMarine";
        radiusA = 80;
        radiusB = 80;
      };
      class Orlik {
        name = "$STR_orlik";
        position[] = {16150.6, 5431.7, 0};
        type = "NameMarine";
        radiusA = 80;
        radiusB = 80;
      };
      class zelena {
        name = "$STR_zelena";
        position[] = {15419.7, 5393.12, 0};
        type = "Hill";
        radiusA = 100;
        radiusB = 100;
      };
      class brasov {
        name = "$STR_brasov";
        position[] = {12612.4, 8717, 0};
        type = "NameVillage";
        radiusA = 150;
        radiusB = 150;
      };
      class mostar {
        name = "$STR_mostar";
        position[] = {13821, 7087.95, 0};
        type = "NameVillage";
        radiusA = 150;
        radiusB = 150;
      };
      class vladislav {
        name = "$STR_vladislav";
        position[] = {14486.6, 6834.76, 0};
        type = "NameVillage";
        radiusA = 150;
        radiusB = 150;
      };
      class Kraljevo {
        name = "$STR_kraljevo";
        position[] = {13684.5, 5875.63, 0};
        type = "NameVillage";
        radiusA = 150;
        radiusB = 150;
      };
      class Pavlovka {
        name = "$STR_pavlovka";
        position[] = {17389.3, 4185.5, 0};
        type = "NameVillage";
        radiusA = 150;
        radiusB = 150;
      };
      class ciganovka {
        name = "$STR_ciganovka";
        position[] = {16853.5, 3922.74, 0};
        type = "NameVillage";
        radiusA = 150;
        radiusB = 150;
      };
      class simferopol {
        name = "$STR_simferopol";
        position[] = {15083.1, 4693.16, 0};
        type = "NameVillage";
        radiusA = 150;
        radiusB = 150;
      };
      class Michailov {
        name = "$STR_michailov";
        position[] = {15664.9, 5793.48, 0};
        type = "NameCityCapital";
        radiusA = 500;
        radiusB = 500;
      };
      class karer {
        name = "$STR_karer";
        position[] = {15753.1, 4921.77, 0};
        type = "NameLocal";
        radiusA = 100;
        radiusB = 100;
      };
      class saturn {
        name = "$STR_saturn";
        position[] = {14240.3, 7321.56, 0};
        type = "NameLocal";
        radiusA = 100;
        radiusB = 100;
      };
      class Banska {
        name = "$STR_banska";
        position[] = {14788.1, 6515.79, 0};
        type = "NameLocal";
        radiusA = 75;
        radiusB = 75;
      };
      class Banska2 {
        name = "$STR_banska2";
        position[] = {14878.9, 5759.39, 0};
        type = "NameLocal";
        radiusA = 75;
        radiusB = 75;
      };
      class Gerittburg {
        name = "$STR_gerittburg";
        position[] = {13792, 5996.49, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class Lida {
        name = "$STR_lida";
        position[] = {13597.3, 7530.97, 0};
        type = "NameLocal";
        radiusA = 15;
        radiusB = 15;
      };
      class ziva {
        name = "$STR_ziva";
        position[] = {13704.2, 7436.88, 0};
        type = "Hill";
        radiusA = 50;
        radiusB = 50;
      };
      class ostrovovisoj {
        name = "$STR_ostrovovisoj";
        position[] = {13254.5, 7454.38, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class ostrovtrokut {
        name = "$STR_ostrovtrokut";
        position[] = {13190, 6976.88, 0};
        type = "NameLocal";
        radiusA = 25;
        radiusB = 25;
      };
      class zeleznaruda {
        name = "$STR_zeleznaruda";
        position[] = {15652.4, 5205.52, 0};
        type = "NameVillage";
        radiusA = 150;
        radiusB = 150;
      };
      class sektora {
        name = "$STR_sektora";
        position[] = {13098.1, 7982.44, 0};
        type = "NameLocal";
        radiusA = 75;
        radiusB = 75;
      };
      class utrech {
        name = "$STR_utrech";
        position[] = {14082.7, 6797.85};
        type = "NameLocal";
        radiusA = 10;
        radiusB = 10;
      };
    };
  };
};
class CfgWorldList {
  class taviana {
  };
};
class CfgMissions {
  class Cutscenes {
    class taviIntro {
    };
  };
};
class CfgSurfaces {
  class Default {
  };
  class TAVtrava1surface : Default {
    files = "tav_trava1_*";
    rough = 0.1;
    dust = 0.1;
    soundEnviron = "grass";
    character = "tav_trava1clutter";
  };
  class TAVles1surface : Default {
    files = "tav_les1_*";
    rough = 0.1;
    dust = 0.1;
    soundEnviron = "grass";
    character = "tav_les1clutter";
  };
  class TAVpole1surface : Default {
    files = "tav_pole1_*";
    rough = 0.1;
    dust = 0.5;
    soundEnviron = "grass";
    character = "tav_pole1clutter";
  };
  class TAVpole2surface : Default {
    files = "tav_pole2_*";
    rough = 0.1;
    dust = 1.5;
    soundEnviron = "grass";
    character = "tav_pole2clutter";
  };
  class TAVkamen1surface : Default {
    files = "tav_kamen1_*";
    rough = 0.1;
    dust = 0.5;
    soundEnviron = "grass";
    character = "tav_kamen1clutter";
  };
  class TAVskalasurface : Default {
    files = "tav_skala_*";
    rough = 0.1;
    dust = 0.5;
    soundEnviron = "grass";
    character = "tav_skalaclutter";
  };
  class TAVsnichsurface : Default {
    files = "tav_snich_*";
    rough = 0.1;
    dust = 0.5;
    soundEnviron = "grass";
    character = "tav_snichclutter";
  };
  class TAVskukusurface : Default {
    files = "tav_pole1_*";
    rough = 0.1;
    dust = 0.5;
    soundEnviron = "grass";
    character = "tav_kukuclutter";
  };
  class TAVrepkasurface : Default {
    files = "tav_repka_*";
    rough = 0.1;
    dust = 0.5;
    soundEnviron = "grass";
    character = "tav_repkaclutter";
  };
  class TAVbrehsurface : Default {
    files = "tav_breh_*";
    rough = 0.1;
    dust = 0.5;
    soundEnviron = "grass";
    character = "tav_brehclutter";
  };
  class TAVchalksurface : Default {
    files = "tav_chalk_*";
    rough = 0.1;
    dust = 0.5;
    soundEnviron = "grass";
    character = "tav_chalkclutter";
  };
};
class CfgSurfaceCharacters {
  class tav_trava1clutter {
    probability[] = {0.52, 0.1, 0.1, 0.01};
    names[] = {"tav_GrassCrookedGreen", "tav_GrassCrooked", "tav_AutumnFlowers", "tav_WeedDead"};
  };
  class tav_les1clutter {
    probability[] = {0.1, 0.2, 0.3, 0.05, 0.1, 0.05, 0.2};
    names[] = {"tav_fern", "tav_ferntall", "tav_boruvka", "tav_babka", "tav_horcak", "tav_muchomurka", "tav_malina"};
  };
  class tav_pole1clutter {
    probability[] = {0.52, 0.1, 0.1, 0.01, 0.01};
    names[] = {"tav_GrassCrookedGreen", "tav_GrassCrooked", "tav_AutumnFlowers", "tav_WeedDead", "tav_WeedDead"};
  };
  class tav_pole2clutter {
    probability[] = {};
    names[] = {};
  };
  class tav_kamen1clutter {
    probability[] = {0.79, 0.1, 0.1};
    names[] = {"tav_grassautumnbrown", "tav_deadgrassbunch", "tav_caluna"};
  };
  class tav_skalaclutter {
    probability[] = {};
    names[] = {};
  };
  class tav_snichclutter {
    probability[] = {};
    names[] = {};
  };
  class tav_kukuclutter {
    probability[] = {0.79};
    names[] = {"tav_Helianthus"};
  };
  class tav_repkaclutter {
    probability[] = {0.79};
    names[] = {"tav_repka"};
  };
  class tav_brehclutter {
    probability[] = {0.1, 0.1};
    names[] = {"tav_AutumnFlowers", "tav_WeedDead"};
  };
  class tav_chalkclutter {
    probability[] = {};
    names[] = {};
  };
};
