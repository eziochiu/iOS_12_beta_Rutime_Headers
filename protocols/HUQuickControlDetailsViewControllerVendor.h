/* made by EzioChiu.
 */

@protocol HUQuickControlDetailsViewControllerVendor <NSObject>

@required

- (UIViewController<HUPresentationDelegateHost><HUPreloadableViewController> *)createDetailsViewController;
- (NSString *)secondaryQuickControlPresentationStyle;

@end
