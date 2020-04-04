#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "macro_preset_names.h"
//#include "macro_presets.h"
#include "level_misc_macros.h"
#include "game/level_update.h"
#include "engine/randomizer.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

static LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_BOB_CHAIN_CHOMP_GATE, /*pos*/ 1456, 768, 446, /*angle*/ 0, 326, 0,
           /*behParam*/ 0x00000000, /*beh*/ bhvChainChompGate),
    OBJECT(/*model*/ MODEL_BOB_SEESAW_PLATFORM, /*pos*/ -2303, 717, 1024, /*angle*/ 0, 45, 0,
           /*behParam*/ 0x00030000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2050, 0, -3069, /*angle*/ 0, 25, 0,
           /*behParam*/ 0x00000000,
           /*beh*/ bhvOpenableGrill),
    OBJECT(/*model*/ MODEL_PURPLE_SWITCH, /*pos*/ -2283, 0, -3682, /*angle*/ 0, 27, 0,
           /*behParam*/ 0x00000000, /*beh*/ bhvFloorSwitchGrills),
    OBJECT(/*model*/ MODEL_CHECKERBOARD_PLATFORM, /*pos*/ 1612, 300, 4611, /*angle*/ 0, 0, 0,
           /*behParam*/ 0x00280000, /*beh*/ bhvCheckerboardElevatorGroup),
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
    OBJECT_WITH_ACTS(/*model*/ MODEL_KING_BOBOMB, /*pos*/ 1636, 4242, -5567, /*angle*/ 0, -147, 0,
                     /*behParam*/ 0x00000000, /*beh*/ bhvKingBobomb, /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_KOOPA_WITH_SHELL, /*pos*/ -4004, 0, 5221, /*angle*/ 0, 0, 0,
                     /*behParam*/ 0x01020000, /*beh*/ bhvKoopa, /*acts*/ ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ -6000, 1000, 2400, /*angle*/ 0, 0, 0,
                     /*behParam*/ 0x03000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ACT_4),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ -6600, 1000, 1250, /*angle*/ 0, 0, 0,
                     /*behParam*/ 0x04040000, /*beh*/ bhvHiddenStar, /*acts*/ ACT_5),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 1550, 1200, 300, /*angle*/ 0, 0, 0,
                     /*behParam*/ 0x05000000, /*beh*/ bhvStar, /*acts*/ ACT_6),
    RETURN(),
};

