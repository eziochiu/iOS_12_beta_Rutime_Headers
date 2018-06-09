/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCAppSignerViewController : UITableViewController {
    UIAlertController * _activeAlertController;
    MCUIAppSigner * _appSigner;
    bool  _isNetworkReachable;
    NSObject<OS_dispatch_group> * _trustActionGroup;
}

@property (nonatomic, retain) UIAlertController *activeAlertController;
@property (nonatomic, retain) MCUIAppSigner *appSigner;
@property (nonatomic) bool isNetworkReachable;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *trustActionGroup;

- (void).cxx_destruct;
- (void)_cancelActiveAlertController:(bool)arg1;
- (bool)_isAppRemovalAllowed;
- (bool)_isEnterpriseAppTrustAllowed;
- (bool)_isShowingTrustUntrustRowAllowed;
- (void)_presentAppRemovalAlert;
- (void)_presentNetworkRequiredAlert;
- (void)_presentTrustAlert;
- (void)_presentVerifyAppAlert;
- (void)_setup;
- (void)_trustActionGroupVerifyAppsAndTrustSigner:(bool)arg1;
- (id)activeAlertController;
- (id)appSigner;
- (void)appSignerApplicationsChanged:(id)arg1;
- (bool)canBeShownFromSuspendedState;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)effectiveSettingsChanged:(id)arg1;
- (id)initWithAppSigner:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (bool)isNetworkReachable;
- (void)networkReachabilityChanged:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshAppSigner;
- (void)removeAppSignerApps;
- (void)setActiveAlertController:(id)arg1;
- (void)setAppSigner:(id)arg1;
- (void)setIsNetworkReachable:(bool)arg1;
- (void)setTrustActionGroup:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)trustActionGroup;
- (void)trustAppSigner;
- (void)verifyApps;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
