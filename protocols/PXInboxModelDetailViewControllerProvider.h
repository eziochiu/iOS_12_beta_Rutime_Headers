/* made by EzioChiu.
 */

@protocol PXInboxModelDetailViewControllerProvider <NSObject>

@required

- (long long)presentationTypeForInboxModel:(id <PXInboxModel>)arg1;
- (UIViewController *)viewControllerForInboxModel:(id <PXInboxModel>)arg1 fromViewController:(UIViewController *)arg2;

@optional

- (void)popViewControllerForModel:(id <PXInboxModel>)arg1 fromViewController:(UIViewController *)arg2 toNavigableForYouViewController:(id <PXNavigableForYouViewController>)arg3;

@end
