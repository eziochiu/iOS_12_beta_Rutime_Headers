/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncRebaseOperation : NSObject <NSProgressReporting> {
    NSSet * _abandonedStoreZones;
    NSSet * _allOwnerIdentifiers;
    NSString * _cloudKitIdentifier;
    id /* block */  _completion;
    HDCloudSyncOperationConfiguration * _configuration;
    HDCloudSyncFetchOperationResult * _fetchOperationResult;
    NSUUID * _operationIdentifier;
    NSMutableSet * _prepOperations;
    NSSet * _previouslySeizedStores;
    NSSet * _primaryContainerSeizedStores;
    HDCloudSyncStoreRecord * _primaryPushStore;
    NSProgress * _progress;
    NSSet * _pullStores;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_hasStarted;
    NSSet * _secondaryContainerSeizedStores;
    NSDate * _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishWithSuccess:(bool)arg1 error:(id)arg2;
- (id)_includedIdentifiers;
- (bool)_queue_finishRebasePreparationWithError:(id*)arg1;
- (id)_queue_recordIDsToDeleteWithStoreRecord:(id)arg1;
- (void)_queue_runNewRebaseOperationIfPossible;
- (void)_queue_runRebaseOperation;
- (void)_queue_startBaselinePrepIfRequired;
- (void)_queue_startBaselinePrepOperationForPrimaryContainer:(id)arg1 abandonedStores:(id)arg2;
- (void)_queue_startBaselinePrepOperationForSecondaryContainers:(id)arg1 abandonedStores:(id)arg2;
- (bool)_queue_updatePersistedStateForStore:(id)arg1 error:(id*)arg2;
- (id)_queue_updatedAbandonedStoresByContainerID;
- (id)initWithConfiguration:(id)arg1 fetchOperationResult:(id)arg2;
- (id)progress;
- (void)startWithCompletion:(id /* block */)arg1;

@end
