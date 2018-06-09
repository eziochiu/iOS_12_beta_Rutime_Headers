/* made by EzioChiu.
 */

@protocol MBManagerDelegate

@optional

- (void)manager:(MBManager *)arg1 didFailBackupWithError:(NSError *)arg2;
- (void)manager:(MBManager *)arg1 didFailRestoreForPath:(NSString *)arg2 withError:(NSError *)arg3;
- (void)manager:(MBManager *)arg1 didFailRestoreWithError:(NSError *)arg2;
- (void)manager:(MBManager *)arg1 didFailScanWithError:(NSError *)arg2;
- (void)manager:(MBManager *)arg1 didFailVerificationWithError:(NSError *)arg2;
- (void)manager:(MBManager *)arg1 didFinishRestoreForPath:(NSString *)arg2;
- (void)manager:(MBManager *)arg1 didScanBundleWithID:(NSString *)arg2 bytesUsed:(unsigned long long)arg3;
- (void)manager:(MBManager *)arg1 didScanDomainWithName:(NSString *)arg2 forBundleID:(NSString *)arg3 bytesUsed:(unsigned long long)arg4;
- (void)manager:(MBManager *)arg1 didScanFiles:(NSSet *)arg2 forDomainWithName:(NSString *)arg3 bundleID:(NSString *)arg4;
- (void)manager:(MBManager *)arg1 didSetBackupEnabled:(bool)arg2;
- (void)manager:(MBManager *)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3;
- (void)managerDidCancelRestore:(MBManager *)arg1;
- (void)managerDidFinishBackup:(MBManager *)arg1;
- (void)managerDidFinishRestore:(MBManager *)arg1;
- (void)managerDidFinishScan:(MBManager *)arg1;
- (void)managerDidFinishVerification:(MBManager *)arg1;
- (void)managerDidLoseConnectionToService:(MBManager *)arg1;
- (void)managerDidUpdateBackgroundRestoreProgress:(MBManager *)arg1;

@end
