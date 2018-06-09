/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMockWorkoutDataDestination : NSObject <HDWorkoutDataDestination, HKDataFlowLinkProcessor> {
    NSUUID * _dataProcessorUUID;
    NSMutableArray * _dataSources;
    id /* block */  _eventHandler;
    id /* block */  _metadataHandler;
    HDProfile * _profile;
    id /* block */  _sampleHandler;
    HKWorkoutConfiguration * _workoutConfiguration;
    unsigned long long  _workoutDataDestinationState;
    HKDataFlowLink * _workoutDataFlowLink;
    <HDWorkoutDataAccumulator> * workoutDataAccumulator;
}

@property (nonatomic, retain) NSMutableArray *dataSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ eventHandler;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ metadataHandler;
@property (nonatomic, retain) HDProfile *profile;
@property (copy) id /* block */ sampleHandler;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKWorkoutConfiguration *workoutConfiguration;
@property (nonatomic, readonly) <HDWorkoutDataAccumulator> *workoutDataAccumulator;
@property unsigned long long workoutDataDestinationState;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

- (void).cxx_destruct;
- (void)addMetadata:(id)arg1 dataSource:(id)arg2;
- (void)addSamples:(id)arg1 dataSource:(id)arg2;
- (void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2;
- (id)dataSources;
- (id /* block */)eventHandler;
- (id)initWithQueue:(id)arg1 profile:(id)arg2 workoutConfiguration:(id)arg3;
- (id /* block */)metadataHandler;
- (id)profile;
- (id /* block */)sampleHandler;
- (void)setDataSources:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setMetadataHandler:(id /* block */)arg1;
- (void)setProfile:(id)arg1;
- (void)setSampleHandler:(id /* block */)arg1;
- (void)setWorkoutConfiguration:(id)arg1;
- (void)setWorkoutDataDestinationState:(unsigned long long)arg1;
- (id)workoutConfiguration;
- (id)workoutDataAccumulator;
- (unsigned long long)workoutDataDestinationState;
- (id)workoutDataFlowLink;
- (id)workoutDataProcessorUUID;

@end
