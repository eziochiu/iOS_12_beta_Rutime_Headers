/* made by EzioChiu.
 */

@protocol _DKNotificationReceiver <_DKMonitor>

@required

- (void)receiveNotificationEvent:(NSDictionary *)arg1;

@end
