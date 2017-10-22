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

#define DIGI_NULL                0    
                         
#define DIGI_SWORDSWOOSH         1    
                         
#define DIGI_STAR                2    
#define DIGI_STARCLINK           3
#define DIGI_STARWIZ             4
                         
#define DIGI_UZIFIRE             5    
#define DIGI_RICHOCHET1          6
#define DIGI_RICHOCHET2          7
#define DIGI_REMOVECLIP          8
#define DIGI_REPLACECLIP         9
                         
#define DIGI_SHELL               10   
                         
#define DIGI_RIOTFIRE            11   
#define DIGI_RIOTFIRE2           12
#define DIGI_RIOTRELOAD          13
#define DIGI_BOLTEXPLODE         14
#define DIGI_BOLTWIZ             15
                         
#define DIGI_30MMFIRE            16   
#define DIGI_30MMRELOAD          17
#define DIGI_30MMEXPLODE         18
#define DIGI_30MMWIZ             19
                         
#define DIGI_HEADFIRE            20   
#define DIGI_HEADSHOTWIZ         21
#define DIGI_HEADSHOTHIT         22
                         
#define DIGI_MINETHROW           23   
#define DIGI_MINEBOUNCE          24
#define DIGI_MINEBLOW            25
#define DIGI_MINEBEEP            26
                         
#define DIGI_HEARTBEAT           27   
#define DIGI_HEARTFIRE           28
#define DIGI_HEARTWIZ            29
                         
#define DIGI_MISSLFIRE           30   
#define DIGI_MISSLEXP            31
                         
#define DIGI_RFWIZ               32   
                         
#define DIGI_NAPFIRE             33   
#define DIGI_NAPWIZ              34
#define DIGI_NAPPUFF             35
                         
#define DIGI_MIRVFIRE            36   
#define DIGI_MIRVWIZ             37
                         
#define DIGI_SPIRALFIRE          38   
#define DIGI_SPIRALWIZ           39
                         
#define DIGI_MAGIC1              40   
#define DIGI_MAGIC2              41
#define DIGI_MAGIC3              42
#define DIGI_MAGIC4              43
#define DIGI_MAGIC5              44
#define DIGI_MAGIC6              45
#define DIGI_MAGIC7              46
                         
#define DIGI_SWCLOAKUNCLOAK      47   
                         
#define DIGI_DHVOMIT             48   
#define DIGI_DHCLUNK             49
#define DIGI_DHSQUISH            50
                         
#define DIGI_PROJECTILELAVAHIT   51   
#define DIGI_PROJECTILEWATERHIT  52   
                         
#define DIGI_KEY                 53   
#define DIGI_ITEM                54
#define DIGI_BIGITEM             55
                         
#define DIGI_BODYFALL1           56   
#define DIGI_HITGROUND           57
#define DIGI_BODYSQUISH1         58
#define DIGI_BODYBURN            59
#define DIGI_BODYBURNSCREAM      60
#define DIGI_BODYCRUSHED1        61
#define DIGI_BODYHACKED1         62
#define DIGI_BODYSINGED          63
#define DIGI_DROWN               64
#define DIGI_SCREAM1             65
#define DIGI_SCREAM2             66
#define DIGI_SCREAM3             67
#define DIGI_HIT1                68
#define DIGI_ELECTRICUTE1        69
#define DIGI_REMOVEME            70
#define DIGI_IMPALED             71
#define DIGI_OOF1                72
                         
#define DIGI_ACTORBODYFALL1      73   
#define DIGI_ACTORHITGROUND      74   
                         
#define DIGI_COOLIEEXPLODE       75   
#define DIGI_COOLIESCREAM        76
#define DIGI_COOLIEALERT         77
#define DIGI_COOLIEAMBIENT       78
#define DIGI_COOLIEPAIN          79
                         
#define DIGI_CGMATERIALIZE       80   
#define DIGI_CGALERT             81
#define DIGI_CGTHIGHBONE         82
#define DIGI_CGAMBIENT           83
#define DIGI_CGPAIN              84
#define DIGI_CGMAGIC             85
#define DIGI_CGMAGICHIT          86
#define DIGI_CGSCREAM            87
                         
