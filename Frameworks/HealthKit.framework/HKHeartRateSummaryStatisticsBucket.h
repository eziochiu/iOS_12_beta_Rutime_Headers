/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHeartRateSummaryStatisticsBucket : NSObject <NSSecureCoding> {
    long long  _bucketIndex;
    NSMutableIndexSet * _heartRatesInBeatsPerMinute;
}

@property (nonatomic, readonly) long long bucketIndex;
@property (nonatomic, readonly) NSIndexSet *heartRatesInBeatsPerMinute;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addHeartRateInBeatsPerMinute:(long long)arg1;
- (long long)bucketIndex;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)heartRatesInBeatsPerMinute;
- (id)initWithBucketIndex:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
