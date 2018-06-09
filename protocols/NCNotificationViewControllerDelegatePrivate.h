/* made by EzioChiu.
 */

@protocol NCNotificationViewControllerDelegatePrivate <NCNotificationViewControllerDelegate>

@optional

- (<NCAuxiliaryOptionsProviding> *)notificationViewController:(NCNotificationViewController *)arg1 auxiliaryOptionsContentProviderForNotificationRequest:(NCNotificationRequest *)arg2 withLongLook:(bool)arg3;
- (<NCNotificationStaticContentProviding> *)notificationViewController:(NCNotificationViewController *)arg1 staticContentProviderForNotificationRequest:(NCNotificationRequest *)arg2;

@end
