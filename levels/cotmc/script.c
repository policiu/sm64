#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "include/macro_presets.h"
#include "random/randomizer.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/cotmc/header.h"

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_CAP_SWITCH, /*pos*/ 0,  363, -6144, /*angle*/ 0, 0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvCapSwitch),
    OBJECT(/*model*/ MODEL_NONE,       /*pos*/ 0,  500, -7373, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterfallSoundLoop),
    OBJECT(/*model*/ MODEL_NONE,       /*pos*/ 0,  500,  3584, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterfallSoundLoop),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE,       /*pos*/ 0, -200, -7000, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenRedCoinStar),
    RETURN(),
};

static LevelScript script_func_local_5[21*7+1];

static void setup_script_func_local_5() {
    u32 index = 0;
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,      /*yaw*/ 270, /*pos*/   -71,    20,   720, /*behParam*/ DIALOG_123);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_1up,                  /*yaw*/   0, /*pos*/   900,   260, -3620);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_box_1up_running_away, /*yaw*/   0, /*pos*/   -20,   180,  2060);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_box_metal_cap,        /*yaw*/   0, /*pos*/  -360,   300,  -200);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_box_metal_cap,        /*yaw*/   0, /*pos*/   300,   620, -5280);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/   400,   256, -4300);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_ring_horizontal, /*yaw*/   0, /*pos*/     0,  -450, -7000);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/     0,  -170, -1660);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/   -20,  -211, -3940);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/   200,  -291, -5600);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/   980,   260, -3430);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/  -540,  -352, -5940);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/  -300,   450, -6240);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/  -200,  -400, -6680);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/   250,   450, -6400);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/   540,  -361, -6340);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/   980,   260, -3810);
    generate_enemy(script_func_local_5, &index, /*pos*/ -2920,   220,   -20, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -1380,   240,   740, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/   360,   200, -1120, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/  -340,   260, -2620, /*angle*/ 0, 0, 0);
    script_func_local_5[index] = RETURN();
}

static void setup_level_scripts_local() {
    setup_script_func_local_5();
    suffle_levelscript_array(script_func_local_5, sizeof(script_func_local_5)/sizeof(script_func_local_5[0]));
}


const LevelScript level_cotmc_entry[] = {
    CALL(LEVEL_COTMC, generate_init_level),
    CALL(0, setup_level_scripts_local),
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _cotmc_segment_7SegmentRomStart, _cotmc_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _cave_mio0SegmentRomStart, _cave_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group8_mio0SegmentRomStart, _group8_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group8_geoSegmentRomStart,  _group8_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group17_geoSegmentRomStart,  _group17_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_9),
    JUMP_LINK(script_func_global_18),
    JUMP_LINK(script_func_global_1),

    AREA(/*index*/ 1, cotmc_geo_0001A0),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -4185, 1020, -47, /*angle*/ 0, 90, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvAirborneWarp),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_COTMC, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x66, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF3, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x14, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_2),
        JUMP_LINK(script_func_local_1),
        JUMP_LINK(script_func_local_5),
        TERRAIN(/*terrainData*/ cotmc_seg7_collision_level),
        //MACRO_OBJECTS(/*objList*/ cotmc_seg7_macro_objs),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_130),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ -4185, 20, -47),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