#define DIGI_NINJAAMBIENT        88   
#define DIGI_NINJASTAR           89
#define DIGI_NINJAPAIN           90
#define DIGI_NINJASCREAM         91
#define DIGI_NINJAALERT          92
#define DIGI_NINJAUZIATTACK      93
#define DIGI_NINJARIOTATTACK     94
                         
#define DIGI_RIPPERAMBIENT       95   
#define DIGI_RIPPERALERT         96
#define DIGI_RIPPERATTACK        97
#define DIGI_RIPPERPAIN          98
#define DIGI_RIPPERSCREAM        99
#define DIGI_RIPPERHEARTOUT      100
                         
#define DIGI_GRDAMBIENT          101  
#define DIGI_GRDALERT            102
#define DIGI_GRDPAIN             103
#define DIGI_GRDSCREAM           104
#define DIGI_GRDFIREBALL         105
#define DIGI_GRDSWINGAXE         106
#define DIGI_GRDAXEHIT           107
                         
#define DIGI_SPAMBIENT           108  
#define DIGI_SPALERT             109
#define DIGI_SPPAIN              110
#define DIGI_SPSCREAM            111
#define DIGI_SPBLADE             112
#define DIGI_SPELEC              113
#define DIGI_SPTELEPORT          114
                         
#define DIGI_AHAMBIENT           115  
#define DIGI_AHSCREAM            116
#define DIGI_AHEXPLODE           117
#define DIGI_AHSWOOSH            118
                         
#define DIGI_HORNETBUZZ          119  
#define DIGI_HORNETSTING         120
#define DIGI_HORNETPAIN          121
#define DIGI_HORNETDEATH         122
                         
#define DIGI_SERPAMBIENT         123  
#define DIGI_SERPALERT           124
#define DIGI_SERPPAIN            125
#define DIGI_SERPSCREAM          126
#define DIGI_SERPDEATHEXPLODE    127
#define DIGI_SERPSWORDATTACK     128
#define DIGI_SERPMAGICLAUNCH     129
#define DIGI_SERPSUMMONHEADS     130
#define DIGI_SERPTAUNTYOU        131
                         
#define DIGI_LAVABOSSAMBIENT     132  
#define DIGI_LAVABOSSSWIM        133
#define DIGI_LAVABOSSRISE        134
#define DIGI_LAVABOSSALERT       135
#define DIGI_LAVABOSSFLAME       136
#define DIGI_LAVABOSSMETEOR      137
#define DIGI_LAVABOSSMETEXP      138
#define DIGI_LAVABOSSPAIN        139
#define DIGI_LAVABOSSSIZZLE      140
#define DIGI_LAVABOSSEXPLODE     141
                         
#define DIGI_BOATSTART           142  
#define DIGI_BOATRUN             143
#define DIGI_BOATSTOP            144
#define DIGI_BOATFIRE            145
                         
#define DIGI_TANKSTART           146  
#define DIGI_TANKRUN             147
#define DIGI_TANKSTOP            148
#define DIGI_TANKIDLE            149
#define DIGI_TANKFIRE            150
                         
#define DIGI_TRUKRUN             151  
#define DIGI_TRUKIDLE            152
                         
#define DIGI_SUBRUN              153  
#define DIGI_SUBIDLE             154
#define DIGI_SUBDOOR             155
                         
#define DIGI_BOMBRFLYING         156  
#define DIGI_BOMBRDROPBOMB       157
                         
#define DIGI_BUBBLES             158  
                         
#define DIGI_CHAIN               159  
                         
#define DIGI_CHAINDOOR           160  
                         
#define DIGI_CRICKETS            161  
                         
#define DIGI_WOODDOOROPEN        162  
#define DIGI_METALDOOROPEN       164
#define DIGI_METALDOORCLOSE      165
#define DIGI_SLIDEDOOROPEN       166
#define DIGI_SLIDEDOORCLOSE      167
#define DIGI_STONEDOOROPEN       168
#define DIGI_STONEDOORCLOSE      169
#define DIGI_SQUEAKYDOOROPEN     170
#define DIGI_SQUEAKYDOORCLOSE    171
                         
