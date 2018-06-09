/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHealthKitControlTaskServer : HDStandardTaskServer

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 error:(out id*)arg2;

- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (id)remoteInterface;
- (void)remote_condensableWorkoutsWithCompletion:(id /* block */)arg1;
- (void)remote_condenseWorkoutWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(id /* block */)arg3;
- (void)remote_condensedWorkoutsWithCompletion:(id /* block */)arg1;

@end
