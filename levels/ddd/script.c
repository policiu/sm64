#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "include/dialog_ids.h"
#include "include/macro_presets.h"
#include "engine/randomizer.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/ddd/header.h"

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_SUSHI,        /*pos*/ -3071,  -270,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSushiShark),
    OBJECT(/*model*/ MODEL_SUSHI,        /*pos*/ -3071, -4270,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSushiShark),
    OBJECT(/*model*/ MODEL_NONE,         /*pos*/ -3071,  -130,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFish3),
    OBJECT(/*model*/ MODEL_NONE,         /*pos*/ -3071, -4270,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFish2),
    OBJECT(/*model*/ MODEL_NONE,         /*pos*/ -3071, -2000,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvChirpChirp),
    OBJECT(/*model*/ MODEL_NONE,         /*pos*/ -3071, -3000,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvChirpChirp),
    OBJECT(/*model*/ MODEL_DL_WHIRLPOOL, /*pos*/ -3174, -4915, 102, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWhirlpool),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,      /*pos*/ -2400, -4607, 125, /*angle*/ 0, 0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvTreasureChests, /*acts*/ ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_MANTA_RAY, /*pos*/ -4640, -1380,  40, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvMantaRay,       /*acts*/ ACT_5),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_DDD_BOWSER_SUB_DOOR, /*pos*/    0,    0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserSubDoor),
    OBJECT(/*model*/ MODEL_DDD_BOWSER_SUB,      /*pos*/    0,    0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowsersSub),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 5120, 1005,  3584, /*angle*/ 0, 180, 0, /*behParam*/ 0x001E0000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 5605, 1005,  3380, /*angle*/ 0, 270, 0, /*behParam*/ 0x00150000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 1800, 1005,  1275, /*angle*/ 0,   0, 0, /*behParam*/ 0x000B0000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 4000, 1005,  1075, /*angle*/ 0, 180, 0, /*behParam*/ 0x000B0000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 1830, 1005,   520, /*angle*/ 0, 270, 0, /*behParam*/ 0x00140000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 4000, 1005,  1275, /*angle*/ 0,   0, 0, /*behParam*/ 0x000B0000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 5760, 1005,   360, /*angle*/ 0, 270, 0, /*behParam*/ 0x00170000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 3310, 1005, -1945, /*angle*/ 0,   0, 0, /*behParam*/ 0x00170000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 3550, 1005, -2250, /*angle*/ 0,   0, 0, /*behParam*/ 0x000D0000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/  3086,   110,  6120, /*angle*/     0,   180,     0, /*behParam*/ (DIALOG_053 << 16) + (DIALOG_053 & 0xFF00), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX, /*pos*/  6075,  -100,  2000, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX, /*pos*/  5875,   100,  2000, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX, /*pos*/  5675,   100,  2000, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX, /*pos*/  5475,   300,  2000, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX, /*pos*/  5275,   300,  2000, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX, /*pos*/  5075,   500,  2000, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX, /*pos*/  4875,   500,  2000, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX, /*pos*/  6275,  -100,  2000, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX, /*pos*/  6475,  -100,  2000, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX, /*pos*/  5740,   710,  3900, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX, /*pos*/  5740,   510,  4100, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX, /*pos*/  5740,   310,  4300, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX, /*pos*/  5740,   110,  4500, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX, /*pos*/  5940,   110,  4500, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_PURPLE_SWITCH, /*pos*/  6800,   110,  2000, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvFloorSwitchHiddenObjects),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 3404, -3319, -489, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvJetStream),
    RETURN(),
};

static const LevelScript script_func_local_5[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 3900,   850,  -600, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStar,                    /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 5513,  1200,   900, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvHiddenRedCoinStar,    /*acts*/ ACT_3),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 3404, -3319,  -489, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvJetStreamRingSpawner, /*acts*/ ACT_4),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 2030, -3700, -2780, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,                    /*acts*/ ACT_6),
    RETURN(),
};

static LevelScript script_func_local_7[18*7+1];

