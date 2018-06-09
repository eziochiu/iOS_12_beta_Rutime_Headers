/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STTimeAllowancesViewModelCoordinator : NSObject <STTimeAllowancesViewModelCoordinator> {
    NSString * _organizationIdentifier;
    RMAdminPersistenceController * _persistenceController;
    NSNumber * _userDSID;
    STTimeAllowancesViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *organizationIdentifier;
@property (nonatomic, readonly) RMAdminPersistenceController *persistenceController;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *userDSID;
@property (readonly) STTimeAllowancesViewModel *viewModel;

- (void).cxx_destruct;
- (id)_alwaysAllowActivationIdentifier;
- (id)_alwaysAllowConfigurationIdentifier;
- (id)_bedtimeActivationIdentifier;
- (id)_bedtimeConfigurationIdentifier;
- (id)_budgetConfigurationIdentifier;
- (void)_deleteActivationWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_iCloudAccountPredicate;
- (bool)_isPersonalOrganization;
- (void)_persistenceStoreDidChange:(id)arg1;
- (void)_registerForPersistenceStoreNotifications;
- (void)_saveActivationDictionary:(id)arg1 configurationDictionaries:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteAllowance:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithPersistenceController:(id)arg1 organizationIdentifier:(id)arg2 userDSID:(id)arg3;
- (void)loadViewModelWithCompletionHandler:(id /* block */)arg1;
- (id)organizationIdentifier;
- (id)persistenceController;
- (void)saveAllowance:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveAlwaysAllowList:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveDeviceBedtime:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setOrganizationIdentifier:(id)arg1;
- (void)setUserDSID:(id)arg1;
- (id)userDSID;
- (id)viewModel;

@end
