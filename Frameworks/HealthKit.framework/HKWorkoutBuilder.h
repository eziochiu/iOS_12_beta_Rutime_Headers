/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkoutBuilder : NSObject <HKWorkoutBuilderClientInterface, _HKXPCExportable> {
    double  _accumulatedElapsedTime;
    HKWorkoutBuilderConfiguration * _builderConfiguration;
    bool  _currentlyRunning;
    HKHealthStore * _healthStore;
    NSUUID * _identifier;
    double  _lastResumeTimestamp;
    NSDictionary * _metadata;
    HKTaskServerProxyProvider * _proxyProvider;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    NSMutableDictionary * _seriesBuilders;
    NSMutableDictionary * _statisticsByType;
    HKWorkoutConfiguration * _workoutConfiguration;
    NSDate * _workoutEndDate;
    NSArray * _workoutEvents;
    NSDate * _workoutStartDate;
}

@property (nonatomic, copy) HKWorkoutBuilderConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKDevice *device;
@property (readonly, copy) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (readonly) bool isCurrentlyRunning;
@property (readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly) HKTaskServerProxyProvider *proxyProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resourceQueue;
@property (nonatomic, retain) NSMutableDictionary *seriesBuilders;
@property (readonly, copy) NSDate *startDate;
@property (nonatomic, retain) NSMutableDictionary *statisticsByType;
@property (readonly) Class superclass;
@property (readonly, copy) HKWorkoutConfiguration *workoutConfiguration;
@property (readonly, copy) NSArray *workoutEvents;

+ (double)_elapsedTimeAtDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 sortedEvents:(id)arg4;
+ (long long)_stateAtDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 sortedEvents:(id)arg4;
+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (double)_currentElapsedTime;
- (id)_currentSnapshot;
- (id)_endDateForSnapshot;
- (void)_recoverWithCompletion:(id /* block */)arg1;
- (void)_resourceQueue_addMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)_resourceQueue_addSamples:(id)arg1 completion:(id /* block */)arg2;
- (void)_resourceQueue_addWorkoutEvents:(id)arg1 completion:(id /* block */)arg2;
- (void)_resourceQueue_beginCollectionWithStartDate:(id)arg1 completion:(id /* block */)arg2;
- (void)_resourceQueue_endCollectionWithEndDate:(id)arg1 completion:(id /* block */)arg2;
- (void)_resourceQueue_finishWorkoutWithCompletion:(id /* block */)arg1;
- (void)_resourceQueue_freezeSeriesBuilders;
- (id)_resourceQueue_seriesBuilderWithIdentifier:(id)arg1 type:(id)arg2;
- (void)_resourceQueue_updateDevice:(id)arg1;
- (void)_resourceQueue_updateElapsedTimeCache;
- (void)_restoreRecoveredSeriesBuildersWithCompletion:(id /* block */)arg1;
- (void)_setDevice:(id)arg1;
- (id)_startDateForSnapshot;
- (id /* block */)_successCompletionBlockOnClientQueue:(id /* block */)arg1;
- (bool)_validateObjects:(id)arg1 forClass:(Class)arg2 error:(out id*)arg3;
- (void)addMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)addSamples:(id)arg1 completion:(id /* block */)arg2;
- (void)addWorkoutEvents:(id)arg1 completion:(id /* block */)arg2;
- (void)beginCollectionWithStartDate:(id)arg1 completion:(id /* block */)arg2;
- (void)clientRemote_didChangeElapsedTimeBasisWithStartDate:(id)arg1 endDate:(id)arg2;
- (void)clientRemote_didRecoverSeriesBuilders:(id)arg1;
- (void)clientRemote_didUpdateEvents:(id)arg1;
- (void)clientRemote_didUpdateMetadata:(id)arg1;
- (void)clientRemote_didUpdateStatistics:(id)arg1;
- (id)configuration;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)device;
- (void)discardWorkout;
- (double)elapsedTimeAtDate:(id)arg1;
- (void)endCollectionWithEndDate:(id)arg1 completion:(id /* block */)arg2;
- (id)endDate;
- (id)exportedInterface;
- (void)finishWorkoutWithCompletion:(id /* block */)arg1;
- (void)finishWorkoutWithEndDate:(id)arg1 metadata:(id)arg2 completion:(id /* block */)arg3;
- (id)goal;
- (unsigned long long)goalType;
- (id)healthStore;
- (id)identifier;
- (id)init;
- (id)initWithHealthStore:(id)arg1 builderConfiguration:(id)arg2 builderIdentifier:(id)arg3;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2 device:(id)arg3;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2 goalType:(unsigned long long)arg3 goal:(id)arg4 device:(id)arg5;
- (bool)isCurrentlyRunning;
- (id)metadata;
- (id)proxyProvider;
- (id)remoteInterface;
- (id)resourceQueue;
- (id)seriesBuilderForType:(id)arg1;
- (id)seriesBuilders;
- (void)setConfiguration:(id)arg1;
- (void)setSeriesBuilders:(id)arg1;
- (void)setStatisticsByType:(id)arg1;
- (id)startDate;
- (id)statisticsByType;
- (id)statisticsForType:(id)arg1;
- (id)workoutConfiguration;
- (id)workoutEvents;

@end
