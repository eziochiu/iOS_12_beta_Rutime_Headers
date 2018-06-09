/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCCompanionSyncOutgoingSession : VCCompanionSyncSession {
    NSObject<OS_dispatch_queue> * _changesIsolationQueue;
    NSMutableArray * _mutablePendingChanges;
    NSMutableArray * _mutableSentChanges;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *changesIsolationQueue;
@property (nonatomic, readonly) NSMutableArray *mutablePendingChanges;
@property (nonatomic, readonly) NSMutableArray *mutableSentChanges;
@property (nonatomic, readonly) NSArray *pendingChanges;
@property (nonatomic, readonly) NSArray *syncedChanges;

- (void).cxx_destruct;
- (id)changesIsolationQueue;
- (id)initWithSYSession:(id)arg1 changeSetToSync:(id)arg2;
- (void)markChangeAsSent:(id)arg1;
- (id)mutablePendingChanges;
- (id)mutableSentChanges;
- (id)nextPendingChange;
- (id)pendingChanges;
- (long long)sessionType;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(id /* block */)arg3;
- (long long)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id*)arg3;
- (bool)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;
- (id)syncedChanges;

@end
