/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSBiometricAuthenticationContext : NSObject <NSCopying, SSXPCCoding> {
    NSNumber * _accountIdentifier;
    NSString * _accountName;
    long long  _biometricAuthorizationAttempts;
    NSString * _challenge;
    SSConsolidatedDialog * _consolidatedDialog;
    NSString * _dialogId;
    bool  _didAuthenticate;
    bool  _didBuyParamsChange;
    bool  _didFallbackToPassword;
    bool  _isIdentityMapInvalid;
    bool  _isPayment;
    NSLock * _lock;
    NSString * _passwordEquivalentToken;
    SSPaymentSheet * _paymentSheet;
    NSURL * _redirectURL;
    bool  _shouldContinueTouchIDSession;
    bool  _shouldSendFallbackHeader;
    NSString * _signature;
    NSString * _userAgent;
    NSString * _xAppleAMDHeader;
    NSString * _xAppleAMDMHeader;
}

@property (copy) NSNumber *accountIdentifier;
@property (copy) NSString *accountName;
@property long long biometricAuthorizationAttempts;
@property (copy) NSString *challenge;
@property (retain) SSConsolidatedDialog *consolidatedDialog;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSString *dialogId;
@property bool didAuthenticate;
@property bool didBuyParamsChange;
@property bool didFallbackToPassword;
@property (readonly) unsigned long long hash;
@property bool isIdentityMapInvalid;
@property bool isPayment;
@property (copy) NSString *passwordEquivalentToken;
@property (retain) SSPaymentSheet *paymentSheet;
@property (copy) NSURL *redirectURL;
@property bool shouldContinueTouchIDSession;
@property bool shouldSendFallbackHeader;
@property (copy) NSString *signature;
@property (readonly) Class superclass;
@property (copy) NSString *userAgent;
@property (copy) NSString *xAppleAMDHeader;
@property (copy) NSString *xAppleAMDMHeader;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)accountName;
- (long long)biometricAuthorizationAttempts;
- (id)challenge;
- (id)consolidatedDialog;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)dialogId;
- (bool)didAuthenticate;
- (bool)didBuyParamsChange;
- (bool)didFallbackToPassword;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isIdentityMapInvalid;
- (bool)isPayment;
- (id)passwordEquivalentToken;
- (id)paymentSheet;
- (id)redirectURL;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountName:(id)arg1;
- (void)setBiometricAuthorizationAttempts:(long long)arg1;
- (void)setChallenge:(id)arg1;
- (void)setConsolidatedDialog:(id)arg1;
- (void)setDialogId:(id)arg1;
- (void)setDidAuthenticate:(bool)arg1;
- (void)setDidBuyParamsChange:(bool)arg1;
- (void)setDidFallbackToPassword:(bool)arg1;
- (void)setIsIdentityMapInvalid:(bool)arg1;
- (void)setIsPayment:(bool)arg1;
- (void)setPasswordEquivalentToken:(id)arg1;
- (void)setPaymentSheet:(id)arg1;
- (void)setRedirectURL:(id)arg1;
- (void)setShouldContinueTouchIDSession:(bool)arg1;
- (void)setShouldSendFallbackHeader:(bool)arg1;
- (void)setSignature:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setXAppleAMDHeader:(id)arg1;
- (void)setXAppleAMDMHeader:(id)arg1;
- (bool)shouldContinueTouchIDSession;
- (bool)shouldSendFallbackHeader;
- (id)signature;
- (id)userAgent;
- (id)xAppleAMDHeader;
- (id)xAppleAMDMHeader;

@end
