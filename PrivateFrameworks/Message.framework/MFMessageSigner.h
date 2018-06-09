/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageSigner : NSObject {
    MFCertificateTrustInfo * _encryptionCertificateTrustInfo;
    MFCertificateTrustInfo * _signingCertificateTrustInfo;
    int  _status;
}

@property (nonatomic, readonly) MFCertificateTrustInfo *encryptionCertificateTrustInfo;
@property (nonatomic, readonly) MFError *error;
@property (nonatomic, readonly) bool hasSeparateSigningAndEncryptionCertificates;
@property (nonatomic, readonly) MFCertificateTrustInfo *signingCertificateTrustInfo;

- (void)dealloc;
- (id)encryptionCertificateTrustInfo;
- (id)error;
- (bool)hasSeparateSigningAndEncryptionCertificates;
- (id)initWithSender:(id)arg1 signingTrust:(struct __SecTrust { }*)arg2 encryptionTrust:(struct __SecTrust { }*)arg3 verification:(int)arg4;
- (void)reevaluateTrustWithNetworkAccessAllowed;
- (id)signingCertificateTrustInfo;

@end
