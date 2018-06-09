/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutSessionEntity : HDHealthEntity

+ (id)columnsDefinition;
+ (id)createSessionWithIdentifier:(id)arg1 source:(id)arg2 configuration:(id)arg3 state:(long long)arg4 profile:(id)arg5 error:(id*)arg6;
+ (id)databaseTable;
+ (id)lookupSessionWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)privateSubEntities;
+ (long long)protectionClass;
+ (id)sessionIdentifierForRecoveryInProfile:(id)arg1 error:(id*)arg2;
+ (id)sessionsExcludingIdentifiers:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)sessionsForSource:(id)arg1 profile:(id)arg2 error:(id*)arg3;

- (id)associatedBuilderWithTransaction:(id)arg1 error:(id*)arg2;
- (id)clientApplicationIdentifier:(id)arg1 error:(id*)arg2;
- (id)clientBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)endDateInTransaction:(id)arg1 error:(id*)arg2;
- (bool)finishWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)insertWorkoutEvent:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setAssociatedBuilder:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setClientApplicationIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setClientBundleIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setEndDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setSource:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setStartDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setState:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setWorkoutConfiguration:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)sourceWithTransaction:(id)arg1 error:(id*)arg2;
- (id)startDateInTransaction:(id)arg1 error:(id*)arg2;
- (id)stateWithTransaction:(id)arg1 error:(id*)arg2;
- (id)workoutConfigurationWithTransaction:(id)arg1 error:(id*)arg2;
- (id)workoutEventsInTransaction:(id)arg1 error:(id*)arg2;

@end
