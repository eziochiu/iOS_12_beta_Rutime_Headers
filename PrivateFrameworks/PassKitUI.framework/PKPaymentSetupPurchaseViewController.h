/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupPurchaseViewController : UIViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentSetupDelegate, PKPaymentSetupPurchaseAmountViewDelegate, PKPaymentSetupRequiresPreflightProtocol, PKPaymentSetupViewControllerDelegate, RemoteUIControllerDelegate> {
    bool  _acceptedTerms;
    UIActivityIndicatorView * _activityIndicator;
    PKPaymentSetupPurchaseAmountView * _amountView;
    PKPaymentAuthorizationCoordinator * _authorizationCoordinator;
    UIImage * _cardImage;
    NSDecimalNumber * _currentAmount;
    bool  _fieldsVerified;
    UIImageView * _passView;
    PKPaymentSetupProduct * _product;
    PKPaymentProvisioningController * _provisioningController;
    PKPaymentProvisioningMethodMetadata * _provisioningMethodMetadata;
    PKServiceProviderPurchase * _purchase;
    PKPaymentSetupPurchaseController * _purchaseController;
    long long  _setupContext;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    RemoteUIController * _termsController;
    UILabel * _titleLabel;
}

@property (nonatomic) bool acceptedTerms;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) PKPaymentSetupPurchaseAmountView *amountView;
@property (nonatomic, retain) PKPaymentAuthorizationCoordinator *authorizationCoordinator;
@property (nonatomic, retain) UIImage *cardImage;
@property (nonatomic, copy) NSDecimalNumber *currentAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fieldsVerified;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *passView;
@property (nonatomic, readonly) PKPaymentSetupProduct *product;
@property (nonatomic, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic, retain) PKPaymentProvisioningMethodMetadata *provisioningMethodMetadata;
@property (nonatomic, retain) PKServiceProviderPurchase *purchase;
@property (nonatomic, readonly) PKPaymentSetupPurchaseController *purchaseController;
@property (nonatomic) long long setupContext;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) RemoteUIController *termsController;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_createConstraints;
- (void)_createSubviews;
- (struct CGSize { double x1; double x2; })_imageSizeForScreenType:(unsigned long long)arg1 showingTransferButton:(bool)arg2;
- (id)_paymentRequestForAmount:(id)arg1;
- (void)_presentAddCardAlert:(id)arg1;
- (void)_presentTermsAndConditionsWithCompletion:(id /* block */)arg1;
- (void)_presetPaymentRequest:(id)arg1 forResultType:(long long)arg2;
- (id)_rightBarButton;
- (void)_rightBarButtonPressed:(id)arg1;
- (bool)_shouldHideImage;
- (bool)_shouldShowTransferButton;
- (void)_showSpinner:(bool)arg1;
- (id)_spinnerBarButton;
- (bool)acceptedTerms;
- (id)activityIndicator;
- (id)amountView;
- (id)authorizationCoordinator;
- (id)cardImage;
- (id)currentAmount;
- (void)didUpdateAmount:(id)arg1 isValid:(bool)arg2;
- (bool)fieldsVerified;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 product:(id)arg4;
- (id)passView;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)product;
- (id)provisioningController;
- (id)provisioningMethodMetadata;
- (id)purchase;
- (id)purchaseController;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)setAcceptedTerms:(bool)arg1;
- (void)setActivityIndicator:(id)arg1;
- (void)setAmountView:(id)arg1;
- (void)setAuthorizationCoordinator:(id)arg1;
- (void)setCardImage:(id)arg1;
- (void)setCurrentAmount:(id)arg1;
- (void)setFieldsVerified:(bool)arg1;
- (void)setPassView:(id)arg1;
- (void)setProvisioningController:(id)arg1;
- (void)setProvisioningMethodMetadata:(id)arg1;
- (void)setPurchase:(id)arg1;
- (void)setSetupContext:(long long)arg1;
- (void)setSetupDelegate:(id)arg1;
- (void)setTermsController:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (long long)setupContext;
- (id)setupDelegate;
- (void)shakeCard;
- (id)termsController;
- (id)titleLabel;
- (void)transferBalanceFromExistingCard;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