#define DIGI_DRILL               172  
                         
#define DIGI_CAVEDRIP1           173  
#define DIGI_CAVEDRIP2           174
#define DIGI_DRIP                175
                         
#define DIGI_WATERFALL1          176  
#define DIGI_WATERFALL2          177  
                         
#define DIGI_WATERFLOW1          178  
#define DIGI_WATERFLOW2          179  
                         
#define DIGI_ELEVATOR            180  
                         
#define DIGI_SMALLEXP            181  
#define DIGI_MEDIUMEXP           182
#define DIGI_LARGEEXP            183
#define DIGI_HUGEEXP             184
                         
#define DIGI_FIRE1               185  
#define DIGI_FIRE2               186  
                         
#define DIGI_FIREBALL1           187  
#define DIGI_FIREBALL2           188
                         
#define DIGI_GEAR1               189  
                         
#define DIGI_GONG                190                           
#define DIGI_LAVAFLOW1           191                           
#define DIGI_MACHINE1            192                           
#define DIGI_MUBBUBBLES1         193                           
#define DIGI_EARTHQUAKE          194                           
#define DIGI_SEWERFLOW1          195                           
#define DIGI_SPLASH1             196                           
#define DIGI_STEAM1              197  
#define DIGI_VOLCANOSTEAM1       198                           
#define DIGI_STOMPER             199                           
#define DIGI_SWAMP               200                           
#define DIGI_REGULARSWITCH       201  
#define DIGI_BIGSWITCH           202
#define DIGI_STONESWITCH         203
#define DIGI_GLASSSWITCH         204
#define DIGI_HUGESWITCH          205                         
#define DIGI_THUNDER             206                           
#define DIGI_TELEPORT            207                           
#define DIGI_UNDERWATER          208                           
#define DIGI_UNLOCK              209                           
#define DIGI_SQUEAKYVALVE        210                         
#define DIGI_VOID1               211  
#define DIGI_VOID2               212
#define DIGI_VOID3               213
#define DIGI_VOID4               214
#define DIGI_VOID5               215                         
#define DIGI_ERUPTION            216                           
#define DIGI_VOLCANOPROJECTILE   217                           
#define DIGI_LIGHTWIND           218  
#define DIGI_STRONGWIND          219                         
#define DIGI_BREAKINGWOOD        220  
#define DIGI_BREAKSTONES         221                         
#define DIGI_ENGROOM1            222  
#define DIGI_ENGROOM2            223
#define DIGI_ENGROOM3            224
#define DIGI_ENGROOM4            225
#define DIGI_ENGROOM5            226                         
#define DIGI_BREAKGLASS          227                           
#define DIGI_MUSSTING            228                           
#define DIGI_HELI                229                           
#define DIGI_BIGHART             230                           
#define DIGI_WIND4               231                           
#define DIGI_SPOOKY1             232                           
#define DIGI_DRILL1              233                           
#define DIGI_JET                 234                           
#define DIGI_DRUMCHANT           235  
                         
#define DIGI_BUZZZ               236  
#define DIGI_CHOP_CLICK          237
                         
#define DIGI_SWORD_UP            238  
#define DIGI_UZI_UP              239
#define DIGI_SHOTGUN_UP          240
#define DIGI_ROCKET_UP           241
#define DIGI_GRENADE_UP          242
#define DIGI_RAIL_UP             243
#define DIGI_MINE_UP             244
                         
#define DIGI_FIRSTPLAYERVOICE    245  
#define DIGI_TAUNTAI1            246  
#define DIGI_TAUNTAI2            247  
#define DIGI_TAUNTAI3            248  
#define DIGI_TAUNTAI4            249
#define DIGI_TAUNTAI5            250
#define DIGI_TAUNTAI6            251
                         
#define DIGI_TAUNTAI7            252
#define DIGI_TAUNTAI8            253
#define DIGI_TAUNTAI9            254
#define DIGI_TAUNTAI10           255
                         
