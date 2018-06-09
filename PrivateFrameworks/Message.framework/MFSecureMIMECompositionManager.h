/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSecureMIMECompositionManager : NSObject {
    NSMutableDictionary * _certificatesByRecipient;
    <MFSecureMIMECompositionManagerDelegate> * _delegate;
    struct __SecIdentity { } * _encryptionIdentity;
    MFError * _encryptionIdentityError;
    int  _encryptionPolicy;
    int  _encryptionStatus;
    unsigned long long  _encryptionStatusSemaphore;
    NSMutableDictionary * _errorsByRecipient;
    bool  _invalidated;
    NSLock * _lock;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _recipients;
    MailAccount * _sendingAccount;
    NSString * _sendingAddress;
    struct __SecIdentity { } * _signingIdentity;
    MFError * _signingIdentityError;
    int  _signingPolicy;
    int  _signingStatus;
    unsigned long long  _signingStatusSemaphore;
}

@property <MFSecureMIMECompositionManagerDelegate> *delegate;
@property (readonly) int encryptionPolicy;
@property (readonly) int encryptionStatus;
@property (readonly) NSSet *recipients;
@property (readonly) MailAccount *sendingAccount;
@property (copy) NSString *sendingAddress;
@property (readonly) int signingPolicy;
@property (readonly) int signingStatus;

+ (id)copyEncryptionCertificatesForAccount:(id)arg1 recipientAddress:(id)arg2 error:(id*)arg3;
+ (struct __SecIdentity { }*)copyEncryptionIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3;
+ (struct __SecIdentity { }*)copySigningIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3;
+ (unsigned int)evaluateTrustForSigningCertificate:(struct __SecCertificate { }*)arg1 sendingAddress:(id)arg2;

- (void)_determineEncryptionStatusWithNewRecipients:(id)arg1;
- (void)_determineEncryptionStatusWithSendingAddress:(id)arg1;
- (void)_determineIdentitiesWithSendingAddress:(id)arg1 forSigning:(bool)arg2 encryption:(bool)arg3;
- (void)_determineSigningStatusWithSendingAddress:(id)arg1;
- (void)_determineTrustStatusForSigningIdentity:(struct __SecIdentity { }*)arg1 sendingAddress:(id)arg2;
- (void)_notifyDelegateEncryptionStatusDidChange:(int)arg1 certsByRecipient:(id)arg2 errorsByRecipient:(id)arg3 identity:(struct __SecIdentity { }*)arg4 error:(id)arg5;
- (void)_notifyDelegateSigningStatusDidChange:(int)arg1 identity:(struct __SecIdentity { }*)arg2 error:(id)arg3;
- (void)_nts_copyEncryptionIdentity:(struct __SecIdentity {}**)arg1 error:(id*)arg2 certificatesByRecipient:(id*)arg3 errorsByRecipient:(id*)arg4;
- (void)_nts_copySigningIdentity:(struct __SecIdentity {}**)arg1 error:(id*)arg2;
- (void)_nts_setEncryptionIdentity:(struct __SecIdentity { }*)arg1 error:(id)arg2;
- (void)_nts_setSigningIdentity:(struct __SecIdentity { }*)arg1 error:(id)arg2;
- (bool)_shouldAllowSend_nts;
- (bool)_shouldEncrypt_nts;
- (bool)_shouldSign_nts;
- (bool)_updateEncryptionStatus_nts;
- (bool)_updateSigningStatus_nts;
- (void)addRecipients:(id)arg1;
- (id)compositionSpecification;
- (void)dealloc;
- (id)delegate;
- (int)encryptionPolicy;
- (int)encryptionStatus;
- (id)init;
- (id)initWithSendingAccount:(id)arg1 signingPolicy:(int)arg2 encryptionPolicy:(int)arg3;
- (id)initWithSigningPolicy:(int)arg1 encryptionPolicy:(int)arg2;
- (void)invalidate;
- (id)recipients;
- (void)removeRecipients:(id)arg1;
- (id)sendingAccount;
- (id)sendingAddress;
- (void)setDelegate:(id)arg1;
- (void)setSendingAddress:(id)arg1;
- (bool)shouldAllowSend;
- (int)signingPolicy;
- (int)signingStatus;

@end
