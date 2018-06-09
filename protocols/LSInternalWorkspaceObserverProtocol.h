/* made by EzioChiu.
 */

@protocol LSInternalWorkspaceObserverProtocol <NSObject>

@required

- (void)applicationIconDidChange:(NSArray *)arg1;
- (void)applicationInstallsArePrioritized:(NSArray *)arg1 arePaused:(NSArray *)arg2;
- (void)applicationInstallsDidCancel:(NSArray *)arg1;
- (void)applicationInstallsDidChange:(NSArray *)arg1;
- (void)applicationInstallsDidPause:(NSArray *)arg1;
- (void)applicationInstallsDidPrioritize:(NSArray *)arg1;
- (void)applicationInstallsDidResume:(NSArray *)arg1;
- (void)applicationInstallsDidStart:(NSArray *)arg1;
- (void)applicationInstallsDidUpdateIcon:(NSArray *)arg1;
- (void)applicationStateDidChange:(NSArray *)arg1;
- (void)applicationsDidFailToInstall:(NSArray *)arg1;
- (void)applicationsDidFailToUninstall:(NSArray *)arg1;
- (void)applicationsDidInstall:(NSArray *)arg1;
- (void)applicationsDidUninstall:(NSArray *)arg1;
- (void)applicationsWillInstall:(NSArray *)arg1;
- (void)applicationsWillUninstall:(NSArray *)arg1;
- (void)deviceManagementPolicyDidChange:(NSArray *)arg1;
- (void)networkUsageChanged:(bool)arg1;
- (void)pluginsDidInstall:(NSArray *)arg1;
- (void)pluginsDidUninstall:(NSArray *)arg1;
- (void)pluginsWillUninstall:(NSArray *)arg1;

@end
