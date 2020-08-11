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

#include "level_misc_macros.h"
#include "game/level_update.h"
#include "random/randomizer.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

static LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_BOB_CHAIN_CHOMP_GATE, /*pos*/ 1456, 768, 446, /*angle*/ 0, 326, 0, /*behParam*/ 0x00000000, /*beh*/ bhvChainChompGate),
    OBJECT(/*model*/ MODEL_BOB_SEESAW_PLATFORM, /*pos*/ -2303, 717, 1024, /*angle*/ 0, 45, 0, /*behParam*/ 0x00030000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2050, 0, -3069, /*angle*/ 0, 25, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOpenableGrill),
    OBJECT(/*model*/ MODEL_PURPLE_SWITCH, /*pos*/ -2283, 0, -3682, /*angle*/ 0, 27, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFloorSwitchGrills),
    OBJECT(/*model*/ MODEL_CHECKERBOARD_PLATFORM, /*pos*/ 1612, 300, 4611, /*angle*/ 0, 0, 0, /*behParam*/ 0x00280000, /*beh*/ bhvCheckerboardElevatorGroup),
    OBJECT(/*model*/ MODEL_CHAIN_CHOMP, /*pos*/   260,   735,  1920, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvChainChomp),
    OBJECT(/*model*/ MODEL_DL_CANNON_LID, /*pos*/ -5018,  1332, -3533, /*angle*/     0,     0,     0, /*behParam*/ (0x00 << 16) + (0x00 & 0xFF00), /*beh*/ bhvCannonClosed),
    OBJECT(/*model*/ MODEL_DL_CANNON_LID, /*pos*/  6349,  2080, -7066, /*angle*/     0,     0,     0, /*behParam*/ (0xC0 << 16) + (0xC0 & 0xFF00), /*beh*/ bhvCannonClosed),
    OBJECT(/*model*/ MODEL_DL_CANNON_LID, /*pos*/  4243,  3071, -2451, /*angle*/     0,     0,     0, /*behParam*/ (0xC0 << 16) + (0xC0 & 0xFF00), /*beh*/ bhvCannonClosed),
    OBJECT(/*model*/ MODEL_DL_CANNON_LID, /*pos*/  4352,  3072,  1229, /*angle*/     0,     0,     0, /*behParam*/ (0x80 << 16) + (0x80 & 0xFF00), /*beh*/ bhvCannonClosed),
    OBJECT(/*model*/ MODEL_DL_CANNON_LID, /*pos*/  5376,  1537,  4610, /*angle*/     0,     0,     0, /*behParam*/ (0x40 << 16) + (0x40 & 0xFF00), /*beh*/ bhvCannonClosed),
    RETURN(),
};

