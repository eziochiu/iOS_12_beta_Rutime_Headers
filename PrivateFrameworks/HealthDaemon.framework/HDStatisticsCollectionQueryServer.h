/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDStatisticsCollectionQueryServer : HDQueryServer <HDDataObserver> {
    NSMutableArray * _addedSamples;
    NSNumber * _addedSamplesAnchor;
    bool  _addedSamplesRequireProtectedData;
    NSDate * _anchorDate;
    HDStatisticsCollectionCalculator * _calculator;
    HDStatisticsCollectionCalculatorDefaultDataSource * _dataSource;
    bool  _deliveredInitialResults;
    bool  _deliversUpdates;
    _HKDateIntervalCollection * _intervalCollection;
    unsigned long long  _mergeStrategy;
    HDStatisticsCollectionCalculatorDefaultSourceOrderProvider * _sourceOrderProvider;
    unsigned long long  _statisticsOptions;
    id /* block */  _unitTest_queryServerStatisticsEnumerationHandler;
    id /* block */  _unitTest_queryServerUnableToUpdateStatisticsHandler;
    id /* block */  _unitTest_queryServerUpdateStatisticsHandler;
}

@property (nonatomic, readonly) NSDate *anchorDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long statisticsOptions;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTest_queryServerStatisticsEnumerationHandler;
@property (nonatomic, copy) id /* block */ unitTest_queryServerUnableToUpdateStatisticsHandler;
@property (nonatomic, copy) id /* block */ unitTest_queryServerUpdateStatisticsHandler;

+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)supportsAnchorBasedAuthorization;

- (void).cxx_destruct;
- (void)_queue_deliverUpdatedStatistics:(id)arg1 error:(id)arg2;
- (void)_queue_fetchAndDeliverAllStatisticsInitial:(bool)arg1;
- (bool)_queue_objectIsRelevant:(id)arg1;
- (void)_queue_sendAccumulatedStatistics:(id)arg1 isFinal:(bool)arg2 statisticsCount:(long long*)arg3 shouldResetStatistics:(bool*)arg4;
- (void)_queue_start;
- (void)_queue_updateStatistics;
- (void)_scheduleFetchAndDeliver;
- (void)_scheduleUpdateStatistics;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (bool)_shouldListenForUpdates;
- (bool)_shouldObserveDatabaseProtectedDataAvailability;
- (id)anchorDate;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)setUnitTest_queryServerStatisticsEnumerationHandler:(id /* block */)arg1;
- (void)setUnitTest_queryServerUnableToUpdateStatisticsHandler:(id /* block */)arg1;
- (void)setUnitTest_queryServerUpdateStatisticsHandler:(id /* block */)arg1;
- (unsigned long long)statisticsOptions;
- (id /* block */)unitTest_queryServerStatisticsEnumerationHandler;
- (id /* block */)unitTest_queryServerUnableToUpdateStatisticsHandler;
- (id /* block */)unitTest_queryServerUpdateStatisticsHandler;

@end
