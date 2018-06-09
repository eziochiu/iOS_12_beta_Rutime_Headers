/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMNetworkWiFiDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAutoJoin;
    NSNumber * _payloadCaptiveBypass;
    NSString * _payloadDisplayedOperatorName;
    NSString * _payloadDomainName;
    CEMNetworkWiFiDeclaration_EAPClientConfiguration * _payloadEAPClientConfiguration;
    NSNumber * _payloadEnableIPv6;
    NSString * _payloadEncryptionType;
    NSString * _payloadHESSID;
    NSNumber * _payloadHIDDENNETWORK;
    NSString * _payloadInterface;
    NSNumber * _payloadIsHotspot;
    NSArray * _payloadMCCAndMNCs;
    NSArray * _payloadNAIRealmNames;
    NSString * _payloadNONEXISTENT;
    NSString * _payloadPassword;
    NSString * _payloadPayloadCertificateUUID;
    NSNumber * _payloadPriority;
    NSNumber * _payloadProxyPACFallbackAllowed;
    NSString * _payloadProxyPACURL;
    NSString * _payloadProxyPassword;
    NSString * _payloadProxyServer;
    NSNumber * _payloadProxyServerPort;
    NSString * _payloadProxyType;
    NSString * _payloadProxyUsername;
    CEMNetworkWiFiDeclaration_QoSMarkingPolicy * _payloadQoSMarkingPolicy;
    NSArray * _payloadRoamingConsortiumOIs;
    NSString * _payloadSSIDSTR;
    NSNumber * _payloadServiceProviderRoamingEnabled;
    NSArray * _payloadSetupModes;
    NSNumber * _payloadTLSCertificateRequired;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAutoJoin;
