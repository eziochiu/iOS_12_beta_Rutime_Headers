/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKDiscreteQuantitySeriesSample : HKQuantitySample {
    HKQuantity * _max;
    HKQuantity * _min;
    HKQuantity * _mostRecentQuantity;
    NSDateInterval * _mostRecentQuantityDateInterval;
}

@property (setter=_setAverage:, nonatomic, copy) HKQuantity *average;
@property (setter=_setMax:, nonatomic, copy) HKQuantity *max;
@property (setter=_setMin:, nonatomic, copy) HKQuantity *min;
@property (setter=_setMostRecentQuantity:, nonatomic, copy) HKQuantity *mostRecentQuantity;
@property (setter=_setMostRecentQuantityDateInterval:, nonatomic, copy) NSDateInterval *mostRecentQuantityDateInterval;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setAverage:(id)arg1;
- (void)_setMax:(id)arg1;
- (void)_setMin:(id)arg1;
- (void)_setMostRecentQuantity:(id)arg1;
- (void)_setMostRecentQuantityDateInterval:(id)arg1;
- (id)_validateConfiguration;
- (id)average;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)max;
- (id)min;
- (id)mostRecentQuantity;
- (id)mostRecentQuantityDateInterval;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

@end
