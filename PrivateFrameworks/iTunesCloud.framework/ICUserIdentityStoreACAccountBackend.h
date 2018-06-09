/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICUserIdentityStoreACAccountBackend : NSObject <ICUserIdentityStoreBackend> {
    ACAccountStore * _accountStore;
    NSMapTable * _accountToIdentityProperties;
    id  _activeAccountDSIDValue;
    id  _activeLockerAccountDSIDValue;
    NSArray * _allStoreAccounts;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <ICUserIdentityStoreBackendDelegate> * _delegate;
    NSMutableDictionary * _dsidToAccount;
    NSOperationQueue * _operationQueue;
    id  _primaryICloudAccountIdentityPropertiesValue;
    ACAccountType * _storeAccountType;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICUserIdentityStoreBackendDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)_allStoreAccountsWithCompletion:(id /* block */)arg1;
- (void)_applyIdentityProperties:(id)arg1 toAccount:(id)arg2;
- (void)_handleITunesStoreAccountsChanged;
- (id)_newUserIdentityPropertiesForAccount:(id)arg1;
- (id)_primaryICloudAccountIdentityProperties;
- (void)_storeAccountForDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)_storeAccountTypeWithCompletion:(id /* block */)arg1;
- (void)_synchronize;
- (void)activeAccountDSIDWithCompletion:(id /* block */)arg1;
- (void)activeLockerAccountDSIDWithCompletion:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (void)identityPropertiesForDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)identityPropertiesForPrimaryICloudAccountWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithACAccountStore:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeIdentityForDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(id /* block */)arg3;
- (void)synchronize;
- (void)updateActiveAccountDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)updateActiveLockerAccountDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)verificationContextForAccountEstablishmentWithCompletion:(id /* block */)arg1;
- (void)verificationContextForDSID:(id)arg1 completion:(id /* block */)arg2;

@end
