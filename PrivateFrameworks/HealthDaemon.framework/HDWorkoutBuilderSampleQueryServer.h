/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutBuilderSampleQueryServer : HDQueryServer <HDDatabaseProtectedDataObserver, HDTaskServerObserver, HDWorkoutBuilderServerSampleObserer> {
    bool  _hasFinishedHistoricalFetch;
    NSUUID * _workoutBuilderIdentifier;
    HDWorkoutBuilderServer * _workoutBuilderServer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void).cxx_destruct;
- (void)_queue_performHistoricalQuery;
- (void)_queue_start;
- (void)_scheduleHistoricalQuery;
- (bool)_shouldListenForUpdates;
- (bool)_shouldObserveDatabaseProtectedDataAvailability;
- (bool)_shouldObserveOnPause;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)didCreateTaskServer:(id)arg1;
- (void)didInvalidateTaskServer:(id)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (id)workoutBuilderSampleQueryClientWithErrorHandler:(id /* block */)arg1;
- (void)workoutBuilderServer:(id)arg1 addedSamples:(id)arg2;

@end
