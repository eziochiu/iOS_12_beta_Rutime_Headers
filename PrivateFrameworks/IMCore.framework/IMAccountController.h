/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMAccountController : NSObject {
    NSMutableDictionary * _accountMap;
    NSArray * _accounts;
    bool  _cachesEnabled;
    bool  _isReadOnly;
    NSArray * _operationalAccountsCache;
    NSMutableDictionary * _serviceToAccountsMap;
    NSMutableDictionary * _serviceToActiveAccountsMap;
    NSMutableDictionary * _serviceToConnectedAccountsMap;
    NSMutableDictionary * _serviceToOperationalAccountsMap;
}

@property (copy) NSArray *accounts;
@property (nonatomic, readonly) NSArray *activeAccounts;
@property (nonatomic, readonly) IMAccount *activeIMessageAccount;
@property (nonatomic, readonly) IMAccount *activeSMSAccount;
@property (nonatomic, readonly) id bestAccountForStatus;
@property (nonatomic, readonly) NSArray *connectedAccounts;
@property (nonatomic, readonly) int numberOfAccounts;
@property (nonatomic, readonly) NSArray *operationalAccounts;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (id)bestAccountFromAccounts:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)__iCloudSystemAccountForService:(id)arg1;
- (void)_accountRegistrationStatusChanged:(id)arg1;
- (void)_activeAccountChanged:(id)arg1;
- (id)_bestAccountForAddresses:(id)arg1;
- (id)_bestOperationalAccountForSendingForService:(id)arg1;
- (bool)_deactivateAccount:(id)arg1;
- (bool)_deactivateAccounts:(id)arg1;
- (void)_disableCache;
- (void)_enableCache;
- (id)_operationalPhoneAccountForService:(id)arg1;
- (void)_rebuildOperationalAccountsCache:(bool)arg1;
- (bool)accountActive:(id)arg1;
- (id)accountAtIndex:(int)arg1;
- (bool)accountConnected:(id)arg1;
- (bool)accountConnecting:(id)arg1;
- (id)accountForUniqueID:(id)arg1;
- (id)accounts;
- (id)accountsForService:(id)arg1;
- (id)accountsWithCapability:(unsigned long long)arg1;
- (bool)activateAccount:(id)arg1;
- (bool)activateAccount:(id)arg1 force:(bool)arg2;
- (bool)activateAccount:(id)arg1 force:(bool)arg2 locally:(bool)arg3;
- (bool)activateAccount:(id)arg1 locally:(bool)arg2;
- (bool)activateAccounts:(id)arg1;
- (bool)activateAccounts:(id)arg1 force:(bool)arg2 locally:(bool)arg3;
- (bool)activateAndHandleReconnectAccount:(id)arg1;
- (bool)activateAndHandleReconnectAccounts:(id)arg1;
- (id)activeAccounts;
- (id)activeAccountsForService:(id)arg1;
- (id)activeIMessageAccount;
- (id)activeSMSAccount;
- (bool)addAccount:(id)arg1;
- (bool)addAccount:(id)arg1 atIndex:(int)arg2;
- (bool)addAccount:(id)arg1 atIndex:(int)arg2 locally:(bool)arg3;
- (bool)addAccount:(id)arg1 locally:(bool)arg2;
- (id)aimAccount;
- (void)autoLogin;
- (id)bestAccountForService:(id)arg1;
- (id)bestAccountForService:(id)arg1 login:(id)arg2 guid:(id)arg3;
- (id)bestAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestAccountForStatus;
- (id)bestAccountWithCapability:(unsigned long long)arg1;
- (id)bestActiveAccountForService:(id)arg1;
- (id)bestActiveAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestConnectedAccountForService:(id)arg1;
- (id)bestConnectedAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestOperationalAccountForService:(id)arg1;
- (id)bestOperationalAccountForService:(id)arg1 withLogin:(id)arg2;
- (bool)canActivateAccount:(id)arg1;
- (bool)canActivateAccounts:(id)arg1;
- (bool)canDeleteAccount:(id)arg1;
- (id)connectedAccounts;
- (id)connectedAccountsForService:(id)arg1;
- (id)connectedAccountsWithCapability:(unsigned long long)arg1;
- (bool)deactivateAccount:(id)arg1;
- (bool)deactivateAccount:(id)arg1 withDisable:(bool)arg2;
- (bool)deactivateAccounts:(id)arg1;
- (bool)deactivateAccounts:(id)arg1 withDisable:(bool)arg2;
- (void)dealloc;
- (bool)deleteAccount:(id)arg1;
- (bool)deleteAccount:(id)arg1 locally:(bool)arg2;
- (id)init;
- (id)jabberAccount;
- (id)mostLoggedInAccount;
- (int)numberOfAccounts;
- (id)operationalAccounts;
- (id)operationalAccountsForService:(id)arg1;
- (id)operationalAccountsWithCapability:(unsigned long long)arg1;
- (bool)readOnly;
- (void)setAccounts:(id)arg1;
- (void)setReadOnly:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_bestAccountForAddress:(id)arg1;
- (id)__ck_bestAccountForAddresses:(id)arg1;
- (id)__ck_bestAccountForAddresses:(id)arg1 withFallbackService:(id)arg2;
- (id)__ck_defaultAccountForService:(id)arg1;
- (id)__ck_operationalPhoneAccountForService:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore

- (id)__im_assistant_bestMessagingAccount;

@end
