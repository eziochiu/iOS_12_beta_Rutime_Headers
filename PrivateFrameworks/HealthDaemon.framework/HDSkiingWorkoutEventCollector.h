/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSkiingWorkoutEventCollector : HDWorkoutEventCollector {
    CMSkiData * _referenceSkiData;
    CMSkiTracker * _skiTracker;
    NSObject<OS_dispatch_queue> * _workoutEventQueue;
}

+ (bool)isAvailableInCurrentHardware;

- (void).cxx_destruct;
- (double)_percentSlopeForAngle:(double)arg1;
- (void)_queue_errorOccurred:(id)arg1;
- (id)_queue_generateDownhillSnowSportsDistanceSampleForSkiData:(id)arg1 referenceData:(id)arg2;
- (void)_queue_generateSegmentEventForSkiData:(id)arg1 referenceData:(id)arg2;
- (void)_queue_processSkiData:(id)arg1 error:(id)arg2;
- (void)_queue_querySkiDataWithCompletion:(id /* block */)arg1;
- (void)_queue_saveDownhillSnowSportsDistanceSamples:(id)arg1;
- (void)_queue_startCollectionWithSessionId:(id)arg1;
- (void)_queue_stopCollection;
- (void)immediateUpdateWithCompletion:(id /* block */)arg1;
- (id)initWithProfile:(id)arg1 delegate:(id)arg2;
- (void)startWithSessionId:(id)arg1;
- (void)stop;
- (bool)supportsWorkoutActivityType:(unsigned long long)arg1;

@end
