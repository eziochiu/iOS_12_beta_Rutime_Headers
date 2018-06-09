/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivityCacheManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver> {
    NSSet * _allQuantityTypes;
    bool  _cacheIndicesAreSet;
    HKQuantityType * _calorieGoalType;
    NSTimeZone * _currentTimeZone;
    HDActivityCacheDataSource * _dataSource;
    NSDate * _dateOverride;
    bool  _existingActivityCachesAreSet;
    HKActivityCache * _existingTodayActivityCache;
    HKActivityCache * _existingYesterdayActivityCache;
    bool  _hasSubscribedToSignificantTimeChangeNotifications;
    CMPedometerData * _lastPedometerData;
    HDSourceEntity * _localDeviceSourceEntity;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    CMPedometer * _pedometer;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    int  _rebuildCacheNotificationToken;
    _HKDelayedOperation * _rebuildCachesOperation;
    bool  _shouldSendCacheUpdateNotification;
    NSTimeZone * _timeZoneOverride;
    long long  _todayActivityCacheIndex;
    NSDateInterval * _todayDateInterval;
    HKQuantitySample * _todayGoal;
    HKHeartRateSummary * _todayHeartRateSummary;
    long long  _tomorrowActivityCacheIndex;
    _HKDelayedOperation * _updateCachesOperation;
    long long  _wheelchairUse;
    long long  _yesterdayActivityCacheIndex;
    NSDateInterval * _yesterdayDateInterval;
    HKQuantitySample * _yesterdayGoal;
    HKHeartRateSummary * _yesterdayHeartRateSummary;
}

@property (readonly) NSCalendar *calendar;
@property (nonatomic, readonly) HKActivityCache *currentActivityCache;
@property (nonatomic, retain) NSDate *dateOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimeZone *timeZoneOverride;
@property (nonatomic, readonly) HKActivityCache *yesterdayActivityCache;

- (void).cxx_destruct;
- (void)_calculateCacheIndicesWithTodayIndex:(long long*)arg1 yesterdayIndex:(long long*)arg2 tomorrowIndex:(long long*)arg3 todayStart:(id)arg4 yesterdayStart:(id)arg5 tomorrowStart:(id)arg6 calendar:(id)arg7;
- (void)_didReceiveSignificantTimeChangeNotification;
- (id)_mostRecentGoalBeforeDate:(id)arg1 error:(id*)arg2;
- (void)_queue_alertObservers:(id)arg1 heartRateSummaryChanged:(id)arg2;
- (void)_queue_alertObserversTodayActivityCacheChanged:(id)arg1;
- (void)_queue_alertObserversYesterdayActivityCacheChanged:(id)arg1;
- (id)_queue_currentDate;
- (id)_queue_currentTimeZone;
- (void)_queue_deleteActivityCaches:(id)arg1;
- (bool)_queue_goalsSet;
- (id)_queue_gregorianCalendar;
- (void)_queue_primeCacheIndices;
- (void)_queue_primeDailyGoals;
- (void)_queue_primeDataSource;
- (void)_queue_primeExistingActivityCaches;
- (void)_queue_primeLocalSource;
- (bool)_queue_readyToPrimeDataSource;
- (bool)_queue_readyToSaveCaches;
- (void)_queue_rebuildActivityCaches;
- (void)_queue_rebuildCachesIfNeededForTimeChange;
- (void)_queue_registerForSignificantTimeChangeNotification;
- (void)_queue_resetCacheIndices;
- (void)_queue_resetDailyGoals;
- (void)_queue_resetDataSource;
- (void)_queue_resetEverything;
- (void)_queue_resetExistingActivityCaches;
- (id)_queue_saveCacheWithDateInterval:(id)arg1 calorieGoal:(id)arg2 cacheIndex:(long long)arg3 previousCache:(id)arg4 statisticsBuilder:(id)arg5 wheelchairUse:(long long)arg6 generateStats:(bool)arg7;
- (void)_queue_saveCaches;
- (bool)_queue_saveTodayCache;
- (bool)_queue_saveYesterdayCache;
- (void)_queue_streamSamplesAdded;
- (void)_queue_updateCaches;
- (void)_queue_updateDailyGoalsWithGoalSample:(id)arg1;
- (void)_queue_updateDailyGoalsWithSamples:(id)arg1;
- (void)_queue_updateDateIntervalsWithExistingActivityCaches;
- (void)_queue_updateHeartRateSummaries;
- (void)_queue_updateWheelchairUse;
- (void)_userCharacteristicsDidChangeNotification:(id)arg1;
- (void)accessStatisticsBuilderWithCacheIndex:(long long)arg1 handler:(id /* block */)arg2;
- (void)addActivityCacheObserver:(id)arg1;
- (id)calendar;
- (id)currentActivityCache;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)dateOverride;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)removeActivityCacheObserver:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(id /* block */)arg3;
- (void)setDateOverride:(id)arg1;
- (void)setTimeZoneOverride:(id)arg1;
- (id)timeZoneOverride;
- (id)yesterdayActivityCache;

@end