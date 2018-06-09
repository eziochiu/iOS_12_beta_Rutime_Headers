/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncCoordinatorLogging : NSObject <_DKSyncCoordinatorEventNotificationDelegate> {
    NSObject<OS_dispatch_queue> * _notificationQueue;
}

@property (readonly) NSObject<OS_dispatch_queue> *notificationQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_sendDistributedNotificationName:(id)arg1;
- (void)_sendDistributedNotificationName:(id)arg1 object:(id)arg2 throttledActivityName:(id)arg3;
- (void)_sendDistributedNotificationName:(id)arg1 streamNameCounts:(id)arg2;
- (void)_syncCoordinatorDidCreateChangeSetOfType:(id)arg1;
- (void)_updateSyncCounter:(id)arg1 streamNameCounts:(id)arg2;
- (id)init;
- (id)notificationQueue;
- (id)portraitStreamNames;
- (void)syncCoordinator:(id)arg1 didAddRemoteEventsWithStreamNameCounts:(id)arg2 events:(id)arg3;
- (void)syncCoordinator:(id)arg1 didApplyRemoteAdditionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didApplyRemoteDeletionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didCreateAdditionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didCreateDeletionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didDeleteRemoteEventsWithCount:(unsigned long long)arg2;
- (void)syncCoordinator:(id)arg1 didInsertLocalAdditionEventsWithStreamNameCounts:(id)arg2;
- (void)syncCoordinator:(id)arg1 didInsertLocalDeletionEventsWithCount:(unsigned long long)arg2;
- (id)typeValueWithStreamName:(id)arg1;

@end
