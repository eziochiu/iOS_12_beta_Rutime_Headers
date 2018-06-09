/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSDaemonLauncher : NSObject <UNUserNotificationCenterDelegateServiceProtocol> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSMutableDictionary * _connectionByBundleIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_queue_ensureConnectionForBundleIdentifier:(id)arg1;
- (void)_queue_interruptedConnectionForBundleIdentifier:(id)arg1;
- (void)_queue_invalidatedConnectionForBundleIdentifier:(id)arg1;
- (void)didReceiveNotificationResponse:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)init;

@end
