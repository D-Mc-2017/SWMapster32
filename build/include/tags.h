//-------------------------------------------------------------------------
/*
Copyright (C) 1997, 2005 - 3D Realms Entertainment

This file is part of Shadow Warrior version 1.2

Shadow Warrior is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

Original Source: 1997 - Frank Maddin and Jim Norwood
Prepared for public release: 03/28/2005 - Charlie Wiederhold, 3D Realms
*/
//-------------------------------------------------------------------------

// This file has been modified in part for SWMapster32 // dmc2017

typedef UCHAR      BYTE;
typedef BYTE  *BYTEp;
typedef spritetype SPRITE, *SPRITEp;


#if B_LITTLE_ENDIAN != 0
# define MSW_VAR(fixed) (*(((USHORTp)&(fixed)) + 1))
# define LSW_VAR(fixed) (*((USHORTp)&(fixed)))

# define MSB_VAR(fixed) (*(((BYTEp)&(fixed)) + 1))
# define LSB_VAR(fixed) (*((BYTEp)&(fixed)))
#else
# define LSW_VAR(fixed) (*(((USHORTp)&(fixed)) + 1))
# define MSW_VAR(fixed) (*((USHORTp)&(fixed)))

# define LSB_VAR(fixed) (*(((BYTEp)&(fixed)) + 1))
# define MSB_VAR(fixed) (*((BYTEp)&(fixed)))
#endif

// sprite->extra flags
// BUILD AND GAME - DO NOT MOVE THESE
#define SPRX_SKILL              (BIT(0) | BIT(1) | BIT(2))

                                            // BIT(4) ST1 BUILD AND GAME
#define SPRX_STAY_PUT_VATOR     (BIT(5))    // BUILD AND GAME - will not move with vators etc
                                            // DO NOT MOVE THIS

#define SPRX_STAG               (BIT(6))    // BUILD AND GAME - NON-ST1 sprite with ST1 type tagging
                                            // DO NOT MOVE

#define SPRX_QUEUE_SPRITE       (BIT(7))    // Queue sprite -check queue when deleting
#define SPRX_MULTI_ITEM         (BIT(9))    // BUILD AND GAME - multi player item

// have users - could be moved
#define SPRX_PLAYER_OR_ENEMY    (BIT(11))   // for checking quickly if sprite is a
                                            // player or actor
// do not need Users
#define SPRX_FOUND              (BIT(12))   // BUILD ONLY INTERNAL - used for finding sprites
#define SPRX_BLADE              (BIT(12))   // blade sprite
#define SPRX_BREAKABLE          (BIT(13))   // breakable items
#define SPRX_BURNABLE           (BIT(14))   // used for burnable sprites in the game

// temp use
#define SPRX_BLOCK              (BIT(15))   // BUILD AND GAME
                                            // BUILD - tell which actors should not spawn
                                            // GAME - used for internal game code
                                            // ALT-M debug mode
                                            
// Defines for reading in ST1 sprite tagging
#define SP_TAG1(sp) ((sp)->hitag)
#define SP_TAG2(sp) ((sp)->lotag)
#define SP_TAG3(sp) ((sp)->clipdist)
#define SP_TAG4(sp) ((sp)->ang)
#define SP_TAG5(sp) ((sp)->xvel)
#define SP_TAG6(sp) ((sp)->yvel)
#define SP_TAG7(sp) (MSB_VAR((sp)->zvel))
#define SP_TAG8(sp) (LSB_VAR((sp)->zvel))
#define SP_TAG9(sp) (MSB_VAR((sp)->owner))
#define SP_TAG10(sp) (LSB_VAR((sp)->owner))
#define SP_TAG11(sp) ((sp)->shade)
#define SP_TAG12(sp) ((sp)->pal)
#define SP_TAG13(sp) B_LITTLE16(*((short*)&(sp)->xoffset))
#define SP_TAG14(sp) B_LITTLE16(*((short*)&(sp)->xrepeat))
#define SP_TAG15(sp) ((sp)->z)
#define SET_SP_TAG13(sp,val) (*((short*)&(sp)->xoffset)) = B_LITTLE16(val)
#define SET_SP_TAG14(sp,val) (*((short*)&(sp)->xrepeat)) = B_LITTLE16(val)

