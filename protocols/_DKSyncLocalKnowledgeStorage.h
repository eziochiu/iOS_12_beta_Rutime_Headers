/* made by EzioChiu.
 */

@protocol _DKSyncLocalKnowledgeStorage

@required

- (_DKSyncHistory *)additionsSyncHistoryForPeer:(_DKSyncPeer *)arg1 transportName:(NSString *)arg2 error:(id*)arg3;
- (bool)deleteEventsWithEventIDs:(NSArray *)arg1 error:(id*)arg2;
- (NSArray *)deletedEventIDsSinceDate:(NSDate *)arg1 streamNames:(NSArray *)arg2 error:(id*)arg3;
- (_DKSyncHistory *)deletionsSyncHistoryForPeer:(_DKSyncPeer *)arg1 transportName:(NSString *)arg2 error:(id*)arg3;
- (NSDate *)lastSyncDownDeletionDateForPeer:(_DKSyncPeer *)arg1 transportName:(NSString *)arg2 error:(id*)arg3;
- (bool)saveEvents:(NSArray *)arg1 error:(id*)arg2;
- (bool)saveSyncedDownWindow:(_DKSyncWindow *)arg1 peer:(_DKSyncPeer *)arg2 transportName:(NSString *)arg3 error:(id*)arg4;
- (void)setLastSyncDownDeletionDate:(NSDate *)arg1 forPeer:(_DKSyncPeer *)arg2 transportName:(NSString *)arg3 error:(id*)arg4;
- (NSArray *)sortedEventsWithCreationDateBetweenDate:(NSDate *)arg1 andDate:(NSDate *)arg2 streamNames:(NSArray *)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id*)arg6;
- (NSArray *)sortedSyncDownWindowsOverlappingBetweenDate:(NSDate *)arg1 andDate:(NSDate *)arg2 peer:(_DKSyncPeer *)arg3 error:(id*)arg4;

@end
