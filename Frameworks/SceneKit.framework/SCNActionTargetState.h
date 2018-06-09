/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionTargetState : NSObject {
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  euler;
    float  opacity;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  position;
    struct SCNVector4 { 
        float x; 
        float y; 
        float z; 
        float w; 
    }  rotation;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  scale;
    bool  usesEuler;
}

@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } euler;
@property (nonatomic) float opacity;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } position;
@property (nonatomic) struct SCNVector4 { float x1; float x2; float x3; float x4; } rotation;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } scale;
@property (nonatomic) bool usesEuler;

- (struct SCNVector3 { float x1; float x2; float x3; })euler;
- (float)opacity;
- (struct SCNVector3 { float x1; float x2; float x3; })position;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })rotation;
- (struct SCNVector3 { float x1; float x2; float x3; })scale;
- (void)setEuler:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setOpacity:(float)arg1;
- (void)setPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setRotation:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1;
- (void)setScale:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setUsesEuler:(bool)arg1;
- (bool)usesEuler;

@end
