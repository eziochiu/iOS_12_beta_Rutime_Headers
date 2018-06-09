/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEHotspotEAPSettings : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _clientTrustChainReference;
    NSData * _identityReference;
    NSString * _outerIdentity;
    NSString * _password;
    long long  _preferredTLSVersion;
    NSArray * _supportedEAPTypes;
    bool  _tlsClientCertificateRequired;
    NSArray * _trustedServerCertificateReferences;
    NSArray * _trustedServerNames;
    long long  _ttlsInnerAuthenticationType;
    NSString * _username;
}

@property (copy) NSArray *clientTrustChainReference;
@property (copy) NSData *identityReference;
@property (copy) NSString *outerIdentity;
@property (copy) NSString *password;
@property long long preferredTLSVersion;
@property (copy) NSArray *supportedEAPTypes;
@property (getter=isTLSClientCertificateRequired) bool tlsClientCertificateRequired;
@property (copy) NSArray *trustedServerCertificateReferences;
@property (copy) NSArray *trustedServerNames;
@property long long ttlsInnerAuthenticationType;
@property (copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientTrustChainReference;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identityReference;
- (id)initWithCoder:(id)arg1;
- (bool)isTLSClientCertificateRequired;
- (id)outerIdentity;
- (id)password;
- (long long)preferredTLSVersion;
- (void)setClientTrustChainReference:(id)arg1;
- (bool)setIdentity:(struct __SecIdentity { }*)arg1;
- (void)setIdentityReference:(id)arg1;
- (void)setOuterIdentity:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPreferredTLSVersion:(long long)arg1;
- (void)setSupportedEAPTypes:(id)arg1;
- (void)setTlsClientCertificateRequired:(bool)arg1;
- (void)setTrustedServerCertificateReferences:(id)arg1;
- (bool)setTrustedServerCertificates:(id)arg1;
- (void)setTrustedServerNames:(id)arg1;
- (void)setTtlsInnerAuthenticationType:(long long)arg1;
- (void)setUsername:(id)arg1;
- (id)supportedEAPTypes;
- (id)trustedServerCertificateReferences;
- (id)trustedServerNames;
- (long long)ttlsInnerAuthenticationType;
- (id)username;

@end
