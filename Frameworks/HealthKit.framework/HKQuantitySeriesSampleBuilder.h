/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKQuantitySeriesSampleBuilder : NSObject <_HKXPCExportable> {
    HKDevice * _device;
    NSError * _fatalError;
    HKHealthStore * _healthStore;
    NSUUID * _identifier;
    HKTaskServerProxyProvider * _proxyProvider;
    HKQuantityType * _quantityType;
    NSObject<OS_dispatch_queue> * _queue;
    NSDate * _startDate;
    long long  _state;
    id /* block */  _unitTest_insertQuantityCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HKQuantityType *quantityType;
@property (readonly, copy) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTest_insertQuantityCompletion;
@property (nonatomic, readonly) long long unitTest_state;

+ (id)_clientErrorForFinishedSeries;
+ (id)_exceptionForPreviouslyDiscardedBuilder;
+ (id)serverInterface;

- (void).cxx_destruct;
- (bool)_changeStateForDiscardWithError:(out id*)arg1;
- (void)_changeStateForFatalError:(id)arg1;
- (bool)_changeStateForFinishWithError:(out id*)arg1;
- (bool)_changeStateForInsertWithError:(out id*)arg1;
- (void)_discardWithCompletion:(id /* block */)arg1;
- (id)_queue_clientErrorForFatalError;
- (void)_taskServer_discardWithCompletion:(id /* block */)arg1;
- (void)_taskServer_finishSeriesWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)_taskServer_insertQuantity:(id)arg1 date:(id)arg2 completion:(id /* block */)arg3;
- (bool)_validateDate:(id)arg1 error:(out id*)arg2;
- (bool)_validateQuantity:(id)arg1 error:(out id*)arg2;
- (void)connectionInvalidated;
- (id)device;
- (void)discard;
- (id)exportedInterface;
- (void)finishSeriesWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithHealthStore:(id)arg1 quantityType:(id)arg2 startDate:(id)arg3 allowDiscreteSamples:(bool)arg4 device:(id)arg5;
- (id)initWithHealthStore:(id)arg1 quantityType:(id)arg2 startDate:(id)arg3 device:(id)arg4;
- (bool)insertQuantity:(id)arg1 date:(id)arg2 error:(id*)arg3;
- (id)quantityType;
- (id)remoteInterface;
- (void)setUnitTest_insertQuantityCompletion:(id /* block */)arg1;
- (id)startDate;
- (void)unitTest_discardWithCompletion:(id /* block */)arg1;
- (id /* block */)unitTest_insertQuantityCompletion;
- (long long)unitTest_state;

@end
