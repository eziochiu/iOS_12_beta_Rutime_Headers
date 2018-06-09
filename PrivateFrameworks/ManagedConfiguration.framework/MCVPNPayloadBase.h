/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCVPNPayloadBase : MCPayload {
    NSMutableDictionary * _configurationDictionary;
    <NEProfilePayloadBaseDelegate> * _nePayloadBase;
    NSString * _passwordKey;
    NSString * _pinKey;
    NSString * _proxyPasswordKey;
    NSString * _proxyUserNameKey;
    NSString * _serviceName;
    NSString * _sharedSecretKey;
    NSString * _userNameKey;
    NSString * _vpnType;
}

@property (nonatomic, retain) NSMutableDictionary *configurationDictionary;
@property (nonatomic, retain) <NEProfilePayloadBaseDelegate> *nePayloadBase;
@property (nonatomic, retain) NSString *passwordKey;
@property (nonatomic, retain) NSString *pinKey;
@property (nonatomic, retain) NSString *proxyPasswordKey;
@property (nonatomic, retain) NSString *proxyUserNameKey;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic, retain) NSString *sharedSecretKey;
@property (nonatomic, retain) NSString *userNameKey;
@property (nonatomic, copy) NSString *vpnType;

+ (id)NEAlwaysOnVPNPayloadBaseDelegateWithConfigurationDict:(id)arg1;
+ (id)NEVPNPayloadBaseDelegateWithConfigurationDict:(id)arg1;

- (void).cxx_destruct;
- (id)configurationDictionary;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (bool)isPayloadAllowed;
- (id)nePayloadBase;
- (id)passwordKey;
- (id)payloadDescriptionKeyValueSections;
- (id)pinKey;
- (id)proxyPasswordKey;
- (id)proxyUserNameKey;
- (id)serviceName;
- (void)setConfigurationDictionary:(id)arg1;
- (void)setNePayloadBase:(id)arg1;
- (void)setPasswordKey:(id)arg1;
- (void)setPinKey:(id)arg1;
- (void)setProxyPasswordKey:(id)arg1;
- (void)setProxyUserNameKey:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSharedSecretKey:(id)arg1;
- (void)setUserNameKey:(id)arg1;
- (void)setVpnType:(id)arg1;
- (id)sharedSecretKey;
- (id)stubDictionary;
- (id)userNameKey;
- (id)vpnType;

@end
