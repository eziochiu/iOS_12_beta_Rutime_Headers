/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutBasicDataSource : NSObject <HDClientDataCollectionObservationStateMonitorDelegate, HDDataObserver, HDWorkoutDataSource, HKDataFlowLinkProcessor> {
    HDXPCClient * _client;
    HDClientDataCollectionObservationStateMonitor * _clientStateMonitor;
    HDDataCollectionAssertion * _collectionAssertion;
    NSLock * _lock;
    HDProfile * _profile;
    NSSet * _sampleTypesToCollect;
    HKWorkoutConfiguration * _workoutConfiguration;
    HKDataFlowLink * _workoutDataFlowLink;
    NSUUID * _workoutDataProcessorUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *sampleTypesToCollect;
@property (readonly) Class superclass;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

- (void).cxx_destruct;
- (double)_collectionInterval;
- (bool)_enumerateSamplesOfType:(id)arg1 from:(id)arg2 to:(id)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
- (void)_forwardSamples:(id)arg1;
- (id)_initialMetadata;
- (void)_startObservingSampleTypes:(id)arg1;
- (void)_stopCollection;
- (void)_stopObservingSampleTypes:(id)arg1;
- (void)dataCollectionObservationStateDidChangeForClient:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 workoutConfiguration:(id)arg2 client:(id)arg3;
- (id)sampleTypesToCollect;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesJournaled:(id)arg1 type:(id)arg2;
- (void)setSampleTypesToCollect:(id)arg1;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (id)workoutDataFlowLink;
- (id)workoutDataProcessorUUID;

@end