static void setup_script_func_local_7() {
    u32 index = 0;
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_hidden_1up,           /*yaw*/   0, /*pos*/ -4760, -5080,   580, /*behParam*/ 1),
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_seaweed_bundle,       /*yaw*/   0, /*pos*/ -2880, -5120, -1850);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_clam_shell,           /*yaw*/  90, /*pos*/ -4760, -5120,   580);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_seaweed_bundle,       /*yaw*/   0, /*pos*/ -3510, -5120,  1950);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_hidden_1up_trigger,   /*yaw*/   0, /*pos*/ -4760, -5100,   580);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_coin_ring_vertical,   /*yaw*/  90, /*pos*/ -1000, -4250,     0);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_fish_group,           /*yaw*/   0, /*pos*/ -4646, -4615,  -800);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_fish_group_2,         /*yaw*/   0, /*pos*/ -1804, -2560,  1292);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_coin_line_vertical,   /*yaw*/   0, /*pos*/ -3760, -4560,   660);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_coin_line_vertical,   /*yaw*/   0, /*pos*/ -4240, -4786,  1180);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_coin_line_horizontal, /*yaw*/ 315, /*pos*/ -4840, -1137,  1860);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -2180, -5119,  1720);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -1460, -5119,  1300);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -1320, -5119,   840);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_fish_group,           /*yaw*/   0, /*pos*/ -3580, -2280, -1120);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_fish_group,           /*yaw*/   0, /*pos*/ -2020, -3460,  -120);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_coin_ring_vertical,   /*yaw*/  90, /*pos*/     0, -4250,     0);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_7, index, /*preset*/ macro_coin_ring_vertical,   /*yaw*/  90, /*pos*/ -2000, -4250,     0);
    script_func_local_7[index] = RETURN();
}
static LevelScript script_func_local_6[19*7+1];

static void setup_script_func_local_6() {
    u32 index = 0;
    //TODO: Add seperate Randommizer for water Enemies
    //MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/ 180, /*pos*/  3086,   110,  6120, /*behParam*/ DIALOG_053),
    OBJECT_ASSIGNMENT(script_func_local_6, index, /*model*/ MODEL_EXCLAMATION_BOX, /*pos*/  6800,   500,  -850, /*angle*/     0,     0,     0, /*behParam*/ ((1 &0x00FF) << 16) + ((1 &0x00FF) & 0xFF00), /*beh*/ bhvExclamationBox);
    OBJECT_ASSIGNMENT(script_func_local_6, index, /*model*/ MODEL_EXCLAMATION_BOX, /*pos*/  6800,   500,  -150, /*angle*/     0,     0,     0, /*behParam*/ ((2 &0x00FF) << 16) + ((2 &0x00FF) & 0xFF00), /*beh*/ bhvExclamationBox);

    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  4680,  1155, -2200);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  3525,  1155, -2250);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  3850,  1111,  3550);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  4400,  1288,  3595);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  2974,  1015,  3584);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  5550,  1015,  3575);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  3300,  1111, -1900);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  2100,  1025, -1600);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_coin_line_horizontal,        /*yaw*/  90, /*pos*/  3923,   110,  5953);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_fire_spitter,                /*yaw*/   0, /*pos*/   938,   153,  4107);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_blue_coin_switch,            /*yaw*/   0, /*pos*/  1614,   928,   922);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  1414,  1020,   622);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  1814,  1020,   622);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  1814,  1020,  1222);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  1414,  1020,  1222);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  1414,  1020,   922);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_6, index, /*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  1814,  1020,   922);
    script_func_local_6[index] = RETURN();
}

static LevelScript script_func_local_8[11*7+1];

static void setup_script_func_local_8() {
    u32 index = 0;
    OBJECT_ASSIGNMENT(script_func_local_8, index, /*model*/ MODEL_NONE, /*pos*/  2061, -3323,  2246, /*angle*/     0,     0,     0, /*behParam*/ ((1 &0x00FF) << 16) + ((1 &0x00FF) & 0xFF00), /*beh*/ bhvLargeFishGroup);
    OBJECT_ASSIGNMENT(script_func_local_8, index, /*model*/ MODEL_NONE, /*pos*/  5661, -2923, -1415, /*angle*/     0,     0,     0, /*behParam*/ ((3 &0x00FF) << 16) + ((3 &0x00FF) & 0xFF00), /*beh*/ bhvLargeFishGroup);
    OBJECT_ASSIGNMENT(script_func_local_8, index, /*model*/ MODEL_CLAM_SHELL, /*pos*/  1273, -4106,  2320, /*angle*/     0,    90,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvClamShell);
    OBJECT_ASSIGNMENT(script_func_local_8, index, /*model*/ MODEL_NONE, /*pos*/  6420, -4106, -2026, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvSeaweedBundle);
    OBJECT_ASSIGNMENT(script_func_local_8, index, /*model*/ MODEL_NONE, /*pos*/  6340, -4106, -1413, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvSeaweedBundle);
    OBJECT_ASSIGNMENT(script_func_local_8, index, /*model*/ MODEL_CLAM_SHELL, /*pos*/  1966, -4106,  3226, /*angle*/     0,   135,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvClamShell);
    OBJECT_ASSIGNMENT(script_func_local_8, index, /*model*/ MODEL_CLAM_SHELL, /*pos*/  3886, -4006,  5130, /*angle*/     0,   180,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvClamShell);
    OBJECT_ASSIGNMENT(script_func_local_8, index, /*model*/ MODEL_NONE, /*pos*/  2999, -4092,  4430, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvSeaweedBundle);
    OBJECT_ASSIGNMENT(script_func_local_8, index, /*model*/ MODEL_KOOPA_SHELL, /*pos*/  3886, -4050,  5100, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvKoopaShellUnderwater);
    OBJECT_ASSIGNMENT(script_func_local_8, index, /*model*/ MODEL_NONE, /*pos*/  4876, -4087,  4430, /*angle*/     0,     0,     0, /*behParam*/ ((COIN_FORMATION_FLAG_RING &0x00FF) << 16) + ((COIN_FORMATION_FLAG_RING &0x00FF) & 0xFF00), /*beh*/ bhvCoinFormation);
    OBJECT_ASSIGNMENT(script_func_local_8, index, /*model*/ MODEL_NONE, /*pos*/  3892, -4030, -3830, /*angle*/     0,     0,     0, /*behParam*/ (((COIN_FORMATION_FLAG_FLYING | COIN_FORMATION_FLAG_VERTICAL) &0x00FF) << 16) + (((COIN_FORMATION_FLAG_FLYING | COIN_FORMATION_FLAG_VERTICAL) &0x00FF) & 0xFF00), /*beh*/ bhvCoinFormation);

    script_func_local_8[index] = RETURN();
}
static void setup_level_scripts_local() {

    setup_script_func_local_8();
    suffle_levelscript_array(script_func_local_8, sizeof(script_func_local_8)/sizeof(script_func_local_8[0]));

    setup_script_func_local_7();
    suffle_levelscript_array(script_func_local_7, sizeof(script_func_local_7)/sizeof(script_func_local_7[0]));

    setup_script_func_local_6();
    suffle_levelscript_array(script_func_local_6, sizeof(script_func_local_6)/sizeof(script_func_local_6[0]));
}


