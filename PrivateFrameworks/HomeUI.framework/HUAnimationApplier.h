/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAnimationApplier : HUApplier {
    HUAnimationSettings * _animationSettings;
    bool  _applyDynamically;
    CADisplayLink * _displayLink;
    NSMutableSet * _effectiveProgressObservers;
    NSMutableSet * _relativeAnimations;
    double  _startTime;
}

@property (nonatomic, copy) HUAnimationSettings *animationSettings;
@property (nonatomic) bool applyDynamically;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, readonly) double effectiveProgress;
@property (nonatomic, readonly) NSMutableSet *effectiveProgressObservers;
@property (nonatomic, readonly) NSMutableSet *relativeAnimations;
@property (nonatomic) double startTime;

+ (id)_applierWithAnimationSettings:(id)arg1 applyDynamically:(bool)arg2;
+ (id)_applyAnimationSettings:(id)arg1 withApplier:(id /* block */)arg2 completion:(id /* block */)arg3 applyDynamically:(bool)arg4;
+ (id)applyAnimationSettings:(id)arg1 withDynamicApplier:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (id)applyAnimationSettings:(id)arg1 withStaticApplier:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (id)dynamicApplierWithAnimationSettings:(id)arg1;
+ (id)staticApplierWithAnimationSettings:(id)arg1;

- (void).cxx_destruct;
- (void)_displayLinkTick;
- (double)_effectiveDuration;
- (void)_invalidateDisplayLinkIfNecessary;
- (double)_remainingTimeIntervalForEffectiveProgress:(double)arg1;
- (void)_startEffectiveProgressTimerForObserver:(id)arg1;
- (void)_updateDynamicProgress:(double)arg1;
- (bool)addAlongsideAnimationApplier:(id)arg1 relativeStart:(double)arg2 relativeDuration:(double)arg3;
- (id)animationSettings;
- (bool)applyDynamically;
- (bool)cancel;
- (bool)complete:(bool)arg1;
- (id)displayLink;
- (double)effectiveProgress;
- (id)effectiveProgressObservers;
- (id)init;
- (id)initWithAnimationSettings:(id)arg1;
- (bool)notifyUponEffectiveProgress:(double)arg1 withBlock:(id /* block */)arg2;
- (id)relativeAnimations;
- (void)setAnimationSettings:(id)arg1;
- (void)setApplyDynamically:(bool)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setStartTime:(double)arg1;
- (bool)start;
- (double)startTime;

@end
