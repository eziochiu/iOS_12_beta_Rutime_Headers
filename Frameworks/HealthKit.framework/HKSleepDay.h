/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSleepDay : NSObject {
    double  _asleepDuration;
    double  _asleepDurationGoal;
    long long  _asleepDurationGoalSource;
    NSDateInterval * _dateInterval;
    double  _efficiency;
    NSDate * _endDate;
    double  _inBedDuration;
    long long  _numberOfInterruptions;
    NSArray * _sleepPeriods;
    NSDate * _startDate;
    double  _timeAwakeDuringIntendedSleepPeriod;
}

@property (nonatomic, readonly) double asleepDuration;
@property (nonatomic, readonly) double asleepDurationGoal;
@property (nonatomic, readonly) long long asleepDurationGoalSource;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) double efficiency;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) double inBedDuration;
@property (nonatomic, readonly) long long numberOfInterruptions;
@property (nonatomic, readonly, copy) NSArray *sleepPeriods;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) double timeAwakeDuringIntendedSleepPeriod;

- (void).cxx_destruct;
- (double)asleepDuration;
- (double)asleepDurationGoal;
- (long long)asleepDurationGoalSource;
- (id)dateInterval;
- (id)description;
- (double)efficiency;
- (id)endDate;
- (double)inBedDuration;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 sleepPeriods:(id)arg3;
- (long long)numberOfInterruptions;
- (id)primarySleepPeriod;
- (id)sleepPeriods;
- (id)startDate;
- (double)timeAwakeDuringIntendedSleepPeriod;

@end