const LevelScript level_ddd_entry[] = {
    CALL(LEVEL_DDD, generate_init_level),
    CALL(0, setup_level_scripts_local),
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _ddd_segment_7SegmentRomStart, _ddd_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _water_mio0SegmentRomStart, _water_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group4_mio0SegmentRomStart, _group4_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group4_geoSegmentRomStart,  _group4_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group13_mio0SegmentRomStart, _group13_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group13_geoSegmentRomStart,  _group13_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_5),
    JUMP_LINK(script_func_global_14),
    LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB_DOOR, ddd_geo_000478),
    LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB,      ddd_geo_0004A0),
    LOAD_MODEL_FROM_GEO(MODEL_DDD_POLE,            ddd_geo_000450),

    AREA(/*index*/ 1, ddd_geo_0004C0),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3071, 3000, 0, /*angle*/ 0, 7, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvWarps74),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_DDD, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x35, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x67, /*flags*/ WARP_NO_CHECKPOINT),
        WHIRLPOOL(/*unk2*/ 0, /*unk3*/ 0, /*pos*/ -3174, -4915, 102, /*strength*/ 20),
        JUMP_LINK(script_func_local_1),
        JUMP_LINK(script_func_local_2),
        JUMP_LINK(script_func_local_7),
        INSTANT_WARP(/*index*/ 3, /*destArea*/ 2, /*displace*/ -8192, 0, 0),
        TERRAIN(/*terrainData*/ ddd_seg7_area_1_collision),
        MACRO_OBJECTS(/*objList*/ ddd_seg7_area_1_macro_objs),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ SEQ_LEVEL_WATER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_WATER),
    END_AREA(),

    AREA(/*index*/ 2, ddd_geo_000570),
        WHIRLPOOL(/*unk2*/ 0, /*unk3*/ 0, /*pos*/ 3355, -3575, -515, /*strength*/ -30),
        WHIRLPOOL(/*unk2*/ 1, /*unk3*/ 2, /*pos*/ 3917, -2040, -6041, /*strength*/ 50),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x35, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x67, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF3, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x1E, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_3),
        JUMP_LINK(script_func_local_4),
        JUMP_LINK(script_func_local_5),
        JUMP_LINK(script_func_local_6),
        JUMP_LINK(script_func_local_8),
        INSTANT_WARP(/*index*/ 2, /*destArea*/ 1, /*displace*/ 8192, 0, 0),
        TERRAIN(/*terrainData*/ ddd_seg7_area_2_collision),
        MACRO_OBJECTS(/*objList*/ ddd_seg7_area_2_macro_objs),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ SEQ_LEVEL_WATER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_WATER),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 180, /*pos*/ -3071, 3000, 500),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