static LevelScript script_func_local_5[16 * 7 + 1];
MacroObject bob_seg7_macro_objs[(88 - 16) * 6 + 1];
static void setup_level_bob_scripts_local() {
    // Setup Macros
    u32 index = 0;
    // 0 - 2
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_chain_chomp, /*yaw*/ 0,
                            /*pos*/ 260, 735, 1920);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_breakable_box_no_coins,
                            /*yaw*/ 0, /*pos*/ -3979, 0, 6827);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index,
                                           /*preset*/ macro_water_bomb_spawner, /*yaw*/ 0, /*pos*/ 3620,
                                           4000, 4800, /*behParam*/ 15);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index,
                                           /*preset*/ macro_water_bomb_spawner, /*yaw*/ 0,
                                           /*pos*/ -5141, 3764, -743, /*behParam*/ 25);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index,
                                           /*preset*/ macro_water_bomb_spawner, /*yaw*/ 0,
                                           /*pos*/ -4208, 3769, -2036, /*behParam*/ 10);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_water_bomb_cannon, /*yaw*/ 315,
                            /*pos*/ 1388, 2918, -2383);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_wooden_post, /*yaw*/ 0,
                            /*pos*/ -6500, 768, 1800);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_wooden_post, /*yaw*/ 0,
                            /*pos*/ -5500, 768, 1800);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_wooden_post, /*yaw*/ 0,
                            /*pos*/ -6500, 768, 3000);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_wooden_post, /*yaw*/ 0,
                            /*pos*/ -5500, 768, 3000);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_wooden_signpost,
                                           /*yaw*/ 270, /*pos*/ -4000, 0, 6050,
                                           /*behParam*/ 15);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_wooden_signpost,
                                           /*yaw*/ 0, /*pos*/ 1230, 768, 3258,
                                           /*behParam*/ 8);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_cannon_closed,
                                           /*yaw*/ 0, /*pos*/ -5018, 1332, -3533,
                                           /*behParam*/ 0x00);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_cannon_closed,
                                           /*yaw*/ 0, /*pos*/ 6349, 2080, -7066,
                                           /*behParam*/ 0xC0);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_cannon_closed,
                                           /*yaw*/ 0, /*pos*/ 4243, 3071, -2451,
                                           /*behParam*/ 0xC0);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_cannon_closed,
                                           /*yaw*/ 0, /*pos*/ 4352, 3072, 1229,
                                           /*behParam*/ 0x80);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_cannon_closed,
                                           /*yaw*/ 0, /*pos*/ 5376, 1537, 4610,
                                           /*behParam*/ 0x40);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_recovery_heart, /*yaw*/ 0,
                            /*pos*/ 3603, 3659, -7070);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_coin_ring_horizontal,
                            /*yaw*/ 0, /*pos*/ -6060, 1060, -5340);
    MACRO_OBJECT_WITH_ACTS_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_coin_line_horizontal,
                                      /*yaw*/ 90, /*pos*/ -129, 0, 5668, ACT_2);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_coin_line_horizontal,
                            /*yaw*/ 75, /*pos*/ 1851, 2917, -2234);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_red_coin, /*yaw*/ 0,
                            /*pos*/ -5500, 768, 2400);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_red_coin, /*yaw*/ 0,
                            /*pos*/ -6500, 768, 2400);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_red_coin, /*yaw*/ 0,
                            /*pos*/ 1135, 1920, -7161);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_red_coin, /*yaw*/ 0,
                            /*pos*/ 250, 1000, 1920);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_red_coin, /*yaw*/ 0,
                            /*pos*/ 1600, 980, 4440);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_red_coin, /*yaw*/ 0,
                            /*pos*/ -2755, 0, -4083);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_red_coin, /*yaw*/ 0,
                            /*pos*/ 4934, 1352, 861);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_red_coin, /*yaw*/ 0,
                            /*pos*/ 4100, 3672, 1629);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_box_wing_cap, /*yaw*/ 0,
                            /*pos*/ -6710, 1300, -2170);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_breakable_box_small, /*yaw*/ 0,
                            /*pos*/ -3740, 0, 6180);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_wooden_signpost,
                                           /*yaw*/ 270, /*pos*/ -4000, 0, 6300,
                                           /*behParam*/ 95);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_hidden_1up,
                                           /*yaw*/ 0, /*pos*/ -6060, 1060, -5340,
                                           /*behParam*/ 4);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_hidden_1up_trigger, /*yaw*/ 0,
                            /*pos*/ -5760, 1060, -5340);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_hidden_1up_trigger, /*yaw*/ 0,
                            /*pos*/ -6360, 1060, -5340);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_hidden_1up_trigger, /*yaw*/ 0,
                            /*pos*/ -6060, 1060, -5640);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_hidden_1up_trigger, /*yaw*/ 0,
                            /*pos*/ -6060, 1040, -5040);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_box_wing_cap, /*yaw*/ 0,
                            /*pos*/ 3789, 3340, 1818);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_1up, /*yaw*/ 0, /*pos*/ -2531,
                            0, -4201);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_hidden_1up_in_pole, /*yaw*/ 0,
                            /*pos*/ 5444, 1400, 6016);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_box_wing_cap, /*yaw*/ 0,
                            /*pos*/ 400, 350, 6500);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_wooden_signpost,
                                           /*yaw*/ 270, /*pos*/ 66, 0, 6977,
                                           /*behParam*/ 113);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_wooden_signpost,
                                           /*yaw*/ 0, /*pos*/ 3394, 3072, 1846,
                                           /*behParam*/ 64);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_wooden_signpost,
                                           /*yaw*/ 270, /*pos*/ -3110, 104, 5064,
                                           /*behParam*/ 35);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_wooden_signpost,
                                           /*yaw*/ 0, /*pos*/ 6860, 2041, -6640,
                                           /*behParam*/ 74);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_wooden_signpost,
                                           /*yaw*/ 0, /*pos*/ -6020, 768, 2957,
                                           /*behParam*/ 104);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_coin_ring_vertical, /*yaw*/ 90,
                            /*pos*/ -1506, 5317, 1250);
    MACRO_OBJECT_WITH_ACTS_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_hidden_star_trigger,
                                      /*yaw*/ 0,
                                      /*pos*/ -1506, 5517, 1250, ACT_5);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_breakable_box_no_coins,
                            /*yaw*/ 0, /*pos*/ 7157, 2027, -6714);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_coin_ring_vertical, /*yaw*/ 90,
                            /*pos*/ 1000, 3400, 1250);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_coin_ring_vertical, /*yaw*/ 90,
                            /*pos*/ 2000, 3400, 1250);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_coin_ring_vertical, /*yaw*/ 90,
                            /*pos*/ 3000, 3400, 1250);
    MACRO_OBJECT_WITH_ACTS_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_hidden_star_trigger,
                                      /*yaw*/ 0,
                                      /*pos*/ 1000, 3600, 1250, ACT_5);
    MACRO_OBJECT_WITH_ACTS_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_hidden_star_trigger,
                                      /*yaw*/ 0,
                                      /*pos*/ 2000, 3600, 1250, ACT_5);
    MACRO_OBJECT_WITH_ACTS_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_hidden_star_trigger,
                                      /*yaw*/ 0,
                                      /*pos*/ 3000, 3600, 1250, ACT_5);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_bobomb_still, /*yaw*/ 0,
                            /*pos*/ 1127, 2897, -2495);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_coin_line_horizontal,
                            /*yaw*/ 120, /*pos*/ 4836, 3079, -2707);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_wooden_signpost,
                                           /*yaw*/ 45, /*pos*/ -3530, 1415, 430,
                                           /*behParam*/ 50);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_wooden_signpost,
                                           /*yaw*/ 0, /*pos*/ 5053, 3073, 2180,
                                           /*behParam*/ 53);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_yellow_coin, /*yaw*/ 0,
                            /*pos*/ -1506, 5517, 1250);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_yellow_coin, /*yaw*/ 0,
                            /*pos*/ 1000, 3600, 1250);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_yellow_coin, /*yaw*/ 0,
                            /*pos*/ 2000, 3600, 1250);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_yellow_coin, /*yaw*/ 0,
                            /*pos*/ 3000, 3600, 1250);
    MACRO_OBJECT_WITH_ACTS_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_hidden_star_trigger,
                                      /*yaw*/ 0,
                                      /*pos*/ -300, 4200, 1250, ACT_5);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_wooden_signpost,
                                           /*yaw*/ 270, /*pos*/ -2224, 990, -4359, /*behParam*/ 39);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_wooden_signpost,
                                           /*yaw*/ 60, /*pos*/ 3911, 3529, -7081,
                                           /*behParam*/ 112);
    MACRO_OBJECT_WITH_BEH_PARAM_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_wooden_signpost,
                                           /*yaw*/ 0, /*pos*/ -7000, 1024, -2099,
                                           /*behParam*/ 32);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_breakable_box_three_coins,
                            /*yaw*/ 0, /*pos*/ -3979, 0, 6627);
    MACRO_OBJECT_WITH_ACTS_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_box_star_3,
                                      /*yaw*/ 0,
                                      /*pos*/ 5540, 3350, 1200, ACT_3);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_coin_ring_vertical, /*yaw*/ 90,
                            /*pos*/ -300, 4000, 1250);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_yellow_coin, /*yaw*/ 0,
                            /*pos*/ -300, 4200, 1250);
    MACRO_OBJECT_ASSIGNMENT(bob_seg7_macro_objs, index, /*preset*/ macro_breakable_box_small, /*yaw*/ 0,
                            /*pos*/ -6800, 1024, 40);
    // bob_seg7_macro_objs[6] = MACRO_OBJECT_END();
    bob_seg7_macro_objs[index] = MACRO_OBJECT_END();
    index = 0;
    // 16
    generate_enemy(script_func_local_5, &index, /*pos*/ -2713, 152, 5778, /*angle*/ 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -342, 400, 5433, 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ 2350, 757, 3700, 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -1750, 0, -2800, 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -1400, 0, -950, 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -2650, 0, 1750, 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -1900, 0, 3450, 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ 3640, 768, 6280, 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ 6060, 877, 2000, 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -6050, 768, 1250, 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -3080, 0, -5200, 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -3688, 885, -3813, 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -4629, 1024, -1772, 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -3480, 891, -2120, 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ -3800, 1024, -460, 0, 0, 0);
    generate_enemy(script_func_local_5, &index, /*pos*/ 6888, 2002, -5608, 0, 0, 0);
    script_func_local_5[index] = RETURN();
}

