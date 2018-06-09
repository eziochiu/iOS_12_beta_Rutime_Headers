/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDLatestSummariesQueryServer : HDQueryServer {
    NSCalendar * _calendar;
    bool  _deliversUpdates;
    NSDate * _endDate;
    bool  _initialResultsDelivered;
    _HKFilter * _nonSleepStartEndFilter;
    _HKFilter * _sleepStartEndFilter;
    NSDate * _startDate;
    HDListByTypeStatisticsBuilder_DEPRECATED * _statisticsBuilder;
}

+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_fetchAndDeliverAllStatisticsInitial:(bool)arg1;
- (void)_queue_start;
- (void)_queue_updateStatisticsWithSamples:(id)arg1 anchor:(id)arg2;
- (bool)_shouldAcceptSample:(id)arg1;
- (bool)_shouldListenForUpdates;
- (bool)_shouldObserveAllSampleTypes;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (id)latestSummariesClient;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;

@end
