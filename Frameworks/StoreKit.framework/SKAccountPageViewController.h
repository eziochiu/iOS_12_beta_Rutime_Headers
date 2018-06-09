/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKAccountPageViewController : UIViewController {
    ACAccount * _account;
    NSURL * _accountURL;
    bool  _cameraDidShow;
    _UIAsyncInvocation * _cancelRequest;
    <SKAccountPageViewControllerDelegate> * _delegate;
    bool  _isRemoteViewControllerReady;
    bool  _isRemoteViewControllerSetup;
    id /* block */  _loadBlock;
    bool  _loadFromBridgedNavigation;
    SKAccountPageViewController * _preWarmedViewController;
    id /* block */  _prepareBlock;
    SKRemoteAccountPageViewController * _remoteViewController;
    SKInvocationQueueProxy<SKUIServiceAccountPageViewController> * _serviceProxy;
    bool  _viewHasAppeared;
    id /* block */  redeemCompletionHandler;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic) <SKAccountPageViewControllerDelegate> *delegate;
@property (nonatomic) bool loadFromBridgedNavigation;
@property (nonatomic, retain) SKAccountPageViewController *preWarmedViewController;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_bridgedRightButtonPressed:(id)arg1;
- (void)_didFinishLoading;
- (void)_didPrepareWithResult:(bool)arg1 error:(id)arg2;
- (void)_dismissViewControllerWithResult:(bool)arg1 error:(id)arg2;
- (void)_financeInterruptionResolved:(bool)arg1;
- (unsigned long long)_indexForFirstBridgedNavigationViewController;
- (void)_overrideCreditCardPresentationWithCompletion:(id /* block */)arg1;
- (void)_overrideRedeemCameraWithCompletion:(id /* block */)arg1;
- (void)_popAllBridgedNavigationViewControllers;
- (void)_popBridgedViewControllersToIndex:(unsigned long long)arg1;
- (void)_pushBridgedViewControllerAnimated:(bool)arg1 options:(id)arg2;
- (void)_requestRemoteViewController;
- (void)_setBridgedNavigationItemWithOptions:(id)arg1;
- (void)_setupPreWarmedViewController;
- (void)_setupRemoteViewController:(bool)arg1;
- (void)_sk_applicationDidEnterBackground:(id)arg1;
- (void)_sk_applicationWillEnterForeground:(id)arg1;
- (id)account;
- (void)dealloc;
- (id)delegate;
- (id)initWithAccountURL:(id)arg1;
- (bool)loadFromBridgedNavigation;
- (void)loadView;
- (void)loadWithCompletionBlock:(id /* block */)arg1;
- (void)overrideRedeemOperationWithCode:(id)arg1 cameraRecognized:(bool)arg2 completion:(id /* block */)arg3;
- (id)preWarmedViewController;
- (void)prepareWithCompletionBlock:(id /* block */)arg1;
- (void)redeemCameraViewController:(id)arg1 didFinishWithRedeem:(id)arg2;
- (void)setAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoadFromBridgedNavigation:(bool)arg1;
- (void)setPreWarmedViewController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
