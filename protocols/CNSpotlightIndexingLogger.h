/* made by EzioChiu.
 */

@protocol CNSpotlightIndexingLogger <NSObject>

@required

- (void)deferringReindexAsFailedToPrepareForReindexing;
- (void)didNotFinishIndexingForDeltaSyncWithError:(NSError *)arg1;
- (void)didNotFinishIndexingForFullSyncWithError:(NSError *)arg1;
- (void)failedToBeginIndexBatchWithSpotlight:(NSException *)arg1;
- (void)failedToClearChangeHistory:(NSString *)arg1 toChangeAnchor:(CNChangeHistoryAnchor *)arg2 error:(NSError *)arg3;
- (void)failedToCreateSearchableItemForContactIdentifier:(NSString *)arg1;
- (void)failedToCreateUnarchiverForClientStateWithError:(NSError *)arg1;
- (void)failedToDeleteAllSearchableItemsWithSpotlight:(NSError *)arg1 willRetry:(bool)arg2;
- (void)failedToEndIndexBatchWithSpotlight:(NSError *)arg1 willRetry:(bool)arg2;
- (void)failedToFetchClientStateFromSpotlight:(NSError *)arg1 willRetry:(bool)arg2;
- (void)failedToFetchContactForChange:(CNChangeHistoryContactChange *)arg1;
- (void)failedToFetchSearchableForContactIdentifiers:(NSArray *)arg1 error:(NSError *)arg2;
- (void)failedToJournalItemIdentifiersForDeletionWithSpotlight:(NSError *)arg1 identifiers:(NSArray *)arg2 willRetry:(bool)arg3;
- (void)failedToJournalSearchableItemsForIndexingWithSpotlight:(NSError *)arg1 identifiers:(NSArray *)arg2 willRetry:(bool)arg3;
- (void)failedToUnarchiveClientStateData:(NSException *)arg1;
- (void)finishedBatchIndexWithUpdateIdentifiers:(NSArray *)arg1 deleteIdentifiers:(NSArray *)arg2;
- (void)finishedIndexingForDeltaSyncWithUpdateCount:(unsigned long long)arg1 deleteCount:(unsigned long long)arg2;
- (void)finishedIndexingForFullSyncWithCount:(unsigned long long)arg1;
- (void)indexingContacts:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)noContactChangesToIndex;
- (void)reindexingAllSearchableItems:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)reindexingSearchableItemsWithIdentifiers:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)verifiedIndexWithSummmary:(NSString *)arg1;
- (void)verifyingIndex:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)willBatchIndexForDeltaSyncWithUpdateCount:(unsigned long long)arg1 deleteCount:(unsigned long long)arg2;
- (void)willBatchIndexForFullSyncWithCount:(unsigned long long)arg1 lastOffset:(long long)arg2 doneFullSync:(bool)arg3;
- (void)willClearChangeHistory:(NSString *)arg1 toChangeAnchor:(CNChangeHistoryAnchor *)arg2;
- (void)willReindexAsChangeHistoryIsTruncated:(NSString *)arg1;
- (void)willReindexAsFailedToFetchChangeHistory:(NSString *)arg1 error:(NSError *)arg2;
- (void)willReindexAsFailedToFetchClientState;
- (void)willReindexAsFailedToRegisterForChangeHistory:(NSString *)arg1 error:(NSError *)arg2;
- (void)willReindexAsIndexVersionChangedFrom:(long long)arg1 to:(long long)arg2;
- (void)willReindexAsSnapshotAnchorChangedFrom:(CNChangeHistoryAnchor *)arg1 to:(CNChangeHistoryAnchor *)arg2;
- (void)willReindexItemsWithIdentifiers:(NSArray *)arg1;
- (void)willResumeIndexingAfterOffset:(long long)arg1;
- (void)willResumeReindexingAsNotFinished;
- (void)willStartIndexingWithClientState:(CNIndexClientState *)arg1;

@end