static LevelScript script_func_local_2[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 1535, 3840, -5561, /*angle*/ 0, 0, 0,
                     /*behParam*/ 0x00000000, /*beh*/ bhvBobBowlingBallSpawner,
                     /*acts*/ ACT_1 | ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 1535, 3840, -5561, /*angle*/ 0, 0, 0,
                     /*behParam*/ 0x00000000, /*beh*/ bhvTtmBowlingBallSpawner,
                     /*acts*/ ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 524, 2825, -5400, /*angle*/ 0, 0, 0,
                     /*behParam*/ 0x00020000, /*beh*/ bhvBobBowlingBallSpawner,
                     /*acts*/ ACT_1 | ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 524, 2825, -5400, /*angle*/ 0, 0, 0,
                     /*behParam*/ 0x00020000, /*beh*/ bhvTtmBowlingBallSpawner,
                     /*acts*/ ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT(/*model*/ MODEL_BOWLING_BALL, /*pos*/ -993, 886, -3565, /*angle*/ 0, 0, 0,
           /*behParam*/ 0x00000000, /*beh*/ bhvPitBowlingBall),
    OBJECT(/*model*/ MODEL_BOWLING_BALL, /*pos*/ -785, 886, -4301, /*angle*/ 0, 0, 0,
           /*behParam*/ 0x00000000, /*beh*/ bhvPitBowlingBall),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOWLING_BALL, /*pos*/ -93, 886, -3414, /*angle*/ 0, 0, 0,
                     /*behParam*/ 0x00000000, /*beh*/ bhvPitBowlingBall,
                     /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOBOMB_BUDDY, /*pos*/ -5723, 140, 6017, /*angle*/ 0, 0, 0,
                     /*behParam*/ 0x00020000, /*beh*/ bhvBobombBuddy, /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOBOMB_BUDDY, /*pos*/ -6250, 0, 6680, /*angle*/ 0, 0, 0,
                     /*behParam*/ 0x00010000, /*beh*/ bhvBobombBuddy, /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOBOMB_BUDDY, /*pos*/ -5723, 140, 6017, /*angle*/ 0, 0, 0,
                     /*behParam*/ 0x00000000, /*beh*/ bhvBobombBuddyOpensCannon,
                     /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOBOMB_BUDDY, /*pos*/ -6250, 0, 6680, /*angle*/ 0, 0, 0,
                     /*behParam*/ 0x00030000, /*beh*/ bhvBobombBuddy,
                     /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_CANNON_BASE, /*pos*/ -5694, 128, 5600, /*angle*/ 0, 135, 0,
                     /*behParam*/ 0x00010000, /*beh*/ bhvWaterBombCannon, /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_DL_CANNON_LID, /*pos*/ -5694, 128, 5600, /*angle*/ 0, 180, 0,
                     /*behParam*/ 0x00000000, /*beh*/ bhvCannonClosed,
                     /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 3304, 4242, -4603, /*angle*/ 0, 0, 0,
                     /*behParam*/ 0x00000000, /*beh*/ bhvKoopaRaceEndpoint, /*acts*/ ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_KOOPA_WITH_SHELL, /*pos*/ 3400, 770, 6500, /*angle*/ 0, 0, 0,
                     /*behParam*/ 0x00010000, /*beh*/ bhvKoopa,
                     /*acts*/ ACT_3 | ACT_4 | ACT_5 | ACT_6),
    RETURN(),
};

static LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_KING_BOBOMB, /*pos*/ 1636, 4242, -5567, /*angle*/ 0, -147, 0, /*behParam*/ 0x00000000, /*beh*/ bhvKingBobomb, /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_KOOPA_WITH_SHELL, /*pos*/ -4004, 0, 5221, /*angle*/ 0, 0, 0, /*behParam*/ 0x01020000, /*beh*/ bhvKoopa, /*acts*/ ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ -6000, 1000, 2400, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ACT_4),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ -6600, 1000, 1250, /*angle*/ 0, 0, 0, /*behParam*/ 0x04040000, /*beh*/ bhvHiddenStar, /*acts*/ ACT_5),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 1550, 1200, 300, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar, /*acts*/ ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_EXCLAMATION_BOX, /*pos*/  5540,  3350,  1200, /*angle*/     0,     0,     0, /*behParam*/ ((11 &0x00FF) << 16) + ((11 &0x00FF) & 0xFF00), /*beh*/ bhvExclamationBox, ACT_3),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1506,  5517,  1250, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenStarTrigger),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  1000,  3600,  1250, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenStarTrigger),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2000,  3600,  1250, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenStarTrigger),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  3000,  3600,  1250, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenStarTrigger),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  -300,  4200,  1250, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenStarTrigger),
    RETURN(),
};

static LevelScript script_func_local_5[76*7+1];

