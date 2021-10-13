#ifndef OBJ_PHANTOMEGG_H
#define OBJ_PHANTOMEGG_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    TABLE(int value1[29], { 4,       0,        0, -0x20000, -0x28000, 1,        0, -0x20000, -0x28000, 2,        0, 0x20000, -0x20000, 3,       0,
                            0x28000, -0x20000, 4, 0,        -0x10000, -0x10000, 5, 0,        0x10000,  -0x10000, 6, 0,       -0x8000,  -0x10000 });
    TABLE(int value2[32], { 0, 0, 0, 0, 1, 0, 0, 2, 0, 1, 3, 0, 2, 0, 0, 4, 0, 0, 1, 0, 2, 0, 0, 3, 0, 0, 1, 0, 0, 2, 0, 4 });
    TABLE(int value3[32], { 0, 0, 2, 0, 1, 3, 0, 2, 0, 0, 3, 0, 2, 0, 0, 3, 0, 0, 0, 1, 2, 0, 0, 3, 0, 0, 1, 0, 0, 2, 0, 4 });
    TABLE(int value4[32], { 0, 0, 2, 0, 1, 3, 3, 2, 0, 3, 3, 0, 2, 0, 0, 3, 0, 0, 0, 1, 2, 0, 0, 3, 0, 0, 1, 0, 0, 2, 0, 4 });
    int value5;
    int value6;
    int value7;
    int value8;
    int value9;
    int value10;
    int value11;
    int value12;
    int value13;
    int value14;
    int value15;
    bool32 setupPalette;
    bool32 value17;
    uint16 sfxHit;
    uint16 sfxExplosion2;
    uint16 sfxRocketJet;
    uint16 sfxExplosion3;
    uint16 sfxJump;
    uint16 sfxLand;
    uint16 sfxRepel;
    uint16 sfxShield;
    uint16 sfxShock;
    uint16 sfxSummon;
    uint16 sfxMissile;
    uint16 aniFrames;
    bool32 field_244;
} ObjectPhantomEgg;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityPhantomEgg;

// Object Struct
extern ObjectPhantomEgg *PhantomEgg;

// Standard Entity Events
void PhantomEgg_Update(void);
void PhantomEgg_LateUpdate(void);
void PhantomEgg_StaticUpdate(void);
void PhantomEgg_Draw(void);
void PhantomEgg_Create(void* data);
void PhantomEgg_StageLoad(void);
void PhantomEgg_EditorDraw(void);
void PhantomEgg_EditorLoad(void);
void PhantomEgg_Serialize(void);

// Extra Entity Functions


#endif //!OBJ_PHANTOMEGG_H
