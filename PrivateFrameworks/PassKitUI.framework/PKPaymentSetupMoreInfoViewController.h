/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupMoreInfoViewController : UIViewController {
    long long  _context;
    id /* block */  _dismissalHandler;
    bool  _isFinalViewController;
    NSArray * _moreInfoItems;
    PKPaymentSetupMoreInfoView * _moreInfoView;
    PKPaymentPass * _pass;
}

@property (nonatomic, readonly) long long context;
@property (nonatomic, copy) id /* block */ dismissalHandler;
@property (nonatomic) bool isFinalViewController;
@property (nonatomic, readonly, retain) NSArray *moreInfoItems;
@property (nonatomic, readonly, retain) PKPaymentSetupMoreInfoView *moreInfoView;
@property (nonatomic, readonly, retain) PKPaymentPass *pass;

- (void).cxx_destruct;
- (void)_configureNavigationItem;
- (id)_currentItem;
- (void)_handleDismissal;
- (void)_handlePush;
- (id)_nextItems;
- (void)_nextTapped:(id)arg1;
- (long long)context;
- (id /* block */)dismissalHandler;
- (unsigned long long)edgesForExtendedLayout;
- (id)initWithMoreInfoItems:(id)arg1 paymentPass:(id)arg2 context:(long long)arg3 dismissalHandler:(id /* block */)arg4;
- (bool)isFinalViewController;
- (void)loadView;
- (id)moreInfoItems;
- (id)moreInfoView;
- (id)pass;
- (void)setDismissalHandler:(id /* block */)arg1;
- (void)setIsFinalViewController:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
