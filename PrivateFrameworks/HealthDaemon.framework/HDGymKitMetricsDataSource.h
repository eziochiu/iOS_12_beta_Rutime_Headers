/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDGymKitMetricsDataSource : HDStandardTaskServer <HDMetricsCollectorObserver, HDWorkoutDataSource, HKDataFlowLinkProcessor> {
    NSMutableDictionary * _accumulatedMetadata;
    NSLock * _lock;
    HKDataFlowLink * _workoutDataFlowLink;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (id)_metadataFromMetrics:(id)arg1;
- (void)_startObservingMetrics;
- (void)_stopObservingMetrics;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (void)metricsCollector:(id)arg1 didCollectMetrics:(id)arg2;
- (id)remoteInterface;
- (void)remote_startTaskServerIfNeeded;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (id)workoutDataFlowLink;
- (id)workoutDataProcessorUUID;

@end
