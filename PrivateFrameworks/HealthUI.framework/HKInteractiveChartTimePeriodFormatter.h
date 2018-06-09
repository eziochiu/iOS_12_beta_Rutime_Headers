/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInteractiveChartTimePeriodFormatter : HKInteractiveChartDataFormatter {
    HKTimePeriodDisplayTypeValueFormatter * _timePeriodFormatter;
}

- (void).cxx_destruct;
- (id)_formattedStringWithData:(id)arg1 roundToHours:(bool)arg2 displayUnit:(bool)arg3;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2 customDataType:(long long)arg3;
- (id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2;

@end
