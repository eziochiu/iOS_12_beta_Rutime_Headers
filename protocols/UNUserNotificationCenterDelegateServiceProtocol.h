/* made by EzioChiu.
 */

@protocol UNUserNotificationCenterDelegateServiceProtocol <NSObject>

@required

- (void)didReceiveNotificationResponse:(void *)arg1 forBundleIdentifier:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: UNNotificationResponse *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
