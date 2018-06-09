/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAccountOverrideInfo : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _accountPropertyOverrides;
    bool  _accountWantsFlowControl;
    bool  _accountWantsPushRegistration;
    NSString * _email;
    bool  _isUnitTestingAccount;
    NSString * _password;
    NSString * _secondEmail;
}

@property (nonatomic, copy) NSDictionary *accountPropertyOverrides;
@property (nonatomic) bool accountWantsFlowControl;
@property (nonatomic) bool accountWantsPushRegistration;
@property (nonatomic, readonly) NSString *email;
@property (nonatomic) bool isUnitTestingAccount;
@property (nonatomic, readonly) NSString *password;
@property (nonatomic, copy) NSString *secondEmail;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)accountPropertyOverrides;
- (bool)accountWantsFlowControl;
- (bool)accountWantsPushRegistration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initAnonymousAccount;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmail:(id)arg1 password:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isUnitTestingAccount;
- (id)password;
- (id)secondEmail;
- (void)setAccountPropertyOverrides:(id)arg1;
- (void)setAccountWantsFlowControl:(bool)arg1;
- (void)setAccountWantsPushRegistration:(bool)arg1;
- (void)setIsUnitTestingAccount:(bool)arg1;
- (void)setSecondEmail:(id)arg1;

@end
