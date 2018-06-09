/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSMutableSpringAnimationSettings : BSSpringAnimationSettings

@property (nonatomic) double damping;
@property (nonatomic) double delay;
@property (nonatomic) double epsilon;
@property (nonatomic) double frameInterval;
@property (nonatomic) double initialVelocity;
@property (nonatomic) double mass;
@property (nonatomic) float speed;
@property (nonatomic) double stiffness;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDamping:(double)arg1;
- (void)setDelay:(double)arg1;
- (void)setEpsilon:(double)arg1;
- (void)setFrameInterval:(double)arg1;
- (void)setInitialVelocity:(double)arg1;
- (void)setMass:(double)arg1;
- (void)setSpeed:(float)arg1;
- (void)setStiffness:(double)arg1;
- (void)setTimingFunction:(id)arg1;

@end
