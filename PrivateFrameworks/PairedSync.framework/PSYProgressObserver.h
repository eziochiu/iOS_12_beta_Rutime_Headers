/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYProgressObserver : NSObject <PSYSyncSessionObserverDelegate> {
    NSMutableSet * _completedInitialSyncPairingIDs;
    PSYSyncSession * _currentSyncSession;
    <PSYProgressObserverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _internalQueue;
    PSYSyncSessionObserver * _syncSessionObserver;
}

@property (nonatomic, readonly, copy) NSDictionary *activityErrors;
@property (nonatomic, readonly) NSString *activityLabel;
@property (nonatomic, readonly) double activityProgress;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSYProgressObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long progressObserverState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double totalProgress;

- (void).cxx_destruct;
- (bool)_shouldHandleSyncSession:(id)arg1;
- (void)_updateState;
- (id)activityErrors;
- (id)activityLabel;
- (double)activityProgress;
- (id)delegate;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (long long)progressObserverState;
- (void)setDelegate:(id)arg1;
- (void)supportsMigrationSync;
- (void)syncSessionObserver:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncSessionObserver:(id)arg1 didReceiveUpdate:(id)arg2;
- (void)syncSessionObserver:(id)arg1 receivedSyncSession:(id)arg2;
- (double)totalProgress;

@end
