#ifndef OBJ_WOODCHIPPER_H
#define OBJ_WOODCHIPPER_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    uint16 aniFrames;
    Hitbox hitboxStump;
    Hitbox hitboxWood;
    Hitbox hitboxRazor;
    uint16 sfxChipperChips;
    bool32 playingChipSFX;
    uint16 sfxChipperWood;
    bool32 playingWoodSFX;
} ObjectWoodChipper;

// Entity Class
typedef struct {
    RSDK_ENTITY
    StateMachine(state);
    uint16 size;
    int speed;
    int timer;
    Vector2 field_68[3];
    int field_80;
    uint8 activePlayers;
    Animator animator1;
    Animator animator2;
} EntityWoodChipper;

// Object Struct
extern ObjectWoodChipper *WoodChipper;

// Standard Entity Events
void WoodChipper_Update(void);
void WoodChipper_LateUpdate(void);
void WoodChipper_StaticUpdate(void);
void WoodChipper_Draw(void);
void WoodChipper_Create(void* data);
void WoodChipper_StageLoad(void);
void WoodChipper_EditorDraw(void);
void WoodChipper_EditorLoad(void);
void WoodChipper_Serialize(void);

// Extra Entity Functions
void WoodChipper_HandlePlayerCollisions(void);

void WoodChipper_State_Chipper(void);
void WoodChipper_State_Debris(void);

#endif //!OBJ_WOODCHIPPER_H
