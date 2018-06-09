/* made by EzioChiu
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASPasswordCredentialIdentity : NSObject <NSCopying, NSSecureCoding> {
    long long  _rank;
    NSString * _recordIdentifier;
    ASCredentialServiceIdentifier * _serviceIdentifier;
    NSString * _user;
}

@property (nonatomic) long long rank;
@property (nonatomic, readonly, copy) NSString *recordIdentifier;
@property (nonatomic, readonly) ASCredentialServiceIdentifier *serviceIdentifier;
@property (nonatomic, readonly, copy) NSString *user;

+ (id)identityWithServiceIdentifier:(id)arg1 user:(id)arg2 recordIdentifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithFoundationCredentialIdentity:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceIdentifier:(id)arg1 user:(id)arg2 recordIdentifier:(id)arg3;
- (long long)rank;
- (id)recordIdentifier;
- (id)serviceIdentifier;
- (void)setRank:(long long)arg1;
- (id)user;

@end
