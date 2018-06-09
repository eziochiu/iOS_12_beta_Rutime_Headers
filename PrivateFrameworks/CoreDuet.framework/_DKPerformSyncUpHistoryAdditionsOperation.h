/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPerformSyncUpHistoryAdditionsOperation : _DKSyncCompositeOperation {
    unsigned long long  _batchNumber;
    NSMutableDictionary * _events;
    _DKSyncHistory * _history;
    <_DKSyncLocalKnowledgeStorage> * _localStorage;
    _DKSyncPeer * _me;
    NSDate * _now;
    _DKSync2Policy * _policy;
    <_DKSyncRemoteKnowledgeStorage> * _transport;
    _DKSyncType * _type;
}

@property (nonatomic, retain) NSMutableDictionary *events;

- (void).cxx_destruct;
- (id)events;
- (void)handleUpdateStorageWithFetchedWindow:(id)arg1 eventsCount:(unsigned long long)arg2 error:(id)arg3;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6;
- (bool)isAsynchronous;
- (void)main;
- (void)performSyncUpHistoryAdditions;
- (void)performSyncUpHistoryAdditionsWithAdditionsHighWaterMark:(id)arg1 orError:(id)arg2;
- (void)performSyncUpHistoryAdditionsWithPreviousHighWaterMark:(id)arg1;
- (void)setEvents:(id)arg1;

@end