#define SPRITE_TAG1(sp) (sprite[sp].hitag)
#define SPRITE_TAG2(sp) (sprite[sp].lotag)
#define SPRITE_TAG3(sp) (sprite[sp].clipdist)
#define SPRITE_TAG4(sp) (sprite[sp].ang)
#define SPRITE_TAG5(sp) (sprite[sp].xvel)
#define SPRITE_TAG6(sp) (sprite[sp].yvel)
#define SPRITE_TAG7(sp) (MSB_VAR(sprite[sp].zvel))
#define SPRITE_TAG8(sp) (LSB_VAR(sprite[sp].zvel))
#define SPRITE_TAG9(sp) (MSB_VAR(sprite[sp].owner))
#define SPRITE_TAG10(sp) (LSB_VAR(sprite[sp].owner))
#define SPRITE_TAG11(sp) (sprite[sp].shade)
#define SPRITE_TAG12(sp) (sprite[sp].pal)
#define SPRITE_TAG13(sp) B_LITTLE16(*((short*)&sprite[sp].xoffset))
#define SPRITE_TAG14(sp) B_LITTLE16(*((short*)&sprite[sp].xrepeat))
#define SPRITE_TAG15(sp) (sprite[sp].z)
#define SET_SPRITE_TAG13(sp,val) (*((short*)&sprite[sp].xoffset)) = B_LITTLE16(val)
#define SET_SPRITE_TAG14(sp,val) (*((short*)&sprite[sp].xrepeat)) = B_LITTLE16(val)

// boolean flags carried over from build
#define SPRX_BOOL11 (BIT(5))
#define SPRX_BOOL1 (BIT(6))
#define SPRX_BOOL2 (BIT(7))
#define SPRX_BOOL3 (BIT(8))
#define SPRX_BOOL4 (BIT(9))
#define SPRX_BOOL5 (BIT(10))
#define SPRX_BOOL6 (BIT(11))
#define SPRX_BOOL7 (BIT(4))  // bit 12 was used build
#define SPRX_BOOL8 (BIT(13))
#define SPRX_BOOL9 (BIT(14))
#define SPRX_BOOL10 (BIT(15))

#define SET_BOOL1(sp) SET((sp)->extra, SPRX_BOOL1)
#define SET_BOOL2(sp) SET((sp)->extra, SPRX_BOOL2)
#define SET_BOOL3(sp) SET((sp)->extra, SPRX_BOOL3)
#define SET_BOOL4(sp) SET((sp)->extra, SPRX_BOOL4)
#define SET_BOOL5(sp) SET((sp)->extra, SPRX_BOOL5)
#define SET_BOOL6(sp) SET((sp)->extra, SPRX_BOOL6)
#define SET_BOOL7(sp) SET((sp)->extra, SPRX_BOOL7)
#define SET_BOOL8(sp) SET((sp)->extra, SPRX_BOOL8)
#define SET_BOOL9(sp) SET((sp)->extra, SPRX_BOOL9)
#define SET_BOOL10(sp) SET((sp)->extra, SPRX_BOOL10)
#define SET_BOOL11(sp) SET((sp)->extra, SPRX_BOOL11)

#define RESET_BOOL1(sp) RESET((sp)->extra, SPRX_BOOL1)
#define RESET_BOOL2(sp) RESET((sp)->extra, SPRX_BOOL2)
#define RESET_BOOL3(sp) RESET((sp)->extra, SPRX_BOOL3)
#define RESET_BOOL4(sp) RESET((sp)->extra, SPRX_BOOL4)
#define RESET_BOOL5(sp) RESET((sp)->extra, SPRX_BOOL5)
#define RESET_BOOL6(sp) RESET((sp)->extra, SPRX_BOOL6)
#define RESET_BOOL7(sp) RESET((sp)->extra, SPRX_BOOL7)
#define RESET_BOOL8(sp) RESET((sp)->extra, SPRX_BOOL8)
#define RESET_BOOL9(sp) RESET((sp)->extra, SPRX_BOOL9)
#define RESET_BOOL10(sp) RESET((sp)->extra, SPRX_BOOL10)
#define RESET_BOOL11(sp) RESET((sp)->extra, SPRX_BOOL11)

