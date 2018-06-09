/* made by EzioChiu.
 */

@protocol STAppUsageGroupSpecifierProviderDelegate <NSObject>

@required

- (void)appUsageProvider:(STAppUsageGroupSpecifierProvider *)arg1 didSelectSpecifier:(PSSpecifier *)arg2 forUsageItem:(STUsageItem *)arg3;

@end
