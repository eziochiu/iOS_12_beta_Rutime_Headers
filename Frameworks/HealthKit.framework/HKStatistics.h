/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKStatistics : NSObject <NSCopying, NSSecureCoding> {
    HKQuantity * _averageQuantity;
    NSDictionary * _averageQuantityBySource;
    unsigned long long  _dataCount;
    NSDictionary * _dataCountBySource;
    NSDate * _endDate;
    HKQuantity * _maximumQuantity;
    NSDictionary * _maximumQuantityBySource;
    HKQuantity * _minimumQuantity;
    NSDictionary * _minimumQuantityBySource;
    HKQuantity * _mostRecentQuantity;
    NSDictionary * _mostRecentQuantityBySource;
    NSDateInterval * _mostRecentQuantityDateInterval;
    NSDictionary * _mostRecentQuantityDateIntervalBySource;
    HKQuantityType * _quantityType;
    NSArray * _sources;
    NSDate * _startDate;
    HKQuantity * _sumQuantity;
    NSDictionary * _sumQuantityBySource;
    NSDictionary * _sumQuantityBySourceID;
}

@property (nonatomic, copy) HKQuantity *averageQuantity;
@property (nonatomic, copy) NSDictionary *averageQuantityBySource;
@property (nonatomic) unsigned long long dataCount;
@property (nonatomic, copy) NSDictionary *dataCountBySource;
@property (readonly) NSDate *endDate;
@property (nonatomic, copy) HKQuantity *maximumQuantity;
@property (nonatomic, copy) NSDictionary *maximumQuantityBySource;
@property (nonatomic, copy) HKQuantity *minimumQuantity;
@property (nonatomic, copy) NSDictionary *minimumQuantityBySource;
@property (nonatomic, copy) HKQuantity *mostRecentQuantity;
@property (nonatomic, copy) NSDictionary *mostRecentQuantityBySource;
@property (nonatomic, copy) NSDateInterval *mostRecentQuantityDateInterval;
@property (nonatomic, copy) NSDictionary *mostRecentQuantityDateIntervalBySource;
@property (readonly) HKQuantityType *quantityType;
@property (readonly) NSArray *sources;
@property (readonly) NSDate *startDate;
@property (nonatomic, copy) HKQuantity *sumQuantity;
@property (nonatomic, copy) NSDictionary *sumQuantityBySource;
@property (nonatomic, copy) NSDictionary *sumQuantityBySourceID;

+ (void)_validateOptions:(unsigned long long)arg1 forDataType:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initAsCopyOf:(id)arg1;
- (id)_initWithDataType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)_setEndDate:(id)arg1;
- (void)_setSources:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (id)averageQuantity;
- (id)averageQuantityBySource;
- (id)averageQuantityForSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataCount;
- (id)dataCountBySource;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)maximumQuantity;
- (id)maximumQuantityBySource;
- (id)maximumQuantityForSource:(id)arg1;
- (id)minimumQuantity;
- (id)minimumQuantityBySource;
- (id)minimumQuantityForSource:(id)arg1;
- (id)mostRecentQuantity;
- (id)mostRecentQuantityBySource;
- (id)mostRecentQuantityDateInterval;
- (id)mostRecentQuantityDateIntervalBySource;
- (id)mostRecentQuantityDateIntervalForSource:(id)arg1;
- (id)mostRecentQuantityForSource:(id)arg1;
- (id)quantityType;
- (void)setAverageQuantity:(id)arg1;
- (void)setAverageQuantityBySource:(id)arg1;
- (void)setDataCount:(unsigned long long)arg1;
- (void)setDataCountBySource:(id)arg1;
- (void)setMaximumQuantity:(id)arg1;
- (void)setMaximumQuantityBySource:(id)arg1;
- (void)setMinimumQuantity:(id)arg1;
- (void)setMinimumQuantityBySource:(id)arg1;
- (void)setMostRecentQuantity:(id)arg1;
- (void)setMostRecentQuantityBySource:(id)arg1;
- (void)setMostRecentQuantityDateInterval:(id)arg1;
- (void)setMostRecentQuantityDateIntervalBySource:(id)arg1;
- (void)setSumQuantity:(id)arg1;
- (void)setSumQuantityBySource:(id)arg1;
- (void)setSumQuantityBySourceID:(id)arg1;
- (id)sources;
- (id)startDate;
- (id)sumQuantity;
- (id)sumQuantityBySource;
- (id)sumQuantityBySourceID;
- (id)sumQuantityForSource:(id)arg1;

@end
