/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKAnchoredObjectQuery : HKQuery <HKAnchoredObjectQueryClientInterface> {
    HKQueryAnchor * _anchor;
    double  _collectionInterval;
    id /* block */  _completionHandler;
    NSMutableArray * _deletedObjectsPendingDelivery;
    bool  _includeDeletedObjects;
    bool  _initialHandlerCalled;
    unsigned long long  _limit;
    NSMutableArray * _samplesPendingDelivery;
    id /* block */  _updateHandler;
}

@property (nonatomic, retain) HKQueryAnchor *anchor;
@property (nonatomic) double collectionInterval;
@property (nonatomic, readonly) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeDeletedObjects;
@property (nonatomic) unsigned long long limit;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateHandler;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (id)anchor;
- (void)client_deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 anchor:(id)arg3 clearPendingSamples:(bool)arg4 deliverResults:(bool)arg5 query:(id)arg6;
- (double)collectionInterval;
- (id /* block */)completionHandler;
- (bool)includeDeletedObjects;
- (id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(unsigned long long)arg3 limit:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(id)arg3 limit:(unsigned long long)arg4 resultsHandler:(id /* block */)arg5;
- (unsigned long long)limit;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)setAnchor:(id)arg1;
- (void)setCollectionInterval:(double)arg1;
- (void)setIncludeDeletedObjects:(bool)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end