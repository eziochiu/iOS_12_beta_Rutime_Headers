/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationSettingsService : NSObject {
    UNSCriticalAlertAuthorizationAlertController * _criticalAlertAuthorizationAlertController;
    UNSDefaultDataProviderFactory * _dataProviderFactory;
    UNSNotificationAuthorizationAlertController * _notificationAuthorizationAlertController;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_queue_getAuthorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_queue_getNotificationSettingsForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_queue_isCarPlayAvailableForApplication:(id)arg1;
- (void)_queue_requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_queue_requestAuthorizationWithOptions:(unsigned long long)arg1 topics:(id)arg2 forNotificationSourceDescription:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_queue_requestAuthorizationWithTopics:(id)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_queue_requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)authorizedBundleIdentifiersForBundleIdentifiers:(id)arg1;
- (void)getAuthorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getNotificationSettingsForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithDataProviderFactory:(id)arg1;
- (id)notificationSettingsForBundleIdentifier:(id)arg1;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestAuthorizationWithTopics:(id)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(id /* block */)arg2;

@end
