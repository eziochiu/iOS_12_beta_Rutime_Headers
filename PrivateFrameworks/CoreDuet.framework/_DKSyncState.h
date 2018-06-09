/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncState : NSObject {
    _DKKnowledgeSyncStorageAssertion * _assertion;
    NSError * _error;
    bool  _needsCloudSyncDown;
    bool  _needsCloudSyncUp;
    NSMutableArray * _replies;
}

@property (retain) _DKKnowledgeSyncStorageAssertion *assertion;
@property (retain) NSError *error;
@property bool needsCloudSyncDown;
@property bool needsCloudSyncUp;
@property (retain) NSMutableArray *replies;

- (void).cxx_destruct;
- (void)addReplyBlock:(id /* block */)arg1;
- (id)assertion;
- (id)error;
- (void)finish;
- (id)initWithSyncStorageAssertion:(id)arg1 reply:(id /* block */)arg2;
- (bool)needsCloudSyncDown;
- (bool)needsCloudSyncUp;
- (id)replies;
- (void)setAssertion:(id)arg1;
- (void)setError:(id)arg1;
- (void)setNeedsCloudSyncDown:(bool)arg1;
- (void)setNeedsCloudSyncUp:(bool)arg1;
- (void)setReplies:(id)arg1;

@end