static void setup_script_func_local_5() {
    u32 index = 0;


    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_box_wing_cap,              /*yaw*/   0, /*pos*/ -6710,  1300, -2170);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_breakable_box_no_coins,    /*yaw*/   0, /*pos*/ -3979,     0,  6827);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_box_wing_cap,              /*yaw*/   0, /*pos*/  3789,  3340,  1818);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_box_wing_cap,              /*yaw*/   0, /*pos*/   400,   350,  6500);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_breakable_box_no_coins,    /*yaw*/   0, /*pos*/  7157,  2027, -6714);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_breakable_box_three_coins, /*yaw*/   0, /*pos*/ -3979,     0,  6627);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_breakable_box_small,       /*yaw*/   0, /*pos*/ -6800,  1024,    40);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_breakable_box_small,       /*yaw*/   0, /*pos*/ -3740,     0,  6180);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_water_bomb_spawner,        /*yaw*/   0, /*pos*/ -5141,  3764,  -743, /*behParam*/ 25);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_water_bomb_spawner,        /*yaw*/   0, /*pos*/ -4208,  3769, -2036, /*behParam*/ 10);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_water_bomb_spawner,        /*yaw*/   0, /*pos*/  3620,  4000,  4800, /*behParam*/ 15);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_water_bomb_cannon,         /*yaw*/ 315, /*pos*/  1388,  2918, -2383);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/ 270, /*pos*/ -4000,     0,  6050, /*behParam*/ DIALOG_015);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/   0, /*pos*/  1230,   768,  3258, /*behParam*/ DIALOG_008);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/ 270, /*pos*/ -4000,     0,  6300, /*behParam*/ DIALOG_095);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/ 270, /*pos*/    66,     0,  6977, /*behParam*/ DIALOG_113);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/   0, /*pos*/  3394,  3072,  1846, /*behParam*/ DIALOG_064);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/ 270, /*pos*/ -3110,   104,  5064, /*behParam*/ DIALOG_035);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/   0, /*pos*/  6860,  2041, -6640, /*behParam*/ DIALOG_074);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/   0, /*pos*/ -6020,   768,  2957, /*behParam*/ DIALOG_104);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/  45, /*pos*/ -3530,  1415,   430, /*behParam*/ DIALOG_050);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/   0, /*pos*/  5053,  3073,  2180, /*behParam*/ DIALOG_053);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/ 270, /*pos*/ -2224,   990, -4359, /*behParam*/ DIALOG_039);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/  60, /*pos*/  3911,  3529, -7081, /*behParam*/ DIALOG_112);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_signpost,           /*yaw*/   0, /*pos*/ -7000,  1024, -2099, /*behParam*/ DIALOG_032);
    MACRO_TO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_hidden_1up,                /*yaw*/   0, /*pos*/ -6060,  1060, -5340, /*behParam*/ 4);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_hidden_1up_trigger,        /*yaw*/   0, /*pos*/ -5760,  1060, -5340);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_hidden_1up_trigger,        /*yaw*/   0, /*pos*/ -6360,  1060, -5340);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_hidden_1up_trigger,        /*yaw*/   0, /*pos*/ -6060,  1060, -5640);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_hidden_1up_trigger,        /*yaw*/   0, /*pos*/ -6060,  1040, -5040);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_1up,                       /*yaw*/   0, /*pos*/ -2531,     0, -4201);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_hidden_1up_in_pole,        /*yaw*/   0, /*pos*/  5444,  1400,  6016);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_ring_horizontal,      /*yaw*/   0, /*pos*/ -6060,  1060, -5340);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_line_horizontal,      /*yaw*/  90, /*pos*/  -129,     0,  5668);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_line_horizontal,      /*yaw*/  75, /*pos*/  1851,  2917, -2234);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,                  /*yaw*/   0, /*pos*/ -5500,   768,  2400);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,                  /*yaw*/   0, /*pos*/ -6500,   768,  2400);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,                  /*yaw*/   0, /*pos*/  1135,  1920, -7161);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,                  /*yaw*/   0, /*pos*/   250,  1000,  1920);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,                  /*yaw*/   0, /*pos*/  1600,   980,  4440);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,                  /*yaw*/   0, /*pos*/ -2755,     0, -4083);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,                  /*yaw*/   0, /*pos*/  4934,  1352,   861);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_red_coin,                  /*yaw*/   0, /*pos*/  4100,  3672,  1629);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_line_horizontal,      /*yaw*/ 120, /*pos*/  4836,  3079, -2707);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_yellow_coin,               /*yaw*/   0, /*pos*/ -1506,  5517,  1250);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_yellow_coin,               /*yaw*/   0, /*pos*/  1000,  3600,  1250);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_yellow_coin,               /*yaw*/   0, /*pos*/  2000,  3600,  1250);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_yellow_coin,               /*yaw*/   0, /*pos*/  3000,  3600,  1250);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_ring_vertical,        /*yaw*/  90, /*pos*/  -300,  4000,  1250);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_ring_vertical,        /*yaw*/  90, /*pos*/ -1506,  5317,  1250);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_ring_vertical,        /*yaw*/  90, /*pos*/  1000,  3400,  1250);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_ring_vertical,        /*yaw*/  90, /*pos*/  2000,  3400,  1250);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_coin_ring_vertical,        /*yaw*/  90, /*pos*/  3000,  3400,  1250);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_yellow_coin,               /*yaw*/   0, /*pos*/  -300,  4200,  1250);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_recovery_heart,            /*yaw*/   0, /*pos*/  3603,  3659, -7070);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_post,               /*yaw*/   0, /*pos*/ -6500,   768,  1800);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_post,               /*yaw*/   0, /*pos*/ -5500,   768,  1800);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_post,               /*yaw*/   0, /*pos*/ -6500,   768,  3000);
    MACRO_TO_OBJECT_ASSIGNMENT(script_func_local_5, index, /*preset*/ macro_wooden_post,               /*yaw*/   0, /*pos*/ -5500,   768,  3000);
    generate_enemy(script_func_local_5, &index, /*pos*/  3640,   768,  6280, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/  6060,   877,  2000, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -6050,   768,  1250, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/  1127,  2897, -2495, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/  2350,   757,  3700, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -1750,     0, -2800, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -1400,     0,  -950, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -2650,     0,  1750, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -1900,     0,  3450, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -2713,   152,  5778, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/  -342,   400,  5433, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -3080,     0, -5200, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -3688,   885, -3813, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -4629,  1024, -1772, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -3480,   891, -2120, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -3800,  1024,  -460, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/  6888,  2002, -5608, /*angle*/ 0, 0, 0);
    script_func_local_5[index] = RETURN();
}

