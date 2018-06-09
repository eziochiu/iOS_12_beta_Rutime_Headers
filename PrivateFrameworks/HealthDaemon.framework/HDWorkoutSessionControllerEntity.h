/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutSessionControllerEntity : HDHealthEntity

+ (id)_predicateForRecoveryIdentifier:(id)arg1 workoutSession:(id)arg2;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (bool)sessionControllerEntityForRecoveryIdentifier:(id)arg1 workoutSession:(id)arg2 transaction:(id)arg3 error:(id*)arg4 block:(id /* block */)arg5;
+ (bool)storeSessionControllerEntityWithIdentifier:(id)arg1 archivedState:(id)arg2 workoutSession:(id)arg3 transaction:(id)arg4 error:(id*)arg5;

@end
