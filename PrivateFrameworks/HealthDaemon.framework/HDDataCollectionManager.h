/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataCollectionManager : NSObject <HDAssertionObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver> {
    HDBTLEHeartRateDataCollector * _blteHeartRateDataCollector;
    NSMutableArray * _builtinCollectors;
    NSMutableDictionary * _dataAggregatorsByType;
    NSMutableDictionary * _dataCollectorsByType;
    HDDemoManager * _demoManager;
    NSDate * _lastLaunchUpdate;
    NSMutableDictionary * _observersByType;
    HDDatabaseCoalescedWritePool * _pendingSavePool;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) HDBTLEHeartRateDataCollector *blteHeartRateDataCollector;
@property (nonatomic, retain) NSMutableDictionary *dataCollectorsByType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HDDemoManager *demoManager;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *observersByType;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dataCollectorsDiagnosticDescription;
- (bool)_dataReceived:(id)arg1 provenance:(id)arg2 isDemoData:(bool)arg3 error:(id*)arg4;
- (void)_demoObjectsReceived:(id)arg1 completion:(id /* block */)arg2;
- (id)_newAggregatorForObjectType:(id)arg1;
- (id)_observersDescription;
- (void)_queue_addDataCollector:(id)arg1;
- (void)_queue_adjustDataCollectionForType:(id)arg1 block:(id /* block */)arg2;
- (id)_queue_aggregatorForType:(id)arg1;
- (void)_queue_alertCollectorsOfTypesWithObservers;
- (struct { double x1; bool x2; bool x3; bool x4; })_queue_collectionStateForType:(id)arg1;
- (void)_queue_createBuiltinCollectors;
- (double)_queue_defaultCollectionIntervalForType:(id)arg1;
- (id)_queue_demoManagerCreatingIfNecessary;
- (id)_queue_observerMapForType:(id)arg1;
- (void)_queue_setupUnprotectedDataDependantState;
- (void)_requestAggregationThroughDate:(id)arg1 type:(id)arg2 mode:(long long)arg3 completion:(id /* block */)arg4;
- (void)_requestAggregationThroughDate:(id)arg1 types:(id)arg2 mode:(long long)arg3 completion:(id /* block */)arg4;
- (void)_updateDataCollectorsWithPrivacySettings;
- (void)addDataCollectionObserver:(id)arg1 type:(id)arg2 collectionInterval:(double)arg3 state:(id)arg4;
- (void)addDataCollector:(id)arg1;
- (id)aggregatorForType:(id)arg1;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (id)blteHeartRateDataCollector;
- (id)btleHeartRateDataCollector;
- (void)daemonReady:(id)arg1;
- (void)dataCollectionObserver:(id)arg1 didChangeState:(id)arg2;
- (id)dataCollectorsByType;
- (void)dealloc;
- (double)defaultCollectionIntervalForType:(id)arg1;
- (id)demoManager;
- (id)diagnosticDescription;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)observersByType;
- (void)performSaveWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performSaveWithMaximumLatency:(double)arg1 block:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)periodicUpdate;
- (id)pluginDataCollectors;
- (id)profile;
- (id)queue;
- (void)removeDataCollectionObserver:(id)arg1;
- (void)removeDataCollectionObserver:(id)arg1 type:(id)arg2;
- (void)requestAggregationForAllTypesThroughDate:(id)arg1 mode:(long long)arg2 completion:(id /* block */)arg3;
- (void)requestAggregationThroughDate:(id)arg1 types:(id)arg2 mode:(long long)arg3 completion:(id /* block */)arg4;
- (bool)sensorDataArrayReceived:(id)arg1 deviceEntity:(id)arg2 error:(id*)arg3;
- (void)sensorDataReceived:(id)arg1 deviceEntity:(id)arg2;
- (void)setBlteHeartRateDataCollector:(id)arg1;
- (void)setDataCollectorsByType:(id)arg1;
- (void)setDemoManager:(id)arg1;
- (void)setObserversByType:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)startDataCollectionForType:(id)arg1 observer:(id)arg2 collectionInterval:(double)arg3;
- (void)startFakingDataWithActivityType:(long long)arg1 speed:(id)arg2;
- (void)startFakingWithHKWorkoutActivityType:(unsigned long long)arg1;
- (void)stopDataCollectionForType:(id)arg1 observer:(id)arg2;
- (void)stopFakingData;
- (id)takeCollectionAssertionWithOwnerIdentifier:(id)arg1 sampleTypes:(id)arg2 observer:(id)arg3 observerState:(id)arg4 collectionInterval:(double)arg5;
- (id)takeCollectionAssertionWithOwnerIdentifier:(id)arg1 sampleTypes:(id)arg2 observerState:(id)arg3 collectionInterval:(double)arg4;
- (void)unitTest_setAggregator:(id)arg1 forType:(id)arg2;

@end
