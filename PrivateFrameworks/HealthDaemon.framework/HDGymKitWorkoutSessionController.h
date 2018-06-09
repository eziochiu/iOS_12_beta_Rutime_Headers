/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDGymKitWorkoutSessionController : NSObject <HDFitnessMachineSessionObserver, HDWorkoutSessionController, HDWorkoutSessionStateController> {
    <HDWorkoutDataAccumulator> * _accumulator;
    HDDefaultWorkoutSessionController * _defaultSessionController;
    NSUUID * _fitnessMachineSessionUUID;
    bool  _needsDataAccumulator;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    <HDWorkoutSessionStateController> * _sessionStateController;
}

@property (nonatomic, readonly) <HDWorkoutDataAccumulator> *workoutDataAccumulator;

+ (id)recoveryIdentifier;

- (void).cxx_destruct;
- (void)_queue_reconnectFitnessMachineFromRecoveryState:(id)arg1;
- (void)_queue_sessionFinished;
- (void)_queue_sessionPrepared;
- (void)_queue_storeSessionRecoveryConfiguration:(id)arg1;
- (void)_setupRecoveryState:(id)arg1;
- (void)autoPauseWithDate:(id)arg1;
- (void)autoResumeWithDate:(id)arg1;
- (void)endHeartRateRecovery;
- (bool)endWithError:(id*)arg1;
- (void)finish;
- (void)fitnessMachineSessionUUID:(id)arg1 updatedRecoveryConfiguration:(id)arg2;
- (void)generateError:(id)arg1;
- (void)generateEvent:(id)arg1;
- (void)hktest_setStateTransitionCompletionHandler:(id /* block */)arg1;
- (id)initWithProfile:(id)arg1 sessionConfiguration:(id)arg2 sessionStateController:(id)arg3 recoveryState:(id)arg4;
- (bool)pauseWithError:(id*)arg1;
- (bool)prepareWithError:(id*)arg1;
- (bool)resumeWithError:(id*)arg1;
- (bool)startActivityWithError:(id*)arg1;
- (bool)stopActivityWithError:(id*)arg1;
- (bool)storeSessionControllerState:(id)arg1 forRecoveryIdentifier:(id)arg2 error:(id*)arg3;
- (id)workoutDataAccumulator;
- (void)workoutSessionServer:(id)arg1 accumulatorDidChange:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didChangeConfiguration:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didTransitionToState:(long long)arg2 fromState:(long long)arg3;

@end
