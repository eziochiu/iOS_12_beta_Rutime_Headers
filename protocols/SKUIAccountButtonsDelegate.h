/* made by EzioChiu.
 */

@protocol SKUIAccountButtonsDelegate <NSObject>

@optional

- (void)accountButtonsViewControllerDidSignIn:(SKUIAccountButtonsViewController *)arg1;
- (void)accountButtonsViewControllerDidSignOut:(SKUIAccountButtonsViewController *)arg1;
- (void)accountButtonsViewControllerDidTapECommerceLink:(SKUIAccountButtonsViewController *)arg1;

@end