#define DIGI_PLAYERPAIN1         256  
#define DIGI_PLAYERPAIN2         257
#define DIGI_PLAYERPAIN3         258
#define DIGI_PLAYERPAIN4         259
#define DIGI_PLAYERPAIN5         260
                         
#define DIGI_PLAYERYELL1         261  
#define DIGI_PLAYERYELL2         262
#define DIGI_PLAYERYELL3         263
                         
#define DIGI_SEARCHWALL          264  
                         
#define DIGI_NOURINAL            265  
                         
#define DIGI_FALLSCREAM          266  
#define DIGI_GOTITEM1            267  
#define DIGI_LASTPLAYERVOICE     268  
                         
#define DIGI_RAILFIRE            269  
#define DIGI_RAILREADY           270
#define DIGI_RAILPWRUP           271
                         
#define DIGI_NUCLEAREXP          272  
#define DIGI_NUKESTDBY           273
#define DIGI_NUKECDOWN           274
#define DIGI_NUKEREADY           275
                         
#define DIGI_CHEMGAS             276  
#define DIGI_CHEMBOUNCE          277
#define DIGI_THROW               278
#define DIGI_PULL                279
                         
#define DIGI_MINEARM             280  
#define DIGI_HEARTDOWN           281
#define DIGI_TOOLBOX             282
#define DIGI_GASPOP              283
#define DIGI_40MMBNCE            284
                         
#define DIGI_BURGLARALARM        285  
#define DIGI_CARALARM            286
#define DIGI_CARALARMOFF         287
#define DIGI_CALTROPS            288
#define DIGI_NIGHTON             289
#define DIGI_NIGHTOFF            290
#define DIGI_SHOTSHELLSPENT      291
#define DIGI_BUSSKID             292
#define DIGI_BUSCRASH            293
#define DIGI_BUSENGINE           294
#define DIGI_ARMORHIT            295
                         
#define DIGI_ASIREN1             296  
#define DIGI_FIRETRK1            297
#define DIGI_TRAFFIC1            298
#define DIGI_TRAFFIC2            299
#define DIGI_TRAFFIC3            300
#define DIGI_TRAFFIC4            301
#define DIGI_TRAFFIC5            302
#define DIGI_TRAFFIC6            303
#define DIGI_HELI1               304
#define DIGI_JET1                305
#define DIGI_MOTO1               306
#define DIGI_MOTO2               307
#define DIGI_NEON1               308
#define DIGI_SUBWAY              309
#define DIGI_TRAIN1              310
                         
#define DIGI_COINS               311
#define DIGI_SWORDCLANK          312
                         
#define DIGI_RIPPER2AMBIENT      313  
#define DIGI_RIPPER2ALERT        314
#define DIGI_RIPPER2ATTACK       315
#define DIGI_RIPPER2PAIN         316
#define DIGI_RIPPER2SCREAM       317
#define DIGI_RIPPER2HEARTOUT     318
                         
#define DIGI_M60                 319  
                         
#define DIGI_SUMOSCREAM          320  
#define DIGI_SUMOALERT           321
#define DIGI_SUMOAMBIENT         322
#define DIGI_SUMOPAIN            323
                         
#define DIGI_RAMUNLOCK           324  
#define DIGI_CARDUNLOCK          325
                         
