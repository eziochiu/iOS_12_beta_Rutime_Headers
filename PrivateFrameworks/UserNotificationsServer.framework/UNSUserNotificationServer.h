/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSUserNotificationServer : NSObject <LSApplicationWorkspaceObserverProtocol, UNSDefaultDataProviderFactoryObserver, UNSNotificationRepositoryDelegate, UNSRemoteNotificationServerObserver> {
    UNSApplicationLauncher * _applicationLauncher;
    UNSApplicationService * _applicationService;
    BKSApplicationStateMonitor * _applicationStateMonitor;
    UNSAttachmentsRepository * _attachmentsRepository;
    UNSAttachmentsService * _attachmentsService;
    UNSNotificationCategoryRepository * _categoryRepository;
    UNSDaemonLauncher * _daemonLauncher;
    UNSDefaultDataProviderFactory * _dataProviderFactory;
    NSString * _directory;
    NSString * _libraryDirectory;
    UNSLocationMonitor * _locationMonitor;
    UNSNotificationRepository * _notificationRepository;
    UNSNotificationScheduleRepository * _notificationScheduleRepository;
    UNSNotificationSchedulingService * _notificationSchedulingService;
    UNSNotificationSettingsService * _notificationSettingsService;
    UNSPendingNotificationRepository * _pendingNotificationRepository;
    UNSPushRegistrationRepository * _pushRegistrationRepository;
    UNSRemoteNotificationServer * _remoteNotificationService;
    NSSet * _sourceBundleIdentifiers;
    FBSSystemService * _systemService;
    UNSNotificationTopicRepository * _topicRepository;
    UNSUserNotificationServerConnectionListener * _userNotificationServerConnectionListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addObserverForApplicationStateMonitor;
- (void)_addObserverForApplicationStateRestore;
- (void)_addObserverForApplicationWorkspaceChanges;
- (void)_addObserverForBackgroundRefreshApplicationChanges;
- (void)_addObserverForDataProviderFactoryChanges;
- (void)_addObserverForLocaleChanges;
- (void)_addObserverForRemoteNotificationServiceChanges;
- (void)_addObserverForSignificantTimeChanges;
- (void)_applicationStateDidRestore;
- (void)_applicationsDidInstall:(id)arg1;
- (void)_backgroundRefreshApplicationsDidChange;
- (void)_didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)_ensureAttachmentsIntegrity;
- (id)_loadAllSystemNotificationSourceDescriptions;
- (void)_localeDidChange;
- (void)_migrateAttachments;
- (void)_migrateNotificationCategories;
- (void)_migrateNotificationRepository;
- (void)_migrateNotificationSchedule;
- (void)_migratePendingNotificationRequests;
- (void)_migratePushRegistrations;
- (void)_notificationSourcesDidInstall:(id)arg1;
- (void)_notificationSourcesDidUninstall:(id)arg1;
- (void)_registerLoggers;
- (void)_removeNotificationSourceDirectories:(id)arg1;
- (void)_removePushStore;
- (void)_timeDidChangeSignificantly;
- (void)_triggerLocationArrowForBundleIdentifier:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)applicationsDidDenyNotificationSettings:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)init;
- (void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
