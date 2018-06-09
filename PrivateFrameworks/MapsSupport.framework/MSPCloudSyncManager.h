/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPCloudSyncManager : NSObject <MSPCloudSynchronizerDelegate, MSPContainerObserver, MSPJournaling> {
    <MSPCloudAccess> * _access;
    MSPCloudKitAccountAccess * _cloudKitAccess;
    MSPContainer * _container;
    NSUbiquitousKeyValueStore * _correspondingKeyValueStore;
    unsigned long long  _dataCheckDelay;
    bool  _hasWrittenKVSEntriesToDiskAndMustMarkAsDone;
    MSPJournal * _journal;
    NSDate * _lastDataCheck;
    bool  _migratingFromKVS;
    GEONetworkObserver * _networkObserver;
    MSPContainerPolicyObserver * _policyObserver;
    NSObject<OS_dispatch_source> * _syncTimer;
    MSPCloudSynchronizer * _synchronizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)KVSAdditionalStoreIdentifier;
+ (id)KVSMergeableStateSnapshotForOrderedRecordsWithContents:(id)arg1;
+ (id)KVSSyncItemKeyPrefix;
+ (id)boostDateDefaultsKey;
+ (id)cloudRecordType;
+ (id)identityDefaultsKey;
+ (id)journalName;
+ (id)mergeOptionsForEarliestKnownSyncDate:(id)arg1;
+ (Class)replicaClass;
+ (Class)replicaRecordClass;
+ (bool)usesZoneWidePCS;
+ (id)zoneName;

- (void).cxx_destruct;
- (void)_didChangeContentsOfKVSStore;
- (void)_finishTask:(id)arg1 byUpdatingRegistrationRecord:(id)arg2 throughAccess:(id)arg3;
- (void)_migrateFromKVSStorageIfNeededWithCompletion:(id /* block */)arg1;
- (id)_newMergeGroupForAccess:(id)arg1;
- (id)_newRegistrationRequestUpdateGroupForAccess:(id)arg1;
- (void)_requestMergeIfNeededForUserObservableChange:(bool)arg1;
- (void)_setNeedsMergeForUserObservableChange:(bool)arg1 completion:(id /* block */)arg2;
- (id)_taskPerformingCachedFetchWithExpectedMergeSize:(long long)arg1 processingBlock:(id /* block */)arg2;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
- (void)containerDidEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2;
- (id)currentSyncClientRegistrationIdentifier;
- (void)dealloc;
- (void)getEditedRecords:(out id*)arg1 recordNamesToDelete:(out id*)arg2 fromExistingCloudRecords:(id)arg3 withReplica:(id)arg4 mergingWithReplica:(id)arg5 knownSyncDateForLeastRecentlySyncedClientIfAny:(id)arg6 creatingRecordsUsingAccess:(id)arg7;
- (id)init;
- (id)initWithContainer:(id)arg1 environment:(long long)arg2 options:(unsigned long long)arg3;
- (id)initWithContainer:(id)arg1 options:(unsigned long long)arg2;
- (void)networkReachabilityChanged;
- (void)noteDidReceiveCloudKitNotificationWithUserInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)requestMergeIfNeeded;
- (void)setNeedsMergeWithCompletion:(id /* block */)arg1;
- (bool)shouldReportState:(id)arg1;
- (void)start;
- (id)storedBoostDateForSynchronizer:(id)arg1;
- (id)storedClientRegistrationIdentifierForSynchronizer:(id)arg1;
- (id)storedUserIdentityForSynchronizer:(id)arg1;
- (void)synchronizer:(id)arg1 didFailAttemptingTask:(id)arg2 withError:(id)arg3 reattemptingAfterDate:(id)arg4;
- (void)synchronizer:(id)arg1 storeNewBoostDate:(id)arg2;
- (void)synchronizer:(id)arg1 storeNewClientRegistrationIdentifier:(id)arg2;
- (void)synchronizer:(id)arg1 storeNewUserIdentity:(id)arg2;
- (void)synchronizer:(id)arg1 userIdentityDidLogOutWithFollowUp:(long long)arg2;
- (id)taskToDownloadCloudStoreByErasingLocalStoreForSynchronizer:(id)arg1;
- (id)taskToMergeLocalAndCloudStoresForSynchronizer:(id)arg1;

@end