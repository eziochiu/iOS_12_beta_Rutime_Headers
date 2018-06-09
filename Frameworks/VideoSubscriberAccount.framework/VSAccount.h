/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAccount : NSObject <NSSecureCoding> {
    NSString * _accountDescription;
    VSAccountStore * _accountStore;
    NSString * _accountTypeDescription;
    VSOptional * _authenticationToken;
    VSOptional * _identityProviderID;
    VSOptional * _optionalIdentityProviderDisplayName;
    NSString * _username;
}

@property (nonatomic, copy) NSString *accountDescription;
@property (nonatomic) VSAccountStore *accountStore;
@property (nonatomic, copy) NSString *accountTypeDescription;
@property (nonatomic, retain) VSOptional *authenticationToken;
@property (nonatomic, readonly) NSString *identityProviderDisplayName;
@property (nonatomic, retain) VSOptional *identityProviderID;
@property (nonatomic, retain) VSOptional *keychainItem;
@property (nonatomic, retain) VSOptional *optionalIdentityProviderDisplayName;
@property (nonatomic, copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountDescription;
- (id)accountStore;
- (id)accountTypeDescription;
- (id)authenticationToken;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identityProviderDisplayName;
- (id)identityProviderID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keychainItem;
- (id)optionalIdentityProviderDisplayName;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setAccountTypeDescription:(id)arg1;
- (void)setAuthenticationToken:(id)arg1;
- (void)setIdentityProviderID:(id)arg1;
- (void)setKeychainItem:(id)arg1;
- (void)setOptionalIdentityProviderDisplayName:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
