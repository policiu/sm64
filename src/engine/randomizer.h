#ifndef _RANDOMIZER_H_
#define _RANDOMIZER_H_

//const s32 seed = 0x123456789;

// Two byte

extern u32 gRandomSeed;
extern u32 gRandomSeedCurrent;
void generate_enemy( LevelScript *array, u32 *start_index, const s16 x, const s16 y, const s16 z, const s16 roll, const s16 pitch, const s16 yaw);
void generate_init_level( u32 level_id );
void generate_init();


void generate_star_select(s16 * currCourse);
#endif
