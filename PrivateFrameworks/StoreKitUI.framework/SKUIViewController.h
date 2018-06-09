/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIViewController : UIViewController <SKUIClientContextConsuming, SKUINetworkErrorDelegate, SKUIProductPageOverlayDelegate, SKUITabBarItemRootViewController, SKUIWishlistDelegate, UIPopoverControllerDelegate> {
    SKUIClientContext * _clientContext;
    SKUINetworkErrorViewController * _networkErrorViewController;
    NSOperationQueue * _operationQueue;
    SKUIProductPageOverlayController * _productPageOverlayController;
    SKUIIPadSearchController * _searchController;
    bool  _wishlistButtonHidden;
    UIBarButtonItem * _wishlistButtonItem;
    SKUIPopoverObserver * _wishlistPopoverObserver;
    SKUIWishlistViewController * _wishlistViewController;
}

@property (nonatomic, readonly) SKUIIPadSearchController *IPadSearchController;
@property (nonatomic, readonly) UIBarButtonItem *_wishlistButtonItem;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)IPadSearchController;
- (id)_defaultLeftBarButtonItems;
- (id)_defaultRightBarButtonItemsIsCompact:(bool)arg1;
- (id)_getIPadSearchController;
- (void)_presentWishlistFromPopover:(id)arg1;
- (void)_presentWishlistFromSheet;
- (void)_reloadForOrientation:(long long)arg1;
- (void)_setWishlistButtonHidden:(bool)arg1;
- (void)_showDialogWithError:(id)arg1;
- (void)_wishlistAction:(id)arg1;
- (id)_wishlistButtonItem;
- (void)_wishlistPopoverDidDismiss;
- (id)clientContext;
- (void)dealloc;
- (void)forceOrientationBackToSupportedOrientation;
- (id)initWithTabBarItem:(id)arg1;
- (void)networkErrorViewControllerInvalidated:(id)arg1;
- (id)operationQueue;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)reloadData;
- (void)setClientContext:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)showDefaultNavigationItems;
- (void)showDefaultNavigationItemsForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)showDefaultNavigationItemsIsCompact:(bool)arg1;
- (void)showError:(id)arg1;
- (bool)showingError;
- (void)skui_viewWillAppear:(bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)wishlist:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;

@end
