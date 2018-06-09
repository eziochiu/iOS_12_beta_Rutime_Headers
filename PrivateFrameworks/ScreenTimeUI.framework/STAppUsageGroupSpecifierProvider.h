/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STAppUsageGroupSpecifierProvider : STUsageGroupSpecifierProvider <STAppUsageCellDelegate> {
    NSSet * _activeBudgetedIdentifiers;
    <STAppUsageGroupSpecifierProviderDelegate> * _appUsageProviderDelegate;
    unsigned long long  _numberOfAppsToShow;
    NSObject<STTimeAllowancesViewModelCoordinator> * _timeAllowancesCoordinator;
    NSDictionary * _usageItemsByIdentifier;
}

@property (nonatomic, retain) NSSet *activeBudgetedIdentifiers;
@property (nonatomic) <STAppUsageGroupSpecifierProviderDelegate> *appUsageProviderDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfAppsToShow;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<STTimeAllowancesViewModelCoordinator> *timeAllowancesCoordinator;
@property (nonatomic, copy) NSDictionary *usageItemsByIdentifier;

- (void).cxx_destruct;
- (id)activeBudgetedIdentifiers;
- (void)appUsageCell:(id)arg1 didTapAccessoryButtonForUsageItem:(id)arg2;
- (id)appUsageProviderDelegate;
- (id)getUsageItem:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)loadActiveBudgetedIdentifiers;
- (unsigned long long)numberOfAppsToShow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)reloadAppUsageSpecifiers;
- (void)setActiveBudgetedIdentifiers:(id)arg1;
- (void)setAppUsageProviderDelegate:(id)arg1;
- (void)setNumberOfAppsToShow:(unsigned long long)arg1;
- (void)setTimeAllowancesCoordinator:(id)arg1;
- (void)setUsageItemsByIdentifier:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)showMoreApps:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)timeAllowancesCoordinator;
- (id)usageItemsByIdentifier;

@end