static void setup_level_scripts_local() {
    setup_script_func_local_5();
    suffle_levelscript_array(script_func_local_5, sizeof(script_func_local_5)/sizeof(script_func_local_5[0]));
}


const LevelScript level_bob_entry[] = {
    CALL(LEVEL_BOB, generate_init_level),
    CALL(0, setup_level_scripts_local),
    INIT_LEVEL(),
    LOAD_MIO0(/*seg*/ 0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _generic_mio0SegmentRomStart, _generic_mio0SegmentRomEnd),
    LOAD_MIO0(/*seg*/ 0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(/*seg*/ 0x05, _group3_mio0SegmentRomStart, _group3_mio0SegmentRomEnd),
    LOAD_RAW(/*seg*/ 0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd),
    LOAD_MIO0(/*seg*/ 0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd),
    LOAD_RAW(/*seg*/ 0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd),
    LOAD_MIO0(/*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(/*seg*/ 0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_4),
    JUMP_LINK(script_func_global_15),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470),

    AREA(/*index*/ 1, bob_geo_000488),
        JUMP_LINK(script_func_local_1),
        JUMP_LINK(script_func_local_2),
        JUMP_LINK(script_func_local_3),
    	JUMP_LINK(script_func_local_5),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -6558,  1000,  6464, /*angle*/ 0, 135, 0,  /*behParam*/ 0x000A0000, /*beh*/ bhvSpinAirborneWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/   583,  2683, -5387, /*angle*/ 0, -154, 0, /*behParam*/ 0x000B0000, /*beh*/ bhvFadingWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/  1680,  3835, -5523, /*angle*/ 0, -153, 0, /*behParam*/ 0x000C0000, /*beh*/ bhvFadingWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -6612,  1024, -3351, /*angle*/ 0, 107, 0,  /*behParam*/ 0x000D0000, /*beh*/ bhvFadingWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/  1980,   768,  6618, /*angle*/ 0, -151, 0, /*behParam*/ 0x000E0000, /*beh*/ bhvFadingWarp),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_BOB, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0B, /*destLevel*/ LEVEL_BOB, /*destArea*/ 0x01, /*destNode*/ 0x0C, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0C, /*destLevel*/ LEVEL_BOB, /*destArea*/ 0x01, /*destNode*/ 0x0B, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0D, /*destLevel*/ LEVEL_BOB, /*destArea*/ 0x01, /*destNode*/ 0x0E, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0E, /*destLevel*/ LEVEL_BOB, /*destArea*/ 0x01, /*destNode*/ 0x0D, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x32, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x64, /*flags*/ WARP_NO_CHECKPOINT),
        TERRAIN(/*terrainData*/ bob_seg7_collision_level),
        //MACRO_OBJECTS(/*objList*/ bob_seg7_macro_objs),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_000),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_GRASS),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_GRASS),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 135, /*pos*/ -6558, 0, 6464),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