#define DIGI_ANCIENTSECRET       326  
#define DIGI_AMERICANDRIVER      327
#define DIGI_DRIVELIKEBABOON     328
#define DIGI_BURNBABY            329
#define DIGI_LIKEBIGWEAPONS      330
#define DIGI_COWABUNGA           331
#define DIGI_NOCHARADE           332
#define DIGI_TIMETODIE           333
#define DIGI_EATTHIS             334
#define DIGI_FIRECRACKERUPASS    335
#define DIGI_HOLYCOW             336
#define DIGI_HOLYPEICESOFCOW     337
#define DIGI_HOLYSHIT            338
#define DIGI_HOLYPEICESOFSHIT    339
#define DIGI_PAYINGATTENTION     340
#define DIGI_EVERYBODYDEAD       341
#define DIGI_KUNGFU              342
#define DIGI_HOWYOULIKEMOVE      343
#define DIGI_NOMESSWITHWANG      344
#define DIGI_RAWREVENGE          345
#define DIGI_YOULOOKSTUPID       346
#define DIGI_TINYDICK            347
#define DIGI_NOTOURNAMENT        348
#define DIGI_WHOWANTSWANG        349
#define DIGI_MOVELIKEYAK         350
#define DIGI_ALLINREFLEXES       351
#define DIGI_EVADEFOREVER        352
#define DIGI_MRFLY               353
#define DIGI_SHISEISI            354
#define DIGI_LIKEFIREWORKS       355
#define DIGI_LIKEHIROSHIMA       356
#define DIGI_LIKENAGASAKI        357
#define DIGI_LIKEPEARL           358
#define DIGI_IAMSHADOW           359
#define DIGI_ILIKENUKES          360
#define DIGI_ILIKESWORD          361
#define DIGI_ILIKESHURIKEN       362
#define DIGI_BADLUCK             363
#define DIGI_NOMOVIEMRCHAN       364
#define DIGI_REALLIFEMRCHAN      365
#define DIGI_NOLIKEMUSIC         366
#define DIGI_NODIFFERENCE        367
#define DIGI_NOFEAR              368
#define DIGI_NOPAIN              369
#define DIGI_NOREPAIRMAN         370
#define DIGI_SONOFABITCH         371
#define DIGI_PAINFORWEAK         372
#define DIGI_GOSPEEDY            373
#define DIGI_GETTINGSTIFF        374
#define DIGI_TOMBRAIDER          375
#define DIGI_STICKYGOTU1         376
#define DIGI_STICKYGOTU2         377
#define DIGI_STICKYGOTU3         378
#define DIGI_STICKYGOTU4         379
#define DIGI_SWORDGOTU1          380
#define DIGI_SWORDGOTU2          381
#define DIGI_SWORDGOTU3          382
#define DIGI_HURTBAD1            383
#define DIGI_HURTBAD2            384
#define DIGI_HURTBAD3            385
#define DIGI_HURTBAD4            386
#define DIGI_HURTBAD5            387
                         
#define DIGI_TOILETGIRLSCREAM    388  
#define DIGI_TOILETGIRLALERT     389
#define DIGI_TOILETGIRLAMBIENT   390
#define DIGI_TOILETGIRLPAIN      391
#define DIGI_TOILETGIRLTAUNT1    392
#define DIGI_TOILETGIRLTAUNT2    393
                         
#define DIGI_SUMOFART            394  
                         
#define DIGI_GIBS1               395  
#define DIGI_GIBS2               396
                         
#define DIGI_BIRDS1              397  
#define DIGI_BIRDS2              398
#define DIGI_TOILET              399  
#define DIGI_FORKLIFTIDLE        400  
#define DIGI_FORKLIFTRUN         401
#define DIGI_TOYCAR              402
#define DIGI_UZIMATIC            403
#define DIGI_COMPUTERPOWER       404
#define DIGI_GENERATORON         405
#define DIGI_GENERATORRUN        406
#define DIGI_BIGDRILL            407
#define DIGI_FLUORLIGHT          408
#define DIGI_AMOEBA              409
#define DIGI_BODYFALL2           410
#define DIGI_GIBS3               411
#define DIGI_NINJACHOKE          412
                         
#define DIGI_TRAIN3              413
#define DIGI_TRAINR02            414
#define DIGI_TRAIN8              415
#define DIGI_TRASHLID            416
                         
#define DIGI_GETMEDKIT           417  
#define DIGI_AHH                 418
                         
#define DIGI_PALARM              419  
#define DIGI_PFLIP               420
#define DIGI_PROLL1              421
#define DIGI_PROLL2              422
#define DIGI_PROLL3              423
                         
#define DIGI_BUNNYATTACK         424  
#define DIGI_BUNNYDIE1           425
#define DIGI_BUNNYDIE2           426
#define DIGI_BUNNYDIE3           427
#define DIGI_BUNNYAMBIENT        428
                         
