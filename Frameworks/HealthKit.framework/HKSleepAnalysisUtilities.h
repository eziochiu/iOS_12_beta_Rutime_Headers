/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSleepAnalysisUtilities : NSObject

+ (id)_aggregatedPeriodsForPeriodsBySource:(id)arg1 orderedSources:(id)arg2;
+ (id)_periodsBySourceForSamples:(id)arg1 calendar:(id)arg2;
+ (id)_samplesBySourceForSamples:(id)arg1;
+ (id)boundingDateIntervalsForDateIntervals:(id)arg1;
+ (void)categorizeSleepPeriods:(id)arg1 dateInterval:(id)arg2 calendar:(id)arg3;
+ (id)dateIntervalBoundingSleepPeriods:(id)arg1;
+ (double)durationFromDateIntervals:(id)arg1;
+ (void)enumerateSleepPeriodsForAnalysis:(id)arg1 calendar:(id)arg2 dateInterval:(id)arg3 dateComponents:(id)arg4 analysisBlock:(id /* block */)arg5;
+ (id)filterSleepDays:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)filterSleepPeriods:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)filterSleepSamples:(id)arg1 categoryValue:(long long)arg2;
+ (bool)findBedtimeAlarmAndUpdateSleepPeriods:(id)arg1 calendar:(id)arg2 startOfDayTransform:(id /* block */)arg3;
+ (id)sleepAnalysisDateIntervalWithCalendar:(id)arg1 visibleRangeStartDate:(id)arg2 visibleRangeEndDate:(id)arg3 startOfDayTransform:(id /* block */)arg4;
+ (id)sleepAnalysisForSleepDays:(id)arg1;
+ (id)sleepAnalysisIntervalForStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 stratOfDayTransform:(id /* block */)arg4;
+ (id)sleepDaysFromQueryResult:(id)arg1 calendar:(id)arg2 startOfDayTransform:(id /* block */)arg3 orderedSources:(id)arg4;
+ (id)sleepPeriodSegmentsFromSleepSamples:(id)arg1 minimumInterSegmentTimeInterval:(double)arg2 categoryValue:(long long)arg3;
+ (id)sleepPeriodsFromSamples:(id)arg1 calendar:(id)arg2;
+ (id)sortedSleepPeriodSegmentsFromSleepSamples:(id)arg1;

@end
