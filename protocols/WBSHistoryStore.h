/* made by EzioChiu.
 */

@protocol WBSHistoryStore <WBSHistoryLoader>

@required

- (void)addOrUpdateItemsOnDatabaseQueue:(NSSet *)arg1;
- (NSSet *)allVisitsForItemsOnDatabaseQueue:(NSSet *)arg1;
- (unsigned long long)cachedNumberOfDevicesInSyncCircle;
- (void)checkIfLocalVisitExistsInAnyOfItems:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)clearHistoryVisitsAddedAfterDate:(void *)arg1 beforeDate:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)clearHistoryWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)closeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<WBSHistoryStoreDelegate> *)delegate;
- (void)enumerateLastVisitForItemsOnDatabaseQueue:(void *)arg1 ignoringVisits:(void *)arg2 enumerationBlock:(void *)arg3; // needs 3 arg types, found 9: NSSet *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSHistoryItem *, WBSHistoryVisit *, void*
- (void)enumeratePriorVisitsInRedirectChainOnDatabaseQueue:(void *)arg1 items:(void *)arg2 enumerationBlock:(void *)arg3; // needs 3 arg types, found 8: NSSet *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSHistoryVisit *, void*
- (void)enumerateSubsequentVisitsInRedirectChainOnDatabaseQueue:(void *)arg1 items:(void *)arg2 enumerationBlock:(void *)arg3; // needs 3 arg types, found 8: NSSet *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSHistoryVisit *, void*
- (NSData *)fetchThrottlerData;
- (void)getAllTombstonesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)getServerChangeTokenDataWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 15: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSSet *, long long, id /* block */, void*, void, id /* block */, bool, void*, void*
- (void)getVisitsCreatedAfterDate:(void *)arg1 beforeDate:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (double)historyAgeLimit;
- (bool)isUsingInMemoryDatabase;
- (void)itemWasReplaced:(WBSHistoryItem *)arg1 byItem:(WBSHistoryItem *)arg2;
- (void)itemsWereAdded:(NSArray *)arg1 byUserInitiatedAction:(bool)arg2;
- (void)itemsWereModified:(NSArray *)arg1 byUserInitiatedAction:(bool)arg2;
- (NSDate *)lastSeenDateForCloudClientVersion:(unsigned long long)arg1;
- (void)performMaintenance:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)pruneTombstonesWithEndDatePriorToDate:(NSDate *)arg1;
- (bool)pushNotificationsAreInitialized;
- (NSData *)pushThrottlerData;
- (void)removeItemsOnDatabaseQueue:(NSSet *)arg1;
- (void)removePastHistoryVisitsForItem:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: WBSHistoryItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removeVisitsOnDatabaseQueue:(NSSet *)arg1;
- (void)replayAndAddTombstone:(WBSHistoryTombstone *)arg1;
- (void)resetCloudHistoryDataWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1;
- (void)setDelegate:(id <WBSHistoryStoreDelegate>)arg1;
- (void)setFetchThrottlerData:(NSData *)arg1;
- (void)setHistoryAgeLimit:(double)arg1;
- (void)setLastSeenDate:(NSDate *)arg1 forCloudClientVersion:(unsigned long long)arg2;
- (void)setPushNotificationsAreInitialized:(bool)arg1;
- (void)setPushThrottlerData:(NSData *)arg1;
- (void)setServerChangeTokenData:(NSData *)arg1;
- (void)setSyncCircleSizeRetrievalThrottlerData:(NSData *)arg1;
- (NSData *)syncCircleSizeRetrievalThrottlerData;
- (void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)visitIdentifiersMatchingExistingVisits:(void *)arg1 populateAssociatedVisits:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSSet *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)visitTitleWasUpdated:(WBSHistoryVisit *)arg1;
- (void)visitsWereAdded:(NSArray *)arg1;
- (void)visitsWereModified:(NSArray *)arg1;

@end
