/* made by EzioChiu
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentAuthorizationController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    <PKPaymentAuthorizationControllerDelegate> * _delegate;
    PKPaymentAuthorizationCoordinator * _paymentCoordinator;
    <PKPaymentAuthorizationControllerPrivateDelegate> * _privateDelegate;
    PKPaymentAuthorizationController * _retainSelf;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentAuthorizationCoordinator *paymentCoordinator;
@property (nonatomic) <PKPaymentAuthorizationControllerPrivateDelegate> *privateDelegate;
@property (readonly) Class superclass;

+ (bool)canMakePayments;
+ (bool)canMakePaymentsUsingNetworks:(id)arg1;
+ (bool)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentRequest:(id)arg1;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
- (void)paymentAuthorizationCoordinator:(id)arg1 didRequestMerchantSession:(id /* block */)arg2;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingAddress:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 willFinishWithError:(id)arg2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)paymentAuthorizationCoordinatorWillAuthorizePayment:(id)arg1;
- (id)paymentCoordinator;
- (void)presentWithCompletion:(id /* block */)arg1;
- (id)privateDelegate;
- (void)setDelegate:(id)arg1;
- (void)setPaymentCoordinator:(id)arg1;
- (void)setPrivateDelegate:(id)arg1;

@end
