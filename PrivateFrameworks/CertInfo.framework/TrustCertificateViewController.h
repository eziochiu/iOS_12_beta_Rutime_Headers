/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface TrustCertificateViewController : UINavigationController {
    bool  _allowCertificateTrust;
    CertificateViewController * _certificateViewController;
    <TrustCertificateViewControllerDelegate> * _trustCertificateDelegate;
}

@property (nonatomic) bool allowCertificateTrust;
@property (nonatomic, retain) CertificateViewController *certificateViewController;
@property (nonatomic) <TrustCertificateViewControllerDelegate> *trustCertificateDelegate;

- (void).cxx_destruct;
- (void)_accept;
- (void)_cancel;
- (void)_dismissWithResult:(int)arg1;
- (void)_setupNavItem;
- (bool)allowCertificateTrust;
- (id)certificateViewController;
- (void)didReceiveMemoryWarning;
- (id)initWithTrust:(struct __SecTrust { }*)arg1 action:(int)arg2 delegate:(id)arg3;
- (id)initWithTrust:(struct __SecTrust { }*)arg1 action:(int)arg2 delegate:(id)arg3 allowTrust:(bool)arg4;
- (id)initWithTrustCertificateDelegate:(id)arg1;
- (id)initWithTrustCertificateDelegate:(id)arg1 allowTrust:(bool)arg2;
- (void)setAllowCertificateTrust:(bool)arg1;
- (void)setCertificateInfo:(id)arg1 issuer:(id)arg2 purpose:(id)arg3 expiration:(id)arg4 isRoot:(bool)arg5 properties:(id)arg6 action:(int)arg7;
- (void)setCertificateViewController:(id)arg1;
- (void)setShowCertificateButton:(bool)arg1 localizedTitle:(id)arg2 localizedDescription:(id)arg3 destructive:(bool)arg4 handler:(id /* block */)arg5;
- (void)setTrustCertificateDelegate:(id)arg1;
- (id)trustCertificateDelegate;

@end
