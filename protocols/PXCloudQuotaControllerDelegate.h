/* made by EzioChiu.
 */

@protocol PXCloudQuotaControllerDelegate <NSObject>

@required

- (void)cloudQuotaController:(PXCloudQuotaController *)arg1 presentInformationBanner:(UIView *)arg2;
- (UIViewController *)presentingViewControllerForCloudQuotaController:(PXCloudQuotaController *)arg1;

@end
