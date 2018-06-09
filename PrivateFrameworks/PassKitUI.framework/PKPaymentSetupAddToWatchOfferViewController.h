/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupAddToWatchOfferViewController : UIViewController {
    long long  _context;
    id /* block */  _dismissalHandler;
    UIView * _interactionDisabledView;
    PKPaymentSetupAddToWatchOfferView * _offerView;
    PKPaymentPass * _pass;
}

@property (nonatomic) long long context;
@property (nonatomic, copy) id /* block */ dismissalHandler;
@property (nonatomic, readonly, retain) PKPaymentSetupAddToWatchOfferView *offerView;
@property (nonatomic, readonly, retain) PKPaymentPass *pass;

+ (void)shouldShowAddToWatchOfferForPass:(id)arg1 inContext:(long long)arg2 withCompletion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_addLaterTapped:(id)arg1;
- (void)_clearInteractionDisabledView;
- (void)_configureNavigationItem;
- (void)_doneTapped:(id)arg1;
- (void)_handleBridgeProvisioningError:(id)arg1;
- (void)_handleDismissal:(bool)arg1;
- (void)_hideSpinner;
- (void)_openAppTapped:(id)arg1;
- (void)_setIdleTimerDisabled:(bool)arg1;
- (void)_showSpinner;
- (long long)context;
- (void)dealloc;
- (id /* block */)dismissalHandler;
- (unsigned long long)edgesForExtendedLayout;
- (id)initWithPaymentPass:(id)arg1 context:(long long)arg2 dismissalHandler:(id /* block */)arg3;
- (void)loadView;
- (id)offerView;
- (id)pass;
- (void)setContext:(long long)arg1;
- (void)setDismissalHandler:(id /* block */)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
