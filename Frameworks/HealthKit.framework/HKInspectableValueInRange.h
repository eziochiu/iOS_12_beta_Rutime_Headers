/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKInspectableValueInRange : NSObject {
    HKInspectableValueCollection * _currentValue;
    NSDate * _date;
    HKInspectableValueCollection * _highValue;
    HKInspectableValueCollection * _lowValue;
    NSString * _unitString;
}

@property (nonatomic, readonly) HKInspectableValueCollection *currentValue;
@property (nonatomic, readonly) long long currentValueRelation;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, readonly) bool hasRenderableContent;
@property (nonatomic, readonly) HKInspectableValueCollection *highValue;
@property (nonatomic, readonly) double highValueDoubleRepresentation;
@property (nonatomic, readonly) HKInspectableValueCollection *lowValue;
@property (nonatomic, readonly) double lowValueDoubleRepresentation;
@property (nonatomic, readonly) NSString *unitString;

+ (id)valueInRangeWithLow:(id)arg1 high:(id)arg2 currentValue:(id)arg3 unit:(id)arg4;

- (void).cxx_destruct;
- (void)_assertValidRange;
- (double)_doubleForValue:(id)arg1;
- (double)_doubleForValueCollection:(id)arg1;
- (id)_initValueInRangeWithLow:(id)arg1 high:(id)arg2 currentValue:(id)arg3 unit:(id)arg4;
- (void)_setUnitString:(id)arg1;
- (id)currentValue;
- (long long)currentValueRelation;
- (id)date;
- (bool)hasRenderableContent;
- (id)highValue;
- (double)highValueDoubleRepresentation;
- (id)lowValue;
- (double)lowValueDoubleRepresentation;
- (void)setDate:(id)arg1;
- (id)unitString;

@end
