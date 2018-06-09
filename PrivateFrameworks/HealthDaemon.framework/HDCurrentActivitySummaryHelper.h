/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCurrentActivitySummaryHelper : NSObject {
    NSDate * _dateOverride;
    bool  _hasLoadedActivitySummaries;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    HDProfile * _profile;
    HDActivitySummaryQueryHelper * _queryHelper;
    NSObject<OS_dispatch_queue> * _queue;
    NSTimeZone * _timezoneOverride;
    long long  _todayIndex;
    HKActivitySummary * _todaySummary;
    NSArray * _typesForDataCollection;
    long long  _yesterdayIndex;
    HKActivitySummary * _yesterdaySummary;
}

@property (readonly) bool hasLoadedActivitySummaries;
@property (readonly) HKActivitySummary *todayActivitySummary;
@property (readonly) HKActivitySummary *yesterdayActivitySummary;

- (void).cxx_destruct;
- (unsigned long long)_changedFieldsBetweenPreviousActivitySummary:(id)arg1 andNewActivitySummary:(id)arg2;
- (id)_createEmptyActivitySummaryForIndex:(long long)arg1;
- (void)_generateCacheIndexesWithTodayIndex:(long long*)arg1 yesterdayIndex:(long long*)arg2;
- (void)_handleSignificantTimeChangeNotification:(id)arg1;
- (void)_queue_alertObserversTodaySummaryUpdated:(id)arg1 changedFields:(unsigned long long)arg2;
- (void)_queue_alertObserversYesterdaySummaryUpdated:(id)arg1 changedFields:(unsigned long long)arg2;
- (bool)_queue_dateHasChanged;
- (id)_queue_gregorianCalendar;
- (void)_queue_resetQueryHelper;
- (void)_queue_setUpActivityQueryHelper;
- (void)_queue_updateActivitySummaries:(id)arg1;
- (void)_queue_updateTodayActivitySummary:(id)arg1;
- (void)_queue_updateYesterdayActivitySummary:(id)arg1;
- (void)_registerForSignificantTimeChangeNotification;
- (void)addObserver:(id)arg1;
- (id)dateOverride;
- (void)dealloc;
- (bool)hasLoadedActivitySummaries;
- (id)initWithProfile:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setDateOverride:(id)arg1;
- (void)setTimezoneOverride:(id)arg1;
- (id)timezoneOverride;
- (id)todayActivitySummary;
- (id)yesterdayActivitySummary;

@end
