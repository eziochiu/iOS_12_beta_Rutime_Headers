/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQuantitySeriesBuilderTaskServer : HDStandardTaskServer <HKQuantitySeriesSampleBuilderTaskServerInterface> {
    HKQuantitySeriesSampleBuilderTaskServerConfiguration * _configuration;
    NSError * _fatalError;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _queue_activeHandler;
    HKQuantitySample * _series;
    long long  _state;
    id /* block */  _unitTest_saveSamplesCompletion;
    NSMutableArray * _values;
}

@property (nonatomic, readonly) long long state;
@property (nonatomic, copy) id /* block */ unitTest_saveSamplesCompletion;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (void)_queue_discardWithCompletion:(id /* block */)arg1;
- (void)_queue_finishSeriesWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_insertQuantity:(id)arg1 date:(id)arg2 completion:(id /* block */)arg3;
- (bool)_queue_insertQuantity:(id)arg1 date:(id)arg2 series:(id)arg3 forceInsert:(bool)arg4 error:(out id*)arg5;
- (bool)_queue_isStateInAllowedStates:(id)arg1 description:(id)arg2 error:(out id*)arg3;
- (void)_queue_newSeriesSaveCompleted;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (id)remoteInterface;
- (void)remote_discardWithCompletion:(id /* block */)arg1;
- (void)remote_finishSeriesWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_insertQuantity:(id)arg1 date:(id)arg2 completion:(id /* block */)arg3;
- (void)setUnitTest_saveSamplesCompletion:(id /* block */)arg1;
- (long long)state;
- (id /* block */)unitTest_saveSamplesCompletion;

@end
