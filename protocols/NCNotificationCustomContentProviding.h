/* made by EzioChiu.
 */

@protocol NCNotificationCustomContentProviding <NSObject>

@required

- (UIViewController<NCNotificationCustomContent> *)longLookContentProvidingViewControllerForNotificationViewController:(NCNotificationViewController *)arg1;

@end
