/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutSessionTaskServer : HDStandardTaskServer <HDWorkoutDataDestination, HDWorkoutDataSource, HDWorkoutSessionObserver, HKDataFlowLinkProcessor, HKWorkoutSessionServerInterface> {
    <HDWorkoutDataAccumulator> * _accumulator;
    HDWorkoutBuilderEntity * _builderEntity;
    NSObject<OS_dispatch_queue> * _queue;
    HDWorkoutSessionServer * _sessionServer;
    HKWorkoutSessionTaskConfiguration * _taskConfiguration;
    HKDataFlowLink * _workoutDataFlowLink;
}

@property <HDWorkoutDataAccumulator> *accumulator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool requiresCoreLocationAssertion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HDWorkoutDataAccumulator> *workoutDataAccumulator;
@property (readonly) unsigned long long workoutDataDestinationState;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

+ (Class)configurationClass;
+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5 error:(id*)arg6;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (void)_queue_setupSessionServer;
- (id)accumulator;
- (void)addMetadata:(id)arg1 dataSource:(id)arg2;
- (void)addSamples:(id)arg1 dataSource:(id)arg2;
- (void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5 sessionServer:(id)arg6;
- (id)remoteInterface;
- (void)remote_endWithCompletion:(id /* block */)arg1;
- (void)remote_pauseWithCompletion:(id /* block */)arg1;
- (void)remote_prepareWithCompletion:(id /* block */)arg1;
- (void)remote_recoverWithCompletion:(id /* block */)arg1;
- (void)remote_resumeWithCompletion:(id /* block */)arg1;
- (void)remote_setupWithCompletion:(id /* block */)arg1;
- (void)remote_startActivityWithCompletion:(id /* block */)arg1;
- (void)remote_stopActivityWithCompletion:(id /* block */)arg1;
- (bool)requiresCoreLocationAssertion;
- (void)setAccumulator:(id)arg1;
- (void)setAssociatedWorkoutBuilderEntity:(id)arg1;
- (void)setWorkoutDataAccumulator:(id)arg1;
- (id)workoutDataAccumulator;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (unsigned long long)workoutDataDestinationState;
- (id)workoutDataFlowLink;
- (id)workoutDataProcessorUUID;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;

@end
