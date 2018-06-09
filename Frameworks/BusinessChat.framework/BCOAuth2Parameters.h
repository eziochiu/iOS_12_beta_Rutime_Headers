/* made by EzioChiu
   Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

@interface BCOAuth2Parameters : NSObject <NSSecureCoding> {
    NSURL * _accessTokenURL;
    NSURL * _authorizationURL;
    NSString * _clientIdentifier;
    NSString * _clientSecret;
    NSString * _responseEncryptionKey;
    NSString * _responseType;
    NSArray * _scope;
    NSString * _state;
}

@property (nonatomic, retain) NSURL *accessTokenURL;
@property (nonatomic, retain) NSURL *authorizationURL;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, retain) NSString *clientSecret;
@property (nonatomic, retain) NSString *responseEncryptionKey;
@property (nonatomic, retain) NSString *responseType;
@property (nonatomic, retain) NSArray *scope;
@property (nonatomic, retain) NSString *state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessTokenURL;
- (id)authenticationSessionURL;
- (id)authorizationURL;
- (id)clientIdentifier;
- (id)clientSecret;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)responseEncryptionKey;
- (id)responseType;
- (id)scope;
- (void)setAccessTokenURL:(id)arg1;
- (void)setAuthorizationURL:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setClientSecret:(id)arg1;
- (void)setResponseEncryptionKey:(id)arg1;
- (void)setResponseType:(id)arg1;
- (void)setScope:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (id)tokenExchangeURLWith:(id)arg1;

@end
