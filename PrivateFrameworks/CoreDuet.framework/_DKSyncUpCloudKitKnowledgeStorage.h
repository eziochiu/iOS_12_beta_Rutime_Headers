/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncUpCloudKitKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage> {
    _DKSyncCloudKitKnowledgeStorage * _common;
    <_DKSyncRemoteKnowledgeStorageFetchDelegate> * _delegate;
    bool  _isAvailable;
}

@property (retain) _DKSyncCloudKitKnowledgeStorage *common;
@property (retain) <_DKSyncRemoteKnowledgeStorageFetchDelegate> *delegate;
@property bool isAvailable;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cancelOutstandingOperations;
- (id)common;
- (void)dealloc;
- (id)delegate;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 highPriority:(bool)arg4 completion:(id /* block */)arg5;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchEventsFromPeer:(id)arg1 creationDateBetweenDate:(id)arg2 andDate:(id)arg3 streamNames:(id)arg4 limit:(unsigned long long)arg5 fetchOrder:(long long)arg6 highPriority:(bool)arg7 completion:(id /* block */)arg8;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (id)init;
- (bool)isAvailable;
- (id)name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setCommon:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchDelegate:(id)arg1;
- (void)setIsAvailable:(bool)arg1;
- (void)start;
- (long long)transportType;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(bool)arg3 completion:(id /* block */)arg4;

@end
