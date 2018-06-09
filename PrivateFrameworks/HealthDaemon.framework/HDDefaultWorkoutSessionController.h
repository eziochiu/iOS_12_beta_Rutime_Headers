/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDefaultWorkoutSessionController : NSObject <HDWorkoutEventCollectorDelegate, HDWorkoutSessionController> {
    HDSessionAssertionGroup * _assertionGroup;
    HDWorkoutEventsManager * _eventsManager;
    id /* block */  _hkTestTransitionCompletionHandler;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDWorkoutSessionConfiguration * _sessionConfiguration;
    long long  _sessionServerState;
    <HDWorkoutSessionStateController> * _sessionStateController;
}

+ (id)recoveryIdentifier;

- (void).cxx_destruct;
- (id)_queue_assertionsPerStateForActivityType:(unsigned long long)arg1;
- (void)_queue_setupAssertionGroup;
- (id)_relaunchPayloadOptions;
- (void)dealloc;
- (void)hktest_setStateTransitionCompletionHandler:(id /* block */)arg1;
- (id)initWithProfile:(id)arg1 sessionConfiguration:(id)arg2 sessionStateController:(id)arg3 recoveryState:(id)arg4;
- (void)receivedWorkoutEvent:(id)arg1;
- (void)workoutSessionServer:(id)arg1 accumulatorDidChange:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didChangeConfiguration:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didTransitionToState:(long long)arg2 fromState:(long long)arg3;

@end
