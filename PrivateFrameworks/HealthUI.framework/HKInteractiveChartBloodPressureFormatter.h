/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInteractiveChartBloodPressureFormatter : HKInteractiveChartDataFormatter

- (id)_formattedStringWithRange:(id)arg1 displayUnit:(bool)arg2;
- (id)_selectedPointFormattedStringWithSystolicRange:(id)arg1 diastolicRange:(id)arg2;
- (id)_stringFromRange:(id)arg1 numberFormatter:(id)arg2 displayType:(id)arg3 unitController:(id)arg4;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;
- (id)formattedUnitStringForChartData:(id)arg1;
- (id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2;

@end
