/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAttachmentBehavior : UIDynamicBehavior {
    PKExtendedPhysicsBody * _anchorBody;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPointA;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPointB;
    long long  _attachedBehaviorType;
    struct { 
        double minimum; 
        double maximum; 
    }  _attachmentRange;
    unsigned long long  _attachmentType;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _axis;
    double  _damping;
    double  _frequency;
    double  _frictionTorque;
    PKPhysicsJoint * _joint;
    double  _length;
    struct { 
        unsigned int dampingSet : 1; 
        unsigned int frequencySet : 1; 
        unsigned int lengthSet : 1; 
        unsigned int rangeSet : 1; 
        unsigned int frictionTorqueSet : 1; 
        unsigned int isRevolute : 1; 
    }  _stateFlags;
    long long  _type;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic, readonly) long long attachedBehaviorType;
@property (nonatomic) struct { double x1; double x2; } attachmentRange;
@property (nonatomic) double damping;
@property (nonatomic) double frequency;
@property (nonatomic) double frictionTorque;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic) double length;

+ (bool)_isPrimitiveBehavior;
+ (id)fixedAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(struct CGPoint { double x1; double x2; })arg3;
+ (id)limitAttachmentWithItem:(id)arg1 offsetFromCenter:(struct UIOffset { double x1; double x2; })arg2 attachedToItem:(id)arg3 offsetFromCenter:(struct UIOffset { double x1; double x2; })arg4;
+ (id)pinAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(struct CGPoint { double x1; double x2; })arg3;
+ (id)slidingAttachmentWithItem:(id)arg1 attachedToItem:(id)arg2 attachmentAnchor:(struct CGPoint { double x1; double x2; })arg3 axisOfTranslation:(struct CGVector { double x1; double x2; })arg4;
+ (id)slidingAttachmentWithItem:(id)arg1 attachmentAnchor:(struct CGPoint { double x1; double x2; })arg2 axisOfTranslation:(struct CGVector { double x1; double x2; })arg3;

- (void).cxx_destruct;
- (void)_associate;
- (void)_changedParameter;
- (void)_dissociate;
- (void)_reevaluateJoint;
- (void)_updateJointWithRange:(struct { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (long long)attachedBehaviorType;
- (struct { double x1; double x2; })attachmentRange;
- (double)damping;
- (id)description;
- (double)frequency;
- (double)frictionTorque;
- (id)init;
- (id)initWithItem:(id)arg1 attachedToAnchor:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithItem:(id)arg1 attachedToItem:(id)arg2;
- (id)initWithItem:(id)arg1 offsetFromCenter:(struct UIOffset { double x1; double x2; })arg2 attachedToAnchor:(struct CGPoint { double x1; double x2; })arg3;
- (id)initWithItem:(id)arg1 offsetFromCenter:(struct UIOffset { double x1; double x2; })arg2 attachedToItem:(id)arg3 offsetFromCenter:(struct UIOffset { double x1; double x2; })arg4;
- (id)initWithItem:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2 attachedToAnchor:(struct CGPoint { double x1; double x2; })arg3;
- (id)initWithItem:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2 attachedToItem:(id)arg3 point:(struct CGPoint { double x1; double x2; })arg4;
- (id)items;
- (double)length;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAttachmentRange:(struct { double x1; double x2; })arg1;
- (void)setDamping:(double)arg1;
- (void)setFrequency:(double)arg1;
- (void)setFrictionTorque:(double)arg1;
- (void)setLength:(double)arg1;
- (long long)type;

@end
