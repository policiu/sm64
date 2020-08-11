#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "include/macro_presets.h"
#include "random/randomizer.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bits/header.h"

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_BITS_SLIDING_PLATFORM,       /*pos*/ -2370, -4525,     0, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00100000, /*beh*/ bhvSlidingPlatform2),
    OBJECT(/*model*/ MODEL_BITS_TWIN_SLIDING_PLATFORMS, /*pos*/ -2611,  3544,  -904, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00CF0000, /*beh*/ bhvSlidingPlatform2),
    OBJECT(/*model*/ MODEL_BITS_TWIN_SLIDING_PLATFORMS, /*pos*/ -4700,  3544,  -904, /*angle*/ 0, 180, 0, /*behParam*/ 0x008F0000, /*beh*/ bhvSlidingPlatform2),
    OBJECT(/*model*/ MODEL_BITS_OCTAGONAL_PLATFORM,     /*pos*/  4139, -1740, -1831, /*angle*/ 0, 0, 0,   /*behParam*/ 0x02000000, /*beh*/ bhvOctagonalPlatformRotating),
    OBJECT(/*model*/ MODEL_BITS_OCTAGONAL_PLATFORM,     /*pos*/ -6459,  1732,  -904, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvOctagonalPlatformRotating),
    OBJECT(/*model*/ MODEL_BITS_OCTAGONAL_PLATFORM,     /*pos*/ -4770,  1732,  -904, /*angle*/ 0, 0, 0,   /*behParam*/ 0x02000000, /*beh*/ bhvOctagonalPlatformRotating),
    OBJECT(/*model*/ MODEL_BITS_FERRIS_WHEEL_AXLE,      /*pos*/ -1748, -1330, -1094, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFerrisWheelAxle),
    OBJECT(/*model*/ MODEL_BITS_FERRIS_WHEEL_AXLE,      /*pos*/  2275,  5628, -1315, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFerrisWheelAxle),
    OBJECT(/*model*/ MODEL_BITS_FERRIS_WHEEL_AXLE,      /*pos*/  3114,  4701, -1320, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFerrisWheelAxle),
    OBJECT(/*model*/ MODEL_BITS_ARROW_PLATFORM,         /*pos*/  2793,  2325,  -904, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00610000, /*beh*/ bhvActivatedBackAndForthPlatform),
    OBJECT(/*model*/ MODEL_BITS_SEESAW_PLATFORM,        /*pos*/    27, -1555,  -713, /*angle*/ 0, 90, 0,  /*behParam*/ 0x00010000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_BITS_TILTING_W_PLATFORM,     /*pos*/  -306, -4300,     0, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00020000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_BITS_STAIRCASE,              /*pos*/  1769,  -234,  -899, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvAnimatesOnFloorSwitchPress),
    OBJECT(/*model*/ MODEL_PURPLE_SWITCH,               /*pos*/  -279,  -234,  -900, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFloorSwitchAnimatesObject),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/ -6460,  2039,  -905, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00CF0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/ -3326,  3227,  -905, /*angle*/ 0, 0, 0,   /*behParam*/ 0x004D0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  5518,  3184, -4019, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  6465,  3731, -1915, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  5915,  3718, -4019, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 350, 6800, -6800, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserCourseRedCoinStar),
    RETURN(),
};

static LevelScript script_func_local_5[56*7+1];

