/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCoreMotionWorkoutInterface : NSObject <HDAssertionObserver> {
    HDAssertionManager * _assertionManager;
    CMWorkoutManager * _cmWorkoutManager;
    CMWorkout * _currentCMWorkout;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_queue_cmWorkoutForConfiguration:(id)arg1 sessionUUID:(id)arg2;
- (id)_queue_coreMotionWorkoutManager;
- (unsigned long long)_queue_countActiveAssertionsForSessionUUID:(id)arg1;
- (void)_queue_startWorkoutWithAssertion:(id)arg1;
- (void)_queue_stopWorkoutWithAssertion:(id)arg1;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (id)init;
- (id)takeCMWorkoutAssertionForOwnerIdentifier:(id)arg1 sessionUUID:(id)arg2 workoutConfiguration:(id)arg3;
- (void)unitTest_setCMWorkoutManager:(id)arg1;

@end
