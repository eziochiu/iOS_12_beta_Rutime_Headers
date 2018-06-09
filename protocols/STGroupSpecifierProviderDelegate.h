/* made by EzioChiu.
 */

@protocol STGroupSpecifierProviderDelegate <NSObject>

@required

- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 reloadSpecifier:(PSSpecifier *)arg2 animated:(bool)arg3;
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 showConfirmationViewForSpecifier:(PSConfirmationSpecifier *)arg2;
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 showController:(UIViewController *)arg2 animated:(bool)arg3;

@end
