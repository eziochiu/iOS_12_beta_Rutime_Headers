/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKStorePageViewController : UIViewController <SKStoreProductViewControllerDelegate> {
    _UIAsyncInvocation * _cancelRequest;
    id /* block */  _loadBlock;
    SKStoreProductViewController * _productPageViewController;
    SKRemoteStorePageViewController * _remoteViewController;
    SKInvocationQueueProxy<SKUIServiceStorePageViewController> * _serviceProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_didFinishWithResult:(id)arg1 error:(id)arg2;
- (void)_didLoadWithResult:(bool)arg1 error:(id)arg2;
- (void)_dismissProductPageViewController;
- (void)_prepareToLoadWithCompletionBlock:(id /* block */)arg1;
- (void)_requestRemoteViewController;
- (void)_showProductPageWithItemIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadPageWithURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadPageWithURLBagKey:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadView;
- (void)productViewControllerDidFinish:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end
