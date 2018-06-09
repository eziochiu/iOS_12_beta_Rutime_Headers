/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNAccelerationConstraint : SCNConstraint {
    float  _damping;
    float  _decelerationDistance;
    float  _maximumLinearAcceleration;
    float  _maximumLinearVelocity;
}

@property (nonatomic) double damping;
@property (nonatomic) double decelerationDistance;
@property (nonatomic) double maximumLinearAcceleration;
@property (nonatomic) double maximumLinearVelocity;

+ (id)accelerationConstraint;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)damping;
- (double)decelerationDistance;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)maximumLinearAcceleration;
- (double)maximumLinearVelocity;
- (void)setDamping:(double)arg1;
- (void)setDecelerationDistance:(double)arg1;
- (void)setMaximumLinearAcceleration:(double)arg1;
- (void)setMaximumLinearVelocity:(double)arg1;

@end
