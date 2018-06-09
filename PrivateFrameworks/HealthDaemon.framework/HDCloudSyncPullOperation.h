/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncPullOperation : NSObject <NSProgressReporting> {
    NSProgress * _allAssetProgress;
    NSString * _cloudKitIdentifier;
    id /* block */  _completion;
    HDCloudSyncOperationConfiguration * _configuration;
    CKContainer * _container;
    NSMutableArray * _fetchedChangeRecords;
    NSFileHandle * _fileHandle;
    bool  _hasAppliedChange;
    CKServerChangeToken * _initialServerChangeToken;
    NSUUID * _operationIdentifier;
    NSProgress * _perAssetRecordProgress;
    NSProgress * _progress;
    HDCloudSyncZone * _pullZone;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_hasStarted;
    CKServerChangeToken * _serverChangeToken;
    NSDate * _startTime;
    HDCloudSyncStoreRecord * _storeRecord;
    HDCloudSyncStore * _syncStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) _HDCloudSyncStorePersistableState *persistedStoreState;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;

+ (id)_assetFileHandleWithName:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)_applySyncChanges:(id)arg1 store:(id)arg2 error:(id*)arg3;
- (void)_fetchRecordZoneChangesCompletionForOperation:(id)arg1 error:(id)arg2;
- (void)_fetchRecordsCompletionForOperation:(id)arg1 recordsByRecordID:(id)arg2 operatioError:(id)arg3 completion:(id /* block */)arg4;
- (void)_finishWithSuccess:(bool)arg1 error:(id)arg2;
- (bool)_isValidAnchorRangeMap:(id)arg1 lastAnchorMap:(id)arg2 error:(id*)arg3;
- (bool)_isValidChangeRecord:(id)arg1;
- (void)_perRecordCompletionForOperation:(id)arg1 record:(id)arg2 recordID:(id)arg3 recordAssetContentInMemory:(bool)arg4 error:(id)arg5 errorCompletion:(id /* block */)arg6;
- (void)_queue_endFetchChangesOperation:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_queue_fetchAssetForChangeRecord:(id)arg1 continuation:(id /* block */)arg2;
- (void)_queue_fetchAssetsForOrderedChangeRecords:(id)arg1 operation:(id)arg2;
- (id)_queue_getFetchChangesOperation;
- (void)_queue_helpFetchAssetsForOrderedChangeRecords:(id)arg1 operation:(id)arg2 recordIndex:(long long)arg3;
- (bool)_queue_persistFetchedArchiveAsset:(id)arg1 error:(id*)arg2;
- (void)_queue_recordChangeApplied;
- (id)_queue_requiredRecordsWithFetchedChangeRecords:(id)arg1 error:(id*)arg2;
- (void)_queue_setupAndTriggerFetchChangesOperation:(id)arg1;
- (void)_queue_startPullOperation;
- (bool)_queue_updatePersistedServerChangeToken:(id)arg1 error:(id*)arg2;
- (void)_recordChangedForOperation:(id)arg1 record:(id)arg2;
- (void)_recordZoneFetchCompletionForOperation:(id)arg1 recordZoneID:(id)arg2 serverChangeToken:(id)arg3 recordZoneError:(id)arg4;
- (bool)_shouldApplyAnchorRangeMap:(id)arg1 receivedAnchorMap:(id)arg2;
- (id)_zipArchiveExtractorForChangeRecord:(id)arg1 assetContentInMemory:(bool)arg2 error:(id*)arg3;
- (id)initWithConfiguration:(id)arg1 pullZone:(id)arg2;
- (id)persistedStoreState;
- (id)progress;
- (void)startWithCompletion:(id /* block */)arg1;

@end
