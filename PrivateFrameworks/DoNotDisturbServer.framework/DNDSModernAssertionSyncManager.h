/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSModernAssertionSyncManager : NSObject <DNDSAssertionSyncManager, DNDSSyncServiceUpdateListener> {
    NSDictionary * _assertionsByUUID;
    <DNDSAssertionSyncManagerDataSource> * _dataSource;
    <DNDSAssertionSyncManagerDelegate> * _delegate;
    NSDate * _invalidateAllModeAssertionsDate;
    unsigned long long  _invalidateAllModeAssertionsReason;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    <DNDSSyncService> * _syncService;
}

@property (nonatomic) <DNDSAssertionSyncManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSAssertionSyncManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_queue_allModeAssertionsWithError:(id*)arg1;
- (id)_queue_assertionWithUUID:(id)arg1 error:(id*)arg2;
- (void)_queue_invalidateAllLocalModeAssertionsTakenBeforeDate:(id)arg1 forReason:(unsigned long long)arg2;
- (void)_queue_invalidateAllRemoteModeAssertionsTakenBeforeDate:(id)arg1 forReason:(unsigned long long)arg2;
- (void)_queue_receivedRemoteSyncRecord:(id)arg1 remoteDeviceIdentifier:(id)arg2;
- (void)_queue_sendStateSnapshotToAllRemotes;
- (void)addObserver:(id)arg1;
- (id)allModeAssertionsWithError:(id*)arg1;
- (id)assertionWithUUID:(id)arg1 error:(id*)arg2;
- (id)dataSource;
- (id)delegate;
- (id)init;
- (void)invalidateAllModeAssertionsTakenBeforeDate:(id)arg1 forReason:(unsigned long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)resume;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)syncService:(id)arg1 didReceiveRecord:(id)arg2 sourceIdentifier:(id)arg3;
- (void)update;

@end
