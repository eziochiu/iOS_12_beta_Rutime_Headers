/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKQueryUtilities : NSObject

+ (void)_organizeSampleByStartDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 callback:(id /* block */)arg5;
+ (id)_processSleepQueryResults:(id)arg1 startDate:(id)arg2 intervalComponents:(id)arg3 sourceOrder:(id)arg4 calendar:(id)arg5;
+ (id)arrayByCoalescingObjects:(id)arg1 startDate:(id)arg2 intervalComponents:(id)arg3 calendar:(id)arg4 combiningBlock:(id /* block */)arg5;
+ (id)averageSumFromQuantities:(id)arg1 unit:(id)arg2;
+ (id)averageSumFromStatistics:(id)arg1 unit:(id)arg2;
+ (id)calculateCountStatisticsWithSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4;
+ (id)calculateIncludedValuesWithSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4;
+ (id)calculateTotalDurationsWithTimePeriods:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 startOfDayTransform:(id /* block */)arg5;
+ (id)coalesceTimePeriods:(id)arg1 strictStartDate:(id)arg2 strictEndDate:(id)arg3;
+ (id)coalesceTimePeriodsFromSamples:(id)arg1 strictStartDate:(id)arg2 strictEndDate:(id)arg3;
+ (id)coalesceTotalDurations:(id)arg1 startDate:(id)arg2 intervalComponents:(id)arg3 intervalRecordCountsOut:(id*)arg4;
+ (id)countStatisticsQueryWithSampleType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 predicate:(id)arg5 completion:(id /* block */)arg6;
+ (id)maximumFromQuantities:(id)arg1 unit:(id)arg2;
+ (id)minimumFromQuantities:(id)arg1 unit:(id)arg2;
+ (bool)shouldUseDailyAverageWithDateComponents:(id)arg1 sampleType:(id)arg2;
+ (id)sleepDateIntervalForThePastWeekWithCalendar:(id)arg1;
+ (id)sleepQueryWithStartDate:(id)arg1 endDate:(id)arg2 intervalComponents:(id)arg3 calendar:(id)arg4 healthStore:(id)arg5 completion:(id /* block */)arg6;
+ (double)totalDurationFromCoalescedDateIntervals:(id)arg1;

@end