static void setup_script_func_local_5() {
    u32 index = 0;
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_box_1up_running_away,   /*yaw*/   0, /*pos*/  4100, -1050, -1800);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_pushable_metal_box,     /*yaw*/   0, /*pos*/ -2300, -4100,     0);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_hidden_1up_trigger,     /*yaw*/   0, /*pos*/ -6600,  2080,  -180);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_hidden_1up_trigger,     /*yaw*/   0, /*pos*/ -7200,  2080,  -890);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_hidden_1up_trigger,     /*yaw*/   0, /*pos*/ -6600,  2080, -1550);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_1up,                    /*yaw*/   0, /*pos*/  -259,  6059, -3759);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_1up,                    /*yaw*/   0, /*pos*/ -1751, -1246,  -805);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_1up,                    /*yaw*/   0, /*pos*/  1380, -1740,  -660);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_1up,                    /*yaw*/   0, /*pos*/ -1399,  2750, -1159);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,               /*yaw*/   0, /*pos*/  1590, -1120, -2055);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,               /*yaw*/   0, /*pos*/ -2960, -3360,     0);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,               /*yaw*/   0, /*pos*/  -298, -2600, -1600);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,               /*yaw*/   0, /*pos*/  7618,  4850, -1909);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,               /*yaw*/   0, /*pos*/  -136,  3109,  -909);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,               /*yaw*/   0, /*pos*/ -3330,  4050,  -900);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,               /*yaw*/   0, /*pos*/ -4830,  2103, -1030);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,               /*yaw*/   0, /*pos*/   348,  5921, -4585);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_line_horizontal,   /*yaw*/   0, /*pos*/  -302, -2457,  -800);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_yellow_coin,            /*yaw*/   0, /*pos*/ -1400, -4000,     0);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_yellow_coin,            /*yaw*/   0, /*pos*/  -272, -4000,     0);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_yellow_coin,            /*yaw*/   0, /*pos*/   840, -4000,     0);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_yellow_coin,            /*yaw*/   0, /*pos*/   600,  -200,  -900);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_yellow_coin,            /*yaw*/   0, /*pos*/   900,    60,  -900);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_yellow_coin,            /*yaw*/   0, /*pos*/  1200,   310,  -900);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_yellow_coin,            /*yaw*/   0, /*pos*/  1500,   560,  -900);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_yellow_coin,            /*yaw*/   0, /*pos*/  1800,   810,  -900);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_yellow_coin,            /*yaw*/   0, /*pos*/  2100,  1060,  -900);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_line_horizontal,   /*yaw*/   0, /*pos*/  7322,  4566, -1922);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_line_horizontal,   /*yaw*/   0, /*pos*/ -5080, -2457,  -800);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_yellow_coin,            /*yaw*/   0, /*pos*/ -7200,  2080,  -890);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_yellow_coin,            /*yaw*/   0, /*pos*/ -6600,  2080,  -180);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_yellow_coin,            /*yaw*/   0, /*pos*/ -6600,  2080, -1550);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_recovery_heart,         /*yaw*/   0, /*pos*/  1279,  2639,  -959);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_line_horizontal,   /*yaw*/   0, /*pos*/  1879,  4639, -1559);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_recovery_heart,         /*yaw*/   0, /*pos*/   359,  6099, -3219);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_hidden_1up, /*yaw*/   0, /*pos*/ -6640,  2280,  -890, /*behParam*/ 3);
    generate_enemy(script_func_local_5, &index, /*pos*/  3680,  2428, -1840, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/   360,  6040, -2880, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -5239,  3839,  -999, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -1559,  3800, -1079, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -1079,  3800, -1039, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -2839,  2059,  -959, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -3479,  2059,  -799, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -4769,  2344,  -904, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/   377,  4140, -2042, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -4180, -1330,  -800, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -3909,  -409, -1199, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -6712,  -899,  -796, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -3600, -2433,  -800, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -2656, -2442,  -800, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/  6180, -1791,     0, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/  6260, -1453, -1800, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/  1920, -1187, -1840, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -6460,  2080,  -900, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -6460,  2280,  -900, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/  4100, -1320, -1800, /*angle*/ 0, 0, 0);
    script_func_local_5[index] = RETURN();
}

static void setup_level_scripts_local() {
    setup_script_func_local_5();
    suffle_levelscript_array(script_func_local_5, sizeof(script_func_local_5)/sizeof(script_func_local_5[0]));
}

const LevelScript level_bits_entry[] = {
    CALL(LEVEL_BITS, generate_init_level),
    CALL(0, setup_level_scripts_local),
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _bits_segment_7SegmentRomStart, _bits_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _bits_skybox_mio0SegmentRomStart, _bits_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group14_geoSegmentRomStart,  _group14_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_15),
    JUMP_LINK(script_func_global_1),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           bits_geo_000430),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           bits_geo_000448),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           bits_geo_000460),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           bits_geo_000478),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           bits_geo_000490),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           bits_geo_0004A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           bits_geo_0004C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           bits_geo_0004D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           bits_geo_0004F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           bits_geo_000508),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           bits_geo_000520),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           bits_geo_000538),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           bits_geo_000550),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           bits_geo_000568),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           bits_geo_000580),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           bits_geo_000598),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           bits_geo_0005B0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           bits_geo_0005C8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_SLIDING_PLATFORM,       bits_geo_0005E0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_TWIN_SLIDING_PLATFORMS, bits_geo_0005F8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_OCTAGONAL_PLATFORM,     bits_geo_000610),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_BLUE_PLATFORM,          bits_geo_000628),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_FERRIS_WHEEL_AXLE,      bits_geo_000640),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_ARROW_PLATFORM,         bits_geo_000658),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_SEESAW_PLATFORM,        bits_geo_000670),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_TILTING_W_PLATFORM,     bits_geo_000688),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE,              bits_geo_0006A0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME1,       bits_geo_0006B8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME2,       bits_geo_0006D0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME3,       bits_geo_0006E8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME4,       bits_geo_000700),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_WARP_PIPE,              warp_pipe_geo),

    AREA(/*index*/ 1, bits_geo_000718),
        OBJECT(/*model*/ MODEL_NONE,           /*pos*/ -7039, -3812,     4, /*angle*/ 0, 90, 0,  /*behParam*/ 0x000A0000, /*beh*/ bhvAirborneWarp),
        OBJECT(/*model*/ MODEL_BITS_WARP_PIPE, /*pos*/   351,  6652, -6030, /*angle*/ 0, 0, 0,   /*behParam*/ 0x000B0000, /*beh*/ bhvWarpPipe),
        OBJECT(/*model*/ MODEL_NONE,           /*pos*/   351,  6800, -3900, /*angle*/ 0, 180, 0, /*behParam*/ 0x000C0000, /*beh*/ bhvDeathWarp),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_BITS, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0B, /*destLevel*/ LEVEL_BOWSER_3, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0C, /*destLevel*/ LEVEL_BITS, /*destArea*/ 0x01, /*destNode*/ 0x0C, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x6B, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_1),
        JUMP_LINK(script_func_local_2),
        JUMP_LINK(script_func_local_5),
        TERRAIN(/*terrainData*/ bits_seg7_collision_level),
        //MACRO_OBJECTS(/*objList*/ bits_seg7_macro_objs),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_KOOPA_ROAD),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ -7039, -4812, 4),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
