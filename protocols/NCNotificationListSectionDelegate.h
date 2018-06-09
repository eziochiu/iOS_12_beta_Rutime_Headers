/* made by EzioChiu.
 */

@protocol NCNotificationListSectionDelegate <NSObject>

@required

- (NSString *)notificationListSection:(NCNotificationListSection *)arg1 coalescingIdentifierForNotificationRequest:(NCNotificationRequest *)arg2;
- (bool)notificationListSection:(NCNotificationListSection *)arg1 shouldInsertForExpandedStackNotificationRequest:(NCNotificationRequest *)arg2;

@end
