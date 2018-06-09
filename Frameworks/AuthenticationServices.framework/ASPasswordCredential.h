/* made by EzioChiu
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASPasswordCredential : NSObject <NSCopying, NSSecureCoding> {
    NSString * _password;
    NSString * _user;
}

@property (nonatomic, readonly, copy) NSString *password;
@property (nonatomic, readonly, copy) NSString *user;

+ (id)credentialWithUser:(id)arg1 password:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2;
- (id)password;
- (id)user;

@end
