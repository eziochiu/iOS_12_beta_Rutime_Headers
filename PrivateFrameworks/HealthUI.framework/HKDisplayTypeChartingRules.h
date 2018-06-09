/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDisplayTypeChartingRules : NSObject {
    <HKDecimalPrecisionRule> * _allowedDecimalPrecisionRule;
    <HKInteractiveChartsAxisScalingRule> * _axisScalingRule;
    long long  _defaultChartStyle;
    long long  _defaultStyle;
    NSDictionary * _perUnitDecimalPrecision;
    long long  _preferredTimeScope;
    NSMutableDictionary * _rulesByTimeScope;
    bool  _shouldConnectSamplesWithLines;
    bool  _shouldHideAverageLine;
}

@property (nonatomic, retain) <HKInteractiveChartsAxisScalingRule> *axisScalingRule;
@property (nonatomic, readonly) long long defaultChartStyle;
@property (nonatomic) long long preferredTimeScope;
@property (nonatomic) bool shouldConnectSamplesWithLines;
@property (nonatomic) bool shouldHideAverageLine;

- (void).cxx_destruct;
- (id)_ruleForKey:(id)arg1 timeScope:(long long)arg2;
- (void)_setRule:(id)arg1 forKey:(id)arg2 timeScope:(long long)arg3;
- (void)adjustedBoundsForPortraitChartWithMin:(double)arg1 max:(double)arg2 minOut:(double*)arg3 maxOut:(double*)arg4 decimalPrecision:(long long*)arg5 unit:(id)arg6 timeScope:(long long)arg7;
- (id)allowedDecimalPrecisionRuleForUnit:(id)arg1;
- (id)axisScalingRule;
- (double)chartPointLineWidthForTimeScope:(long long)arg1;
- (double)chartPointRadiusForTimeScope:(long long)arg1;
- (long long)chartStyleForTimeScope:(long long)arg1;
- (long long)defaultChartStyle;
- (id)initWithDefaultChartStyle:(long long)arg1;
- (id)intervalComponentsForTimeScope:(long long)arg1;
- (bool)lineChartExtendLastValueForTimeScope:(long long)arg1;
- (bool)lineChartFlatLastValueForTimeScope:(long long)arg1;
- (bool)lineChartUsesPointMarkerImageForTimeScope:(long long)arg1;
- (bool)lineChartUsesValueAxisAnnotationForTimeScope:(long long)arg1;
- (long long)preferredTimeScope;
- (void)setAllowedDecimalPrecisionRule:(id)arg1 perUnitPrecisionRules:(id)arg2;
- (void)setAxisScalingRule:(id)arg1;
- (void)setChartPointLineWidth:(double)arg1 forTimeScope:(long long)arg2;
- (void)setChartPointRadius:(double)arg1 forTimeScope:(long long)arg2;
- (void)setChartStyle:(long long)arg1 forTimeScope:(long long)arg2;
- (void)setIntervalComponents:(id)arg1 forTimeScope:(long long)arg2;
- (void)setLineChartExtendLastValue:(bool)arg1 forTimeScope:(long long)arg2;
- (void)setLineChartFlatLastValue:(bool)arg1 forTimeScope:(long long)arg2;
- (void)setLineChartUsesPointMarkerImage:(bool)arg1 forTimeScope:(long long)arg2;
- (void)setLineChartUsesValueAxisAnnotation:(bool)arg1 forTimeScope:(long long)arg2;
- (void)setPreferredTimeScope:(long long)arg1;
- (void)setShouldConnectSamplesWithLines:(bool)arg1;
- (void)setShouldHideAverageLine:(bool)arg1;
- (bool)shouldConnectSamplesWithLines;
- (bool)shouldHideAverageLine;

@end
