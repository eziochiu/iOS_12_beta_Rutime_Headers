/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNUserNotificationServiceConnection : NSObject <UNUserNotificationClientProtocol, UNUserNotificationServerProtocol> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSXPCConnection * _connection;
    NSMutableDictionary * _observersByBundleIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callOutQueue;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *observersByBundleIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_queue_addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_ensureConnection;
- (void)_queue_interruptedConnection;
- (void)_queue_invalidatedConnection;
- (void)_queue_removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)addNotificationRequest:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)callOutQueue;
- (id)connection;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)getAllowsRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getDeliveredNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getNotificationCategoriesForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getNotificationSettingsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getPendingNotificationRequestsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
- (id)observersByBundleIdentifier;
- (id)queue;
- (void)removeAllDeliveredNotificationsForBundleIdentifier:(id)arg1;
- (void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)arg1;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removeSimilarNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)replaceContentForRequestWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 replacementContent:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setCallOutQueue:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setNotificationCategories:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setObserversByBundleIdentifier:(id)arg1;
- (void)setObservingUserNotifications:(bool)arg1 forBundleIdentifier:(id)arg2;
- (void)setQueue:(id)arg1;

@end