const LevelScript level_bob_entry[] = {
    CALL(LEVEL_BOB, generate_init_level),
    CALL(0, setup_level_bob_scripts_local),
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
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -6558, 1000, 6464, /*angle*/ 0, 135, 0,
           /*behParam*/ 0x000A0000, /*beh*/ bhvWarps74),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 583, 2683, -5387, /*angle*/ 0, -154, 0,
           /*behParam*/ 0x000B0000, /*beh*/ bhvFadingWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 1680, 3835, -5523, /*angle*/ 0, -153, 0,
           /*behParam*/ 0x000C0000, /*beh*/ bhvFadingWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -6612, 1024, -3351, /*angle*/ 0, 107, 0,
           /*behParam*/ 0x000D0000, /*beh*/ bhvFadingWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 1980, 768, 6618, /*angle*/ 0, -151, 0, /*behParam*/ 0x000E0000,
           /*beh*/ bhvFadingWarp),
    WARP_NODE(/*id*/ 0x0A, /*destLevel*/ 0x09, /*destArea*/ 0x01, /*destNode*/ 0x0A,
              /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x0B, /*destLevel*/ 0x09, /*destArea*/ 0x01, /*destNode*/ 0x0C,
              /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x0C, /*destLevel*/ 0x09, /*destArea*/ 0x01, /*destNode*/ 0x0B,
              /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x0D, /*destLevel*/ 0x09, /*destArea*/ 0x01, /*destNode*/ 0x0E,
              /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x0E, /*destLevel*/ 0x09, /*destArea*/ 0x01, /*destNode*/ 0x0D,
              /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0xF0, /*destLevel*/ 0x06, /*destArea*/ 0x01, /*destNode*/ 0x32,
              /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0xF1, /*destLevel*/ 0x06, /*destArea*/ 0x01, /*destNode*/ 0x64,
              /*flags*/ WARP_NO_CHECKPOINT),
    TERRAIN(/*terrainData*/ bob_seg7_collision_level),
    MACRO_OBJECTS(/*objList*/ bob_seg7_macro_objs),
    SHOW_DIALOG(/*index*/ 0x00, /*dialogid*/ 0x00),
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
