/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKFieldNode : SKNode {
    float  _animationSpeed;
    bool  _exclusive;
    PKPhysicsField * _field;
    SKRegion * _region;
    float  _smoothness;
    SKTexture * _texture;
}

@property (nonatomic) float animationSpeed;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) void direction;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isExclusive, nonatomic) bool exclusive;
@property (nonatomic) float falloff;
@property (nonatomic) float minimumRadius;
@property (nonatomic, retain) SKRegion *region;
@property (nonatomic) float smoothness;
@property (nonatomic) float strength;
@property (nonatomic, retain) SKTexture *texture;

+ (id)customFieldWithEvaluationBlock:(id /* block */)arg1;
+ (id)dragField;
+ (id)electricField;
+ (id)linearGravityFieldWithVector;
+ (id)magneticField;
+ (id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)radialGravityField;
+ (id)springField;
+ (bool)supportsSecureCoding;
+ (id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)velocityFieldWithTexture:(id)arg1;
+ (id)velocityFieldWithVector;
+ (id)vortexField;

- (void).cxx_destruct;
- (id)_descriptionClassName;
- (float)animationSpeed;
- (unsigned int)categoryBitMask;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)direction;
- (void)encodeWithCoder:(id)arg1;
- (float)falloff;
- (id)field;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 field:(id)arg2;
- (bool)isEnabled;
- (bool)isEqualToNode:(id)arg1;
- (bool)isExclusive;
- (float)minimumRadius;
- (id)region;
- (void)setAnimationSpeed:(float)arg1;
- (void)setCategoryBitMask:(unsigned int)arg1;
- (void)setDirection;
- (void)setEnabled:(bool)arg1;
- (void)setExclusive:(bool)arg1;
- (void)setFalloff:(float)arg1;
- (void)setMinimumRadius:(float)arg1;
- (void)setPhysicsField:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setSmoothness:(float)arg1;
- (void)setStrength:(float)arg1;
- (void)setTexture:(id)arg1;
- (float)smoothness;
- (float)strength;
- (id)texture;

@end
