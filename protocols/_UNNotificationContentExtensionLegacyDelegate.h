/* made by EzioChiu.
 */

@protocol _UNNotificationContentExtensionLegacyDelegate <NSObject>

@required

- (void)notificationContentExtension:(id <_UNNotificationContentExtensionLegacy>)arg1 setDismissEnabled:(bool)arg2;
- (void)notificationContentExtensionDismiss:(id <_UNNotificationContentExtensionLegacy>)arg1;

@end
