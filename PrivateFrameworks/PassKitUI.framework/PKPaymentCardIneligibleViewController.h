/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentCardIneligibleViewController : UIViewController <UIWebViewDelegate> {
    long long  _context;
    id /* block */  _continueActionHandler;
    id /* block */  _learnMorePresentationHandler;
    NSURL * _learnMoreURL;
    id /* block */  _preflightCompletion;
    bool  _preloadLearnMoreWebView;
    PKPaymentProvisioningController * _provisioningController;
    long long  _reason;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    UIWebView * _webView;
}

@property (nonatomic) long long context;
@property (nonatomic, copy) id /* block */ continueActionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ learnMorePresentationHandler;
@property (nonatomic, retain) NSURL *learnMoreURL;
@property bool preloadLearnMoreWebView;
@property (nonatomic, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic) long long reason;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alertWithReason:(long long)arg1 learnMoreURL:(id)arg2 isPreloaded:(bool)arg3;
- (void)_webViewDidLoad:(bool)arg1 withError:(id)arg2;
- (long long)context;
- (id /* block */)continueActionHandler;
- (void)dealloc;
- (void)handleDone:(id)arg1;
- (id)initWithReason:(long long)arg1 context:(long long)arg2 setupDelegate:(id)arg3;
- (id /* block */)learnMorePresentationHandler;
- (id)learnMoreURL;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (bool)preloadLearnMoreWebView;
- (id)provisioningController;
- (long long)reason;
- (void)setContext:(long long)arg1;
- (void)setContinueActionHandler:(id /* block */)arg1;
- (void)setLearnMorePresentationHandler:(id /* block */)arg1;
- (void)setLearnMoreURL:(id)arg1;
- (void)setPreloadLearnMoreWebView:(bool)arg1;
- (void)setProvisioningController:(id)arg1;
- (void)setReason:(long long)arg1;
- (void)setSetupDelegate:(id)arg1;
- (id)setupDelegate;
- (void)viewDidLoad;
- (id)webView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

@end
