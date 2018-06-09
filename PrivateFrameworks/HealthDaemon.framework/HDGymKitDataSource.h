/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDGymKitDataSource : HDStandardTaskServer <HDWorkoutDataDestination, HDWorkoutDataSource, HKDataFlowLinkProcessor, HKGymKitDataSourceServerInterface> {
    HDWorkoutBasicDataSource * _basicDataSource;
    HKWorkoutDataSourceConfiguration * _dataSourceConfiguration;
    HKSource * _localDeviceSource;
    NSObject<OS_dispatch_queue> * _queue;
    HKDataFlowLink * _workoutDataFlowLink;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HDWorkoutDataAccumulator> *workoutDataAccumulator;
@property (readonly) unsigned long long workoutDataDestinationState;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (id)_localDevicePreferredSampleTypes;
- (id)_queue_localDeviceSource;
- (bool)_queue_shouldAddSample:(id)arg1;
- (void)addMetadata:(id)arg1 dataSource:(id)arg2;
- (void)addSamples:(id)arg1 dataSource:(id)arg2;
- (void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (id)quantityTypesToIncludeWhilePaused;
- (id)remoteInterface;
- (void)remote_setDataSourceConfiguration:(id)arg1;
- (void)remote_startTaskServerIfNeeded;
- (id)workoutDataAccumulator;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (unsigned long long)workoutDataDestinationState;
- (id)workoutDataFlowLink;
- (id)workoutDataProcessorUUID;

@end
