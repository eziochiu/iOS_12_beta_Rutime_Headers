/* made by EzioChiu.
 */

@protocol WFNetworkSettingsViewControllerDelegate <NSObject>

@required

- (void)networkSettingsViewControllerDidForgetNetwork:(WFNetworkSettingsViewController *)arg1;
- (void)networkSettingsViewControllerDidJoinNetwork:(WFNetworkSettingsViewController *)arg1;
- (void)networkSettingsViewControllerDidManageNetwork:(WFNetworkSettingsViewController *)arg1;
- (void)networkSettingsViewControllerDidRenewLease:(WFNetworkSettingsViewController *)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)networkSettingsViewControllerDidTapRecommendationLink:(WFNetworkSettingsViewController *)arg1;

@end