#define TEST_BOOL1(sp) TEST((sp)->extra, SPRX_BOOL1)
#define TEST_BOOL2(sp) TEST((sp)->extra, SPRX_BOOL2)
#define TEST_BOOL3(sp) TEST((sp)->extra, SPRX_BOOL3)
#define TEST_BOOL4(sp) TEST((sp)->extra, SPRX_BOOL4)
#define TEST_BOOL5(sp) TEST((sp)->extra, SPRX_BOOL5)
#define TEST_BOOL6(sp) TEST((sp)->extra, SPRX_BOOL6)
#define TEST_BOOL7(sp) TEST((sp)->extra, SPRX_BOOL7)
#define TEST_BOOL8(sp) TEST((sp)->extra, SPRX_BOOL8)
#define TEST_BOOL9(sp) TEST((sp)->extra, SPRX_BOOL9)
#define TEST_BOOL10(sp) TEST((sp)->extra, SPRX_BOOL10)
#define TEST_BOOL11(sp) TEST((sp)->extra, SPRX_BOOL11)

//////////////////////////////////////////////////////////////////////////////////////////
//
// TRACK TAGS FOR SECTOR OBJECTS
//
//////////////////////////////////////////////////////////////////////////////////////////
// Tracks allow SOs and sprites to follow a path designated by the map-maker.
// All Tracks must have at a minimum:
//      1. A TRACK_START.
//      2. A TRACK_END.
//
// Tracks are set up by the program by connecting sprites placed by the map-maker in the BUILD 
// editor.  The track sprites start at location 1900 and end at 1999 so there are 100 available
// tracks.  Tracks automatically loop back to the beginning when the TRACK_END sprite is
// detected.  Track tags listed below can be set to modify the behavior of objects moving along 
// them.
//
// Look at the tracks in example maps to see how they are placed.
//
// NOTE: Track direction is dependent on the next closest sprite to the TRACK_START sprite.
// As noted below, certain track tags are dependant on the direction the object is traveling on
// on the track.
//
// For placing actor sprite on the tracks:
//      1. Put a sprite down near the point you want it to start from.
//      2. Adjust the angle to the left to make the sprite move in the "reverse" direction
//         and to the right to make the sprite move in the "forward" direction.
//      3. For the pic, place the first pic of the actor found in the editart file.
//
// Every track can have a type set in the high tag of TRACK_START.
//////////////////////////////////////////////////////////////////////////////////////////

    
// Mark first track sprite with this
// High tag = Type of track (defined next)
#define TRACK_START             700 

    //
    // TRACK TYPES - only valid for sprites only NOT for SOs
    //
    // Used to attach a name to a track purpose.  The actors will "look around" for
    // tracks to know what actions are available to them.
    //
    
    // All tracks are assumed to be SEGMENTS (non-circular, generally leading in a certain
    // direction) unless otherwise noted.  SEGMENTS are generally kept short with a few
    // exceptions.

    // Follow a circular route available for sprites to hop on and off.
    // Generally covers a larger area than TT_WANDER.
    #define TT_ROUTE            1
        
    // Jump up only
    #define TT_JUMP_UP          2
    // Jump down only
    #define TT_JUMP_DOWN        3
    // Jump up/down track
    #define TT_JUMP_BOTH        4
    // Ladder track.  Currently only good for going up.  Must jump down.
    #define TT_LADDER           5
    // Stair track.  Hard for sprites to maneuver narrow stairs well without tracks.
    #define TT_STAIRS           6
    
    // Traverse a complex route - generally thought of to move you from point A to point B
    // in complex map situations.
    #define TT_TRAVERSE         7
    
    // Duck behind cover and attack
    #define TT_DUCK_N_SHOOT     8
    // Hide behind cover and attack
    #define TT_HIDE_N_SHOOT     9
    
    // Exit tracks to exit a room/area.  Probably should lead to a door alot of the time.
    #define TT_EXIT             10

    // Wander track. Wander about general area until you come upon a player.
    #define TT_WANDER           11
    
    // Scan for other tracks.  Generally a VERY short track put these in places where 
    // other tracks can be seen easily.  Good "vantage points".
    #define TT_SCAN             12
    
    // Super Jump 
    #define TT_SUPER_JUMP_UP    13

    // Operate Stuff
    #define TT_OPERATE          14


