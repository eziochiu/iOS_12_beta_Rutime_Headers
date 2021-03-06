/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDCoreMotionAssertion : HDAssertion {
    CMWorkout * _cmWorkout;
    NSUUID * _sessionUUID;
    HKWorkoutConfiguration * _workoutConfiguration;
}

@property (nonatomic, retain) CMWorkout *cmWorkout;
@property (nonatomic, readonly) NSUUID *sessionUUID;
@property (nonatomic, readonly) HKWorkoutConfiguration *workoutConfiguration;

- (void).cxx_destruct;
- (id)cmWorkout;
- (id)initWithOwnerIdentifier:(id)arg1 sessionUUID:(id)arg2 workoutConfiguration:(id)arg3;
- (id)sessionUUID;
- (void)setCmWorkout:(id)arg1;
- (id)workoutConfiguration;

@end
