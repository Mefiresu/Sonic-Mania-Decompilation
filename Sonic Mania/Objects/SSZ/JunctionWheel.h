#ifndef OBJ_JUNCTIONWHEEL_H
#define OBJ_JUNCTIONWHEEL_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    Hitbox hitbox1;
    Hitbox hitbox2;
    Hitbox hitbox3;
    Hitbox hitbox4;
    Hitbox hitbox5;
    Hitbox hitbox6;
    uint16 aniFrames;
} ObjectJunctionWheel;

// Entity Class
typedef struct {
    RSDK_ENTITY
    Animator animator1;
    Animator animator2;
    uint8 field_88;
} EntityJunctionWheel;

// Object Struct
extern ObjectJunctionWheel *JunctionWheel;

// Standard Entity Events
void JunctionWheel_Update(void);
void JunctionWheel_LateUpdate(void);
void JunctionWheel_StaticUpdate(void);
void JunctionWheel_Draw(void);
void JunctionWheel_Create(void* data);
void JunctionWheel_StageLoad(void);
void JunctionWheel_EditorDraw(void);
void JunctionWheel_EditorLoad(void);
void JunctionWheel_Serialize(void);

// Extra Entity Functions


#endif //!OBJ_JUNCTIONWHEEL_H
