/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInteractiveChartInsulinFormatter : HKInteractiveChartGenericStatFormatter

- (id)_formattedStringWithBasalValue:(double)arg1 bolusValue:(double)arg2;
- (id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 deliveryReason:(long long)arg3;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2;

@end
