/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInteractiveChartMedicalRecordData : HKInteractiveChartSinglePointData {
    HKInspectableValueInRange * _valueInRange;
}

@property (nonatomic, retain) HKInspectableValueInRange *valueInRange;

- (void).cxx_destruct;
- (void)setValueInRange:(id)arg1;
- (id)valueInRange;

@end
