/* made by EzioChiu.
 */

@protocol WBSHistoryStoreDelegate <WBSHistoryLoaderDelegate>

@required

- (void)historyStore:(id <WBSHistoryStore>)arg1 didPrepareToDeleteWithDeletionPlan:(WBSHistoryDeletionPlan *)arg2;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didRemoveItems:(NSArray *)arg2;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didRemoveVisits:(NSArray *)arg2;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id <WBSHistoryStore>)arg1;
- (bool)historyStoreShouldCheckDatabaseIntegrity:(id <WBSHistoryStore>)arg1;

@optional

- (bool)historyStoreShouldScheduleMaintenance:(id <WBSHistoryStore>)arg1;

@end
