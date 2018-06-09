/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncRapportKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage> {
    RPCompanionLinkClient * _client;
    unsigned long long  _currentChangeSetSequenceNumber;
    <_DKSyncRemoteKnowledgeStorageFetchDelegate> * _delegate;
    NSDictionary * _failIfAsleepOption;
    _DKEventTypeResultStatsCounter * _failIfAsleepStats;
    bool  _isAvailable;
}

@property (retain) <_DKSyncRemoteKnowledgeStorageFetchDelegate> *delegate;
@property bool isAvailable;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cancelOutstandingOperations;
- (id)changeSetForSyncWithEventsToInsert:(id)arg1 eventIDsToDeletes:(id)arg2 error:(id*)arg3;
- (id)changeSetFromCompressedData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (id)dataFromChangeSet:(id)arg1 didCompress:(bool*)arg2;
- (void)dealloc;
- (id)delegate;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 highPriority:(bool)arg4 completion:(id /* block */)arg5;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchEventsFromPeer:(id)arg1 creationDateBetweenDate:(id)arg2 andDate:(id)arg3 streamNames:(id)arg4 limit:(unsigned long long)arg5 fetchOrder:(long long)arg6 highPriority:(bool)arg7 completion:(id /* block */)arg8;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)handleActivateWithError:(id)arg1;
- (void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(id /* block */)arg2;
- (void)handleBeaconWithRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)handleBeaconWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 completion:(id /* block */)arg5;
- (void)handleDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)handleDeviceFound:(id)arg1;
- (void)handleDeviceLost:(id)arg1;
- (void)handleFetchDeletedEventIDsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)handleFetchDeletedEventIDsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 completion:(id /* block */)arg5;
- (void)handleFetchEventsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)handleFetchEventsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 completion:(id /* block */)arg5;
- (void)handleFetchSourceDeviceIDWithRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)handleFetchSourceDeviceIDWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 completion:(id /* block */)arg5;
- (void)handleInvalidation;
- (id)init;
- (bool)isAvailable;
- (id)myDeviceID;
- (id)name;
- (void)sendBeaconToPeer:(id)arg1 completion:(id /* block */)arg2;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 options:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)setDelegate:(id)arg1;
- (void)setFetchDelegate:(id)arg1;
- (void)setIsAvailable:(bool)arg1;
- (void)start;
- (void)startRapport;
- (id)transformResponseError:(id)arg1;
- (long long)transportType;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(bool)arg3 completion:(id /* block */)arg4;

@end
