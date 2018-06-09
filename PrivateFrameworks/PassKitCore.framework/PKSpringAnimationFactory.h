/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSpringAnimationFactory : NSObject {
    double  _damping;
    double  _duration;
    double  _mass;
    bool  _needsDurationUpdate;
    double  _stiffness;
    CAMediaTimingFunction * _timing;
    double  _velocity;
}

@property (nonatomic) double damping;
@property (nonatomic, readonly) double duration;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic, retain) CAMediaTimingFunction *timing;
@property (nonatomic) double velocity;

+ (double)defaultDuration;
+ (id)defaultTimingFunction;
+ (id)springAnimationWithKeyPath:(id)arg1;
+ (id)springAnimationWithKeyPath:(id)arg1 velocity:(double)arg2;

- (void).cxx_destruct;
- (id)_springAnimationWithKeyPath:(id)arg1;
- (id)_timingFunctionForAnimation;
- (void)_updateDurationIfNecessary;
- (double)damping;
- (void)dealloc;
- (double)duration;
- (id)init;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 timing:(id)arg5;
- (id)initWithVelocity:(double)arg1;
- (id)initWithVelocity:(double)arg1 timing:(id)arg2;
- (double)mass;
- (void)setDamping:(double)arg1;
- (void)setMass:(double)arg1;
- (void)setStiffness:(double)arg1;
- (void)setTiming:(id)arg1;
- (void)setVelocity:(double)arg1;
- (id)springAnimationWithKeyPath:(id)arg1;
- (double)stiffness;
- (id)timing;
- (double)velocity;

@end
