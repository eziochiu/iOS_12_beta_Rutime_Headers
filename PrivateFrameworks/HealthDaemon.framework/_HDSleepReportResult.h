/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDSleepReportResult : NSObject {
    NSCalendar * _calendar;
    NSDateInterval * _dateInterval;
    NSDictionary * _inBedSamplesBySource;
}

@property (nonatomic, readonly) NSDate *appleBedtime;
@property (nonatomic, readonly) double appleBedtimeCorrection;
@property (nonatomic, readonly) double appleBedtimeDeltaFromSleepDayStart;
@property (nonatomic, readonly) NSDate *appleCorrectedBedtime;
@property (nonatomic, readonly) NSDate *appleFinalWakeupTime;
@property (nonatomic, readonly) NSDate *appleFirstSleepInterruption;
@property (nonatomic, readonly) NSDate *appleStartOfLongestSleepInterval;
@property (nonatomic, readonly) double appleTotalInBedTime;
@property (nonatomic, readonly) NSDate *appleWaketime;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSArray *sources;
@property (nonatomic, readonly) bool usedAppleBedtimeAlarm;

+ (id)_correctedDateFromDate:(id)arg1 dateInterval:(id)arg2 calendar:(id)arg3;

- (void).cxx_destruct;
- (id)_firstAppleInBedSample;
- (id)_lastEndDateInSampleArray:(id)arg1;
- (id)appleBedtime;
- (double)appleBedtimeCorrection;
- (double)appleBedtimeDeltaFromSleepDayStart;
- (id)appleCorrectedBedtime;
- (id)appleFinalWakeupTime;
- (id)appleFirstSleepInterruption;
- (id)appleStartOfLongestSleepInterval;
- (double)appleTotalInBedTime;
- (id)appleWaketime;
- (id)dateInterval;
- (id)deviceForSource:(id)arg1;
- (id)finalWakeupForSource:(id)arg1;
- (id)initWithDateInterval:(id)arg1 inBedSamplesBySource:(id)arg2 calendar:(id)arg3;
- (id)sleepOnsetForSource:(id)arg1;
- (id)sources;
- (bool)usedAppleBedtimeAlarm;

@end
