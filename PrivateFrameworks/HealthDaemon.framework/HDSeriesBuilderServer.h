/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSeriesBuilderServer : HDStandardTaskServer <HKSeriesBuilderServerInterface> {
    HKSeriesBuilderConfiguration * _configuration;
    HDSeriesBuilderEntity * _persistentEntity;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _queue_state;
    HKSeriesSample * _seriesSample;
}

@property (nonatomic, copy) HKSeriesBuilderConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDSeriesBuilderEntity *persistentEntity;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (setter=queue_setState:, nonatomic) long long queue_state;
@property (nonatomic, retain) HKSeriesSample *seriesSample;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (bool)validateConfiguration:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (void)_queue_addMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_discardIfAuthorizedWithCompletion:(id /* block */)arg1;
- (void)_queue_discardSeriesWithCompletion:(id /* block */)arg1;
- (void)_queue_recoverOrCreatePersistentEntity;
- (void)associateToWorkoutBuilderWithCompletion:(id /* block */)arg1;
- (bool)canAddMetadata:(id)arg1 errorOut:(id*)arg2;
- (id)configuration;
- (void)connectionInvalidated;
- (void)createSeriesSampleIfNeeded:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id)description;
- (void)discardSeriesWithCompletion:(id /* block */)arg1;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (id)persistentEntity;
- (id)queue;
- (bool)queue_canInsertDataWithErrorHandler:(id /* block */)arg1;
- (void)queue_freezeBuilderWithCompletion:(id /* block */)arg1;
- (void)queue_recoverBuilder;
- (void)queue_setState:(long long)arg1;
- (long long)queue_state;
- (id)remoteInterface;
- (void)remote_addMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_discardWithCompletion:(id /* block */)arg1;
- (void)remote_freezeWithCompletion:(id /* block */)arg1;
- (void)remote_recoverWithCompletion:(id /* block */)arg1;
- (id)seriesSample;
- (void)setConfiguration:(id)arg1;
- (void)setPersistentEntity:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSeriesSample:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
