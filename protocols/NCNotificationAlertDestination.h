/* made by EzioChiu.
 */

@protocol NCNotificationAlertDestination <NCNotificationDestination>

@required

- (<NCNotificationAlertDestinationDelegate> *)delegate;
- (void)setDelegate:(id <NCNotificationAlertDestinationDelegate>)arg1;

@optional

- (void)prepareDestinationToReceiveCriticalNotificationRequest:(NCNotificationRequest *)arg1;

@end
