/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCDateRange : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (nonatomic, readonly) double absoluteTimeInterval;
@property (nonatomic, readonly) NSDate *earlierDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) bool isFinite;
@property (nonatomic, readonly) bool isFromInfinity;
@property (nonatomic, readonly) bool isToInfinity;
@property (nonatomic, readonly) NSDate *laterDate;
@property (nonatomic, readonly) unsigned long long maxMillisecondsTimeIntervalSince1970;
@property (nonatomic, readonly) unsigned long long minMillisecondsTimeIntervalSince1970;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) double timeInterval;

+ (id)dateRangeWithEarlierDate:(id)arg1 laterDate:(id)arg2;
+ (id)dateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)absoluteTimeInterval;
- (long long)compare:(id)arg1;
- (bool)containsDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)earlierDate;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEarlierDate:(id)arg1 laterDate:(id)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithStartDate:(id)arg1 timeInterval:(double)arg2;
- (id)intersectionWithDateRange:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFinite;
- (bool)isFromInfinity;
- (bool)isToInfinity;
- (bool)isWithinTimeInterval:(double)arg1 ofDateRange:(id)arg2;
- (id)laterDate;
- (unsigned long long)maxMillisecondsTimeIntervalSince1970;
- (unsigned long long)minMillisecondsTimeIntervalSince1970;
- (id)sliceForDate:(id)arg1 withInterval:(double)arg2;
- (long long)sliceIndexForDate:(id)arg1 withInterval:(double)arg2;
- (id)slicesWithTimeInterval:(double)arg1;
- (id)startDate;
- (bool)startsLaterThanDateRange:(id)arg1;
- (double)timeInterval;

@end
