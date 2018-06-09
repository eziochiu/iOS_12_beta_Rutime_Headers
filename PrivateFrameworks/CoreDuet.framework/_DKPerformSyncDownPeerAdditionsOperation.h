/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPerformSyncDownPeerAdditionsOperation : _DKSyncCompositeOperation {
    unsigned long long  _batchNumber;
    NSMutableDictionary * _events;
    NSDate * _highWaterMark;
    <_DKSyncLocalKnowledgeStorage> * _localStorage;
    _DKSyncPeer * _peer;
    _DKSync2Policy * _policy;
    <_DKSyncRemoteKnowledgeStorage> * _transport;
    _DKSyncType * _type;
}

@property (nonatomic, retain) NSMutableDictionary *events;

- (void).cxx_destruct;
- (id)events;
- (void)handleFetchedEvents:(id)arg1 windowStartDate:(id)arg2 windowEndDate:(id)arg3 window:(id)arg4;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6;
- (bool)isAsynchronous;
- (void)main;
- (void)performSyncDownPeerAdditions;
- (void)performSyncDownPeerAdditionsWithHighWaterMark:(id)arg1 orError:(id)arg2;
- (void)performSyncDownPeerAdditionsWithPreviousWindow:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)updateEvents:(id)arg1 withSourceDeviceID:(id)arg2;

@end
