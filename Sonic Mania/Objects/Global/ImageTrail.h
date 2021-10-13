#ifndef OBJ_IMAGETRAIL_H
#define OBJ_IMAGETRAIL_H

#include "SonicMania.h"

//Extras lol
#define ImageTrail_TrackCount (7)

// Object Class
typedef struct {
    RSDK_OBJECT
} ObjectImageTrail;

// Entity Class
typedef struct {
    RSDK_ENTITY
    Entity *player;
    int playerObjID;
    Vector2 currentPos;
    Vector2 statePos[ImageTrail_TrackCount];
    int currentRotation;
    int stateRotation[ImageTrail_TrackCount];
    uint8 currentDirection;
    uint8 stateDirection[ImageTrail_TrackCount];
    uint8 currentVisible;
    uint8 stateVisible[ImageTrail_TrackCount];
    int currentScale;
    int stateScale[ImageTrail_TrackCount];
    Animator currentAnimData;
    Animator stateAnim[ImageTrail_TrackCount];
    int baseAlpha;
    int fadeoutTimer;
} EntityImageTrail;

// Object Struct
extern ObjectImageTrail *ImageTrail;

// Standard Entity Events
void ImageTrail_Update(void);
void ImageTrail_LateUpdate(void);
void ImageTrail_StaticUpdate(void);
void ImageTrail_Draw(void);
void ImageTrail_Create(void* data);
void ImageTrail_StageLoad(void);
void ImageTrail_EditorDraw(void);
void ImageTrail_EditorLoad(void);
void ImageTrail_Serialize(void);

// Extra Entity Functions


#endif //!OBJ_IMAGETRAIL_H
