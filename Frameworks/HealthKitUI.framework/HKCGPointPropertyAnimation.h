/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKCGPointPropertyAnimation : HKAnimatableObjectPropertyAnimation {
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentValue;
    struct CGPoint { 
        double x; 
        double y; 
    }  _endValue;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startValue;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } currentValue;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } endValue;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } startValue;

+ (id)animationWithEndingCGPointValue:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2 timingFunction:(id)arg3 completion:(id /* block */)arg4;

- (id)_currentValue;
- (id)_endValue;
- (void)_setCurrentValue:(id)arg1;
- (void)_setEndValue:(id)arg1;
- (void)_setStartValue:(id)arg1;
- (id)_startValue;
- (void)_updateWithProgress:(float)arg1;
- (struct CGPoint { double x1; double x2; })currentValue;
- (struct CGPoint { double x1; double x2; })endValue;
- (struct CGPoint { double x1; double x2; })startValue;
- (id)valueByAddingCurrentValueToValue:(id)arg1;

@end
