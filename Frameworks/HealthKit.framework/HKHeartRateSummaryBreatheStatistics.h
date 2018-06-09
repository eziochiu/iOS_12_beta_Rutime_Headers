/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHeartRateSummaryBreatheStatistics : HKHeartRateSummaryStatistics {
    HKHeartRateSummaryReading * _finalReading;
}

@property (setter=_setFinalReading:, nonatomic, retain) HKHeartRateSummaryReading *finalReading;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setFinalReading:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)finalReading;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
