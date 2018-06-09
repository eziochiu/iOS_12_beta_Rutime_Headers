/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncLocalKnowledgeStorage : NSObject <_DKSyncLocalKnowledgeStorage> {
    _DKKnowledgeStorage * _storage;
}

@property (nonatomic, retain) _DKKnowledgeStorage *storage;

- (void).cxx_destruct;
- (id)additionsSyncHistoryForPeer:(id)arg1 transportName:(id)arg2 error:(id*)arg3;
- (bool)deleteEventsWithEventIDs:(id)arg1 error:(id*)arg2;
- (id)deletedEventIDsSinceDate:(id)arg1 streamNames:(id)arg2 error:(id*)arg3;
- (id)deletionsSyncHistoryForPeer:(id)arg1 transportName:(id)arg2 error:(id*)arg3;
- (id)initWithKnowledgeStorage:(id)arg1;
- (id)lastSyncDownDeletionDateForPeer:(id)arg1 transportName:(id)arg2 error:(id*)arg3;
- (bool)saveEvents:(id)arg1 error:(id*)arg2;
- (bool)saveSyncedDownWindow:(id)arg1 peer:(id)arg2 transportName:(id)arg3 error:(id*)arg4;
- (void)setLastSyncDownDeletionDate:(id)arg1 forPeer:(id)arg2 transportName:(id)arg3 error:(id*)arg4;
- (void)setStorage:(id)arg1;
- (id)sortedEventsWithCreationDateBetweenDate:(id)arg1 andDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id*)arg6;
- (id)sortedSyncDownWindowsOverlappingBetweenDate:(id)arg1 andDate:(id)arg2 peer:(id)arg3 error:(id*)arg4;
- (id)storage;
- (id)syncHistoryForPeer:(id)arg1 streamName:(id)arg2 transportName:(id)arg3 type:(id)arg4 error:(id*)arg5;

@end
