/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCGlobalHTTPProxyPayload : MCPayload {
    NSString * _credentialUUID;
    bool  _proxyCaptiveLoginAllowed;
    NSNumber * _proxyCaptiveLoginAllowedNum;
    bool  _proxyPACFallbackAllowed;
    NSNumber * _proxyPACFallbackAllowedNum;
    NSString * _proxyPACURLString;
    NSString * _proxyPassword;
    NSString * _proxyServer;
    NSNumber * _proxyServerPort;
    int  _proxyType;
    NSString * _proxyUsername;
}

@property (nonatomic, retain) NSString *credentialUUID;
@property (nonatomic) bool proxyCaptiveLoginAllowed;
@property (nonatomic, retain) NSNumber *proxyCaptiveLoginAllowedNum;
@property (nonatomic) bool proxyPACFallbackAllowed;
@property (nonatomic, retain) NSNumber *proxyPACFallbackAllowedNum;
@property (nonatomic, retain) NSString *proxyPACURLString;
@property (nonatomic, retain) NSString *proxyPassword;
@property (nonatomic, retain) NSString *proxyServer;
@property (nonatomic, retain) NSNumber *proxyServerPort;
@property (nonatomic) int proxyType;
@property (nonatomic, retain) NSString *proxyUsername;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)credentialUUID;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (bool)proxyCaptiveLoginAllowed;
- (id)proxyCaptiveLoginAllowedNum;
- (bool)proxyPACFallbackAllowed;
- (id)proxyPACFallbackAllowedNum;
- (id)proxyPACURLString;
- (id)proxyPassword;
- (id)proxyServer;
- (id)proxyServerPort;
- (int)proxyType;
- (id)proxyUsername;
- (void)setCredentialUUID:(id)arg1;
- (void)setProxyCaptiveLoginAllowed:(bool)arg1;
- (void)setProxyCaptiveLoginAllowedNum:(id)arg1;
- (void)setProxyPACFallbackAllowed:(bool)arg1;
- (void)setProxyPACFallbackAllowedNum:(id)arg1;
- (void)setProxyPACURLString:(id)arg1;
- (void)setProxyPassword:(id)arg1;
- (void)setProxyServer:(id)arg1;
- (void)setProxyServerPort:(id)arg1;
- (void)setProxyType:(int)arg1;
- (void)setProxyUsername:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
