/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKAgent3D : GKAgent

@property (nonatomic) void position;
@property (nonatomic) bool rightHanded;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } rotation;
@property (nonatomic, readonly) void velocity;

+ (bool)supportsSecureCoding;

- (void)applyBrakingForce:(float)arg1 deltaTime:(double)arg2;
- (void)applySteeringForce:(void *)arg1 deltaTime:(void *)arg2; // needs 2 arg types, found 1: double
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)position;
- (bool)rightHanded;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })rotation;
- (void)setPosition;
- (void)setRightHanded:(bool)arg1;
- (void)setRotation:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)updateWithDeltaTime:(double)arg1;
- (void)velocity;

@end
