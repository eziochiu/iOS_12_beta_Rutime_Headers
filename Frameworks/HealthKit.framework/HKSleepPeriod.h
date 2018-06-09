/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSleepPeriod : NSObject {
    double  _asleepDuration;
    double  _asleepDurationGoal;
    long long  _asleepDurationGoalSource;
    bool  _consistent;
    NSDateInterval * _dateInterval;
    double  _duration;
    double  _efficiency;
    NSDate * _endDate;
    bool  _endDateConformsToIntendedBedtime;
    double  _endDateOffsetFromIntendedBedtime;
    double  _inBedDuration;
    NSDateInterval * _intendedBedtime;
    long long  _intendedBedtimeType;
    long long  _numberOfInterruptions;
    NSArray * _segments;
    NSDate * _startDate;
    bool  _startDateConformsToIntendedBedtime;
    double  _startDateOffsetFromIntendedBedtime;
    double  _timeAwakeDuringIntendedSleepPeriod;
    double  _timeToFallAsleep;
    double  _timeToGetOutOfBed;
    NSString * _timeZoneName;
    long long  _type;
}

@property (nonatomic, readonly) double asleepDuration;
@property (nonatomic, readonly) double asleepDurationGoal;
@property (nonatomic, readonly) long long asleepDurationGoalSource;
@property (getter=isConsistent, nonatomic, readonly) bool consistent;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double efficiency;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) bool endDateConformsToIntendedBedtime;
@property (nonatomic, readonly) double endDateOffsetFromIntendedBedtime;
@property (nonatomic, readonly) double inBedDuration;
@property (nonatomic, readonly) NSDateInterval *intendedBedtime;
@property (nonatomic, readonly) long long intendedBedtimeType;
@property (nonatomic, readonly) long long numberOfInterruptions;
@property (nonatomic, readonly, copy) NSArray *segments;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) bool startDateConformsToIntendedBedtime;
@property (nonatomic, readonly) double startDateOffsetFromIntendedBedtime;
@property (nonatomic, readonly) double timeAwakeDuringIntendedSleepPeriod;
@property (nonatomic, readonly) double timeToFallAsleep;
@property (nonatomic, readonly) double timeToGetOutOfBed;
@property (nonatomic, readonly, copy) NSString *timeZoneName;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)_firstBedtimeAlarmWithCalendar:(id)arg1;
- (void)_setIntendedBedtime:(id)arg1 type:(long long)arg2;
- (void)_setType:(long long)arg1;
- (double)asleepDuration;
- (double)asleepDurationGoal;
- (long long)asleepDurationGoalSource;
- (id)dateInterval;
- (double)duration;
- (double)efficiency;
- (id)endDate;
- (bool)endDateConformsToIntendedBedtime;
- (double)endDateOffsetFromIntendedBedtime;
- (void)enumerateDateIntervalsForCategoryValue:(long long)arg1 intersectedWithDateInterval:(id)arg2 block:(id /* block */)arg3;
- (double)inBedDuration;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 segments:(id)arg3;
- (id)intendedBedtime;
- (long long)intendedBedtimeType;
- (bool)isConsistent;
- (long long)numberOfInterruptions;
- (id)segmentDateIntervalsForCategoryValue:(long long)arg1 intersectedWithDateInterval:(id)arg2;
- (id)segments;
- (id)segmentsForCategory:(long long)arg1;
- (id)startDate;
- (bool)startDateConformsToIntendedBedtime;
- (double)startDateOffsetFromIntendedBedtime;
- (double)timeAwakeDuringIntendedSleepPeriod;
- (double)timeToFallAsleep;
- (double)timeToGetOutOfBed;
- (id)timeZoneName;
- (long long)type;

@end
