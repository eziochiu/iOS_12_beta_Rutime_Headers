/* made by EzioChiu.
 */

@protocol UNSNotificationRepositoryObserver <NSObject>

@required

- (void)notificationRepository:(UNSNotificationRepository *)arg1 didPerformUpdates:(NSArray *)arg2 forBundleIdentifier:(NSString *)arg3;

@end
