/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNProtocolIKEv2 : NEVPNProtocolIPSec {
    NEVPNIKEv2SecurityAssociationParameters * _IKESecurityAssociationParameters;
    NSArray * _IKESecurityAssociationParametersArray;
    long long  _certificateType;
    NEVPNIKEv2SecurityAssociationParameters * _childSecurityAssociationParameters;
    NSArray * _childSecurityAssociationParametersArray;
    long long  _deadPeerDetectionRate;
    bool  _disableMOBIKE;
    int  _disableMOBIKERetryOnWake;
    bool  _disableRedirect;
    bool  _enablePFS;
    bool  _enableRevocationCheck;
    long long  _maximumTLSVersion;
    long long  _minimumTLSVersion;
    int  _natKeepAliveOffloadEnable;
    int  _natKeepAliveOffloadInterval;
    NSString * _pluginType;
    NSString * _providerBundleIdentifier;
    NSString * _serverCertificateCommonName;
    NSString * _serverCertificateIssuerCommonName;
    bool  _strictRevocationCheck;
    bool  _useConfigurationAttributeInternalIPSubnet;
    bool  _wakeForRekey;
}

@property (readonly) NEVPNIKEv2SecurityAssociationParameters *IKESecurityAssociationParameters;
@property (retain) NSArray *IKESecurityAssociationParametersArray;
@property long long certificateType;
@property (readonly) NEVPNIKEv2SecurityAssociationParameters *childSecurityAssociationParameters;
@property (retain) NSArray *childSecurityAssociationParametersArray;
@property long long deadPeerDetectionRate;
@property bool disableMOBIKE;
@property int disableMOBIKERetryOnWake;
@property bool disableRedirect;
@property bool enablePFS;
@property bool enableRevocationCheck;
@property long long maximumTLSVersion;
@property long long minimumTLSVersion;
@property int natKeepAliveOffloadEnable;
@property int natKeepAliveOffloadInterval;
@property (readonly) NSString *pluginType;
@property (copy) NSString *providerBundleIdentifier;
@property (copy) NSString *serverCertificateCommonName;
@property (copy) NSString *serverCertificateIssuerCommonName;
@property bool strictRevocationCheck;
@property bool useConfigurationAttributeInternalIPSubnet;
@property bool wakeForRekey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)IKESecurityAssociationParameters;
- (id)IKESecurityAssociationParametersArray;
- (long long)certificateType;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)childSecurityAssociationParameters;
- (id)childSecurityAssociationParametersArray;
- (id)clone;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deadPeerDetectionRate;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)disableMOBIKE;
- (int)disableMOBIKERetryOnWake;
- (bool)disableRedirect;
- (bool)enablePFS;
- (bool)enableRevocationCheck;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPluginType:(id)arg1;
- (long long)maximumTLSVersion;
- (long long)minimumTLSVersion;
- (int)natKeepAliveOffloadEnable;
- (int)natKeepAliveOffloadInterval;
- (id)pluginType;
- (id)providerBundleIdentifier;
- (id)serverCertificateCommonName;
- (id)serverCertificateIssuerCommonName;
- (void)setCertificateType:(long long)arg1;
- (void)setChildSecurityAssociationParametersArray:(id)arg1;
- (void)setDeadPeerDetectionRate:(long long)arg1;
- (void)setDisableMOBIKE:(bool)arg1;
- (void)setDisableMOBIKERetryOnWake:(int)arg1;
- (void)setDisableRedirect:(bool)arg1;
- (void)setEnablePFS:(bool)arg1;
- (void)setEnableRevocationCheck:(bool)arg1;
- (void)setIKESecurityAssociationParametersArray:(id)arg1;
- (void)setMaximumTLSVersion:(long long)arg1;
- (void)setMinimumTLSVersion:(long long)arg1;
- (void)setNatKeepAliveOffloadEnable:(int)arg1;
- (void)setNatKeepAliveOffloadInterval:(int)arg1;
- (void)setPluginType:(id)arg1;
- (void)setProviderBundleIdentifier:(id)arg1;
- (void)setServerCertificateCommonName:(id)arg1;
- (void)setServerCertificateIssuerCommonName:(id)arg1;
- (void)setStrictRevocationCheck:(bool)arg1;
- (void)setUseConfigurationAttributeInternalIPSubnet:(bool)arg1;
- (void)setWakeForRekey:(bool)arg1;
- (bool)strictRevocationCheck;
- (bool)useConfigurationAttributeInternalIPSubnet;
- (bool)wakeForRekey;

@end