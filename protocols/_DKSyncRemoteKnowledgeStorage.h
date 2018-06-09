/* made by EzioChiu.
 */

@protocol _DKSyncRemoteKnowledgeStorage

@required

- (void)cancelOutstandingOperations;
- (void)fetchAdditionsHighWaterMarkWithPeer:(void *)arg1 highPriority:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: _DKSyncPeer *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*
- (void)fetchDeletedEventIDsFromPeer:(void *)arg1 sinceDate:(void *)arg2 streamNames:(void *)arg3 highPriority:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 12: _DKSyncPeer *, NSDate *, NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSDate *, NSError *, void*
- (void)fetchDeletionsHighWaterMarkWithPeer:(void *)arg1 highPriority:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: _DKSyncPeer *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*
- (void)fetchEventsFromPeer:(void *)arg1 creationDateBetweenDate:(void *)arg2 andDate:(void *)arg3 streamNames:(void *)arg4 limit:(void *)arg5 fetchOrder:(void *)arg6 highPriority:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 16: _DKSyncPeer *, NSDate *, NSDate *, NSArray *, unsigned long long, long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSDate *, NSDate *, NSError *, void*
- (void)fetchSourceDeviceIDFromPeer:(void *)arg1 highPriority:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: _DKSyncPeer *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSError *, void*
- (bool)isAvailable;
- (NSString *)name;
- (void)setFetchDelegate:(id <_DKSyncRemoteKnowledgeStorageFetchDelegate>)arg1;
- (void)start;
- (long long)transportType;
- (void)updateStorageWithAddedEvents:(void *)arg1 deletedEventIDs:(void *)arg2 highPriority:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSArray *, NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
