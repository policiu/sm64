#include <types.h>
#include <ultra64.h>
#include "model_ids.h"
#include "randomizer.h"
#include "behavior_data.h"
#include "level_commands.h"
#include "behavior_script.h"
#include "object_constants.h"
#include "game/display.h"
#include "include/config.h"
#include "sm64.h"

#include "./game/game.h"
static u16 rng_modelsFriendly[64] =  { MODEL_LAKITU};
static u16 rng_modelsEnemy[] = {
                        MODEL_AMP,
                        MODEL_BLACK_BOBOMB,
                        MODEL_BOO,
                        MODEL_BOOKEND,
                        MODEL_BULLET_BILL,
                        MODEL_BULLY,
                        MODEL_HAUNTED_CHAIR,
                        MODEL_BUBBA,
                        MODEL_CHUCKYA, // here!
                        MODEL_CLAM_SHELL,
                        MODEL_FLYGUY, // here
                        //MODEL_FWOOSH, // fix 11
                        MODEL_GOOMBA,
                        MODEL_HEAVE_HO,
                        MODEL_KLEPTO,
                        MODEL_KOOPA_WITH_SHELL,
                        MODEL_KOOPA_WITHOUT_SHELL,
                        MODEL_ENEMY_LAKITU,
                        //MODEL_BUBBLE, // Need LAva
                        MODEL_MAD_PIANO, // 18
                        MODEL_MONEYBAG,
                        MODEL_MR_BLIZZARD,
                        MODEL_MR_I,
                        MODEL_SCUTTLEBUG,
                        MODEL_SKEETER,
                        MODEL_PIRANHA_PLANT,
                        MODEL_SNUFIT,
                        MODEL_SPINDRIFT,
                        MODEL_SPINY,
                        //MODEL_SUSHI, // keep?
                        MODEL_SWOOP,
                        MODEL_THWOMP,
                        MODEL_WHOMP
};

static const BehaviorScript * rng_bhvEnemy[] = {
                        bhvHomingAmp,
                        bhvBobomb, // change
                        bhvBoo,
                        bhvFlyingBookend,
                        bhvBulletBill,
                        bhvSmallBully,
                        bhvHauntedChair,
                        bhvBubba,
                        bhvChuckya, // here!
                        bhvClamShell,
                        bhvFlyGuy, // here
                        //bhvFwoosh, // fix 11
                        bhvGoomba,
                        bhvHeaveHo,
                        bhvKlepto,
                        bhvKoopa,
                        bhvKoopa,
                        bhvEnemyLakitu,
                        //bhvBUBBLE, // Need LAva
                        bhvMadPiano, // 18
                        bhvMoneybagHidden,
                        bhvMrBlizzard,
                        bhvMrI,
                        bhvScuttlebug,
                        bhvSkeeter,
                        bhvPiranhaPlant,
                        bhvSnufit,
                        bhvSpindrift,
                        bhvSpiny,
                        //bhvSushiShark, // keep?
                        bhvSwoop,
                        bhvThwomp,
                        bhvSmallWhomp
};

static u16 rand_int(){
    return RandomU16() + 1;
}
// IDEAS

/*
 * Behavior Genration
 */

static u32 gen_no_behavior(UNUSED const BehaviorScript * beh ){
    return 0x00000000;
}

static u32 gen_amp_behavior(const BehaviorScript * beh){
    // AMP behavior Information
    // Circling Radius - 2nd Byte
    if ( rand_int() %2)
        beh = bhvCirclingAmp;
    return ((rand_int() % 4) << 16);
}
static u32 gen_bobomb_behavior(UNUSED const BehaviorScript * beh){
    // Bobomb Behavior Information
    // Still have Coin
    // Stationary or not
    return( ( BOBOMB_BP_STYPE_GENERIC ) << 16);

}

static u32 gen_fly_guy_behavior(UNUSED const BehaviorScript * beh) {
    // Fly Guy Behavior Information
    // can Fire - 2nd Byte
    return ( (rand_int() % 2) <<16);
}
static u32 gen_goomba_behavior(UNUSED const BehaviorScript * beh){
    // Goomba Behavior Information
    // Size = 0x000x0000 (2nd Byte)
    // Anything else?
    u32 bhv = 0x00000000;

    return bhv | ((rand_int() % 3) << 16);
}

