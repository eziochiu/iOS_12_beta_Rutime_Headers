/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFProxyKeychainOperation : WFOperation {
    NSString * _host;
    NSString * _password;
    NSString * _port;
    long long  _type;
    NSString * _username;
}

@property (nonatomic, copy) NSString *host;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *port;
@property long long type;
@property (nonatomic, copy) NSString *username;

+ (id)getPasswordOperationForHost:(id)arg1 port:(id)arg2 username:(id)arg3;
+ (id)removePasswordOperationForHost:(id)arg1 port:(id)arg2 username:(id)arg3;
+ (id)savePassswordOperationForHost:(id)arg1 port:(id)arg2 username:(id)arg3 password:(id)arg4;

- (void).cxx_destruct;
- (id)_credentialsForProtectionSpace:(id)arg1;
- (id)host;
- (id)initWithHost:(id)arg1 port:(id)arg2 username:(id)arg3 password:(id)arg4 type:(long long)arg5;
- (id)password;
- (id)port;
- (void)setHost:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPort:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUsername:(id)arg1;
- (void)start;
- (long long)type;
- (id)username;

@end
