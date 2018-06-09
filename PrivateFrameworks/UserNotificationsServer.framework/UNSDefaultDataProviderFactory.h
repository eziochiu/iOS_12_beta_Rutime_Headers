/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSDefaultDataProviderFactory : NSObject <BBObserverDelegate> {
    UNSApplicationLauncher * _appLauncher;
    UNSAttachmentsService * _attachmentsService;
    NSMutableSet * _authorizedBundleIdentifiers;
    UNSNotificationCategoryRepository * _categoryRepository;
    UNSDaemonLauncher * _daemonLauncher;
    BBDataProviderConnection * _dataProviderConnection;
    NSMutableDictionary * _dataProvidersByBundleIdentifier;
    NSMutableDictionary * _descriptionsByBundleIdentifier;
    UNSNotificationRepository * _notificationRepository;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    BBSettingsGateway * _settingsGateway;
    BBObserver * _settingsObserver;
    UNSNotificationTopicRepository * _topicRepository;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_addObserver:(id)arg1;
- (void)_queue_applicationDidDisableNotificationSettings:(id)arg1;
- (void)_queue_applicationDidEnableNotificationSettings:(id)arg1;
- (void)_queue_createDataProviderWithBundleIdentifier:(id)arg1;
- (void)_queue_createDataProviderWithBundleIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_queue_createNewDefaultDataProviders;
- (id)_queue_dataProviderForBundleIdentifier:(id)arg1;
- (void)_queue_getAuthorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_queue_getNotificationSettingsForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_queue_getSectionInfoForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_queue_notificationSourceDidInstall:(id)arg1;
- (void)_queue_notificationSourceDidUninstall:(id)arg1;
- (void)_queue_notificationSourcesDidInstall:(id)arg1;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)_queue_removeDataProviderWithBundleIdentifier:(id)arg1;
- (void)_queue_removeObserver:(id)arg1;
- (void)_queue_sectionInfoDidChange:(id)arg1;
- (void)_queue_setCriticalAlertAuthorization:(bool)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_queue_setNotificationTopics:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_setSectionInfo:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_updateSettingsWithAuthorizationStatus:(long long)arg1 options:(unsigned long long)arg2 topics:(id)arg3 forBundleIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)getAuthorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getNotificationSettingsForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithApplicationLauncher:(id)arg1 daemonLauncher:(id)arg2 categoryRepository:(id)arg3 notificationRepository:(id)arg4 attachmentsService:(id)arg5 topicRepository:(id)arg6;
- (void)notificationSourcesDidInstall:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)requestAuthorizationStatus:(long long)arg1 withOptions:(unsigned long long)arg2 topics:(id)arg3 forBundleIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setCriticalAlertAuthorization:(bool)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateAuthorizationWithOptions:(unsigned long long)arg1 topics:(id)arg2 forBundleIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;

@end
