/* made by EzioChiu.
 */

@protocol SXActionPreviewActivity <NSObject>

@required

- (void)commitViewController:(UIViewController *)arg1 action:(SXAction *)arg2;
- (UIViewController *)previewViewControllerForAction:(SXAction *)arg1;

@end
