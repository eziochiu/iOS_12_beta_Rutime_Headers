/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController {
    DAAccount * _daAccount;
    bool  _haveRegisteredForAccountsChanged;
}

@property (nonatomic, retain) DAAccount *daAccount;

- (void).cxx_destruct;
- (void)_accountsChanged:(id)arg1;
- (void)_listenForAccountsChangedNotifications;
- (id)_navTitle;
- (id)accountDescriptionForFirstTimeSetup;
- (id)accountFromSpecifier;
- (Class)accountInfoControllerClass;
- (void)cancelButtonClicked:(id)arg1;
- (id)daAccount;
- (void)dealloc;
- (void)loadView;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(bool)arg3 error:(id)arg4;
- (id)otherSpecifiers;
- (void)reloadAccount;
- (void)setDaAccount:(id)arg1;
- (bool)shouldVerifyBeforeAccountSave;
- (id)specifiers;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
