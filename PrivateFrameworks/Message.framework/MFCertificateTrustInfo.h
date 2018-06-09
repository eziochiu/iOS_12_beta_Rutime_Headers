/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFCertificateTrustInfo : NSObject {
    unsigned long long  _certificateType;
    bool  _forceNetworkAccessAllowed;
    NSString * _sender;
    ECSecureMIMETrustEvaluation * _trustEvaluation;
    NSString * _uncommentedSender;
    struct __SecTrust { } * _unevaluatedTrust;
}

@property (nonatomic, readonly) int action;
@property (nonatomic, readonly) bool canSaveCertificateToKeychain;
@property (nonatomic, readonly) struct __SecCertificate { }*certificate;
@property (nonatomic, readonly) unsigned long long certificateType;
@property (nonatomic, readonly, copy) NSString *commonName;
@property (nonatomic, readonly, copy) NSString *emailAddress;
@property (nonatomic, readonly) bool hasTrustException;
@property (nonatomic, readonly) unsigned long long keychainStatus;
@property (nonatomic, readonly, copy) NSString *sender;
@property (nonatomic, readonly) struct __SecTrust { }*trust;
@property (nonatomic, readonly) ECSecureMIMETrustEvaluation *trustEvaluation;

- (void).cxx_destruct;
- (int)action;
- (void)addTrustException;
- (bool)canSaveCertificateToKeychain;
- (struct __SecCertificate { }*)certificate;
- (unsigned long long)certificateType;
- (id)commonName;
- (void)dealloc;
- (id)emailAddress;
- (bool)hasTrustException;
- (id)initWithCertificateType:(unsigned long long)arg1 trust:(struct __SecTrust { }*)arg2 sender:(id)arg3;
- (unsigned long long)keychainStatus;
- (void)reevaluateTrustWithNetworkAccessAllowed;
- (void)removeCertificateFromKeychain;
- (void)removeTrustException;
- (void)saveCertificateToKeychain;
- (id)sender;
- (struct __SecTrust { }*)trust;
- (id)trustEvaluation;

@end
