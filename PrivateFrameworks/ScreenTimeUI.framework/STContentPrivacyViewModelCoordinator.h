/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STContentPrivacyViewModelCoordinator : NSObject <STContentPrivacyViewModelCoordinator> {
    NSMutableDictionary * _configurationPayloadsByType;
    NSString * _organizationIdentifier;
    RMAdminPersistenceController * _persistenceController;
    NSNumber * _userDSID;
    NSString * _userName;
    STContentPrivacyViewModel * _viewModel;
}

@property (nonatomic, retain) NSMutableDictionary *configurationPayloadsByType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *organizationIdentifier;
@property (nonatomic, readonly) RMAdminPersistenceController *persistenceController;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *userDSID;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, retain) STContentPrivacyViewModel *viewModel;

- (void).cxx_destruct;
- (id)_activationIdentifier;
- (id)_createUnrestrictedConfiguration:(id)arg1;
- (id)_getSettingsRestrictionsEnabledWithContext:(id)arg1 error:(id*)arg2;
- (id)_identifierForConfigurationType:(id)arg1;
- (id)_localDeviceRestrictions;
- (bool)_rebuildActivationInContext:(id)arg1 withNewConfigurations:(id)arg2 error:(id*)arg3;
- (id)_remoteDeviceRestrictions;
- (id)_restrictionsForWebFilterState:(unsigned long long)arg1;
- (bool)_setSettingsRestrictionsEnabled:(bool)arg1 error:(id*)arg2;
- (void)_setValue:(id)arg1 forMCFeature:(id)arg2;
- (void)_setValue:(id)arg1 forSBCapability:(id)arg2;
- (void)_updateConfiguration:(id)arg1 keyPath:(id)arg2 value:(id)arg3;
- (id)_valueForMCFeature:(id)arg1;
- (id)_valueForSBCapability:(id)arg1;
- (id)_valueForWebFilterState;
- (id)_valueInConfiguration:(id)arg1 keyPath:(id)arg2;
- (id)_valuesByRestriction;
- (id)_visibleRestrictions;
- (id)configurationPayloadsByType;
- (id)initWithPersistenceController:(id)arg1 organizationIdentifier:(id)arg2 userDSID:(id)arg3 userName:(id)arg4;
- (void)loadViewModelWithCompletionHandler:(id /* block */)arg1;
- (id)organizationIdentifier;
- (id)persistenceController;
- (void)saveContentPrivacyEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)saveRestrictionValue:(id)arg1 forItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)saveValuesForRestrictions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setConfigurationPayloadsByType:(id)arg1;
- (void)setOrganizationIdentifier:(id)arg1;
- (void)setUserDSID:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)userDSID;
- (id)userName;
- (id)valueForRestriction:(id)arg1;
- (id)viewModel;

@end
