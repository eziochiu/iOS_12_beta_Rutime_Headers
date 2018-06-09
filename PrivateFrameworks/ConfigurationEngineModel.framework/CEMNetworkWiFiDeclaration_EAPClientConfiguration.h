/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMNetworkWiFiDeclaration_EAPClientConfiguration : CEMPayloadBase {
    NSArray * _payloadAcceptEAPTypes;
    NSNumber * _payloadEAPFASTProvisionPAC;
    NSNumber * _payloadEAPFASTProvisionPACAnonymously;
    NSNumber * _payloadEAPFASTUsePAC;
    NSNumber * _payloadEAPSIMAKAEncryptedIdentityEnabled;
    NSNumber * _payloadEAPSIMNumberOfRANDs;
    NSNumber * _payloadOneTimePassword;
    NSNumber * _payloadOneTimeUserPassword;
    NSString * _payloadOuterIdentity;
    NSArray * _payloadPayloadCertificateAnchorUUID;
    NSString * _payloadSystemModeCredentialsSource;
    NSNumber * _payloadSystemModeUseOpenDirectoryCredentials;
    NSNumber * _payloadTLSAllowTrustExceptions;
    NSNumber * _payloadTLSCertificateIsRequired;
    NSString * _payloadTLSMaximumVersion;
    NSString * _payloadTLSMinimumVersion;
    NSArray * _payloadTLSTrustedCertificates;
    NSArray * _payloadTLSTrustedServerNames;
    NSString * _payloadTTLSInnerAuthentication;
    NSString * _payloadUserName;
    NSString * _payloadUserPassword;
}

@property (nonatomic, copy) NSArray *payloadAcceptEAPTypes;
@property (nonatomic, copy) NSNumber *payloadEAPFASTProvisionPAC;
@property (nonatomic, copy) NSNumber *payloadEAPFASTProvisionPACAnonymously;
@property (nonatomic, copy) NSNumber *payloadEAPFASTUsePAC;
@property (nonatomic, copy) NSNumber *payloadEAPSIMAKAEncryptedIdentityEnabled;
@property (nonatomic, copy) NSNumber *payloadEAPSIMNumberOfRANDs;
@property (nonatomic, copy) NSNumber *payloadOneTimePassword;
@property (nonatomic, copy) NSNumber *payloadOneTimeUserPassword;
@property (nonatomic, copy) NSString *payloadOuterIdentity;
@property (nonatomic, copy) NSArray *payloadPayloadCertificateAnchorUUID;
@property (nonatomic, copy) NSString *payloadSystemModeCredentialsSource;
@property (nonatomic, copy) NSNumber *payloadSystemModeUseOpenDirectoryCredentials;
@property (nonatomic, copy) NSNumber *payloadTLSAllowTrustExceptions;
@property (nonatomic, copy) NSNumber *payloadTLSCertificateIsRequired;
@property (nonatomic, copy) NSString *payloadTLSMaximumVersion;
@property (nonatomic, copy) NSString *payloadTLSMinimumVersion;
@property (nonatomic, copy) NSArray *payloadTLSTrustedCertificates;
@property (nonatomic, copy) NSArray *payloadTLSTrustedServerNames;
@property (nonatomic, copy) NSString *payloadTTLSInnerAuthentication;
@property (nonatomic, copy) NSString *payloadUserName;
@property (nonatomic, copy) NSString *payloadUserPassword;

+ (id)allowedPayloadKeys;
+ (id)buildWithAcceptEAPTypes:(id)arg1 withUserName:(id)arg2 withUserPassword:(id)arg3 withOneTimePassword:(id)arg4 withPayloadCertificateAnchorUUID:(id)arg5 withTLSTrustedCertificates:(id)arg6 withTLSTrustedServerNames:(id)arg7 withTLSAllowTrustExceptions:(id)arg8 withTLSCertificateIsRequired:(id)arg9 withTTLSInnerAuthentication:(id)arg10 withTLSMinimumVersion:(id)arg11 withTLSMaximumVersion:(id)arg12 withOuterIdentity:(id)arg13 withEAPFASTUsePAC:(id)arg14 withEAPFASTProvisionPAC:(id)arg15 withEAPFASTProvisionPACAnonymously:(id)arg16 withEAPSIMNumberOfRANDs:(id)arg17 withSystemModeCredentialsSource:(id)arg18 withSystemModeUseOpenDirectoryCredentials:(id)arg19 withOneTimeUserPassword:(id)arg20 withEAPSIMAKAEncryptedIdentityEnabled:(id)arg21;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAcceptEAPTypes;
- (id)payloadEAPFASTProvisionPAC;
- (id)payloadEAPFASTProvisionPACAnonymously;
- (id)payloadEAPFASTUsePAC;
- (id)payloadEAPSIMAKAEncryptedIdentityEnabled;
- (id)payloadEAPSIMNumberOfRANDs;
- (id)payloadOneTimePassword;
- (id)payloadOneTimeUserPassword;
- (id)payloadOuterIdentity;
- (id)payloadPayloadCertificateAnchorUUID;
- (id)payloadSystemModeCredentialsSource;
- (id)payloadSystemModeUseOpenDirectoryCredentials;
- (id)payloadTLSAllowTrustExceptions;
- (id)payloadTLSCertificateIsRequired;
- (id)payloadTLSMaximumVersion;
- (id)payloadTLSMinimumVersion;
- (id)payloadTLSTrustedCertificates;
- (id)payloadTLSTrustedServerNames;
- (id)payloadTTLSInnerAuthentication;
- (id)payloadUserName;
- (id)payloadUserPassword;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAcceptEAPTypes:(id)arg1;
- (void)setPayloadEAPFASTProvisionPAC:(id)arg1;
- (void)setPayloadEAPFASTProvisionPACAnonymously:(id)arg1;
- (void)setPayloadEAPFASTUsePAC:(id)arg1;
- (void)setPayloadEAPSIMAKAEncryptedIdentityEnabled:(id)arg1;
- (void)setPayloadEAPSIMNumberOfRANDs:(id)arg1;
- (void)setPayloadOneTimePassword:(id)arg1;
- (void)setPayloadOneTimeUserPassword:(id)arg1;
- (void)setPayloadOuterIdentity:(id)arg1;
- (void)setPayloadPayloadCertificateAnchorUUID:(id)arg1;
- (void)setPayloadSystemModeCredentialsSource:(id)arg1;
- (void)setPayloadSystemModeUseOpenDirectoryCredentials:(id)arg1;
- (void)setPayloadTLSAllowTrustExceptions:(id)arg1;
- (void)setPayloadTLSCertificateIsRequired:(id)arg1;
- (void)setPayloadTLSMaximumVersion:(id)arg1;
- (void)setPayloadTLSMinimumVersion:(id)arg1;
- (void)setPayloadTLSTrustedCertificates:(id)arg1;
- (void)setPayloadTLSTrustedServerNames:(id)arg1;
- (void)setPayloadTTLSInnerAuthentication:(id)arg1;
- (void)setPayloadUserName:(id)arg1;
- (void)setPayloadUserPassword:(id)arg1;

@end
