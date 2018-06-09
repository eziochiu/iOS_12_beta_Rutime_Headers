/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAnchoredObjectQueryServer : HDBatchedQueryServer {
    NSMutableArray * _addedSamplesPendingResume;
    HKQueryAnchor * _anchor;
    NSObject<OS_dispatch_queue> * _batchQueue;
    NSMutableArray * _deletedSamplesPendingResume;
    unsigned long long  _deliveredResults;
    bool  _deliversUpdates;
    bool  _includeDeletedObjects;
    bool  _initialResultsSent;
    unsigned long long  _limit;
    bool  _objectsDeleted;
    bool  _shouldResetAnchor;
    HKQueryAnchor * _startAnchor;
}

@property (nonatomic, readonly, copy) HKQueryAnchor *anchor;
@property (nonatomic, readonly) unsigned long long limit;

+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)supportsAnchorBasedAuthorization;

- (void).cxx_destruct;
- (id)_maxRowIDInDatabaseWithError:(id*)arg1;
- (id)_queue_configuredEntityEnumerator;
- (void)_queue_deliverSamples:(id)arg1 deletedObjects:(id)arg2 anchor:(id)arg3 clearPendingSamples:(bool)arg4 deliverResults:(bool)arg5 description:(id)arg6;
- (void)_queue_handleBatchedQueryResult:(long long)arg1 error:(id)arg2;
- (void)_queue_samplesWereRemovedWithAnchor:(id)arg1;
- (bool)_queue_shouldAcceptUpdates;
- (bool)_queue_shouldAccumulateUpdates;
- (void)_queue_start;
- (void)_queue_startForInitialResults;
- (void)_queue_startForUpdate;
- (bool)_shouldListenForUpdates;
- (bool)_shouldObserveOnPause;
- (id)anchor;
- (id)anchoredObjectQueryClient;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (unsigned long long)limit;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;

@end