// Mark last sprite with this
#define TRACK_END               701
// Set the target speed and actual speed at this point
// Valid values for target speed are 2 to 128
#define TRACK_SET_SPEED         702
// Stop for (seconds) in high tag
#define TRACK_STOP              703
// Reverse the direction
#define TRACK_REVERSE           704    

// Note that the next two tags have the opposite effect when traveling the REVERSE direction

// Sets up a target speed by a delta (amt) in high tag
// velocity = (current target velocity) + (speed up amount in high tag)
// Valid values for target speed are 2 to 128
#define TRACK_SPEED_UP          705    

// Sets up a target speed by a delta (amt) in high tag
// velocity = (current target velocity) - (speed up amount in high tag)
// Valid values for target speed are 2 to 128
#define TRACK_SLOW_DOWN         706    

// The rate at which the velocity approaches the target speed.
// This is defined as a shift value (for processing speed) and defaults to 6.  The valid range
// is 1 to 12.
#define TRACK_VEL_RATE          707   


// Moves the floor of the object by a delta PIXEL position (amt) in high tag
#define TRACK_ZUP               709
// Moves the floor of the object by a delta PIXEL position (amt) in high tag
#define TRACK_ZDOWN             710
// Sets the rate at which the ZUP/ZDOWN moves. Defaults to 256.
#define TRACK_ZRATE             711
// Special mode where the object looks at the zcoord of the next track point and moves
// to achieve the destination.  In high tag is a negative delta Z from the placement of 
// the track sprites z value.
#define TRACK_ZDIFF_MODE        712

// Object spins as it goes along its track.  Spin speed in high tag.
// For now, once you start it spinning you cannot stop it.
#define TRACK_SPIN              715

// Object stops spining.  Angle to finish at in high tag.
#define TRACK_SPIN_STOP         716

// Bobbing for SO's. 
// High tag = Bob amt in pixels.
#define TRACK_BOB_START         717
// High tag = Bob speed - shift amt pixels.
#define TRACK_BOB_SPEED         718
// Bobbing for SO's. 
#define TRACK_BOB_STOP          719
// Start object spinning in the opposite direction.
#define TRACK_SPIN_REVERSE      720

// Start object sinking to ST1 SECT_SO_SINK_DEST
// For boats
// High tag = speed of sinking
#define TRACK_SO_SINK           723

// For boats - lower whirlpool sector - tagged with ST1 SECT_SO_FORM_WHIRLPOOL
#define TRACK_SO_FORM_WHIRLPOOL   724

// Move Sprite Objects (not sector objects) straight up or down in the z 
// direction to the next points z height then continues along the track
// High tag = speed of movement - default is 256
#define TRACK_MOVE_VERTICAL    725

// Object will wait at this point on the track for a trigger/switch to be
// flipped.  Use TAG_SO_EVENT_SWITCH and TRIGGER to free the SO to
// continue. In addition the these switches and triggers, others that have
// have MATCHing tags will work with this tag.  The following is a list.
// 
// TAG_SPRITE_HIT_MATCH
// TAG_OPEN_DOOR_SWITCH
// TAG_OPEN_DOOR_TRIGGER
// 
// Basically anthing that has a match tag that operates on sectors can also
// operate a TRACK_WAIT_FOR_EVENT.
// 

// High tag = match number 
#define TRACK_WAIT_FOR_EVENT   726

// does a DoMatchEverything
// TAG1 = match tag
#define TRACK_MATCH_EVERYTHING 728        
#define TRACK_MATCH_EVERYTHING_ONCE 729

///////////////
//
// TRACK TAGS FOR SPRITES ONLY
//
///////////////

// Set the target speed and actual speed at this point
// Valid values for target speed are 2 to 128
#define TRACK_ACTOR_SET_SPEED         750
// Stop for (seconds) in high tag
#define TRACK_ACTOR_STOP              751
// Reverse the direction
#define TRACK_ACTOR_REVERSE           752    

