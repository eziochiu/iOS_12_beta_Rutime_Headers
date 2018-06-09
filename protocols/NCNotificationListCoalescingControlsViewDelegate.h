/* made by EzioChiu.
 */

@protocol NCNotificationListCoalescingControlsViewDelegate <NSObject>

@optional

- (void)notificationListCoalescingControlsView:(NCNotificationListCoalescingControlsView *)arg1 didTransitionToClearState:(bool)arg2;
- (void)notificationListCoalescingControlsViewRequestsClear:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsViewRequestsRestack:(NCNotificationListCoalescingControlsView *)arg1;

@end
