/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentIdentityVerificationController : NSObject {
    PKPeerPaymentDocumentSubmissionController * _captureController;
    long long  _context;
    PKPaymentSetupFieldsModel * _fieldsModel;
    UIViewController * _firstViewController;
    PKPeerPaymentIdentityVerificationResponse * _response;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    unsigned long long  _viewControllerIndex;
    NSArray * _viewControllers;
    PKPeerPaymentWebService * _webService;
}

@property (nonatomic, readonly) PKPeerPaymentDocumentSubmissionController *captureController;
@property (nonatomic, readonly) long long context;
@property (nonatomic, readonly) PKPaymentSetupFieldsModel *fieldsModel;
@property (nonatomic, readonly) UIViewController *firstViewController;
@property (nonatomic, readonly) PKPeerPaymentIdentityVerificationResponse *response;
@property (nonatomic, readonly) PKPeerPaymentWebService *webService;

- (void).cxx_destruct;
- (id)_accountLockedErrorViewController;
- (id)_accountRestrictedErrorViewController;
- (void)_formViewControllersWithExplanationView:(bool)arg1;
- (id)_generateFieldsModel;
- (bool)_hasRequiredFields;
- (void)_identityVerificationResquestWithCompletion:(id /* block */)arg1;
- (id)_nextLocalViewController;
- (void)_resetViewControllers;
- (id)_verificationErrorViewController;
- (id)captureController;
- (long long)context;
- (id)fieldsModel;
- (id)firstViewController;
- (id)init;
- (id)initWithPeerPaymentWebService:(id)arg1 identityVerificationResponse:(id)arg2 setupDelegate:(id)arg3 context:(long long)arg4;
- (void)nextViewControllerWithCompletion:(id /* block */)arg1;
- (id)response;
- (id)webService;

@end
