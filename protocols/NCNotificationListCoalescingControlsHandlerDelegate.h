/* made by EzioChiu.
 */

@protocol NCNotificationListCoalescingControlsHandlerDelegate <NSObject>

@optional

- (void)notificationListCoalescingControlsHandler:(id <NCNotificationListCoalescingControlsHandler>)arg1 didTransitionToClearState:(bool)arg2;
- (void)notificationListCoalescingControlsHandler:(id <NCNotificationListCoalescingControlsHandler>)arg1 requestsClearingNotificationsWithCoalescingIdentifier:(NSString *)arg2 inSection:(unsigned long long)arg3;
- (void)notificationListCoalescingControlsHandler:(id <NCNotificationListCoalescingControlsHandler>)arg1 requestsRestackingNotificationsWithCoalescingIdentifier:(NSString *)arg2 inSection:(unsigned long long)arg3;

@end
