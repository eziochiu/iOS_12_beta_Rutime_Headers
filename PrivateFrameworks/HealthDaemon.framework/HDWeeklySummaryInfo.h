/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWeeklySummaryInfo : NSObject

+ (id)_activitySummariesForStartDateComponents:(id)arg1 endDateComponents:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)_buildWeeklySummaryInfoForStartDateComponents:(id)arg1 startDayForEnergyBurn:(id)arg2 endDateComponents:(id)arg3 endDayForEnergyBurn:(id)arg4 profile:(id)arg5;
+ (id)deepBreathingWeeklySummaryInfoForDate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)weeklySummaryInfoForDate:(id)arg1 profile:(id)arg2 error:(id*)arg3;

@end
