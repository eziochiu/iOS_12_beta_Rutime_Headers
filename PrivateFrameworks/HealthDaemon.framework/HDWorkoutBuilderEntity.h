/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutBuilderEntity : HDHealthEntity

+ (id)_workoutBuilderEntitiesForPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)columnsDefinition;
+ (id)createEntityForBuilderConfiguration:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)databaseTable;
+ (bool)discardBuilderWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)finishWorkoutBuilderWithIdentifier:(id)arg1 dateInterval:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)privateSubEntities;
+ (long long)protectionClass;
+ (id)workoutBuilderEntitiesExcludingSessions:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)workoutBuilderEntitiesForSource:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)workoutBuilderEntityWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;

- (id)_createTemporaryProtectedAssociatedSampleListInTransaction:(id)arg1 error:(id*)arg2;
- (id)_predicateForAssociatedSamplesOfType:(id)arg1 interval:(id)arg2 associatedSampleTableName:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
- (bool)_setupForEnumerationOfType:(id)arg1 interval:(id)arg2 profile:(id)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
- (bool)_setupForEnumerationOfType:(id)arg1 interval:(id)arg2 transaction:(id)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
- (long long)associateObject:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)configurationWithTransaction:(id)arg1 error:(id*)arg2;
- (id)dataIntervalInTransaction:(id)arg1 error:(id*)arg2;
- (bool)deleteStatisticsForType:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)endDateInTransaction:(id)arg1 error:(id*)arg2;
- (bool)enumerateAssociatedSampleValuesOfType:(id)arg1 interval:(id)arg2 profile:(id)arg3 error:(id*)arg4 sampleHandler:(id /* block */)arg5;
- (bool)enumerateAssociatedSamplesOfType:(id)arg1 interval:(id)arg2 profile:(id)arg3 error:(id*)arg4 sampleHandler:(id /* block */)arg5;
- (bool)enumerateAssociatedUUIDsWithTransaction:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)enumerateDataSourcesForProfile:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)enumerateStatisticsInTransaction:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)insertWorkoutEvent:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)metadataWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)pruneAssociatedSamplesToDateInterval:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)quantityTypesIncludedWhilePausedInTransaction:(id)arg1 error:(id*)arg2;
- (bool)removeDataSourceWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (id)sessionIdentifierWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)setArchivedState:(id)arg1 forDataSourceIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4;
- (bool)setDataInterval:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setDeviceEntity:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setEndDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setMetadata:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setQuantityTypesIncludedWhilePaused:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setSessionIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setStartDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)startDateInTransaction:(id)arg1 error:(id*)arg2;
- (id)statisticsForType:(id)arg1 anchor:(id*)arg2 calculator:(id*)arg3 transaction:(id)arg4 error:(id*)arg5;
- (bool)storeStatistics:(id)arg1 anchor:(id)arg2 calculator:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
- (id)workoutEventsInTransaction:(id)arg1 error:(id*)arg2;

@end
