/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSSavedPasswordStore : NSObject {
    WBSAutoFillQuirksManager * _autoFillQuirksManager;
    NSDictionary * _domainToSavedPasswords;
    NSMutableDictionary * _domainToUsers;
    bool  _hasPasswordsEligibleForAutoFill;
    WBSKeychainCredentialNotificationMonitor * _keychainMonitor;
    id  _keychainNotificationRegistrationToken;
    NSArray * _savedPasswords;
}

@property (nonatomic, readonly, copy) NSDictionary *domainToSavedPasswords;
@property (nonatomic, readonly) bool hasDuplicatedPasswords;
@property (nonatomic, readonly) bool hasPasswordsEligibleForAutoFill;
@property (nonatomic, readonly) NSArray *savedPasswords;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (void)removePassword:(id)arg1;
+ (id)sharedStore;

- (void).cxx_destruct;
- (id)_allInternetPasswordEntriesFromKeychain;
- (void)_cleanUpRedundantCredentialsWithoutUsernames;
- (void)_ensureDomainsToUsersExists;
- (void)_postSavedPasswordStoreDidChangeNotification;
- (void)_removePassword:(id)arg1;
- (bool)canChangeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3;
- (bool)canSaveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4;
- (bool)changeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3;
- (void)dealloc;
- (id)domainToSavedPasswords;
- (bool)hasDuplicatedPasswords;
- (bool)hasPasswordsEligibleForAutoFill;
- (id)init;
- (void)removePassword:(id)arg1;
- (void)removeSite:(id)arg1 fromPassword:(id)arg2;
- (void)reset;
- (id)saveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4;
- (id)savedPasswordForURL:(id)arg1 user:(id)arg2 password:(id)arg3;
- (bool)savedPasswordHasReusedPassword:(id)arg1;
- (id)savedPasswords;
- (id)savedPasswordsWithDuplicatedPassword:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (bool)safari_canSaveUser:(id)arg1 password:(id)arg2 forUserTypedSite:(id)arg3;
- (id)safari_saveUser:(id)arg1 password:(id)arg2 forUserTypedSite:(id)arg3;

@end
