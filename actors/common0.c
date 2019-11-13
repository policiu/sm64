#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "geo_commands.h"

#include "make_const_nonconst.h"

#include "blue_coin_switch/model.inc.c"
#include "blue_coin_switch/collision.inc.c"
UNUSED static const u64 binid_0 = 0;

#include "amp/model.inc.c"
#include "amp/anims/data.inc.c"
#include "amp/anims/table.inc.c"
UNUSED static const u64 binid_1 = 1;

#include "cannon_lid/model.inc.c"
#include "cannon_lid/collision.inc.c"
UNUSED static const u64 binid_2 = 2;

#include "cannon_base/model.inc.c"
UNUSED static const u64 binid_3 = 3;

#include "cannon_barrel/model.inc.c"
UNUSED static const u64 binid_4 = 4;

#include "chuckya/model.inc.c"
#include "chuckya/anims/data.inc.c"
#include "chuckya/anims/table.inc.c"
UNUSED static const u64 binid_5 = 5;

#include "purple_switch/model.inc.c"
#include "purple_switch/collision.inc.c"
UNUSED static const u64 binid_6 = 6;

#include "checkerboard_platform/model.inc.c"
#include "checkerboard_platform/collision.inc.c"
UNUSED static const u64 binid_7 = 7;

#include "heart/model.inc.c"
UNUSED static const u64 binid_8 = 8;

#include "flyguy/model.inc.c"
#include "flyguy/anims/data.inc.c"
#include "flyguy/anims/table.inc.c"
UNUSED static const u64 binid_9 = 9;

#include "breakable_box/model.inc.c"
#include "breakable_box/collision.inc.c"
UNUSED static const u64 binid_10 = 10;

UNUSED static const u64 binid_11 = 11;

#include "exclamation_box/model.inc.c"
UNUSED static const u64 binid_12 = 12;

#include "goomba/model.inc.c"
#include "goomba/anims/data.inc.c"
#include "goomba/anims/table.inc.c"
UNUSED static const u64 binid_13 = 13;

#include "bobomb/model.inc.c"
#include "bobomb/anims/data.inc.c"
#include "bobomb/anims/table.inc.c"
UNUSED static const u64 binid_14 = 14;

#include "metal_box/model.inc.c"
#include "metal_box/collision.inc.c"
UNUSED static const u64 binid_15 = 15;

#include "exclamation_box_outline/model.inc.c"
#include "exclamation_box_outline/collision.inc.c"
UNUSED static const u64 binid_16 = 16;

#include "test_platform/model.inc.c"
#include "test_platform/collision.inc.c"
UNUSED static const u64 binid_17 = 17;

#include "koopa_shell/model.inc.c"
UNUSED static const u64 binid_18 = 18;
/*
#include "king_bobomb/model.inc.c"
#include "king_bobomb/anims/data.inc.c"
#include "king_bobomb/anims/table.inc.c"
UNUSED static const u64 binid_19= 19;
*/


#include "king_bobomb/model.inc.c"
#include "king_bobomb/anims/data.inc.c"
#include "king_bobomb/anims/table.inc.c"

#include "water_bubble/model.inc.c"

#include "whomp/model.inc.c"
#include "whomp/anims/data.inc.c"
#include "whomp/anims/table.inc.c"
#include "whomp/collision.inc.c"



#include "bowser_flame/model.inc.c"

#include "impact_ring/model.inc.c"

#include "yellow_sphere/model.inc.c"

#include "bowser/model.inc.c"
#include "bowser/anims/data.inc.c"
#include "bowser/anims/table.inc.c"
#include "bowser/flames_pos.inc.c"

#include "bomb/model.inc.c"

#include "impact_smoke/model.inc.c"


// group 1
#include "hoot/model.inc.c"
#include "hoot/anims/data.inc.c"
#include "hoot/anims/table.inc.c"

#include "yoshi_egg/model.inc.c"

#include "thwomp/model.inc.c"
#include "thwomp/collision.inc.c"

#include "bullet_bill/model.inc.c"

#include "heave_ho/model.inc.c"
#include "heave_ho/anims/data.inc.c"
#include "heave_ho/anims/table.inc.c"


// group 2
#include "bully/model.inc.c"
#include "bully/anims/data.inc.c"
#include "bully/anims/table.inc.c"

#include "blargg/model.inc.c"
#include "blargg/anims/data.inc.c"
#include "blargg/anims/table.inc.c"

// group 5

#include "klepto/model.inc.c"
#include "klepto/anims/data.inc.c"
#include "klepto/anims/table.inc.c"

#include "eyerok/model.inc.c"
#include "eyerok/anims/data.inc.c"
#include "eyerok/anims/table.inc.c"

#include "pokey/model.inc.c"

#include "tornado/model.inc.c"
#include "tornado/geo.inc.c"


// group 11
#include "bubba/model.inc.c"

#include "wiggler_body/model.inc.c"
#include "wiggler_body/anims/data.inc.c"
#include "wiggler_body/geo.inc.c"
#include "wiggler_body/anims/table.inc.c"

#include "wiggler_head/model.inc.c"
#include "wiggler_head/anims/data.inc.c"
#include "wiggler_head/anims/table.inc.c"

#include "lakitu_enemy/model.inc.c"
#include "lakitu_enemy/anims/data.inc.c"
#include "lakitu_enemy/anims/table.inc.c"

#include "spiny_egg/model.inc.c"
#include "spiny_egg/anims/data.inc.c"
#include "spiny_egg/anims/table.inc.c"

