/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDaemonSyncEngine : NSObject <HDSyncEngine> {
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _queue_allOrderedSyncEntities;
    NSDictionary * _queue_allSyncEntitiesByIdentifier;
    id /* block */  _unitTest_didCompleteReadTransaction;
}

@property (nonatomic, readonly, copy) NSArray *allOrderedSyncEntities;
@property (nonatomic, readonly, copy) NSDictionary *allSyncEntitiesByIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTest_didCompleteReadTransaction;

- (void).cxx_destruct;
- (bool)_applySyncChange:(id)arg1 entity:(Class)arg2 store:(id)arg3 error:(id*)arg4;
- (bool)_performSyncSession:(id)arg1 error:(id*)arg2;
- (void)_queue_loadSyncEntities;
- (long long)_receivedAnchorForEntityIdentifier:(id)arg1 store:(id)arg2 error:(id*)arg3;
- (void)_resetStore:(id)arg1;
- (long long)_sendChanges:(id)arg1 session:(id)arg2 error:(id*)arg3;
- (bool)_setReceivedAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 error:(id*)arg4;
- (id)_syncAnchorMapForSyncEntityClass:(Class)arg1 session:(id)arg2 error:(id*)arg3;
- (long long)_synchronizeSyncEntityClass:(Class)arg1 session:(id)arg2 predicate:(id)arg3 startAnchor:(long long*)arg4 finalAnchor:(long long)arg5 postTransactionBlocks:(id)arg6 error:(id*)arg7;
- (bool)_transactionDidEndForSession:(id)arg1 error:(id*)arg2;
- (long long)_validateAnchorsForSyncChange:(id)arg1 store:(id)arg2 error:(id*)arg3;
- (bool)_validateSequenceNumberForSyncChange:(id)arg1 store:(id)arg2 error:(id*)arg3;
- (id)allOrderedSyncEntities;
- (id)allSyncEntitiesByIdentifier;
- (bool)applyAcknowledgedAnchorMap:(id)arg1 forStore:(id)arg2 resetNext:(bool)arg3 resetInvalid:(bool)arg4 error:(id*)arg5;
- (bool)applySyncChange:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
- (bool)getReceivedAnchorMap:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
- (id)initWithProfile:(id)arg1;
- (bool)performSyncSession:(id)arg1 error:(id*)arg2;
- (id)profile;
- (id)queue;
- (void)resetAnchorsWithFailedChanges:(id)arg1 store:(id)arg2;
- (void)resetStore:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setUnitTest_didCompleteReadTransaction:(id /* block */)arg1;
- (id /* block */)unitTest_didCompleteReadTransaction;

@end
