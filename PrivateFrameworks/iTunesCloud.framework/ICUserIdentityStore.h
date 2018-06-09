/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICUserIdentityStore : NSObject <ICUserIdentityStoreBackendDelegate, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    ACAccountStore * _accountStore;
    ICValueHistory * _activeAccountHistory;
    ICValueHistory * _activeLockerAccountHistory;
    <ICUserIdentityStoreBackend> * _backend;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    ICUserIdentityStoreCoding * _codingHelper;
    ICDelegateAccountStore * _delegateAccountStore;
    ICDelegateAccountStoreOptions * _delegateAccountStoreOptions;
    NSOperationQueue * _operationQueue;
}

@property (nonatomic, readonly) <ICUserIdentityStoreBackend> *_unsafeBackend;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_claimSingleWriterStatus;
+ (id)defaultIdentityStore;
+ (bool)supportsSecureCoding;
+ (id)testingIdentityStoreWithDatabasePath:(id)arg1;
+ (id)testingIdentityStoreWithSingleWriterService:(id)arg1;

- (void).cxx_destruct;
- (bool)_allowsDelegationForUserIdentity:(id)arg1;
- (void)_delegateAccountStoreDidChangeNotification:(id)arg1;
- (void)_dispatchDidChangeNotification:(bool)arg1 didDelegateAccountStoreChange:(bool)arg2;
- (id)_dsidForTimestamp:(unsigned long long)arg1 history:(id)arg2;
- (void)_dsidForUserIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)_existingIdentityPropertiesForUserIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)_importValuesFromCodingHelper:(id)arg1;
- (id)_initCommon;
- (id)_initWithStyle:(long long)arg1 delegateAccountStoreOptions:(id)arg2;
- (void)_openDelegateAccountStoreForUserIdentity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_openDelegateAccountStoreWithCompletionHandler:(id /* block */)arg1;
- (void)_prepareDelegateAccountStoreWithCompletionHandler:(id /* block */)arg1;
- (void)_registerForDelegateAccountStoreNotifications:(id)arg1;
- (void)_reloadForExternalChange;
- (void)_resetDelegateAccountStoreWithCompletionHandler:(id /* block */)arg1;
- (void)_saveIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_unregisterForDelegateAccountStoreNotifications:(id)arg1;
- (id)_unsafeBackend;
- (void)_unsafe_deleteDelegateAccountStore;
- (void)_updateDelegateAccountStoreUsingBlock:(id /* block */)arg1;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateDelegateTokensUsingBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)enumerateDelegateTokensWithType:(long long)arg1 usingBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)getDelegationUUIDsForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPropertiesForActiveICloudAccountWithCompletionHandler:(id /* block */)arg1;
- (void)getPropertiesForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getVerificationContextForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)removeAllDelegateTokensWithCompletionHandler:(id /* block */)arg1;
- (void)removeDelegateTokenForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDelegateTokensExpiringBeforeDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removePropertiesForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setActiveAccountWithDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setActiveLockerAccountWithDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)synchronize;
- (void)synchronizeWithCompletionHandler:(id /* block */)arg1;
- (void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)userIdentityStoreBackendDidChange:(id)arg1;

@end
