#ifndef OBJ_SPINY_H
#define OBJ_SPINY_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    Hitbox hitboxSpiny;
    Hitbox hitboxRange;
    Hitbox hitboxShot;
    uint16 aniFrames;
    uint16 sfxShot;
} ObjectSpiny;

// Entity Class
typedef struct {
    RSDK_ENTITY
    StateMachine(state);
    Animator animator;
    int field_74;
    uint8 type;
    Vector2 startPos;
    uint8 startDir;
    int shotSpeed;
    int timer2;
    int timer;
} EntitySpiny;

// Object Struct
extern ObjectSpiny *Spiny;

// Standard Entity Events
void Spiny_Update(void);
void Spiny_LateUpdate(void);
void Spiny_StaticUpdate(void);
void Spiny_Draw(void);
void Spiny_Create(void* data);
void Spiny_StageLoad(void);
void Spiny_EditorDraw(void);
void Spiny_EditorLoad(void);
void Spiny_Serialize(void);

// Extra Entity Functions
void Spiny_DebugSpawn(void);
void Spiny_DebugDraw(void);

void Spiny_CheckPlayerCollisions(void);
void Spiny_CheckOnScreen(void);

void Spiny_State_Setup(void);
void Spiny_State_Floor(void);
void Spiny_State_Shoot_Floor(void);
void Spiny_State_Wall(void);
void Spiny_State_Shoot_Wall(void);
void Spiny_State_Shot(void);
void Spiny_State_ShotDisappear(void);

#endif //!OBJ_SPINY_H
