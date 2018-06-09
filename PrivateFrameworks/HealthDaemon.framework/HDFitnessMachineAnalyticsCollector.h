/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessMachineAnalyticsCollector : NSObject {
    HKPersistentTimer * _authorizationTimer;
    HDAWDHealthKitGymKitWorkoutEvent * _gymKitWorkoutEvent;
}

@property (nonatomic, retain) HKPersistentTimer *authorizationTimer;
@property (nonatomic, retain) HDAWDHealthKitGymKitWorkoutEvent *gymKitWorkoutEvent;

- (void).cxx_destruct;
- (long long)_failureReasonForError:(id)arg1;
- (void)_recordTimeToAuthorize;
- (void)_reset;
- (id)authorizationTimer;
- (id)gymKitWorkoutEvent;
- (id)init;
- (void)setAuthorizationTimer:(id)arg1;
- (void)setFitnessMachineType:(unsigned long long)arg1 manufacturer:(id)arg2;
- (void)setGymKitWorkoutEvent:(id)arg1;
- (void)userBeganPairing;
- (void)userIsAuthorized;
- (void)workoutEnded;
- (void)workoutFailedWithError:(id)arg1;

@end
