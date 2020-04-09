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
#include "levels/hmc/header.h"

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 4936, -357, -4146, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 5018, -460, -5559, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1997,  666,  -235, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1762, -460, -2610, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 4178, -255, -3737, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 2233, -460,   256, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 5510, -255, -3429, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 4690, -357,  -767, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 3462, -255, -1125, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1762,  666,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1762, -460,   256, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 6482,  461,  3226, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1075,  461,  6543, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 6912,  461,  6543, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 6912,  461,  3697, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 6482,  461,  7014, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 3817,  717,  1034, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_NONE,      /*pos*/  799, 1024,  4434, /*angle*/ 0, 0, 0, /*behParam*/ 0x00B80000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,      /*pos*/  889, 1024,  3277, /*angle*/ 0, 0, 0, /*behParam*/ 0x00B80000, /*beh*/ bhvPoleGrabbing),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_HMC_METAL_PLATFORM,    /*pos*/  1100,   950,  6350, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvControllablePlatform),
    OBJECT(/*model*/ MODEL_HMC_ELEVATOR_PLATFORM, /*pos*/ -3243,  1434,  1392, /*angle*/ 0,  27, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHmcElevatorPlatform),
    OBJECT(/*model*/ MODEL_HMC_ELEVATOR_PLATFORM, /*pos*/ -2816,  2253, -2509, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvHmcElevatorPlatform),
    OBJECT(/*model*/ MODEL_HMC_ELEVATOR_PLATFORM, /*pos*/  -973,  1741, -7347, /*angle*/ 0,   0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvHmcElevatorPlatform),
    OBJECT(/*model*/ MODEL_HMC_ELEVATOR_PLATFORM, /*pos*/ -3533,  1741, -7040, /*angle*/ 0,   0, 0, /*behParam*/ 0x00030000, /*beh*/ bhvHmcElevatorPlatform),
    OBJECT(/*model*/ MODEL_NONE,                  /*pos*/   614, -4690,  2330, /*angle*/ 0, 270, 0, /*behParam*/ 0x00010000, /*beh*/ bhvOpenableGrill),
    OBJECT(/*model*/ MODEL_PURPLE_SWITCH,         /*pos*/  -307, -4997,  2483, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFloorSwitchGrills),
    OBJECT(/*model*/ MODEL_CHECKERBOARD_PLATFORM, /*pos*/  1270,  2000,  4000, /*angle*/ 0, 270, 0, /*behParam*/ 0x09A40000, /*beh*/ bhvPlatformOnTrack),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_DORRIE, /*pos*/ -3533, -4969,  3558, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvDorrie),
    OBJECT(/*model*/ MODEL_NONE,   /*pos*/ -6093,  3075, -7807, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBigBoulderGenerator),
    OBJECT(/*model*/ MODEL_NONE,   /*pos*/  -500,  1600,  3500, /*angle*/ 0, 0, 0, /*behParam*/ 0x00040000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,   /*pos*/  -500,  1600,  3800, /*angle*/ 0, 0, 0, /*behParam*/ 0x00040000, /*beh*/ bhvFlamethrower),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -3600, -4000,  3600, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStar,                 /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/  4000,   300,  5000, /*angle*/ 0, 0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvHiddenRedCoinStar,    /*acts*/ ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/  6200, -4400,  2300, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvStar,                 /*acts*/ ACT_3),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -2100,  2100, -7550, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvStar,                 /*acts*/ ACT_4),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -6500,  2700, -1600, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvStar,                 /*acts*/ ACT_5),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -5000,  3050, -6700, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,                 /*acts*/ ACT_6),
    RETURN(),
};

static LevelScript script_func_local_5[84*7+1];

