/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUNavigationController : UINavigationController <PLDismissableViewController, UINavigationControllerDelegate> {
    PUAbstractNavigationBanner * __banner;
    long long  __barStyle;
    UIViewController * __currentToolbarViewController;
    _UINavigationControllerPalette * __palette;
    <PXNavigationRoot> * _navigationRoot;
    id /* block */  _ppt_onDidShowViewControllerBlock;
    bool  _pu_preventsAutorotation;
    unsigned long long  _pu_supportedInterfaceOrientations;
}

@property (setter=_setBanner:, nonatomic, retain) PUAbstractNavigationBanner *_banner;
@property (setter=_setBarStyle:, nonatomic) long long _barStyle;
@property (setter=_setCurrentToolbarViewController:, nonatomic) UIViewController *_currentToolbarViewController;
@property (setter=_setPalette:, nonatomic, retain) _UINavigationControllerPalette *_palette;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PXNavigationRoot> *navigationRoot;
@property (setter=ppt_setOnDidShowViewControllerBlock:, nonatomic, copy) id /* block */ ppt_onDidShowViewControllerBlock;
@property (nonatomic, readonly) bool pu_preventsAutorotation;
@property (nonatomic, readonly) unsigned long long pu_supportedInterfaceOrientations;
@property (readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (id)_banner;
- (long long)_barStyle;
- (void)_commonPUNavigationControllerInitialization;
- (id)_currentToolbarViewController;
- (id)_extendedToolbar;
- (void)_insertNavigationDisplayModeButtonItem;
- (bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (id)_palette;
- (void)_removeNavigationDisplayModeButtonItem;
- (void)_setBanner:(id)arg1;
- (void)_setBarStyle:(long long)arg1;
- (void)_setCurrentToolbarViewController:(id)arg1;
- (void)_setCurrentToolbarViewController:(id)arg1 animated:(bool)arg2;
- (void)_setPalette:(id)arg1;
- (void)_updateBarStyle;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)navigationRoot;
- (id /* block */)ppt_onDidShowViewControllerBlock;
- (void)ppt_setOnDidShowViewControllerBlock:(id /* block */)arg1;
- (bool)prepareForDismissingForced:(bool)arg1;
- (void)pu_navigationTransitionDidEnd:(id)arg1;
- (bool)pu_preventsAutorotation;
- (void)pu_setPreventsAutorotation:(bool)arg1;
- (void)pu_setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (unsigned long long)pu_supportedInterfaceOrientations;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)setNavigationRoot:(id)arg1;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewController:(id)arg1 willSetupInitialBarsVisibilityOnViewWillAppearAnimated:(bool)arg2;

@end
