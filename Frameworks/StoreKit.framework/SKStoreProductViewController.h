/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKStoreProductViewController : UIViewController {
    NSString * _additionalBuyParameters;
    NSString * _affiliateIdentifier;
    bool  _askToBuy;
    bool  _automaticallyDismisses;
    NSString * _cancelButtonTitle;
    _UIAsyncInvocation * _cancelRequest;
    NSString * _clientIdentifier;
    <SKStoreProductViewControllerDelegatePrivate> * _delegate;
    id /* block */  _loadBlock;
    long long  _originalStatusBarStyle;
    long long  _productPageStyle;
    NSString * _promptString;
    SKRemoteProductViewController * _remoteViewController;
    NSString * _rightBarButtonTitle;
    NSDictionary * _scriptContextDictionary;
    SKInvocationQueueProxy<SKUIServiceProductPageViewController> * _serviceProxy;
    bool  _showsRightBarButton;
    bool  _showsStoreButton;
}

@property (nonatomic, copy) id /* block */ _gkCompletionHandler;
@property (nonatomic, retain) GKGame *_gkGame;
@property (nonatomic, copy) NSString *additionalBuyParameters;
@property (nonatomic, copy) NSString *affiliateIdentifier;
@property (nonatomic) bool askToBuy;
@property (nonatomic) bool automaticallyDismisses;
@property (nonatomic, copy) NSString *cancelButtonTitle;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic) <SKStoreProductViewControllerDelegate> *delegate;
@property (nonatomic) long long productPageStyle;
@property (nonatomic, copy) NSString *promptString;
@property (nonatomic, copy) NSString *rightBarButtonTitle;
@property (nonatomic, copy) NSDictionary *scriptContextDictionary;
@property (nonatomic) bool showsRightBarButton;
@property (nonatomic) bool showsStoreButton;

// Image: /System/Library/Frameworks/StoreKit.framework/StoreKit

+ (id)_defaultIXStoreSheetDictionary;
+ (void)_validateURL:(id)arg1 withSheetInfo:(id)arg2 completionBlock:(id /* block */)arg3;
+ (void)getCanLoadURL:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)getCanLoadURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_didFinish;
- (void)_didFinishWithResult:(long long)arg1;
- (void)_fireLoadBlockBeforeFinishing;
- (void)_forceOrientationBackToSupportedOrientation;
- (bool)_isPeeking;
- (void)_loadDidFinishWithResult:(bool)arg1 error:(id)arg2;
- (int)_preferredStatusBarVisibility;
- (void)_presentPageWithRequest:(id)arg1 animated:(bool)arg2;
- (void)_requestRemoteViewController;
- (void)_resetRemoteViewController;
- (void)_setLoadBlock:(id /* block */)arg1;
- (void)_sk_applicationDidEnterBackground:(id)arg1;
- (void)_sk_applicationWillEnterForeground:(id)arg1;
- (void)_throwUnsupportedPresentationException;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (id)additionalBuyParameters;
- (id)affiliateIdentifier;
- (bool)askToBuy;
- (bool)automaticallyDismisses;
- (id)cancelButtonTitle;
- (id)clientIdentifier;
- (void)dealloc;
- (id)delegate;
- (void)finishImmediately;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadProductWithPageDictionary:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadProductWithParameters:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadProductWithRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadProductWithURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (long long)productPageStyle;
- (id)promptString;
- (id)rightBarButtonTitle;
- (id)scriptContextDictionary;
- (void)setAdditionalBuyParameters:(id)arg1;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)setAskToBuy:(bool)arg1;
- (void)setAutomaticallyDismisses:(bool)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProductPageStyle:(long long)arg1;
- (void)setPromptString:(id)arg1;
- (void)setRightBarButtonTitle:(id)arg1;
- (void)setScriptContextDictionary:(id)arg1;
- (void)setShowsRightBarButton:(bool)arg1;
- (void)setShowsStoreButton:(bool)arg1;
- (bool)showsRightBarButton;
- (bool)showsStoreButton;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (id /* block */)_gkCompletionHandler;
- (id)_gkGame;
- (void)set_gkCompletionHandler:(id /* block */)arg1;
- (void)set_gkGame:(id)arg1;

@end