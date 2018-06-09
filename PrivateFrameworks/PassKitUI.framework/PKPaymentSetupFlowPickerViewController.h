/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupFlowPickerViewController : PKPaymentSetupTableViewController <PKPaymentSetupActivitySpinnerProtocol, PKPaymentSetupBrowseProductsViewControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol> {
    bool  _allowsManualEntry;
    NSArray * _betaTransitNetworks;
    PKPaymentSetupFooterView * _footerView;
    PKTableHeaderView * _headerView;
    bool  _hideSetupLaterButton;
    NSMutableArray * _pickerSections;
    PKPaymentProvisioningController * _provisioningController;
    long long  _setupContext;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
}

@property (nonatomic) bool allowsManualEntry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKTableHeaderView *headerView;
@property (nonatomic) bool hideSetupLaterButton;
@property (nonatomic, readonly) PKPaymentProvisioningController *provisioningController;
@property (nonatomic, readonly) long long setupContext;
@property (nonatomic, readonly) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;

+ (id)_filteredPaymentSetupProducts:(id)arg1 localCredential:(id)arg2 setupContext:(long long)arg3 webService:(id)arg4 mobileCarrierRegion:(id)arg5;
+ (bool)_localCredentials:(id)arg1 containProduct:(id)arg2;
+ (id)paymentSetupFlowPickerWithSetupDelegate:(id)arg1 context:(long long)arg2 provisioningController:(id)arg3;

- (void).cxx_destruct;
- (void)_didSelectProducts:(id)arg1;
- (void)_presentAppRequiredForProduct:(id)arg1;
- (void)_setNavigationBarEnabled:(bool)arg1;
- (void)_setupLater:(id)arg1;
- (void)_terminateSetupFlow;
- (void)addPickerItem:(id)arg1 toSection:(id)arg2;
- (void)addPickerSection:(id)arg1;
- (bool)allowsManualEntry;
- (void)browseProductsViewController:(id)arg1 didSelectProduct:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)footerView;
- (id)headerView;
- (void)hideActivitySpinner;
- (bool)hideSetupLaterButton;
- (id)initWithSetupDelegate:(id)arg1 context:(long long)arg2 provisioningController:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)productSelectionViewController:(id)arg1 didSelectProduct:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)productSelectionViewController:(id)arg1 pushViewController:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)provisioningController;
- (void)setAllowsManualEntry:(bool)arg1;
- (void)setHideSetupLaterButton:(bool)arg1;
- (long long)setupContext;
- (id)setupDelegate;
- (void)showActivitySpinner;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
