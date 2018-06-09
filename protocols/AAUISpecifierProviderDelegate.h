/* made by EzioChiu.
 */

@protocol AAUISpecifierProviderDelegate <NSObject>

@required

- (void)reloadSpecifiersForProvider:(id <AAUISpecifierProvider>)arg1 oldSpecifiers:(NSArray *)arg2 animated:(bool)arg3;
- (void)specifierProvider:(id <AAUISpecifierProvider>)arg1 didFinishLoadingSpecifier:(PSSpecifier *)arg2;
- (void)specifierProvider:(id <AAUISpecifierProvider>)arg1 showViewController:(UIViewController *)arg2;
- (void)specifierProvider:(id <AAUISpecifierProvider>)arg1 willBeginLoadingSpecifier:(PSSpecifier *)arg2;

@end