#include "spiny/model.inc.c"
#include "spiny/anims/data.inc.c"
#include "spiny/anims/table.inc.c"

// group 9
#include "bookend/model.inc.c"
#include "bookend/anims/data.inc.c"
#include "bookend/anims/table.inc.c"

#include "book/model.inc.c"

#include "chair/model.inc.c"
#include "chair/anims/data.inc.c"
#include "chair/anims/table.inc.c"

#include "small_key/model.inc.c"

#include "mad_piano/model.inc.c"
#include "mad_piano/anims/data.inc.c"
#include "mad_piano/anims/table.inc.c"

#include "boo/model.inc.c"

#include "haunted_cage/model.inc.c"

// group 13
#include "skeeter/model.inc.c"
#include "skeeter/anims/data.inc.c"
#include "skeeter/anims/table.inc.c"

#include "seaweed/model.inc.c"
#include "seaweed/anims/data.inc.c"
#include "seaweed/anims/table.inc.c"

#include "water_mine/model.inc.c"

#include "cyan_fish/model.inc.c"
#include "cyan_fish/anims/data.inc.c"
#include "cyan_fish/anims/table.inc.c"

#include "bub/model.inc.c"
#include "bub/anims/data.inc.c"
#include "bub/anims/table.inc.c"

#include "water_ring/model.inc.c"
#include "water_ring/anims/data.inc.c"
#include "water_ring/anims/table.inc.c"

#include "treasure_chest/model.inc.c"

// group 4

#include "clam_shell/model.inc.c"
#include "clam_shell/anims/data.inc.c"
#include "clam_shell/anims/table.inc.c"

#include "manta/model.inc.c"
#include "manta/anims/data.inc.c"
#include "manta/geo.inc.c"
#include "manta/anims/table.inc.c"

#include "sushi/model.inc.c"
#include "sushi/anims/data.inc.c"
#include "sushi/anims/table.inc.c"

#include "unagi/model.inc.c"
#include "unagi/anims/data.inc.c"
#include "unagi/anims/table.inc.c"

#include "whirlpool/model.inc.c"

// group 6

#include "monty_mole_hole/model.inc.c"

#include "monty_mole/model.inc.c"
#include "monty_mole/anims/data.inc.c"
#include "monty_mole/anims/table.inc.c"

#include "smoke/model.inc.c"

#include "ukiki/model.inc.c"
#include "ukiki/anims/data.inc.c"
#include "ukiki/anims/table.inc.c"

#include "fwoosh/model.inc.c"

// group 14
#include "koopa_flag/model.inc.c"
#include "koopa_flag/anims/data.inc.c"
#include "koopa_flag/anims/table.inc.c"

#include "poundable_pole/model.inc.c"
#include "poundable_pole/collision.inc.c"

#include "koopa/model.inc.c"
#include "koopa/anims/data.inc.c"
#include "koopa/anims/table.inc.c"

#include "piranha_plant/model.inc.c"
#include "piranha_plant/anims/data.inc.c"
#include "piranha_plant/anims/table.inc.c"


#include "chain_ball/model.inc.c"

#include "chain_chomp/model.inc.c"
#include "chain_chomp/anims/data.inc.c"
#include "chain_chomp/anims/table.inc.c"

// group 15

#include "lakitu_cameraman/model.inc.c"
#include "lakitu_cameraman/anims/data.inc.c"
#include "lakitu_cameraman/anims/table.inc.c"

#include "toad/model.inc.c"
#include "toad/anims/data.inc.c"
#include "toad/anims/table.inc.c"

#include "mips/model.inc.c"
#include "mips/anims/data.inc.c"
#include "mips/anims/table.inc.c"

#include "boo_castle/model.inc.c"

// group 16

#include "chillychief/model.inc.c"
#include "chillychief/anims/data.inc.c"
#include "chillychief/geo.inc.c"
#include "chillychief/anims/table.inc.c"

#include "moneybag/model.inc.c"
#include "moneybag/anims/data.inc.c"
#include "moneybag/anims/table.inc.c"

// group 17
#include "mr_i_eyeball/model.inc.c"

#include "mr_i_iris/model.inc.c"

#include "swoop/model.inc.c"
#include "swoop/anims/data.inc.c"
#include "swoop/anims/table.inc.c"

#include "snufit/model.inc.c"

#include "dorrie/model.inc.c"
#include "dorrie/anims/data.inc.c"
#include "dorrie/anims/table.inc.c"
#include "dorrie/collision.inc.c"

#include "scuttlebug/model.inc.c"
#include "scuttlebug/anims/data.inc.c"
#include "scuttlebug/anims/table.inc.c"

// group 7

#include "spindrift/model.inc.c"
#include "spindrift/anims/data.inc.c"
#include "spindrift/anims/table.inc.c"

#include "penguin/model.inc.c"
#include "penguin/anims/data.inc.c"
#include "penguin/anims/table.inc.c"
#include "penguin/collision.inc.c"

#include "snowman/model.inc.c"
#include "snowman/anims/data.inc.c"
#include "snowman/anims/table.inc.c"
// group 8

#include "springboard/model.inc.c"
#include "springboard/collision.inc.c"

#include "capswitch/model.inc.c"
#include "capswitch/collision.inc.c"
// group 10

#include "bird/model.inc.c"
#include "bird/anims/data.inc.c"
#include "bird/anims/table.inc.c"

#include "peach/model.inc.c"
#include "peach/anims/data.inc.c"
#include "peach/anims/table.inc.c"

#include "yoshi/model.inc.c"
#include "yoshi/anims/data.inc.c"
#include "yoshi/anims/table.inc.c"


