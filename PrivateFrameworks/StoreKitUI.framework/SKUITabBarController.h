/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITabBarController : UITabBarController <SKUIMoreNavigationControllerDelegate> {
    SKUIFloatingOverlayView * _floatingOverlayView;
    UIViewController * _floatingOverlayViewController;
    bool  _sizeTransitionInProgress;
    SKUITabBarBackgroundView * _tabBarBackgroundView;
}

@property (nonatomic, readonly) bool containsTransientViewControllerOnly;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool sizeTransitionInProgress;
@property (readonly) Class superclass;

+ (Class)_moreNavigationControllerClass;

- (void).cxx_destruct;
- (id)_backdropGroupName;
- (void)_layoutFloatingOverlayView;
- (void)_setSelectedViewController:(id)arg1;
- (void)cancelTransientViewController:(id)arg1;
- (bool)containsTransientViewControllerOnly;
- (id)floatingOverlayViewController;
- (id)init;
- (id)moreNavigationController;
- (void)moreNavigationController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)setFloatingOverlayViewController:(id)arg1 animated:(bool)arg2;
- (void)setSizeTransitionInProgress:(bool)arg1;
- (void)setTabBarBackdropStyle:(long long)arg1;
- (void)setTransientViewController:(id)arg1 animated:(bool)arg2;
- (bool)sizeTransitionInProgress;
- (id)traitCollection;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
