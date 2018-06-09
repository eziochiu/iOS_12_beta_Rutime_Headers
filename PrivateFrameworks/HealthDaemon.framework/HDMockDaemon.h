/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMockDaemon : NSObject <HDHealthDaemon> {
    <HDNanoAlertSuppressionService> * alertSuppressionService;
    HDBackgroundTaskScheduler * backgroundTaskScheduler;
    HDMockPrimaryProfile * mockPrimaryProfile;
    HDPluginManager * pluginManager;
    HDPrimaryProfile * primaryProfile;
}

@property (nonatomic, retain) <HDNanoAlertSuppressionService> *alertSuppressionService;
@property (readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property (nonatomic, readonly) _HKBehavior *behavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDMockPrimaryProfile *mockPrimaryProfile;
@property (readonly) HDPluginManager *pluginManager;
@property (nonatomic, readonly) HDPrimaryProfile *primaryProfile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alertSuppressionService;
- (id)backgroundTaskScheduler;
- (id)behavior;
- (id)createXPCListenerWithMachServiceName:(id)arg1;
- (id)daemonExtensionWithIdentifier:(id)arg1;
- (id)daemonExtensionsConformingToProtocol:(id)arg1;
- (id)init;
- (id)mockPrimaryProfile;
- (id)pluginManager;
- (id)primaryProfile;
- (void)registerForDaemonReady:(id)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)setAlertSuppressionService:(id)arg1;
- (void)unregisterForLaunchNotification:(const char *)arg1;

@end
