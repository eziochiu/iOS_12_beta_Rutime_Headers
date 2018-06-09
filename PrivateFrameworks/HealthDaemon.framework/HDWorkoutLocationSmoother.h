/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutLocationSmoother : NSObject <CLLocationSmootherDelegate> {
    HDSmoothingTask * _currentSmoothingTask;
    NSMutableArray * _pendingSmoothingTasks;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    CLLocationSmoother * _smoother;
    double  _smoothingTaskTimeout;
    NSObject<OS_dispatch_source> * _timeoutSource;
    NSString * _xpcTransactionName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_containsWorkoutObject:(id)arg1 error:(id*)arg2;
- (id)_createWorkoutRouteWithMetadata:(id)arg1 sourceEntity:(id)arg2 locations:(id)arg3 error:(id*)arg4;
- (bool)_deleteSample:(id)arg1 error:(id*)arg2;
- (void)_finishSmoothingSample;
- (id)_locationsForSampleUUID:(id)arg1 error:(id*)arg2;
- (void)_queue_cancelTimeout;
- (id)_queue_createNewSeriesFromTask:(id)arg1 locations:(id)arg2 error:(id*)arg3;
- (void)_queue_locationManagerDidSmoothLocations:(id)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)_queue_saveLocations:(id)arg1 forTask:(id)arg2 smoothingError:(id)arg3;
- (void)_queue_scheduleSmoothingTimeoutTimerForTask:(id)arg1;
- (void)_queue_smoothNextSample;
- (void)_queue_smoothRouteSampleForTask:(id)arg1;
- (void)_queue_smoothingDidFailForTask:(id)arg1 error:(id)arg2 shouldRetry:(bool)arg3;
- (void)_queue_startSmoothingTask:(id)arg1;
- (bool)_workoutExistsForSample:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (void)smoothRouteSample:(id)arg1;
- (void)unitTest_smoothRouteSample:(id)arg1 withSmoother:(id)arg2 completion:(id /* block */)arg3;

@end
