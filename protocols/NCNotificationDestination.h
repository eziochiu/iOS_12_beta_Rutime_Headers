/* made by EzioChiu.
 */

@protocol NCNotificationDestination <NSObject>

@required

- (bool)canReceiveNotificationRequest:(NCNotificationRequest *)arg1;
- (<NCNotificationDestinationDelegate> *)delegate;
- (NSString *)identifier;
- (void)modifyNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
- (void)postNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;
- (void)setDelegate:(id <NCNotificationDestinationDelegate>)arg1;
- (void)withdrawNotificationRequest:(NCNotificationRequest *)arg1 forCoalescedNotification:(NCCoalescedNotification *)arg2;

@optional

- (bool)interceptsQueueRequest:(NCNotificationRequest *)arg1;
- (void)updateNotificationSectionSettings:(NCNotificationSectionSettings *)arg1;

@end
