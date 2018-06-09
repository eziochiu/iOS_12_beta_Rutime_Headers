/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKAnimatableObjectPropertyAnimation : NSObject {
    id /* block */  _animationTimingFunction;
    id /* block */  _completionHandler;
    double  _currentAnimationTime;
    double  _duration;
}

@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, readonly) double duration;

+ (id)animationWithDuration:(double)arg1 timingFunction:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (id /* block */)linearTimingFunction;
+ (id /* block */)timingFunctionForMediaTimingFunction:(id)arg1;

- (void).cxx_destruct;
- (id)_currentValue;
- (id)_endValue;
- (void)_setCurrentValue:(id)arg1;
- (void)_setEndValue:(id)arg1;
- (void)_setStartValue:(id)arg1;
- (id)_startValue;
- (void)_updateWithProgress:(float)arg1;
- (void)callAndReleaseCompletionHandler;
- (id /* block */)completionHandler;
- (double)duration;
- (bool)isFinishedAnimating;
- (void)update:(double)arg1;
- (id)valueByAddingCurrentValueToValue:(id)arg1;

@end