#define DIGI_STONESLIDE          429
#define DIGI_NINJAINHALF         430
#define DIGI_RIPPER2CHEST        431
                         
#define DIGI_WHIPME              432  
#define DIGI_ENDLEV              433
#define DIGI_MDALARM             434  
                         
#define DIGI_BREAKMETAL          435  
#define DIGI_BREAKDEBRIS         436
#define DIGI_BREAKMARBELS        437
                         
#define DIGI_BANZAI              438  
#define DIGI_HAHA1               439
#define DIGI_HAHA2               440
#define DIGI_HAHA3               441
                         
#define DIGI_ITEM_SPAWN          442  
                         
#define DIGI_NOREPAIRMAN2        443  
#define DIGI_NOPOWER             444
#define DIGI_DOUBLEUZI           445
#define DIGI_NOTORDBUNNY         446  
#define DIGI_CANBEONLYONE        447
#define DIGI_MIRROR1             448
#define DIGI_MIRROR2             449
#define DIGI_HITTINGWALLS        450
#define DIGI_GOTRAILGUN          451
#define DIGI_RABBITHUMP1         452
#define DIGI_RABBITHUMP2         453
#define DIGI_RABBITHUMP3         454
#define DIGI_RABBITHUMP4         455
#define DIGI_FAGRABBIT1          456  
#define DIGI_FAGRABBIT2          457  
#define DIGI_FAGRABBIT3          458  
#define DIGI_STINKLIKEBABBOON    459
#define DIGI_WHATYOUEATBABY      460
#define DIGI_WHATDIEDUPTHERE     461
#define DIGI_YOUGOPOOPOO         462
#define DIGI_PULLMYFINGER        463
#define DIGI_SOAPYOUGOOD         464
#define DIGI_WASHWANG            465
#define DIGI_DROPSOAP            466
#define DIGI_REALTITS            467
#define DIGI_MSTRLEEP            468
#define DIGI_SEEKLEEPADVICE      469
#define DIGI_AVENGELEEPDEATH     470
#define DIGI_LEEPGHOST           471
                         
#define DIGI_DOOR1               472  
#define DIGI_DOOR2               473
#define DIGI_DOOR3               474
                         
#define DIGI_FLAGWAVE            475  
                         
#define DIGI_SURFACE             476
#define DIGI_GASHURT             477
#define DIGI_BONUS_GRAB          478
                         
#define DIGI_ANIMECRY            479  
#define DIGI_ANIMESING1          480
#define DIGI_ANIMEMAD1           481
#define DIGI_ANIMESING2          482
#define DIGI_ANIMEMAD2           483
                         
#define DIGI_PLAYER_TELEPORT     484  
#define DIGI_INTRO_SLASH         485
                         
#define DIGI_WARNING             486
#define DIGI_INTRO_WHIRL         487
                         
#define DIGI_TOILETGIRLFART1     488  
#define DIGI_TOILETGIRLFART2     489
#define DIGI_TOILETGIRLFART3     490
                         
#define DIGI_WINDCHIMES          491  
                         
#define DIGI_MADATCARPET         492  
#define DIGI_JUMPONCARPET        493
#define DIGI_USEBROKENVEHICLE    494
#define DIGI_STEPONCALTROPS      495
#define DIGI_WANGSEESERP         496  
#define DIGI_SERPTAUNTWANG       497
#define DIGI_WANGTAUNTSERP1      498  
#define DIGI_WANGTAUNTSERP2      499  
#define DIGI_WANGORDER1          500  
#define DIGI_WANGORDER2          501  
#define DIGI_WANGDROWNING        502
                         
#define DIGI_ZILLAREGARDS        503
#define DIGI_PMESSAGE            504
                         
#define DIGI_SHAREND_UGLY1       505  
#define DIGI_SHAREND_UGLY2       506  
#define DIGI_SHAREND_TELEPORT    507  
                         
