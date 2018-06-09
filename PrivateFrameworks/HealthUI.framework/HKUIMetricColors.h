/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKUIMetricColors : NSObject {
    HKGradient * _contentViewChartGradient;
    UIColor * _contextViewInfoButtonBackgroundColor;
    UIColor * _contextViewInfoButtonGlyphColor;
    UIColor * _contextViewPrimaryTextColor;
    UIColor * _contextViewSecondaryTextColor;
    HKGradient * _gradient;
    UIColor * _keyColor;
}

@property (nonatomic, retain) HKGradient *contentViewChartGradient;
@property (nonatomic, retain) UIColor *contextViewInfoButtonBackgroundColor;
@property (nonatomic, retain) UIColor *contextViewInfoButtonGlyphColor;
@property (nonatomic, retain) UIColor *contextViewPrimaryTextColor;
@property (nonatomic, retain) UIColor *contextViewSecondaryTextColor;
@property (nonatomic, retain) HKGradient *gradient;
@property (nonatomic, retain) UIColor *keyColor;

+ (id)activityColors;
+ (id)allergiesClinicalColors;
+ (id)bodyMeasurementColors;
+ (id)conditionsClinicalColors;
+ (id)defaultContextViewColors;
+ (id)immunizationsClinicalColors;
+ (id)labResultsClinicalColors;
+ (id)medicationsClinicalColors;
+ (id)metricColorsForHeartRateContext:(long long)arg1;
+ (id)mindfulnessColors;
+ (id)proceduresClinicalColors;
+ (id)reproductiveHealthColors;
+ (id)resultsColors;
+ (id)sleepColors;
+ (id)unknownCategoryClinicalColors;
+ (id)vitalsClinicalColors;
+ (id)vitalsColors;
+ (id)workoutContextViewColors;

- (void).cxx_destruct;
- (id)contentViewChartGradient;
- (id)contextViewInfoButtonBackgroundColor;
- (id)contextViewInfoButtonGlyphColor;
- (id)contextViewPrimaryTextColor;
- (id)contextViewSecondaryTextColor;
- (id)gradient;
- (id)keyColor;
- (void)setContentViewChartGradient:(id)arg1;
- (void)setContextViewInfoButtonBackgroundColor:(id)arg1;
- (void)setContextViewInfoButtonGlyphColor:(id)arg1;
- (void)setContextViewPrimaryTextColor:(id)arg1;
- (void)setContextViewSecondaryTextColor:(id)arg1;
- (void)setGradient:(id)arg1;
- (void)setKeyColor:(id)arg1;

@end
