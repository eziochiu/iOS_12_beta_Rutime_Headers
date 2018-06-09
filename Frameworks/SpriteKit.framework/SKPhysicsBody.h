/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsBody : NSObject <NSCopying, NSSecureCoding> {
    bool  _affectedByGravity;
    bool  _allowsRotation;
    double  _angularDamping;
    double  _angularVelocity;
    double  _area;
    unsigned int  _categoryBitMask;
    double  _charge;
    unsigned int  _collisionBitMask;
    unsigned int  _contactTestBitMask;
    double  _density;
    bool  _dynamic;
    unsigned int  _fieldBitMask;
    double  _friction;
    NSArray * _joints;
    double  _linearDamping;
    double  _mass;
    SKNode * _node;
    bool  _pinned;
    bool  _resting;
    double  _restitution;
    bool  _usesPreciseCollisionDetection;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _velocity;
}

@property (nonatomic) bool affectedByGravity;
@property (nonatomic) bool allowsRotation;
@property (nonatomic) double angularDamping;
@property (nonatomic) double angularVelocity;
@property (nonatomic, readonly) double area;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) double charge;
@property (nonatomic) unsigned int collisionBitMask;
@property (nonatomic) unsigned int contactTestBitMask;
@property (nonatomic) double density;
@property (getter=isDynamic, nonatomic) bool dynamic;
@property (nonatomic) unsigned int fieldBitMask;
@property (nonatomic) double friction;
@property (nonatomic, readonly) NSArray *joints;
@property (nonatomic) double linearDamping;
@property (nonatomic) double mass;
@property (nonatomic, readonly) SKNode *node;
@property (nonatomic) bool pinned;
@property (getter=isResting, nonatomic) bool resting;
@property (nonatomic) double restitution;
@property (nonatomic) bool usesPreciseCollisionDetection;
@property (nonatomic) struct CGVector { double x1; double x2; } velocity;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)bodyWithBodies:(id)arg1;
+ (id)bodyWithCircleOfRadius:(double)arg1;
+ (id)bodyWithCircleOfRadius:(double)arg1 center:(struct CGPoint { double x1; double x2; })arg2;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithEdgeLoopFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)bodyWithPolygonFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x1; double x2; })arg1 center:(struct CGPoint { double x1; double x2; })arg2;
+ (id)bodyWithTexture:(id)arg1 alphaThreshold:(float)arg2 size:(struct CGSize { double x1; double x2; })arg3;
+ (id)bodyWithTexture:(id)arg1 alphaThreshold:(float)arg2 size:(struct CGSize { double x1; double x2; })arg3 accuracy:(float)arg4;
+ (id)bodyWithTexture:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)affectedByGravity;
- (id)allContactedBodies;
- (bool)allowsRotation;
- (double)angularDamping;
- (double)angularVelocity;
- (void)applyAngularImpulse:(double)arg1;
- (void)applyForce:(struct CGVector { double x1; double x2; })arg1;
- (void)applyForce:(struct CGVector { double x1; double x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)applyImpulse:(struct CGVector { double x1; double x2; })arg1;
- (void)applyImpulse:(struct CGVector { double x1; double x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)applyTorque:(double)arg1;
- (double)area;
- (unsigned int)categoryBitMask;
- (double)charge;
- (unsigned int)collisionBitMask;
- (unsigned int)contactTestBitMask;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)density;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)fieldBitMask;
- (double)friction;
- (id)initWithCoder:(id)arg1;
- (bool)isDynamic;
- (bool)isResting;
- (id)joints;
- (double)linearDamping;
- (double)mass;
- (id)node;
- (bool)pinned;
- (double)restitution;
- (void)setAffectedByGravity:(bool)arg1;
- (void)setAllowsRotation:(bool)arg1;
- (void)setAngularDamping:(double)arg1;
- (void)setAngularVelocity:(double)arg1;
- (void)setCategoryBitMask:(unsigned int)arg1;
- (void)setCharge:(double)arg1;
- (void)setCollisionBitMask:(unsigned int)arg1;
- (void)setContactTestBitMask:(unsigned int)arg1;
- (void)setDensity:(double)arg1;
- (void)setDynamic:(bool)arg1;
- (void)setFieldBitMask:(unsigned int)arg1;
- (void)setFriction:(double)arg1;
- (void)setLinearDamping:(double)arg1;
- (void)setMass:(double)arg1;
- (void)setPinned:(bool)arg1;
- (void)setResting:(bool)arg1;
- (void)setRestitution:(double)arg1;
- (void)setUsesPreciseCollisionDetection:(bool)arg1;
- (void)setVelocity:(struct CGVector { double x1; double x2; })arg1;
- (bool)usesPreciseCollisionDetection;
- (struct CGVector { double x1; double x2; })velocity;

@end
