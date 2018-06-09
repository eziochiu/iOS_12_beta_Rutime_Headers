/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKAccountIdentity : NSObject <NSSecureCoding> {
    NSString * _accountIdentifier;
    NSString * _displayName;
    unsigned long long  _identityType;
    NSString * _refreshToken;
    NSString * _token;
    NSString * _username;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) unsigned long long identityType;
@property (nonatomic, copy) NSString *refreshToken;
@property (nonatomic, copy) NSString *token;
@property (nonatomic, copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)identityType;
- (id)initWithCoder:(id)arg1;
- (id)refreshToken;
- (void)setAccountIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIdentityType:(unsigned long long)arg1;
- (void)setRefreshToken:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)token;
- (id)username;

@end
