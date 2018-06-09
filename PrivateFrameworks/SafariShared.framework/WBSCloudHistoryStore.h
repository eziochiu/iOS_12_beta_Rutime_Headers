/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudHistoryStore : NSObject <WBSCloudHistoryDataStore> {
    NSOperationQueue * _cloudKitOperationQueue;
    WBSCloudHistoryConfiguration * _configuration;
    CKDatabase * _database;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    CKRecordZone * _recordZone;
    CKRecordZoneID * _recordZoneID;
}

- (void).cxx_destruct;
- (void)_appendRecord:(id)arg1 toResult:(id)arg2;
- (void)_batchSaveRecords:(id)arg1 useLongLivedOperation:(bool)arg2 longLivedOperationPersistenceCompletion:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_configureFetchChangesOperation:(id)arg1;
- (id)_dictionaryForRecordData:(id)arg1;
- (void)_fetchRecordsWithServerChangeToken:(id)arg1 numberOfFetchRecordsOperationsPerformedSoFar:(unsigned long long)arg2 result:(id)arg3 completion:(id /* block */)arg4;
- (void)_prepareRecordZoneWithCompletion:(id /* block */)arg1;
- (id)_recordDataForDictionary:(id)arg1;
- (id)_recordWithCloudHistoryVisits:(id)arg1;
- (id)_recordWithHistoryTombstones:(id)arg1 version:(unsigned long long)arg2;
- (id)_recordWithType:(id)arg1 version:(unsigned long long)arg2 dataDictionary:(id)arg3;
- (id)_recordsWithCloudHistoryVisits:(id)arg1;
- (void)_resetRecordZone;
- (void)_saveCloudHistoryVisits:(id)arg1 tombstones:(id)arg2 longLivedOperationPersistenceCompletion:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_saveRecords:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_scheduleOperation:(id)arg1;
- (bool)_shouldTryToResetRecordZoneForError:(id)arg1;
- (void)fetchNumberOfDevicesInSyncCircleWithCompletion:(id /* block */)arg1;
- (void)fetchRecordsWithServerChangeTokenData:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)initializePushNotifications:(id /* block */)arg1;
- (void)replayPersistedLongLivedSaveOperationWithID:(id)arg1 completion:(id /* block */)arg2;
- (void)saveCloudHistoryVisits:(id)arg1 tombstones:(id)arg2 longLivedOperationPersistenceCompletion:(id /* block */)arg3 completion:(id /* block */)arg4;

@end
