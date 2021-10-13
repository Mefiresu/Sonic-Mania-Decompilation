#ifndef OBJ_ENCOREGOODEND_H
#define OBJ_ENCOREGOODEND_H

#include "SonicMania.h"

#if RETRO_USE_PLUS
// Object Class
typedef struct {
    RSDK_OBJECT
    int field_4;
    uint16 field_8;
    uint16 sfxSnap;
    int field_C;
    EntityDecoration *decorations[16];
} ObjectEncoreGoodEnd;

// Entity Class
typedef struct {
    RSDK_ENTITY
    Vector2 size;
    bool32 activated;
    int field_64;
    int field_68;
    int field_6C;
    int field_70;
    int field_74;
    int field_78;
    Hitbox hitbox;
    int field_84;
} EntityEncoreGoodEnd;

// Object Struct
extern ObjectEncoreGoodEnd *EncoreGoodEnd;

// Standard Entity Events
void EncoreGoodEnd_Update(void);
void EncoreGoodEnd_LateUpdate(void);
void EncoreGoodEnd_StaticUpdate(void);
void EncoreGoodEnd_Draw(void);
void EncoreGoodEnd_Create(void* data);
void EncoreGoodEnd_StageLoad(void);
void EncoreGoodEnd_EditorDraw(void);
void EncoreGoodEnd_EditorLoad(void);
void EncoreGoodEnd_Serialize(void);

// Extra Entity Functions
void EncoreGoodEnd_SetupDecorations(void);

void EncoreGoodEnd_Unknown2(int id);
void EncoreGoodEnd_Unknown9(void);
void EncoreGoodEnd_Unknown10(void);
void EncoreGoodEnd_Unknown11(void);

bool32 EncoreGoodEnd_CutsceneState_Unknown1(EntityCutsceneSeq *host);
bool32 EncoreGoodEnd_CutsceneState_Unknown2(EntityCutsceneSeq *host);
bool32 EncoreGoodEnd_CutsceneState_Unknown3(EntityCutsceneSeq *host);
bool32 EncoreGoodEnd_CutsceneState_Unknown4(EntityCutsceneSeq *host);
bool32 EncoreGoodEnd_CutsceneState_Unknown5(EntityCutsceneSeq *host);
bool32 EncoreGoodEnd_CutsceneState_Unknown6(EntityCutsceneSeq *host);

void EncoreGoodEnd_SkipCB(void);

#endif

#endif //!OBJ_ENCOREGOODEND_H
