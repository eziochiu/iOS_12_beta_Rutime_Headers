/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFHeaterCoolerThresholdControlItem : HFRangeControlItem

+ (id)readOnlyCharacteristicTypes;

- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;
- (id)numberValueFormatter;
- (unsigned long long)rangeModeWithCharacteristicValuesKeyedByType:(id)arg1;
- (id)targetCharacteristicTypeWithCharacteristicValuesKeyedByType:(id)arg1;

@end