static void setup_script_func_local_5() {
    u32 index = 0;
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/ -3359,  1536,   298, /*angle*/     0,   270,     0, /*behParam*/ (DIALOG_122 << 16) + (DIALOG_122 & 0xFF00), /*beh*/ bhvMessagePanel);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/ -3092,  2033, -7685, /*angle*/     0,     0,     0, /*behParam*/ (DIALOG_138 << 16) + (DIALOG_138 & 0xFF00), /*beh*/ bhvMessagePanel);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/  5439,     0,  2785, /*angle*/     0,     0,     0, /*behParam*/ (DIALOG_125 << 16) + (DIALOG_125 & 0xFF00), /*beh*/ bhvMessagePanel);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/ -3184,     0,   699, /*angle*/     0,     0,     0, /*behParam*/ (DIALOG_126 << 16) + (DIALOG_126 & 0xFF00), /*beh*/ bhvMessagePanel);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/   500, -4300,  3644, /*angle*/     0,   270,     0, /*behParam*/ (DIALOG_127 << 16) + (DIALOG_127 & 0xFF00), /*beh*/ bhvMessagePanel);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/  2006,     0,  6713, /*angle*/     0,   180,     0, /*behParam*/ (DIALOG_124 << 16) + (DIALOG_124 & 0xFF00), /*beh*/ bhvMessagePanel);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/ -4370,  2860, -2243, /*angle*/     0,   135,     0, /*behParam*/ (DIALOG_043 << 16) + (DIALOG_043 & 0xFF00), /*beh*/ bhvMessagePanel);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/  2510,     0,  2800, /*angle*/     0,     0,     0, /*behParam*/ (DIALOG_140 << 16) + (DIALOG_140 & 0xFF00), /*beh*/ bhvMessagePanel);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/   510,     0,  5380, /*angle*/     0,    90,     0, /*behParam*/ (DIALOG_139 << 16) + (DIALOG_139 & 0xFF00), /*beh*/ bhvMessagePanel);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/ -6060,  2048,  5960, /*angle*/     0,   315,     0, /*behParam*/ (DIALOG_089 << 16) + (DIALOG_089 & 0xFF00), /*beh*/ bhvMessagePanel);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/ -6770,  1845,  4577, /*angle*/     0,     0,     0, /*behParam*/ (DIALOG_050 << 16) + (DIALOG_050 & 0xFF00), /*beh*/ bhvMessagePanel);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/  2500,   217,    50, /*angle*/     0,     0,     0, /*behParam*/ (DIALOG_071 << 16) + (DIALOG_071 & 0xFF00), /*beh*/ bhvMessagePanel);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/  2900,   217,    50, /*angle*/     0,     0,     0, /*behParam*/ (DIALOG_062 << 16) + (DIALOG_062 & 0xFF00), /*beh*/ bhvMessagePanel);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_WOODEN_SIGNPOST, /*pos*/   838,  2052,  3580, /*angle*/     0,   270,     0, /*behParam*/ (DIALOG_088 << 16) + (DIALOG_088 & 0xFF00), /*beh*/ bhvMessagePanel);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_RED_COIN, /*pos*/  2140,  2048,  6540, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvRedCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_RED_COIN, /*pos*/  2900,  2048,  6500, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvRedCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_RED_COIN, /*pos*/  6400,  2090,  5320, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvRedCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_RED_COIN, /*pos*/  6820,  1024,  3300, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvRedCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_RED_COIN, /*pos*/  6260,  1124,  4960, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvRedCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_RED_COIN, /*pos*/  4080,  1124,  5760, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvRedCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_RED_COIN, /*pos*/  4640,  2250,  3980, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvRedCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_RED_COIN, /*pos*/  2960,  1124,  5140, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvRedCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_YELLOW_COIN, /*pos*/ -2340,  2040,  4560, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvOneCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_YELLOW_COIN, /*pos*/ -2460,  2040,  4660, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvOneCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_YELLOW_COIN, /*pos*/ -2060,  2040,  4380, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvOneCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_YELLOW_COIN, /*pos*/ -1920,  2040,  4320, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvOneCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_NONE, /*pos*/ -6580,  1680, -5780, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvCoinFormation);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_NONE, /*pos*/ -3600, -4240,  3600, /*angle*/     0,     0,     0, /*behParam*/ ((COIN_FORMATION_FLAG_RING &0x00FF) << 16) + ((COIN_FORMATION_FLAG_RING &0x00FF) & 0xFF00), /*beh*/ bhvCoinFormation);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_NONE, /*pos*/ -2700,  2060, -6400, /*angle*/     0,     0,     0, /*behParam*/ ((COIN_FORMATION_FLAG_RING &0x00FF) << 16) + ((COIN_FORMATION_FLAG_RING &0x00FF) & 0xFF00), /*beh*/ bhvCoinFormation);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_YELLOW_COIN, /*pos*/ -2220,  2048,  4440, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvOneCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_HEART, /*pos*/ -7511,  1420,  -666, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvRecoveryHeart);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_NONE, /*pos*/  2800,   205,   463, /*angle*/     0,    90,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvCoinFormation);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_NONE, /*pos*/  1800,  -409, -7390, /*angle*/     0,    90,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvCoinFormation);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_NONE, /*pos*/ -5342,  2809, -1790, /*angle*/     0,   144,     0, /*behParam*/ ((COIN_FORMATION_FLAG_FLYING &0x00FF) << 16) + ((COIN_FORMATION_FLAG_FLYING &0x00FF) & 0xFF00), /*beh*/ bhvCoinFormation);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_BLUE_COIN_SWITCH, /*pos*/  5145,  -767, -2954, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvBlueCoinSwitch);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_BLUE_COIN, /*pos*/  3945, -1023, -2918, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenBlueCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_BLUE_COIN, /*pos*/  3800, -1023, -4009, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenBlueCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_BLUE_COIN, /*pos*/  3036,  -858, -4118, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenBlueCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_BLUE_COIN, /*pos*/  2018,  -921, -4154, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenBlueCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_BLUE_COIN, /*pos*/  1836,  -921, -4700, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenBlueCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_BLUE_COIN, /*pos*/  1836,  -721, -4700, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenBlueCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_BLUE_COIN, /*pos*/  1836,  -521, -4700, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvHiddenBlueCoin);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_EXCLAMATION_BOX, /*pos*/ -6924,  2440,  7364, /*angle*/     0,    45,     0, /*behParam*/ ((1 &0x00FF) << 16) + ((1 &0x00FF) & 0xFF00), /*beh*/ bhvExclamationBox);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_EXCLAMATION_BOX, /*pos*/  5860,  -550,  -739, /*angle*/     0,     0,     0, /*behParam*/ ((1 &0x00FF) << 16) + ((1 &0x00FF) & 0xFF00), /*beh*/ bhvExclamationBox);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_EXCLAMATION_BOX, /*pos*/  1939,  -600, -2920, /*angle*/     0,     0,     0, /*behParam*/ ((1 &0x00FF) << 16) + ((1 &0x00FF) & 0xFF00), /*beh*/ bhvExclamationBox);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_EXCLAMATION_BOX, /*pos*/  5100,  -600, -4500, /*angle*/     0,     0,     0, /*behParam*/ ((1 &0x00FF) << 16) + ((1 &0x00FF) & 0xFF00), /*beh*/ bhvExclamationBox);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_BREAKABLE_BOX, /*pos*/  1022,  1848,  5120, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvBreakableBox);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_BREAKABLE_BOX, /*pos*/  3500,  2150,  3000, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvBreakableBox);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_EXCLAMATION_BOX, /*pos*/ -3000, -2250, -6400, /*angle*/     0,     0,     0, /*behParam*/ ((1 &0x00FF) << 16) + ((1 &0x00FF) & 0xFF00), /*beh*/ bhvExclamationBox);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_EXCLAMATION_BOX, /*pos*/ -4960,  2700,    80, /*angle*/     0,     0,     0, /*behParam*/ ((7 &0x00FF) << 16) + ((7 &0x00FF) & 0xFF00), /*beh*/ bhvExclamationBox);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_BREAKABLE_BOX, /*pos*/  2960,  1024,  5140, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvBreakableBox);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_BREAKABLE_BOX, /*pos*/  4080,  1024,  5760, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvBreakableBox);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_BREAKABLE_BOX, /*pos*/  6260,  1024,  4960, /*angle*/     0,     0,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvBreakableBox);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_EXCLAMATION_BOX, /*pos*/ -2700,  2100, -6400, /*angle*/     0,     0,     0, /*behParam*/ ((9 &0x00FF) << 16) + ((9 &0x00FF) & 0xFF00), /*beh*/ bhvExclamationBox);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_NONE, /*pos*/ -3420,  1800,  5960, /*angle*/     0,   270,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvScuttlebugSpawn);
    OBJECT_ASSIGNMENT(script_func_local_5, index, /*model*/ MODEL_NONE, /*pos*/  3240, -4720,  2360, /*angle*/     0,   270,     0, /*behParam*/ (0 << 16) + (0 & 0xFF00), /*beh*/ bhvScuttlebugSpawn);
    generate_enemy(script_func_local_5, &index, /*pos*/ -2900,  1620,  4640, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  -439,   220, -2540, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/    80,   140, -4660, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/   800,    60, -7500, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  1880,   100, -7620, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -6320,  2048,  6740, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -5455,  1536,   521, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  4160,    28,  6308, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  5392,    28,  3587, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  2260,  -627, -1660, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  5760,  -623, -1600, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  4560,  -620, -1499, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  6080,  3060,  4660, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  5480,  3000,  7120, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -5440,  1720,  -320, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  5632,  -563, -4454, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  4915,  -665, -5274, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  5120,  -665, -4660, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  5427,  -665, -5070, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  2439,  -722, -5499, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  2714,  -768, -4096, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  3011,  -768, -1272, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  3324,  -768, -1475, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  3940,  -768, -2880, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  4740,  1060,  4680, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  6700,  1020,  6820, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  2500,  -380, -7740, /*angle*/     0,     0,     0);
    generate_enemy(script_func_local_5, &index, /*pos*/  1420,  -380, -7040, /*angle*/     0,     0,     0);

    script_func_local_5[index] = RETURN();
}

