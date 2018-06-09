/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentPerformActionViewController : UIViewController <PKPaymentSetupViewControllerDelegate, PKPerformActionViewDelegate> {
    PKPeerPaymentAccount * _account;
    UIView<PKPeerPaymentPerformActionView> * _actionView;
    PKPerformActionBackdropView * _backdropView;
    PKPeerPaymentBankAccountInformation * _bankInformation;
    <PKPeerPaymentPerformActionViewControllerDelegate> * _delegate;
    long long  _detailViewStyle;
    bool  _fieldsVerified;
    PKPerformActionLoadingView * _loadingView;
    PKPaymentPass * _pass;
    unsigned long long  _peerPaymentAction;
    bool  _performingAction;
    RemoteUIController * _termsController;
    bool  _viewHasAppeared;
}

@property (nonatomic, retain) PKPeerPaymentAccount *account;
@property (nonatomic, readonly) UIView<PKPeerPaymentPerformActionView> *actionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPeerPaymentPerformActionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (readonly) Class superclass;

+ (id)alertControllerForPeerPaymentActionUnableReason:(unsigned long long)arg1 displayableError:(id)arg2 addCardActionHandler:(id /* block */)arg3;
+ (bool)canPerformPeerPaymentAction:(unsigned long long)arg1 account:(id)arg2 unableReason:(unsigned long long*)arg3 displayableError:(id*)arg4;
+ (id)displayableErrorForPeerPaymentAction:(unsigned long long)arg1 andReason:(unsigned long long)arg2;
+ (id)navigationBarBackgroundColor;

- (void).cxx_destruct;
- (id)_actionViewForPass:(id)arg1 action:(unsigned long long)arg2;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_doneBarButtonPressed:(id)arg1;
- (void)_handleApplicationDidBecomeActiveNotification:(id)arg1;
- (void)_handleError:(id)arg1;
- (void)_handleError:(id)arg1 completion:(id /* block */)arg2;
- (id)_navigationBarTitle;
- (unsigned long long)_peerPaymentControllerModeForAction;
- (void)_presentIdentityVerificationWithError:(id)arg1;
- (void)_presentTermsAndConditionsWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)_reloadActionView;
- (void)_rightBarButtonPressed:(id)arg1;
- (id)_rightBarButtonTitle;
- (void)_showNavigationBarSpinner:(bool)arg1;
- (id)account;
- (id)actionView;
- (void)dealloc;
- (id)delegate;
- (id)doneBarButton;
- (id)initWithPaymentPass:(id)arg1 account:(id)arg2 peerPaymentAction:(unsigned long long)arg3;
- (id)initWithPaymentPass:(id)arg1 account:(id)arg2 peerPaymentAction:(unsigned long long)arg3 detailViewStyle:(long long)arg4;
- (id)pass;
- (void)performActionView:(id)arg1 requestsPresentViewController:(id)arg2;
- (id)rightBarButton;
- (void)setAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRightBarButtonEnabled:(bool)arg1;
- (void)shakeCard;
- (id)spinnerBarButton;
- (void)updateFirstResponder;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
