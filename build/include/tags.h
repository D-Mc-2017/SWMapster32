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