static u32 gen_koopa_behavior(UNUSED const BehaviorScript * beh) {
    // Koopa Behavior Information
    // type 2nd Byte
    // 00 - Unshelled
    // 01 - Normal
    // 100 - Tiny
    u16 rng = rand_int() % 3;

    if (rng == 2)
        rng = KOOPA_BP_TINY;
    return (rng << 16);

}

static u32 gen_mr_blizzard_behavior(UNUSED const BehaviorScript * beh) {
    // Mr Blizzard Information
    // Movement type
    return ((rand_int() %2) << 16);
}

static u32 gen_mr_i_behavior(UNUSED const BehaviorScript * beh) {

   return 0x00010000;
}

static u32 gen_thwomp_behavior(UNUSED const BehaviorScript * beh) {
    // Thwomp_behavior
    // Random height increase??
    return (( rand_int() % (0xFF - 39)) << 16);
}
static u32 (*rng_EnemeyBehFunc[])(const BehaviorScript *) ={
    gen_amp_behavior,
    gen_bobomb_behavior,
    gen_no_behavior, // Boo unknown what behaviors do, figureout!
    gen_no_behavior, // Flying bookend
    gen_no_behavior, // Bullet Bill
    gen_no_behavior, // Bully - Big spawns star no matter what, TODO: make logic for non star bully
    gen_no_behavior, // bhvHauntedChair,
    gen_no_behavior,//bhvBubba,
    gen_no_behavior, // bhvChuckya
    gen_no_behavior, // Clam Shell,
    gen_fly_guy_behavior, // Fly Guy
    //bhvFwoosh, // fix 11
    gen_goomba_behavior, // bhvGoomba,
    gen_no_behavior, // bhvHeaveHo,
    gen_no_behavior, // Klepto - 2nd Byte holds a star, TODO: make logic for a different star to spawn :D
    gen_koopa_behavior,// bhvKoopa,
    gen_koopa_behavior, // bhvKoopa,
    gen_no_behavior, // bhvEnemyLakitu,
    //gen_no_behavior,// //bhvBUBBLE, // Need LAva
    gen_no_behavior, // bhvMadPiano, // 18
    gen_no_behavior, // bhvMoneybagHidden,
    gen_mr_blizzard_behavior,// bhvMrBlizzard,
    gen_mr_i_behavior, // MrI - 2nd Byte creates large eye and spawns star on death, TODO: make logic for a different star to spawn
    gen_no_behavior, // bhvScuttlebug,
    gen_no_behavior, // bhvSkeeter,
    gen_no_behavior, // bhvPiranhaPlant,
    gen_no_behavior, // bhvSnufit,
    gen_no_behavior, // bhvSpindrift,
    gen_no_behavior, //  bhvSpiny,
   //bhvSushiShark, // keep?
    gen_no_behavior, // bhvSwoop,
    gen_thwomp_behavior, // bhvThwomp,
    gen_no_behavior, // bhvSmallWhomp - 2nd Byte spawns boss! TODO: Make star spawn at diffent location



};


// Will use 6 spaces from start_index
void generate_enemy( LevelScript *array, u32 * start_index, const s16 x, const s16 y, const s16 z, const s16 roll, const s16 pitch, const s16 yaw) {
    u16 selection = MODEL_NONE;
    u32 bhvParam = 0x00000000;
    const BehaviorScript *bhv;
    int getEnemy = 20; //rand_int() % 29;

    selection = rng_modelsEnemy[getEnemy];
    bhv = rng_bhvEnemy[getEnemy];
    helpme2 = selection;
    bhvParam = rng_EnemeyBehFunc[getEnemy](bhv);//gen_goomba_behavior();
    helpme = 0;
    OBJECT_ASSIGNMENT(array, (*start_index),/*model*/ selection, /*pos*/ x,y,z, /*angle*/ roll,pitch,yaw, /*behParam*/ bhvParam, /*beh*/ bhv);

}
void generate_friendly(  );


void generate_star_select(s16 * currCourse) {
   // size = 6
   u8 i = 0;
   for (i =0; i < 6; i++){
      currCourse[i] = (rand_int() % 15) + 1;
   }

   //currCourse[0] = 2;
   //currCourse[5] = 1;
}
