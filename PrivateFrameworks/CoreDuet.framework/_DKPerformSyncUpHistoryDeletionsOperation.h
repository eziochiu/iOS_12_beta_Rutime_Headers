/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPerformSyncUpHistoryDeletionsOperation : _DKSyncCompositeOperation {
    unsigned long long  _batchNumber;
    _DKSyncHistory * _history;
    <_DKSyncLocalKnowledgeStorage> * _localStorage;
    _DKSyncPeer * _me;
    NSDate * _now;
    _DKSync2Policy * _policy;
    <_DKSyncRemoteKnowledgeStorage> * _transport;
    _DKSyncType * _type;
}

- (void).cxx_destruct;
- (void)handleUpdateStorageWithFetchedWindow:(id)arg1 deletedEventIDsCount:(unsigned long long)arg2 error:(id)arg3;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6;
- (bool)isAsynchronous;
- (void)main;
- (void)performSyncUpHistoryDeletions;
- (void)performSyncUpHistoryDeletionsWithDeletionsHighWaterMark:(id)arg1 orError:(id)arg2;
- (void)performSyncUpHistoryDeletionsWithPreviousHighWaterMark:(id)arg1;

@end
