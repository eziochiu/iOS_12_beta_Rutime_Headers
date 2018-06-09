/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDForegroundClientProcessObserver, HDHealthDaemonReadyObserver, HDWorkoutSessionObserver> {
    HDAlertSuppressor * _alertSuppressor;
    HDWatchAppStateMonitor * _appStateMonitor;
    HDWorkoutSessionServer * _currentWorkout;
    HDAssertion * _currentWorkoutAssertion;
    bool  _hasPerformedPostLaunchSessionRecovery;
    bool  _isFirstLaunchAndNotYetSmoothed;
    CLLocationManager * _locationManager;
    HDWorkoutLocationSmoother * _locationSmoother;
    bool  _needToCheckForLocationSeriesOnUnlock;
    HDWorkoutSessionServer * _nextWorkout;
    NSHashTable * _observerTable;
    NSMutableArray * _postLaunchRecoveryBlocks;
    NSObject<OS_dispatch_queue> * _postLaunchRecoveryCallbackQueue;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _sessionCreationHandlers;
    NSMutableDictionary * _sessionServers;
}

@property (nonatomic, readonly) HDAlertSuppressor *alertSuppressor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInHeartRateRecovery;
@property (nonatomic, retain) HDWorkoutLocationSmoother *locationSmoother;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_associationsSyncedForWorkout:(id)arg1;
- (id)_mainQueue_locationManager;
- (void)_postWorkoutUpdatedNotification;
- (void)_queue_beginTransitionToWorkoutSession:(id)arg1;
- (unsigned long long)_queue_currentWorkoutActivityType;
- (long long)_queue_currentWorkoutLocationType;
- (void)_queue_finishAllDetachedWorkoutBuilders;
- (id)_queue_locationSmoother;
- (void)_queue_logWorkoutStateToPowerLog;
- (void)_queue_sessionEnded;
- (id)_queue_sessionServerForRecoveryForClient:(id)arg1;
- (void)_queue_setCurrentWorkout:(id)arg1;
- (void)_queue_smoothAllUnsmoothedLocationSeries;
- (void)_queue_startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_updateFakingDataInSimulator;
- (void)_receivedStartWorkoutAppRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_recoverCurrentWorkoutSessionAfterLaunch;
- (void)_sendStartWorkoutAppResponse:(id /* block */)arg1 error:(id)arg2;
- (void)_setupLocationObserversIfNeeded;
- (void)_startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(id /* block */)arg3;
- (id)_workoutSessionNotCurrentError:(id)arg1;
- (void)addWorkoutEventObserver:(id)arg1;
- (id)alertSuppressor;
- (unsigned long long)currentWorkoutActivityType;
- (id)currentWorkoutClient;
- (long long)currentWorkoutLocationType;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)endHeartRateRecovery;
- (bool)finishAllWorkoutsForClient:(id)arg1 error:(id*)arg2;
- (void)foregroundClientProcessesDidChange:(id)arg1 previouslyForegroundBundleIdentifiers:(id)arg2;
- (void)generatePauseOrResumeRequestWithCompletion:(id /* block */)arg1;
- (void)getCurrentWorkoutSnapshotWithCompletion:(id /* block */)arg1;
- (bool)hasAnyActiveWorkouts;
- (void)hk_fakeLapEventWithDate:(id)arg1 strokeStyle:(long long)arg2;
- (void)hk_fakeStopEventWithDate:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (bool)isInHeartRateRecovery;
- (bool)isPowerSavingEnabledForCurrentActivity;
- (bool)isPowerSavingSupportedForCurrentActivity;
- (id)locationSmoother;
- (void)pauseActiveWorkoutsWithCompletion:(id /* block */)arg1;
- (void)performWhenPostLaunchSessionRecoveryHasCompleted:(id /* block */)arg1;
- (id)profile;
- (id)queue;
- (void)receivedStartWorkoutAppRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)recoverWorkoutSessionForClient:(id)arg1 server:(id)arg2 completion:(id /* block */)arg3;
- (id)recoveredWorkoutSessionServerWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)removeWorkoutEventObserver:(id)arg1;
- (void)sessionServerFromSessionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)sessionServerWithConfiguration:(id)arg1 sessionUUID:(id)arg2 taskServer:(id)arg3 error:(id*)arg4;
- (void)setLocationSmoother:(id)arg1;
- (void)startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(id /* block */)arg3;
- (void)unitTest_smoothRoute:(id)arg1 withSmoother:(id)arg2 completion:(id /* block */)arg3;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;

@end
