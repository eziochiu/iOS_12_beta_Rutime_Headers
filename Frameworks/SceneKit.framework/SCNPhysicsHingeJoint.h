/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsHingeJoint : SCNPhysicsBehavior {
    struct btHingeConstraint { int (**x1)(); int x2; int x3; union { int x_4_1_1; void *x_4_1_2; } x4; float x5; bool x6; bool x7; int x8; struct btRigidBody {} *x9; struct btRigidBody {} *x10; float x11; float x12; struct btJointFeedback {} *x13; struct btJacobianEntry { struct btVector3 { union { float x_1_3_1[4]; } x_1_2_1; } x_14_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_14_1_2; struct btVector3 { union { float x_1_3_1[4]; } x_3_2_1; } x_14_1_3; struct btVector3 { union { float x_1_3_1[4]; } x_4_2_1; } x_14_1_4; struct btVector3 { union { float x_1_3_1[4]; } x_5_2_1; } x_14_1_5; float x_14_1_6; } x14[3]; struct btJacobianEntry { struct btVector3 { union { float x_1_3_1[4]; } x_1_2_1; } x_15_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_15_1_2; struct btVector3 { union { float x_1_3_1[4]; } x_3_2_1; } x_15_1_3; struct btVector3 { union { float x_1_3_1[4]; } x_4_2_1; } x_15_1_4; struct btVector3 { union { float x_1_3_1[4]; } x_5_2_1; } x_15_1_5; float x_15_1_6; } x15[3]; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_16_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_16_1_2; } x16; } * _constraint;
    struct { 
        SCNPhysicsBody *bodyA; 
        SCNPhysicsBody *bodyB; 
        struct SCNVector3 { 
            float x; 
            float y; 
            float z; 
        } anchorA; 
        struct SCNVector3 { 
            float x; 
            float y; 
            float z; 
        } anchorB; 
        struct SCNVector3 { 
            float x; 
            float y; 
            float z; 
        } axisA; 
        struct SCNVector3 { 
            float x; 
            float y; 
            float z; 
        } axisB; 
    }  _definition;
    SCNPhysicsWorld * _world;
}

@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } anchorA;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } anchorB;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } axisA;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } axisB;
@property (nonatomic, readonly) SCNPhysicsBody *bodyA;
@property (nonatomic, readonly) SCNPhysicsBody *bodyB;

+ (id)jointWithBody:(id)arg1 axis:(struct SCNVector3 { float x1; float x2; float x3; })arg2 anchor:(struct SCNVector3 { float x1; float x2; float x3; })arg3;
+ (id)jointWithBodyA:(id)arg1 axisA:(struct SCNVector3 { float x1; float x2; float x3; })arg2 anchorA:(struct SCNVector3 { float x1; float x2; float x3; })arg3 bodyB:(id)arg4 axisB:(struct SCNVector3 { float x1; float x2; float x3; })arg5 anchorB:(struct SCNVector3 { float x1; float x2; float x3; })arg6;
+ (bool)supportsSecureCoding;

- (void)_addToPhysicsWorld:(id)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })anchorA;
- (struct SCNVector3 { float x1; float x2; float x3; })anchorB;
- (struct SCNVector3 { float x1; float x2; float x3; })axisA;
- (struct SCNVector3 { float x1; float x2; float x3; })axisB;
- (id)bodyA;
- (id)bodyB;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBody:(id)arg1 axis:(struct SCNVector3 { float x1; float x2; float x3; })arg2 anchor:(struct SCNVector3 { float x1; float x2; float x3; })arg3;
- (id)initWithBodyA:(id)arg1 axisA:(struct SCNVector3 { float x1; float x2; float x3; })arg2 anchorA:(struct SCNVector3 { float x1; float x2; float x3; })arg3 bodyB:(id)arg4 axisB:(struct SCNVector3 { float x1; float x2; float x3; })arg5 anchorB:(struct SCNVector3 { float x1; float x2; float x3; })arg6;
- (id)initWithCoder:(id)arg1;
- (void)setAnchorA:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setAnchorB:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setAxisA:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setAxisB:(struct SCNVector3 { float x1; float x2; float x3; })arg1;

@end
