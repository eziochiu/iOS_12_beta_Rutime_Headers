/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPerformSyncUpHistoryOperation : _DKSyncCompositeOperation {
    <_DKSyncLocalKnowledgeStorage> * _localStorage;
    _DKSyncPeer * _me;
    _DKSync2Policy * _policy;
    <_DKSyncRemoteKnowledgeStorage> * _transport;
    _DKSyncType * _type;
}

- (void).cxx_destruct;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6;
- (bool)isAsynchronous;
- (void)main;
- (void)performSyncUpHistory;

@end
