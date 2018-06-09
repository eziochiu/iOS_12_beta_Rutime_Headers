/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationRepository : NSObject {
    <UNSNotificationRepositoryDelegate> * _delegate;
    UNSKeyedObservable * _observable;
    NSObject<OS_dispatch_queue> * _queue;
    UNSKeyedDataStoreRepository * _repository;
    FBSSystemService * _systemService;
}

@property (nonatomic) <UNSNotificationRepositoryDelegate> *delegate;

- (void).cxx_destruct;
- (void)_logNotification:(id)arg1 forBundleIdentifier:(id)arg2;
- (long long)_maxObjectsPerKey;
- (id)_notificationsForObjects:(id)arg1;
- (void)_queue_getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_queue_notificationRecordsForBundleIdentifier:(id)arg1;
- (void)_queue_notifyObserversNotificationsDidAddNotifications:(id)arg1 replaceNotifications:(id)arg2 replacementNotifications:(id)arg3 removedNotifications:(id)arg4 shouldRepost:(bool)arg5 forBundleIdentifier:(id)arg6;
- (void)_queue_performMigration;
- (void)_queue_performMigrationForPushStoreAtPath:(id)arg1;
- (void)_queue_removeAllNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)_queue_removeNotificationRecordsPassingTest:(id /* block */)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_saveNotificationRecord:(id)arg1 shouldRepost:(bool)arg2 withOptions:(unsigned long long)arg3 forBundleIdentifier:(id)arg4;
- (void)_queue_setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_queue_setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_queue_setBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)allBundleIdentifiers;
- (id)delegate;
- (void)getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2;
- (id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2 systemService:(id)arg3;
- (id)initWithDirectory:(id)arg1;
- (id)initWithDirectory:(id)arg1 systemService:(id)arg2;
- (void)notificationRecordsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)performMigration;
- (void)removeAllNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)removeNotificationRecordsPassingTest:(id /* block */)arg1 forBundleIdentifier:(id)arg2;
- (void)removeNotificationRepository;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removeStoreForBundleIdentifier:(id)arg1;
- (void)saveNotificationRecord:(id)arg1 shouldRepost:(bool)arg2 forBundleIdentifier:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