@property (nonatomic, copy) NSNumber *payloadCaptiveBypass;
@property (nonatomic, copy) NSString *payloadDisplayedOperatorName;
@property (nonatomic, copy) NSString *payloadDomainName;
@property (nonatomic, copy) CEMNetworkWiFiDeclaration_EAPClientConfiguration *payloadEAPClientConfiguration;
@property (nonatomic, copy) NSNumber *payloadEnableIPv6;
@property (nonatomic, copy) NSString *payloadEncryptionType;
@property (nonatomic, copy) NSString *payloadHESSID;
@property (nonatomic, copy) NSNumber *payloadHIDDENNETWORK;
@property (nonatomic, copy) NSString *payloadInterface;
@property (nonatomic, copy) NSNumber *payloadIsHotspot;
@property (nonatomic, copy) NSArray *payloadMCCAndMNCs;
@property (nonatomic, copy) NSArray *payloadNAIRealmNames;
@property (nonatomic, copy) NSString *payloadNONEXISTENT;
@property (nonatomic, copy) NSString *payloadPassword;
@property (nonatomic, copy) NSString *payloadPayloadCertificateUUID;
@property (nonatomic, copy) NSNumber *payloadPriority;
@property (nonatomic, copy) NSNumber *payloadProxyPACFallbackAllowed;
@property (nonatomic, copy) NSString *payloadProxyPACURL;
@property (nonatomic, copy) NSString *payloadProxyPassword;
@property (nonatomic, copy) NSString *payloadProxyServer;
@property (nonatomic, copy) NSNumber *payloadProxyServerPort;
@property (nonatomic, copy) NSString *payloadProxyType;
@property (nonatomic, copy) NSString *payloadProxyUsername;
@property (nonatomic, copy) CEMNetworkWiFiDeclaration_QoSMarkingPolicy *payloadQoSMarkingPolicy;
@property (nonatomic, copy) NSArray *payloadRoamingConsortiumOIs;
@property (nonatomic, copy) NSString *payloadSSIDSTR;
@property (nonatomic, copy) NSNumber *payloadServiceProviderRoamingEnabled;
@property (nonatomic, copy) NSArray *payloadSetupModes;
@property (nonatomic, copy) NSNumber *payloadTLSCertificateRequired;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withAutoJoin:(id)arg2 withSSIDSTR:(id)arg3 withHIDDENNETWORK:(id)arg4 withProxyType:(id)arg5 withEncryptionType:(id)arg6 withPassword:(id)arg7 withPayloadCertificateUUID:(id)arg8 withEAPClientConfiguration:(id)arg9 withDisplayedOperatorName:(id)arg10 withDomainName:(id)arg11 withRoamingConsortiumOIs:(id)arg12 withServiceProviderRoamingEnabled:(id)arg13 withIsHotspot:(id)arg14 withHESSID:(id)arg15 withNAIRealmNames:(id)arg16 withMCCAndMNCs:(id)arg17 withCaptiveBypass:(id)arg18 withQoSMarkingPolicy:(id)arg19 withInterface:(id)arg20 withSetupModes:(id)arg21 withPriority:(id)arg22 withEnableIPv6:(id)arg23 withNONEXISTENT:(id)arg24 withTLSCertificateRequired:(id)arg25 withProxyServer:(id)arg26 withProxyServerPort:(id)arg27 withProxyUsername:(id)arg28 withProxyPassword:(id)arg29 withProxyPACURL:(id)arg30 withProxyPACFallbackAllowed:(id)arg31;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadAutoJoin;
- (id)payloadCaptiveBypass;
- (id)payloadDisplayedOperatorName;
- (id)payloadDomainName;
- (id)payloadEAPClientConfiguration;
- (id)payloadEnableIPv6;
- (id)payloadEncryptionType;
- (id)payloadHESSID;
- (id)payloadHIDDENNETWORK;
- (id)payloadInterface;
- (id)payloadIsHotspot;
- (id)payloadMCCAndMNCs;
- (id)payloadNAIRealmNames;
- (id)payloadNONEXISTENT;
- (id)payloadPassword;
- (id)payloadPayloadCertificateUUID;
- (id)payloadPriority;
- (id)payloadProxyPACFallbackAllowed;
- (id)payloadProxyPACURL;
- (id)payloadProxyPassword;
- (id)payloadProxyServer;
- (id)payloadProxyServerPort;
- (id)payloadProxyType;
- (id)payloadProxyUsername;
- (id)payloadQoSMarkingPolicy;
- (id)payloadRoamingConsortiumOIs;
- (id)payloadSSIDSTR;
- (id)payloadServiceProviderRoamingEnabled;
- (id)payloadSetupModes;
- (id)payloadTLSCertificateRequired;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAutoJoin:(id)arg1;
- (void)setPayloadCaptiveBypass:(id)arg1;
- (void)setPayloadDisplayedOperatorName:(id)arg1;
- (void)setPayloadDomainName:(id)arg1;
- (void)setPayloadEAPClientConfiguration:(id)arg1;
- (void)setPayloadEnableIPv6:(id)arg1;
- (void)setPayloadEncryptionType:(id)arg1;
- (void)setPayloadHESSID:(id)arg1;
- (void)setPayloadHIDDENNETWORK:(id)arg1;
- (void)setPayloadInterface:(id)arg1;
- (void)setPayloadIsHotspot:(id)arg1;
- (void)setPayloadMCCAndMNCs:(id)arg1;
- (void)setPayloadNAIRealmNames:(id)arg1;
- (void)setPayloadNONEXISTENT:(id)arg1;
- (void)setPayloadPassword:(id)arg1;
- (void)setPayloadPayloadCertificateUUID:(id)arg1;
- (void)setPayloadPriority:(id)arg1;
- (void)setPayloadProxyPACFallbackAllowed:(id)arg1;
- (void)setPayloadProxyPACURL:(id)arg1;
- (void)setPayloadProxyPassword:(id)arg1;
- (void)setPayloadProxyServer:(id)arg1;
- (void)setPayloadProxyServerPort:(id)arg1;
- (void)setPayloadProxyType:(id)arg1;
- (void)setPayloadProxyUsername:(id)arg1;
- (void)setPayloadQoSMarkingPolicy:(id)arg1;
- (void)setPayloadRoamingConsortiumOIs:(id)arg1;
- (void)setPayloadSSIDSTR:(id)arg1;
- (void)setPayloadServiceProviderRoamingEnabled:(id)arg1;
- (void)setPayloadSetupModes:(id)arg1;
- (void)setPayloadTLSCertificateRequired:(id)arg1;

@end
