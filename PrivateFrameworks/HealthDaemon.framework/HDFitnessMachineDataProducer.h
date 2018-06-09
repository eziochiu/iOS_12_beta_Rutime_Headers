/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessMachineDataProducer : NSObject <HDWorkoutDataAccumulatorObserver> {
    HKQuantity * _averageHeartRate;
    bool  _heartRateEnabled;
    _HDFTMProducerMetricTracker * _heartRateTracker;
    HKQuantity * _latestHeartRate;
    HDEurotasData * _previousEurotasData;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _sessionIdentifier;
    HKQuantity * _totalActiveEnergy;
    HKQuantity * _totalBasalEnergy;
}

@property (nonatomic, readonly) bool connected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDHealthServiceManager *healthServiceManager;
@property (nonatomic) HDProfile *profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_queue_generateEurotasData;
- (void)_queue_sendEurotasData:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_updateFitnessMachine;
- (void)_queue_updateFitnessMachineWithCompletion:(id /* block */)arg1 forcing:(bool)arg2;
- (void)_queue_workoutDataAccumulator:(id)arg1 didUpdateStatistics:(id)arg2;
- (void)_readHeartRateEnabledPreference;
- (void)connectToHealthServiceSession:(unsigned long long)arg1;
- (bool)connected;
- (void)dealloc;
- (void)deliverFinalValues:(id /* block */)arg1;
- (void)disconnectHealthServiceSession;
- (id)healthServiceManager;
- (id)initWithProfile:(id)arg1;
- (void)pauseCurrentSession;
- (id)profile;
- (void)resumeCurrentSession;
- (void)sendInitialValues;
- (void)setProfile:(id)arg1;
- (void)workoutDataAccumulator:(id)arg1 didUpdateStatistics:(id)arg2;

@end
