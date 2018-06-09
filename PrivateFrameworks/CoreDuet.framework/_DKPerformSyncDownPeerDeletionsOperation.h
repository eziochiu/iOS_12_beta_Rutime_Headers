/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPerformSyncDownPeerDeletionsOperation : _DKSyncCompositeOperation {
    unsigned long long  _batchNumber;
    NSDate * _highWaterMark;
    <_DKSyncLocalKnowledgeStorage> * _localStorage;
    _DKSyncPeer * _peer;
    _DKSync2Policy * _policy;
    <_DKSyncRemoteKnowledgeStorage> * _transport;
    _DKSyncType * _type;
}

- (void).cxx_destruct;
- (void)handleFetchedDeletedEventIDs:(id)arg1 requestDate:(id)arg2 window:(id)arg3;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6;
- (bool)isAsynchronous;
- (void)main;
- (void)performSyncDownPeerDeletions;
- (void)performSyncDownPeerDeletionsWithHighWaterMark:(id)arg1 orError:(id)arg2;
- (void)performSyncDownPeerDeletionsWithPreviousWindow:(id)arg1;

@end
