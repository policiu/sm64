#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "include/macro_presets.h"
#include "engine/randomizer.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/ccm/header.h"

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_CCM_ROPEWAY_LIFT, /*pos*/ 531, -4430, 6426,    /*angle*/ 0,   0, 0, /*behParam*/ 0x07120000, /*beh*/ bhvPlatformOnTrack),
    OBJECT(/*model*/ MODEL_DL_CANNON_LID, /*pos*/ -3615, -4607,  4790, /*angle*/     0,     0,     0, /*behParam*/ (0x00 << 16) + (0x00 & 0xFF00), /*beh*/ bhvCannonClosed),
    OBJECT(/*model*/ MODEL_DL_CANNON_LID, /*pos*/ -5045, -1740,  4615, /*angle*/     0,     0,     0, /*behParam*/ (0x00 << 16) + (0x00 & 0xFF00), /*beh*/ bhvCannonClosed),
    OBJECT(/*model*/ MODEL_DL_CANNON_LID, /*pos*/  1090, -4607,  5729, /*angle*/     0,     0,     0, /*behParam*/ (0x80 << 16) + (0x80 & 0xFF00), /*beh*/ bhvCannonClosed),

    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_PENGUIN,          /*pos*/  2650, -3735,  3970, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvSmallPenguin),
    OBJECT(/*model*/ MODEL_PENGUIN,          /*pos*/  -555,  3470, -1000, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallPenguin),
    OBJECT_WITH_ACTS(/*model*/ MODEL_CCM_SNOWMAN_BASE, /*pos*/  2560,  2662, -1122, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSnowmansBottom, /*acts*/ ACT_5),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,             /*pos*/  2665, -4607,  4525, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCcmTouchedStarSpawn, /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_PENGUIN,          /*pos*/  3450, -4700,  4550, /*angle*/ 0,   0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvTuxiesMother,          /*acts*/ ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,             /*pos*/  4200,  -927,   400, /*angle*/ 0,   0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvHiddenRedCoinStar,   /*acts*/ ACT_4),
    OBJECT_WITH_ACTS(/*model*/ MODEL_CCM_SNOWMAN_HEAD, /*pos*/ -4230, -1169,  1813, /*angle*/ 0, 270, 0, /*behParam*/ 0x04000000, /*beh*/ bhvSnowmansHead,          /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,             /*pos*/ -2000, -2200, -3000, /*angle*/ 0,   0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,                   /*acts*/ ACT_6),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_PENGUIN, /*pos*/ -4952,  6656, -6075, /*angle*/ 0, 270, 0, /*behParam*/ 0x02000000, /*beh*/ bhvRacingPenguin,   /*acts*/ ACT_3),
    OBJECT(/*model*/ MODEL_NONE,    /*pos*/ -6500, -5836, -6400, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPenguinRaceFinishLine),
    OBJECT(/*model*/ MODEL_NONE,    /*pos*/ -6393,  -716,  7503, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPenguinRaceShortcutCheck),
#ifndef VERSION_JP
    OBJECT(/*model*/ MODEL_NONE,    /*pos*/ -4943,  1321,   667, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPlaysMusicTrackWhenTouched),
#endif
    RETURN(),
};
static LevelScript script_func_local_5[36*7+1];

