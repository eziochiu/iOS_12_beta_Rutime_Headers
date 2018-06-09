/* made by EzioChiu.
 */

@protocol IMCloudKitEventHandler <NSObject>

@optional

- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 didChangeEnabled:(bool)arg2 error:(NSError *)arg3;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 didDisableAllDevices:(bool)arg2 error:(NSError *)arg3;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 didFetchSyncStatistics:(IMCloudKitSyncStatistics *)arg2 error:(NSError *)arg3;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 didPerformAdditionalStorageRequiredCheck:(bool)arg2 additionalStorageRequired:(unsigned long long)arg3 forAccountId:(NSString *)arg4 error:(NSError *)arg5;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 syncProgressDidUpdate:(IMCloudKitSyncProgress *)arg2;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 syncStateDidChange:(IMCloudKitSyncState *)arg2;

@end
