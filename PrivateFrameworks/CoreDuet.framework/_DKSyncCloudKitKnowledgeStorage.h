/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncCloudKitKnowledgeStorage : NSObject {
    bool  _cloudSyncAvailablityObserverRegistered;
    CKContainer * _container;
    <_DKSyncRemoteKnowledgeStorageFetchDelegate> * _delegate;
    bool  _isAvailable;
    <_DKKeyValueStore> * _keyValueStore;
    NSHashTable * _outstandingOperations;
    NSOperation * _previousDependentOperation;
    bool  _started;
    _DKSyncPeerStatusTracker * _tracker;
    NSDictionary * _zoneIDsBySourceDeviceID;
}

@property (retain) <_DKSyncRemoteKnowledgeStorageFetchDelegate> *delegate;
@property bool isAvailable;

+ (id)deviceIDFromZoneID:(id)arg1;
+ (id)mySyncZoneID;
+ (void)setMySyncZoneID:(id)arg1;
+ (id)sharedInstance;
+ (id)zoneIDWithDeviceID:(id)arg1;

- (void).cxx_destruct;
- (void)_cloudSyncAvailabilityDidChange:(id)arg1;
- (void)_createZoneWithZoneID:(id)arg1 completion:(id /* block */)arg2;
- (void)_performThrottledUpdateSyncedDeviceIdentifiersWithCompletion:(id /* block */)arg1;
- (id)_previousServerChangeTokenForRecordZoneID:(id)arg1;
- (id)_previousServerChangeTokenKeyForRecordZoneID:(id)arg1;
- (bool)_queueOperationForPrivateCloudDatabase:(id)arg1 dependent:(bool)arg2 policy:(id)arg3 error:(id*)arg4;
- (void)_registerCloudSyncAvailablityObserver;
- (void)_resetPreviousServerChangeTokenForRecordZoneID:(id)arg1;
- (void)_setPreviousServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2;
- (void)_storeZoneIDFromRecords:(id)arg1 orError:(id)arg2;
- (void)_unregisterCloudSyncAvailablityObserver;
- (void)cancelOutstandingOperations;
- (void)configureCloudPseudoPeerWithMySyncZoneID:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 highPriority:(bool)arg4 completion:(id /* block */)arg5;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchEventsFromPeer:(id)arg1 creationDateBetweenDate:(id)arg2 andDate:(id)arg3 streamNames:(id)arg4 limit:(unsigned long long)arg5 fetchOrder:(long long)arg6 highPriority:(bool)arg7 completion:(id /* block */)arg8;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)finishUpdatingSyncedDeviceIdentifiersWithMySyncZoneID:(id)arg1 orError:(id)arg2 zoneIDsBySourceDeviceID:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
- (bool)isAvailable;
- (id)name;
- (void)performUpdateSyncedDeviceIdentifiersWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchDelegate:(id)arg1;
- (void)setIsAvailable:(bool)arg1;
- (void)setZoneIDsBySourceDeviceID:(id)arg1;
- (void)start;
- (void)syncDownAdditionsFromCloudWithZoneID:(id)arg1 creationDateBetweenDate:(id)arg2 andDate:(id)arg3 streamNames:(id)arg4 limit:(unsigned long long)arg5 fetchOrder:(long long)arg6 completion:(id /* block */)arg7;
- (void)syncDownDeletionsFromCloudWithZoneID:(id)arg1 completion:(id /* block */)arg2;
- (void)syncDownDeletionsFromCloudWithZoneID:(id)arg1 deletedRecordIDsAndTypes:(id)arg2 attempt:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)syncUpToCloudWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 completion:(id /* block */)arg3;
- (long long)transportType;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(bool)arg3 completion:(id /* block */)arg4;
- (void)updateSyncedDeviceIdentifiersWithRecordZonesByZoneID:(id)arg1 completion:(id /* block */)arg2;

@end
