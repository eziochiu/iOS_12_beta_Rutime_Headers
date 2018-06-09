/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAccountManager : NSObject {
    NSObject<OS_dispatch_queue> * _accountQueue;
    ACAccountStore * _accountStore;
    ACAccountType * _appleIDAccountType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _appleIDAccountTypeLock;
    ACAccountType * _authKitAccountType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _authKitAccountTypeLock;
    ACAccountType * _iCloudAccountType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _iCloudAccountTypeLock;
}

@property (nonatomic, readonly) ACAccountType *appleIDAccountType;
@property (nonatomic, readonly) ACAccountType *authKitAccountType;
@property (nonatomic, retain) ACAccountStore *store;

+ (bool)isAccountsFrameworkAvailable;
+ (id)sharedInstance;
+ (id)stringRepresentationForService:(long long)arg1;

- (void).cxx_destruct;
- (id)DSIDForAccount:(id)arg1;
- (id)_aliasesForiCloudAccount:(id)arg1;
- (id)_altDSIDForiCloudAccount:(id)arg1;
- (id)_iCloudAccountType;
- (void)_removeTokenForKeys:(id)arg1 forAccount:(id)arg2;
- (void)_removeTokenKey:(id)arg1 forAccount:(id)arg2;
- (bool)_setUsername:(id)arg1 forAccount:(id)arg2;
- (id)_tokenWithName:(id)arg1 forAccount:(id)arg2 error:(id*)arg3;
- (id)activeServiceNamesForAccount:(id)arg1;
- (id)aliasesForAccount:(id)arg1;
- (id)allAuthKitAccounts;
- (id)altDSIDForAccount:(id)arg1;
- (id)appleIDAccountType;
- (id)appleIDAccountWithAltDSID:(id)arg1;
- (id)appleIDAccountWithAppleID:(id)arg1;
- (id)authKitAccountType;
- (id)authKitAccountWithAltDSID:(id)arg1;
- (id)authKitAccountWithAppleID:(id)arg1;
- (id)authKitAccountWithDSID:(id)arg1;
- (unsigned long long)authenticationModeForAccount:(id)arg1;
- (id)continuationTokenForAccount:(id)arg1;
- (id)continuationTokenForAccount:(id)arg1 error:(id*)arg2;
- (bool)hasPrimaryiCloudAccountForAltDSID:(id)arg1;
- (bool)hasPrimaryiCloudAccountForAppleID:(id)arg1;
- (id)hearbeatTokenForAccount:(id)arg1;
- (id)hearbeatTokenForAccount:(id)arg1 error:(id*)arg2;
- (id)iCloudAccountForAltDSID:(id)arg1;
- (id)iCloudAccountForAppleID:(id)arg1;
- (id)init;
- (bool)isPrimaryiCloudAccount:(id)arg1;
- (id)masterTokenForAccount:(id)arg1;
- (id)mostRecentlyUsedAuthKitAccount;
- (bool)needsRepairForAccount:(id)arg1;
- (id)passwordResetTokenBackupForAccount:(id)arg1;
- (id)passwordResetTokenBackupForAccount:(id)arg1 error:(id*)arg2;
- (id)passwordResetTokenForAccount:(id)arg1;
- (id)passwordResetTokenForAccount:(id)arg1 error:(id*)arg2;
- (void)removeAllPasswordResetTokens;
- (void)removeContinuationTokenForAccount:(id)arg1;
- (void)removeMasterTokenForAccount:(id)arg1;
- (void)removeUnusedAuthKitAccounts;
- (unsigned long long)repairStateForAccount:(id)arg1;
- (bool)saveAccount:(id)arg1 error:(id*)arg2;
- (unsigned long long)securityLevelForAccount:(id)arg1;
- (id)servicesUsingAccount:(id)arg1;
- (void)setAccount:(id)arg1 inUse:(bool)arg2 byService:(long long)arg3;
- (void)setAliases:(id)arg1 forAccount:(id)arg2;
- (void)setAltDSID:(id)arg1 forAccount:(id)arg2;
- (void)setAuthenticationMode:(unsigned long long)arg1 forAccount:(id)arg2;
- (void)setDSID:(id)arg1 forAccount:(id)arg2;
- (void)setRepairState:(unsigned long long)arg1 forAccount:(id)arg2;
- (void)setSecurityLevel:(unsigned long long)arg1 forAccount:(id)arg2;
- (void)setStore:(id)arg1;
- (id)store;
- (id)transportableAuthKitAccount:(id)arg1;
- (void)updateUsername:(id)arg1 forAccountsWithAltDSID:(id)arg2;

@end