static void setup_script_func_local_5() {
    u32 index = 0;
    
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/ 180, /*pos*/ -2412,  2912,  -878, /*behParam*/ DIALOG_040);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/ 270, /*pos*/ -4350, -4864, -4813, /*behParam*/ DIALOG_094);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/   0, /*pos*/ -1037, -3583,  5872, /*behParam*/ DIALOG_091);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/ 180, /*pos*/  -309, -4889, -3690, /*behParam*/ DIALOG_049);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/   0, /*pos*/  1900, -1535,  3500, /*behParam*/ DIALOG_040);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/ 270, /*pos*/ -1060,  2560, -1840, /*behParam*/ DIALOG_087);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_box_1up_running_away,      /*yaw*/   0, /*pos*/ -4887, -1300, -4003);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_box_1up_running_away,      /*yaw*/   0, /*pos*/ -1557,  -205,  1794);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_hidden_1up_in_pole,        /*yaw*/   0, /*pos*/ -5200, -1345,  2995);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,                  /*yaw*/   0, /*pos*/  -488,  3100, -2305);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,                  /*yaw*/   0, /*pos*/ -3120, -1200, -2080);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,                  /*yaw*/   0, /*pos*/  2940, -1400,  2630);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,                  /*yaw*/   0, /*pos*/  -600,  -505,  1940);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,                  /*yaw*/   0, /*pos*/ -3814, -2112,  6427);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,                  /*yaw*/   0, /*pos*/  2700, -4600,  1230);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,                  /*yaw*/   0, /*pos*/  1990, -4040,  4950);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,                  /*yaw*/   0, /*pos*/  4408, -4550, -1534);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_line_vertical,        /*yaw*/   0, /*pos*/  -180,  3100, -1480);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_line_horizontal,      /*yaw*/   0, /*pos*/  3560,  2100,  -280);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_line_horizontal,      /*yaw*/  77, /*pos*/ -1942,  1334,  1678);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_line_horizontal,      /*yaw*/  90, /*pos*/ -1020,   646, -2706);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_line_horizontal,      /*yaw*/  93, /*pos*/ -1460,  -888, -3933);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_arrow,                /*yaw*/  75, /*pos*/ -2586, -4889, -4093);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_blue_coin_switch,          /*yaw*/   0, /*pos*/  3400,  -820,     0);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_hidden_blue_coin,          /*yaw*/   0, /*pos*/  3400,  -640,  -740);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_hidden_blue_coin,          /*yaw*/   0, /*pos*/  3400,  -320, -1740);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_bobomb_buddy_opens_cannon, /*yaw*/   0, /*pos*/ -1220, -3583,  5969);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_recovery_heart,            /*yaw*/   0, /*pos*/  -270, -4650, -3100);
    generate_enemy(script_func_local_5, &index, /*pos*/  3054, -2674,  2072, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/  2542,  2622, -1714, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -6090, -1740,  1936, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/  4346, -3068,   400, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -5054, -4659, -1054, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -5033, -4740, -2666, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -2376, -1589,  4256, /*angle*/ 0, 252, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/  -394, -1589,  4878, /*angle*/ 0,  74, 0);

    script_func_local_5[index] = RETURN();
}

static LevelScript script_func_local_6[58*7+1];

// Slide
static void setup_script_func_local_6() {
    u32 index = 0;
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_wooden_signpost,      /*yaw*/   0, /*pos*/ -5320,  6656, -6540, /*behParam*/ DIALOG_054),
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  2255,  4091,  -536);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin,          /*yaw*/   0, /*pos*/  2055,  4352,  -497);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin,          /*yaw*/   0, /*pos*/  1843,  4486,  -433);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin,          /*yaw*/   0, /*pos*/  1603,  4567,  -347);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin,          /*yaw*/   0, /*pos*/  1397,  4530,  -287);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/ -4980,  2180, -1980);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/  6640,   -60,  -800);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/  6640, -1020,   440);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/  6640, -1820,  1760);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/  6640, -2260,  2620);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/ -6460, -5000, -3200);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/ -6460, -5540, -4100);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/ -6460, -5200, -5000);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_box_1up,              /*yaw*/   0, /*pos*/ -5600, -4500, -6644);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_moving_blue_coin,     /*yaw*/   0, /*pos*/ -3160,  6267, -6120);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  -700,  5923, -6240);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  2260,  5342, -6440);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_coin_line_horizontal, /*yaw*/ 120, /*pos*/  2960,  4280,  -880);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  1900,   659, -2340);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  1720,   690, -2220);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  3400,   302, -5240);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  3600,   297, -5420);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  6120,  4435, -5020);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  6140,  -152, -5540);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  6320,  -200, -5320);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  3960, -3297,  6440);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  1400, -3560,  5840);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  -220, -3780,  4960);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  -520, -3890,  4360);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  -740, -4008,  3540);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  -920, -4094,  2760);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  -960, -4101,  2080);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  -860,  3391,  -760);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -1120,  3293, -1140);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -1560,  2989, -3280);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -1740,  2926, -3780);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -2849,  2677, -4608);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -4620,  2353, -4120);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_1up_sliding,          /*yaw*/   0, /*pos*/ -4890,  1452,   552);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_1up_sliding,          /*yaw*/   0, /*pos*/ -6369, -1538,  3726);
    script_func_local_6[index] = RETURN();
}