static void setup_level_scripts_local() {
    setup_script_func_local_5();
    suffle_levelscript_array(script_func_local_5, sizeof(script_func_local_5)/sizeof(script_func_local_5[0]));
}


const LevelScript level_hmc_entry[] = {
    CALL(LEVEL_HMC, generate_init_level),
    CALL(0, setup_level_scripts_local),
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _cave_mio0SegmentRomStart, _cave_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group6_mio0SegmentRomStart, _group6_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_7),
    JUMP_LINK(script_func_global_18),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR,          wooden_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR,           metal_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR,       hazy_maze_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM,       hmc_geo_0005A0),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM,    hmc_geo_0005D0),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK,         hmc_geo_000548),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE,           hmc_geo_000570),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE,     hmc_geo_000588),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS,           hmc_geo_000530),

    AREA(/*index*/ 1, hmc_geo_000B90),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -7152,  3161, 7181, /*angle*/ 0, 135, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvWarps74),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/  3351, -4690, 4773, /*angle*/ 0,   0, 0, /*behParam*/ 0x340B0000, /*beh*/ bhvWarp),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_HMC, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0B, /*destLevel*/ LEVEL_COTMC, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x66, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_1),
        JUMP_LINK(script_func_local_2),
        JUMP_LINK(script_func_local_3),
        JUMP_LINK(script_func_local_4),
        JUMP_LINK(script_func_local_5),
        TERRAIN(/*terrainData*/ hmc_seg7_collision_level),
        //MACRO_OBJECTS(/*objList*/ hmc_seg7_macro_objs),
        ROOMS(/*surfaceRooms*/ hmc_seg7_rooms),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 135, /*pos*/ -7152, 2161, 7181),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
