/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STUsageDetailListController : STListViewController <STAllowanceDetailListControllerDelegate, STAppUsageGroupSpecifierProviderDelegate> {
    STAllowanceProgressSpecifierProvider * _allowancesProvider;
    STAppUsageGroupSpecifierProvider * _appUsageProvider;
    STNoUsageDataView * _noUsageDataView;
    STNotificationsUsageGroupSpecifierProvider * _notificationsProvider;
    STDevicePickupsUsageGroupSpecifierProvider * _pickupsProvider;
    STScreenTimeUsageGroupSpecifierProvider * _screenTimeProvider;
    STTestGroupSpecifierProvider * _testProvider;
    NSObject<STTimeAllowancesViewModelCoordinator> * _timeAllowancesCoordinator;
    NSObject<STUsageDetailsViewModelCoordinator> * _usageDetailsCoordinator;
}

@property (nonatomic, retain) STAllowanceProgressSpecifierProvider *allowancesProvider;
@property (nonatomic, retain) STAppUsageGroupSpecifierProvider *appUsageProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) STNoUsageDataView *noUsageDataView;
@property (nonatomic, retain) STNotificationsUsageGroupSpecifierProvider *notificationsProvider;
@property (nonatomic, retain) STDevicePickupsUsageGroupSpecifierProvider *pickupsProvider;
@property (nonatomic, retain) STScreenTimeUsageGroupSpecifierProvider *screenTimeProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) STTestGroupSpecifierProvider *testProvider;
@property (nonatomic, retain) NSObject<STTimeAllowancesViewModelCoordinator> *timeAllowancesCoordinator;
@property (nonatomic, retain) NSObject<STUsageDetailsViewModelCoordinator> *usageDetailsCoordinator;

- (void).cxx_destruct;
- (void)allowanceDetailController:(id)arg1 didSaveAllowance:(id)arg2;
- (void)allowanceDetailControllerDidCancel:(id)arg1;
- (id)allowancesProvider;
- (id)appUsageProvider;
- (void)appUsageProvider:(id)arg1 didSelectSpecifier:(id)arg2 forUsageItem:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)noUsageDataView;
- (id)notificationsProvider;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pickupsProvider;
- (id)screenTimeProvider;
- (void)setAllowancesProvider:(id)arg1;
- (void)setAppUsageProvider:(id)arg1;
- (void)setNotificationsProvider:(id)arg1;
- (void)setPickupsProvider:(id)arg1;
- (void)setScreenTimeProvider:(id)arg1;
- (void)setTestProvider:(id)arg1;
- (void)setTimeAllowancesCoordinator:(id)arg1;
- (void)setUsageDetailsCoordinator:(id)arg1;
- (void)showNoUsageDataViewIfNeeded;
- (id)testProvider;
- (id)timeAllowancesCoordinator;
- (id)usageDetailsCoordinator;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
