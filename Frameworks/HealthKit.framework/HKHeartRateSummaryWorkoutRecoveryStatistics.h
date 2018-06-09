/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHeartRateSummaryWorkoutRecoveryStatistics : HKHeartRateSummaryStatistics {
    NSDictionary * _perMinuteReadings;
}

@property (setter=_setPerMinuteReadings:, nonatomic, retain) NSDictionary *perMinuteReadings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setPerMinuteReadings:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)perMinuteReadings;

@end
