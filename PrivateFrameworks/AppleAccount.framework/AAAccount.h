/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAAccount : NSObject {
    ACAccount * _account;
    NSArray * _appleIDAliases;
    NSString * _fmipToken;
    NSString * _protocolVersion;
}

@property (nonatomic, copy) NSString *accountDescription;
@property (nonatomic, readonly) NSDictionary *accountFirstDisplayAlert;
@property (nonatomic, readonly) NSDictionary *accountFooterButton;
@property (nonatomic, readonly) NSString *accountFooterText;
@property (nonatomic, readonly) int accountServiceType;
@property (nonatomic, readonly) NSArray *appleIDAliases;
@property (nonatomic, copy) NSString *authToken;
@property (nonatomic, readonly) NSDictionary *dataclassProperties;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSSet *enabledDataclasses;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, copy) NSString *fmipToken;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) bool needsEmailConfiguration;
@property (nonatomic, readonly) bool needsRegistration;
@property (nonatomic) bool needsToVerifyTerms;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic) bool primaryAccount;
@property (nonatomic, readonly) NSString *primaryEmail;
@property (nonatomic, readonly) bool primaryEmailVerified;
@property (nonatomic, readonly) NSString *protocolVersion;
@property (nonatomic, readonly) NSSet *provisionedDataclasses;
@property (nonatomic, readonly) bool serviceUnavailable;
@property (nonatomic, readonly) NSDictionary *serviceUnavailableInfo;
@property (nonatomic, readonly) NSArray *supportedDataclasses;
@property (nonatomic, readonly) NSString *syncStoreIdentifier;
@property (nonatomic, copy) NSString *username;

+ (id)accountTypeString;
+ (id)dataclassesBoundToPrimaryAccount;
+ (id)dataclassesBoundToSingleAccount;
+ (id)dataclassesBoundToSyncAccount;

- (void).cxx_destruct;
- (id)_childAccounts;
- (id)_mailChildAccount;
- (id)account;
- (id)accountDescription;
- (id)accountFirstDisplayAlert;
- (id)accountFooterButton;
- (id)accountFooterText;
- (id)accountPropertyForKey:(id)arg1;
- (int)accountServiceType;
- (id)appleIDAliases;
- (id)authToken;
- (void)authenticateWithHandler:(id /* block */)arg1;
- (id)dataclassProperties;
- (id)displayName;
- (id)enabledDataclasses;
- (id)firstName;
- (void)flushCachedPassword;
- (void)flushCachedTokens;
- (id)fmipToken;
- (id)identifier;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1;
- (bool)isEnabledForDataclass:(id)arg1;
- (bool)isProvisionedForDataclass:(id)arg1;
- (id)lastName;
- (int)mobileMeAccountStatus;
- (bool)needsEmailConfiguration;
- (bool)needsRegistration;
- (bool)needsToVerifyTerms;
- (void)notifyUserOfQuotaDepletion;
- (id)password;
- (id)personID;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1 withHandler:(id /* block */)arg2;
- (bool)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1;
- (bool)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1 withHandler:(id /* block */)arg2;
- (bool)primaryAccount;
- (id)primaryEmail;
- (bool)primaryEmailVerified;
- (id)propertiesForDataclass:(id)arg1;
- (id)protocolVersion;
- (id)provisionedDataclasses;
- (void)removePasswordFromKeychain;
- (void)removeTokensFromKeychain;
- (void)renewCredentialsForAppleIDWithHandler:(id /* block */)arg1;
- (void)saveFMIPTokenInKeychain;
- (void)savePasswordInKeychain;
- (void)saveTokensInKeychain;
- (bool)serviceUnavailable;
- (id)serviceUnavailableInfo;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setAuthToken:(id)arg1;
- (void)setEnabled:(bool)arg1 forDataclass:(id)arg2;
- (void)setFmipToken:(id)arg1;
- (void)setNeedsToVerifyTerms:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setPrimaryAccount:(bool)arg1;
- (void)setUseCellular:(bool)arg1 forDataclass:(id)arg2;
- (void)setUsername:(id)arg1;
- (void)setupChildMailAccountAndEnable:(bool)arg1 withEmail:(id)arg2;
- (void)signInWithHandler:(id /* block */)arg1;
- (id)supportedDataclasses;
- (id)syncStoreIdentifier;
- (void)updateAccountPropertiesWithHandler:(id /* block */)arg1;
- (void)updateAccountWithProvisioningResponse:(id)arg1;
- (bool)useCellularForDataclass:(id)arg1;
- (id)username;

@end