#define DIGI_HOTHEADSWITCH       508  
#define DIGI_BOATCREAK           509  
#define DIGI_BOATRUN2            510
#define DIGI_BOATIDLE            511
#define DIGI_SHIPBELL            512
#define DIGI_FOGHORN             513
                         
#define DIGI_CANNON              514  
                         
#define DIGI_JG41001             515  
#define DIGI_JG41012             516  
#define DIGI_JG41018             517  
#define DIGI_JG41028             518  
#define DIGI_JG41048             519  
#define DIGI_JG41052             520  
#define DIGI_JG41058             521  
#define DIGI_JG41060             522  
#define DIGI_JG41075             523  
#define DIGI_JG42004             524  
#define DIGI_JG42019             525  
#define DIGI_JG42021             526  
#define DIGI_JG42028             527  
#define DIGI_JG42033             528  
#define DIGI_JG42034             529  
#define DIGI_JG42050             530  
#define DIGI_JG42056             531  
#define DIGI_JG42061             532  
#define DIGI_JG43004             533  
#define DIGI_JG43015             534  
#define DIGI_JG43019             535  
                         
#define DIGI_JG43021             536  
#define DIGI_JG44011             537  
#define DIGI_JG44014             538  
#define DIGI_JG44027             539  
#define DIGI_JG44038             540  
#define DIGI_JG44039             541  
#define DIGI_JG44048             542  
#define DIGI_JG44052             543  
#define DIGI_JG45014             544  
#define DIGI_JG44068             545  
#define DIGI_JG45010             546  
#define DIGI_JG45018             547  
#define DIGI_JG45030             548  
#define DIGI_JG45033             549  
#define DIGI_JG45043             550  
#define DIGI_JG45053             551  
#define DIGI_JG45067             552  
#define DIGI_JG46005             553  
#define DIGI_JG46010             554  

#define DIGI_LANI049             555  
#define DIGI_LANI051             556
#define DIGI_LANI052             557
#define DIGI_LANI054             558

#define DIGI_LANI060             559  
#define DIGI_LANI063             560
#define DIGI_LANI065             561
#define DIGI_LANI066             562

#define DIGI_LANI073             563  
#define DIGI_LANI075             564
#define DIGI_LANI077             565
#define DIGI_LANI079             566

#define DIGI_LANI089             567  
#define DIGI_LANI091             568
#define DIGI_LANI093             569
#define DIGI_LANI095             570

#define DIGI_VENTWALK            571  
#define DIGI_CARWALK             572  
#define DIGI_JETSOAR             573  
#define DIGI_VACUUM              574  

#define DIGI_GIRLNINJAALERTT     575  
#define DIGI_GIRLNINJASCREAM     576
#define DIGI_GIRLNINJAALERT      577

#define DIGI_PRUNECACKLE         578  
#define DIGI_PRUNECACKLE2        579
#define DIGI_PRUNECACKLE3        580

#define DIGI_SUMOSTOMP           581  

#define DIGI_VATOR               582  

#define DIGI_JG9009              583  

#define DIGI_Z16004              584  
#define DIGI_Z16012              585
#define DIGI_Z16022              586
#define DIGI_Z16027              587

#define DIGI_JG93030             588  
#define DIGI_JG94002             589  

#define DIGI_Z17010              590  
#define DIGI_Z17052              591
#define DIGI_Z17025              592

#define DIGI_ML25014             593  
#define DIGI_ML250101            594  
#define DIGI_JG9022              595  
#define DIGI_JG9032              596  
#define DIGI_JG9038              597  
#define DIGI_JG9055              598  
#define DIGI_JG9060              599  
#define DIGI_JG92055             600  
#define DIGI_ML25032             601  
#define DIGI_JG92036             602  
#define DIGI_JG92042             603  
#define DIGI_ML26001             604  
#define DIGI_JG93000             605  
#define DIGI_JG93011             606  
#define DIGI_JG93018             607  
#define DIGI_JG93023             608  
#define DIGI_ML26008             609  
#define DIGI_ML26011             610  
#define DIGI_JG94007             611  
#define DIGI_JG94024             612  
#define DIGI_JG94039             613  
#define DIGI_JG95012             614  