/* made by EzioChiu.
 */

@protocol UNRemoteNotificationRegistrarDelegate <NSObject>

@optional

- (void)remoteNotificationRegistrar:(UNRemoteNotificationRegistrar *)arg1 didReceiveDeviceToken:(NSData *)arg2;

@end
