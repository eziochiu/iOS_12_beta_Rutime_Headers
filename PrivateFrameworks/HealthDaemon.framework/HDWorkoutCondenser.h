/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutCondenser : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {
    long long  _maximumSeriesSize;
    long long  _minimumSeriesSize;
    HDPeriodicActivity * _periodicActivity;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;

+ (bool)_condenseAndUpdateWorkout:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (bool)_condenseSamplesWithQuantityType:(id)arg1 workout:(id)arg2 entity:(id)arg3 predicate:(id)arg4 configuration:(id)arg5 transaction:(id)arg6 error:(id*)arg7;
+ (bool)_condenseWorkout:(id)arg1 entity:(id)arg2 configuration:(id)arg3 error:(id*)arg4;
+ (bool)_condenseWorkouts:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (bool)_createSeriesForIdentifier:(id)arg1 workout:(id)arg2 quantityType:(id)arg3 startTime:(double)arg4 values:(id)arg5 sampleUUIDsToDelete:(id)arg6 provenance:(id)arg7 configuration:(id)arg8 transaction:(id)arg9 error:(id*)arg10;
+ (id)_dataOriginProvenanceForQuantitySampleEntity:(id)arg1 configuration:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)_deleteSamplesWithUUIDS:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (bool)_finishSeries:(id)arg1 workout:(id)arg2 sampleUUIDsToDelete:(id)arg3 configuration:(id)arg4 transaction:(id)arg5 error:(id*)arg6;
+ (bool)_hasMoreThanMinimumNumberOfSingleValueSamplesWithEntity:(id)arg1 enumerationPredicate:(id)arg2 configuration:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (bool)_hasSamplesThatOverlapInTimeWithEntity:(id)arg1 enumerationPredicate:(id)arg2 configuration:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (id)_insertValuesForSeries:(id)arg1 quantityType:(id)arg2 startTime:(double)arg3 values:(id)arg4 provenance:(id)arg5 configuration:(id)arg6 transaction:(id)arg7 countOut:(long long*)arg8 error:(id*)arg9;
+ (void)_logCondenserProcessedWorkout:(id)arg1;
+ (bool)_processSamplesWithQuantityType:(id)arg1 workout:(id)arg2 predicate:(id)arg3 configuration:(id)arg4 transaction:(id)arg5 error:(id*)arg6;
+ (bool)_requiresProcessingWithEntity:(id)arg1 enumerationPredicate:(id)arg2 configuration:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (id)_seriesSyncIdentifierForWorkout:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 count:(long long)arg4;
+ (bool)_updateCondenserVersionForWorkout:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (id)_workoutEntitiesRequiringCondensationWithPredicate:(id)arg1 limit:(long long)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4 transaction:(id)arg5 error:(id*)arg6;
+ (id)condensableQuantityTypes;
+ (id)workoutEntitiesRequiringCondensationWithProfile:(id)arg1 limit:(long long)arg2 allowRecondensation:(bool)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (bool)_queue_condenseWorkoutsWithAccessibilityAssertion:(id)arg1 batchLimit:(long long)arg2 error:(id*)arg3;
- (bool)_queue_condenseWorkoutsWithBatchLimit:(long long)arg1 error:(id*)arg2;
- (void)_queue_didPerformCondensationForReason:(long long)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_queue_popTTRPromptIfRequiredWithReason:(long long)arg1 success:(bool)arg2 error:(id)arg3;
- (id)condensableWorkoutsWithError:(id*)arg1;
- (bool)condenseWorkout:(id)arg1 error:(id*)arg2;
- (void)condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(id /* block */)arg3;
- (id)condensedWorkoutsWithError:(id*)arg1;
- (void)daemonReady:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (bool)periodicActivityRequiresProtectedData:(id)arg1;
- (id)profile;
- (void)setMaximumSeriesSize:(long long)arg1;
- (void)setMinimumSeriesSize:(long long)arg1;

@end