static void setup_level_scripts_local() {
    setup_script_func_local_5();
    suffle_levelscript_array(script_func_local_5, sizeof(script_func_local_5)/sizeof(script_func_local_5[0]));

    // area 2
    setup_script_func_local_6();
    suffle_levelscript_array(script_func_local_6, sizeof(script_func_local_6)/sizeof(script_func_local_6[0]));
}

const LevelScript level_ccm_entry[] = {
    CALL(LEVEL_CCM, generate_init_level),
    CALL(0, setup_level_scripts_local),
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _snow_mio0SegmentRomStart, _snow_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _ccm_skybox_mio0SegmentRomStart, _ccm_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group7_mio0SegmentRomStart, _group7_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group7_geoSegmentRomStart,  _group7_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group16_mio0SegmentRomStart, _group16_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group16_geoSegmentRomStart,  _group16_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_8),
    JUMP_LINK(script_func_global_17),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR,    cabin_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE,     snow_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT,  ccm_geo_0003D0),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE,  ccm_geo_0003F0),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD,  ccm_geo_00040C),

    AREA(/*index*/ 1, ccm_geo_00051C),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1512,  3560, -2305, /*angle*/ 0,  140, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvWarps74),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/  -181,  2918, -1486, /*angle*/ 0,    0, 0, /*behParam*/ 0x0F1E0000, /*beh*/ bhvWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1847,  2815,  -321, /*angle*/ 0, -158, 0, /*behParam*/ 0x001F0000, /*beh*/ bhvFadingWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/  3349, -4694,  -183, /*angle*/ 0,  -34, 0, /*behParam*/ 0x00200000, /*beh*/ bhvFadingWarp),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_CCM, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x14, /*destLevel*/ LEVEL_CCM, /*destArea*/ 0x02, /*destNode*/ 0x14, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x1E, /*destLevel*/ LEVEL_CCM, /*destArea*/ 0x02, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x1F, /*destLevel*/ LEVEL_CCM, /*destArea*/ 0x01, /*destNode*/ 0x20, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x20, /*destLevel*/ LEVEL_CCM, /*destArea*/ 0x01, /*destNode*/ 0x1F, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x65, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_1),
        JUMP_LINK(script_func_local_2),
        JUMP_LINK(script_func_local_3),
        JUMP_LINK(script_func_local_5),
        TERRAIN(/*terrainData*/ ccm_seg7_area_1_collision),
        //MACRO_OBJECTS(/*objList*/ ccm_seg7_area_1_macro_objs),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_048),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_SNOW),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SNOW),
    END_AREA(),

    AREA(/*index*/ 2, ccm_geo_0005E8),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -5836, 7465, -6143, /*angle*/ 0, 90, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvWarps64),
        WARP_NODE(/*id*/ 0x14, /*destLevel*/ LEVEL_CCM, /*destArea*/ 0x01, /*destNode*/ 0x14, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_CCM, /*destArea*/ 0x02, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x65, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_4),
        JUMP_LINK(script_func_local_6),
        TERRAIN(/*terrainData*/ ccm_seg7_area_2_collision),
        //MACRO_OBJECTS(/*objList*/ ccm_seg7_area_2_macro_objs),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_SLIDE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 140, /*pos*/ -1512, 2560, -2305),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
