/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKHeartRateHistogramData : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    NSArray * _histogramCounts;
    HKQuantity * _maximumValue;
    HKQuantity * _minimumBucketValue;
    HKQuantity * _minimumValue;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSArray *histogramCounts;
@property (nonatomic, readonly) HKQuantity *maximumValue;
@property (nonatomic, readonly) HKQuantity *minimumBucketValue;
@property (nonatomic, readonly) HKQuantity *minimumValue;
@property (nonatomic, readonly) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithStartDate:(id)arg1 endDate:(id)arg2 minimumBucketValue:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5 histogramCounts:(id)arg6;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)histogramCounts;
- (id)initWithCoder:(id)arg1;
- (id)maximumValue;
- (id)minimumBucketValue;
- (id)minimumValue;
- (id)startDate;

@end
