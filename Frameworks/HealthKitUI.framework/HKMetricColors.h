/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKMetricColors : NSObject {
    UIColor * _adjustmentButtonBackgroundColor;
    UIColor * _buttonDisabledTextColor;
    UIColor * _buttonTextColor;
    UIColor * _gradientDarkColor;
    UIColor * _gradientLightColor;
    UIColor * _nonGradientTextColor;
    UIColor * _valueDisplayColor;
    NSString * _workoutRingColorIdentifier;
}

@property (nonatomic, retain) UIColor *adjustmentButtonBackgroundColor;
@property (nonatomic, retain) UIColor *buttonDisabledTextColor;
@property (nonatomic, retain) UIColor *buttonTextColor;
@property (nonatomic, retain) UIColor *gradientDarkColor;
@property (nonatomic, retain) UIColor *gradientLightColor;
@property (nonatomic, retain) UIColor *nonGradientTextColor;
@property (nonatomic, retain) UIColor *valueDisplayColor;
@property (nonatomic, retain) NSString *workoutRingColorIdentifier;

+ (id)briskColors;
+ (id)clockColors;
+ (id)distanceColors;
+ (id)elapsedTimeColors;
+ (id)energyColors;
+ (id)heartRateColors;
+ (id)keyColors;
+ (id)metricColorsForGoalTypeIdentifier:(unsigned long long)arg1;
+ (struct CGGradient { }*)newGradientForStartColor:(id)arg1 endColor:(id)arg2;
+ (id)noMetricColors;
+ (id)paceColors;
+ (id)sedentaryColors;
+ (id)systemGrayTextColor;

- (void).cxx_destruct;
- (id)adjustmentButtonBackgroundColor;
- (id)buttonDisabledTextColor;
- (id)buttonTextColor;
- (id)gradientDarkColor;
- (id)gradientLightColor;
- (id)nonGradientTextColor;
- (void)setAdjustmentButtonBackgroundColor:(id)arg1;
- (void)setButtonDisabledTextColor:(id)arg1;
- (void)setButtonTextColor:(id)arg1;
- (void)setGradientDarkColor:(id)arg1;
- (void)setGradientLightColor:(id)arg1;
- (void)setNonGradientTextColor:(id)arg1;
- (void)setValueDisplayColor:(id)arg1;
- (void)setWorkoutRingColorIdentifier:(id)arg1;
- (id)valueDisplayColor;
- (id)workoutRingColorIdentifier;

@end
