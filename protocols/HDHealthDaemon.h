/* made by EzioChiu.
 */

@protocol HDHealthDaemon <NSObject>

@required

- (<HDNanoAlertSuppressionService> *)alertSuppressionService;
- (HDBackgroundTaskScheduler *)backgroundTaskScheduler;
- (_HKBehavior *)behavior;
- (HDXPCListener *)createXPCListenerWithMachServiceName:(NSString *)arg1;
- (id)daemonExtensionWithIdentifier:(NSString *)arg1;
- (NSArray *)daemonExtensionsConformingToProtocol:(Protocol *)arg1;
- (HDPluginManager *)pluginManager;
- (HDPrimaryProfile *)primaryProfile;
- (void)registerForDaemonReady:(id <HDHealthDaemonReadyObserver>)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)setAlertSuppressionService:(id <HDNanoAlertSuppressionService>)arg1;
- (void)unregisterForLaunchNotification:(const char *)arg1;

@end
