/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivityStatisticsQueryServer : HDQueryServer <HDDataObserver> {
    HDActivityCacheDataSource * _dataSource;
    bool  _deliveredInitialResults;
    bool  _deliversUpdates;
    NSDate * _endDate;
    NSDateComponents * _exerciseIntervalComponents;
    NSDateComponents * _moveIntervalComponents;
    _HKDelayedOperation * _resetOperation;
    HDSourceManager * _sourceManager;
    NSDate * _startDate;
    HKStatisticsCollection * _statisticsCollection;
    _HKDelayedOperation * _updateOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)queryClass;

- (void).cxx_destruct;
- (id)_allObservedQuantityTypes;
- (void)_createDataSourceIfNecessary;
- (void)_queue_deliverActivityMoveStatistics:(id)arg1 exerciseStatistics:(id)arg2 standHoursInfo:(id)arg3 workouts:(id)arg4;
- (void)_queue_deliverError:(id)arg1;
- (void)_queue_deliverUpdates;
- (bool)_queue_queryIsRunning;
- (void)_queue_reset;
- (void)_queue_start;
- (void)_queue_stop;
- (bool)_queue_updateDataSourceWithMoveStatistics:(id*)arg1 exerciseStatistics:(id*)arg2 standInfo:(id*)arg3 workoutInfoOut:(id*)arg4 error:(id*)arg5;
- (bool)_shouldListenForUpdates;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;

@end