// Note that the next two tags have the opposite effect when traveling the REVERSE direction

// Sets up a target speed by a delta (amt) in high tag
// velocity = (current target velocity) + (speed up amount in high tag)
// Valid values for target speed are 2 to 128
#define TRACK_ACTOR_SPEED_UP          753    

// Sets up a target speed by a delta (amt) in high tag
// velocity = (current target velocity) - (speed up amount in high tag)
// Valid values for target speed are 2 to 128
#define TRACK_ACTOR_SLOW_DOWN         754    

// The rate at which the velocity approaches the target speed.
// This is defined as a shift value (for processing speed) and defaults to 6.  The valid range
// is 1 to 12.
#define TRACK_ACTOR_VEL_RATE          755   

// Special mode where the object looks at the zcoord of the next track point and moves
// to achieve the destination.  Should not be set when jumping/climbing etc.
#define TRACK_ACTOR_ZDIFF_MODE        759



//Note: All actions are preformed only if they exist for the character.

// High tag = seconds
#define TRACK_ACTOR_STAND           770
// High tag = height value (default 384)
#define TRACK_ACTOR_JUMP            771
// Toggle crawl state
#define TRACK_ACTOR_CRAWL           772
// Toggle swim state
#define TRACK_ACTOR_SWIM            773
// Toggle fly spell
#define TRACK_ACTOR_FLY             774
// High tag = seconds
#define TRACK_ACTOR_SIT             776
// High tag = seconds
#define TRACK_ACTOR_DEATH1          777
// High tag = seconds
#define TRACK_ACTOR_DEATH2          778
// Air Death!
// High tag = seconds
#define TRACK_ACTOR_DEATH_JUMP      779

// Close range attacks - in order of least powerful to most
// High tag = seconds
#define TRACK_ACTOR_CLOSE_ATTACK1   780
#define TRACK_ACTOR_CLOSE_ATTACK2   781
// Long range attacks - in order of least powerful to most
// High tag = seconds
#define TRACK_ACTOR_ATTACK1         782
#define TRACK_ACTOR_ATTACK2         783
#define TRACK_ACTOR_ATTACK3         784
#define TRACK_ACTOR_ATTACK4         785
#define TRACK_ACTOR_ATTACK5         786
#define TRACK_ACTOR_ATTACK6         787

// High tag = seconds
#define TRACK_ACTOR_LOOK            790
// High tag = seconds to pause
// Point of the sprite angle in the direction of the operatable sector/wall/switch
// Actor presses the space bar to operate sector/wall/switch. 
#define TRACK_ACTOR_OPERATE         791
// High tag = height to go up before jumping to next point
// Sprite angle must be facing the ladder
#define TRACK_ACTOR_CLIMB_LADDER    792
// Set up a default jump value - for use before climbing ladders etc
#define TRACK_ACTOR_SET_JUMP        793

// Specail Action - depends on each actor
// High tag = seconds
#define TRACK_ACTOR_SPECIAL1        795
#define TRACK_ACTOR_SPECIAL2        796

// Jump if moving forward on track
#define TRACK_ACTOR_JUMP_IF_FORWARD 797
// Jump if moving backward on track
#define TRACK_ACTOR_JUMP_IF_REVERSE 798

// Wait for player to come into range before moving from this point.
// High tag = Distance from player at which NPC can start moving.
#define TRACK_ACTOR_WAIT_FOR_PLAYER 799

// Wait for trigger to be tripped before moving from this point.
// Use TAG_TRIGGER_ACTORS defined above is used to trigger the actor.
#define TRACK_ACTOR_WAIT_FOR_TRIGGER 800

// FAF ST1 hitags
#define VIEW_LEVEL1 110
#define VIEW_LEVEL2 111
#define VIEW_LEVEL3 112
#define VIEW_LEVEL4 113
#define VIEW_LEVEL5 114
#define VIEW_LEVEL6 115
#define VIEW_THRU_CEILING 120
#define VIEW_THRU_FLOOR 121
#define BOUND_FLOOR_BASE_OFFSET 202
#define BOUND_FLOOR_OFFSET 203

// FAF picnums
#define FAF_PLACE_MIRROR_PIC 341
#define FAF_MIRROR_PIC 2356