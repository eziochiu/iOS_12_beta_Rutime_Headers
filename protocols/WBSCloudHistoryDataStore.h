/* made by EzioChiu.
 */

@protocol WBSCloudHistoryDataStore

@required

- (void)fetchNumberOfDevicesInSyncCircleWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)fetchRecordsWithServerChangeTokenData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSCloudHistoryFetchResult *, unsigned long long, NSError *, void*
- (id)initWithConfiguration:(WBSCloudHistoryConfiguration *)arg1;
- (void)initializePushNotifications:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)replayPersistedLongLivedSaveOperationWithID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)saveCloudHistoryVisits:(void *)arg1 tombstones:(void *)arg2 longLivedOperationPersistenceCompletion:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 14: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSError *, void*

@end
