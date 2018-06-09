/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKActivityStatisticsQueryServerConfiguration : HKQueryServerConfiguration {
    NSDate * _endDate;
    NSDateComponents * _exerciseIntervalComponents;
    NSDateComponents * _moveIntervalComponents;
    NSDate * _startDate;
    double  _updateInterval;
}

@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSDateComponents *exerciseIntervalComponents;
@property (nonatomic, copy) NSDateComponents *moveIntervalComponents;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) double updateInterval;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)exerciseIntervalComponents;
- (id)initWithCoder:(id)arg1;
- (id)moveIntervalComponents;
- (void)setEndDate:(id)arg1;
- (void)setExerciseIntervalComponents:(id)arg1;
- (void)setMoveIntervalComponents:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setUpdateInterval:(double)arg1;
- (id)startDate;
- (double)updateInterval;

@end
