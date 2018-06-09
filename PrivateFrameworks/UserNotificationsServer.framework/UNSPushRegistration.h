/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSPushRegistration : NSObject {
    NSString * _environment;
    NSData * _token;
    NSString * _tokenIdentifier;
}

@property (nonatomic, retain) NSString *environment;
@property (nonatomic, retain) NSData *token;
@property (nonatomic, retain) NSString *tokenIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)environment;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setTokenIdentifier:(id)arg1;
- (id)token;
- (id)tokenIdentifier;

@end
