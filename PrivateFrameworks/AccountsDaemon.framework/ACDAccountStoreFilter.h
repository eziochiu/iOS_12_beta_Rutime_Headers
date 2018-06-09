/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAccountStoreFilter : NSObject <ACDAccountStoreProtocol> {
    ACDAccountStore * _backingAccountStore;
}

@property (nonatomic, retain) ACDAccountStore *backingAccountStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_whiteList;

- (void).cxx_destruct;
- (bool)_accessGrantedForBundleID:(id)arg1 onAccountTypeID:(id)arg2;
- (bool)_accessGrantedForClient:(id)arg1 onAccountTypeID:(id)arg2;
- (id)_appPermissionsForAccountTypeIdentifier:(id)arg1;
- (bool)_clientHasPermissionToAddAccount:(id)arg1;
- (bool)_isClientPermittedToAccessAccount:(id)arg1;
- (bool)_isClientPermittedToAccessAccountTypeWithIdentifier:(id)arg1;
- (bool)_isClientPermittedToRemoveAccount:(id)arg1;
- (bool)_wildCardAuthorizationMatchingForAccountTypeIdentifier:(id)arg1;
- (void)accessKeysForAccountType:(id)arg1 handler:(id /* block */)arg2;
- (void)accountExistsWithDescription:(id)arg1 completion:(id /* block */)arg2;
- (void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(id /* block */)arg2;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(id /* block */)arg2;
- (void)accountTypeWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)accountTypesWithHandler:(id /* block */)arg1;
- (void)accountWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)accountsOnPairedDeviceWithAccountType:(id)arg1 handler:(id /* block */)arg2;
- (void)accountsWithAccountType:(id)arg1 handler:(id /* block */)arg2;
- (void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(id /* block */)arg3;
- (void)accountsWithHandler:(id /* block */)arg1;
- (void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)appPermissionsForAccountType:(id)arg1 withHandler:(id /* block */)arg2;
- (id)backingAccountStore;
- (void)canSaveAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(id /* block */)arg3;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(id /* block */)arg2;
- (void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(id /* block */)arg2;
- (void)clientTokenForAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)credentialForAccount:(id)arg1 serviceID:(id)arg2 handler:(id /* block */)arg3;
- (void)credentialForAccountWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)credentialItemForAccount:(id)arg1 serviceName:(id)arg2 completion:(id /* block */)arg3;
- (void)credentialItemsWithCompletion:(id /* block */)arg1;
- (void)dataclassActionsForAccountDeletion:(id)arg1 completion:(id /* block */)arg2;
- (void)dataclassActionsForAccountSave:(id)arg1 completion:(id /* block */)arg2;
- (void)dataclassesWithHandler:(id /* block */)arg1;
- (void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)grantedPermissionsForAccountType:(id)arg1 withHandler:(id /* block */)arg2;
- (void)handleURL:(id)arg1;
- (void)insertAccountType:(id)arg1 withHandler:(id /* block */)arg2;
- (void)insertCredentialItem:(id)arg1 completion:(id /* block */)arg2;
- (void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)isPushSupportedForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(id /* block */)arg2;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 completion:(id /* block */)arg3;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(bool)arg3 completion:(id /* block */)arg4;
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(bool)arg4 completion:(id /* block */)arg5;
- (void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)permissionForAccountType:(id)arg1 withHandler:(id /* block */)arg2;
- (void)preloadDataclassOwnersWithCompletion:(id /* block */)arg1;
- (void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id /* block */)arg3;
- (void)removeAccountType:(id)arg1 withHandler:(id /* block */)arg2;
- (void)removeAccountsFromPairedDeviceWithCompletion:(id /* block */)arg1;
- (void)removeCredentialItem:(id)arg1 completion:(id /* block */)arg2;
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)reportTelemetryForLandmarkEvent:(id /* block */)arg1;
- (void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(id /* block */)arg3;
- (void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)saveAccount:(id)arg1 verify:(bool)arg2 dataclassActions:(id)arg3 completion:(id /* block */)arg4;
- (void)saveAccount:(id)arg1 withHandler:(id /* block */)arg2;
- (void)saveCredentialItem:(id)arg1 completion:(id /* block */)arg2;
- (void)setBackingAccountStore:(id)arg1;
- (void)setClientBundleID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 completion:(id /* block */)arg4;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(id /* block */)arg4;
- (void)supportedDataclassesForAccountType:(id)arg1 handler:(id /* block */)arg2;
- (void)syncableDataclassesForAccountType:(id)arg1 handler:(id /* block */)arg2;
- (void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(id /* block */)arg2;
- (void)triggerKeychainMigrationIfNecessary:(id /* block */)arg1;
- (void)typeIdentifierForDomain:(id)arg1 withHandler:(id /* block */)arg2;
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(id /* block */)arg2;
- (void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(id /* block */)arg2;

@end
