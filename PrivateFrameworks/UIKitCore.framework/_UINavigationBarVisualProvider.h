/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UINavigationBarVisualProvider : NSObject {
    UINavigationBar * _navigationBar;
    NSDictionary * _overrides;
    _UINavigationControllerRefreshControlHost * _refreshControlHost;
    _UINavigationBarItemStack * _stack;
    bool  _usesLegacyUI;
}

@property (nonatomic, readonly) long long currentContentSize;
@property (nonatomic, readonly) UINavigationBar *navigationBar;
@property (nonatomic, retain) _UINavigationControllerRefreshControlHost *refreshControlHost;
@property (nonatomic, retain) _UINavigationBarItemStack *stack;
@property (nonatomic, readonly) bool wantsLargeTitleDisplayed;

+ (bool)supportsRefreshControlHosting;

- (void).cxx_destruct;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_shim_30244716;
- (bool)_shim_34415965;
- (id)_shim_backIndicatorView;
- (id)_shim_backdropGroupName;
- (long long)_shim_backdropStyle;
- (double)_shim_backgroundAlpha;
- (double)_shim_backgroundHeight;
- (id)_shim_compatibilityBackgroundView;
- (id)_shim_contentView;
- (id)_shim_customHitTest:(struct CGPoint { double x1; double x2; })arg1 forView:(id)arg2;
- (bool)_shim_disableBlurTinting;
- (id)_shim_displayViewsIncludingHiddenBackButtonViews:(bool)arg1;
- (id)_shim_layoutView;
- (void)_shim_popForCarplayPressAtFakePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_shim_pressBackIndicator:(bool)arg1 initialPress:(bool)arg2;
- (id)_shim_promptText;
- (void)_shim_setBackdropGroupName:(id)arg1;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (void)_shim_setDisableBlurTinting:(bool)arg1;
- (void)_shim_setPromptText:(id)arg1 animated:(bool)arg2;
- (void)_shim_setShadowAlpha:(double)arg1;
- (void)_shim_setUseContentView:(bool)arg1;
- (double)_shim_shadowAlpha;
- (bool)_shim_throwConstraintExceptions;
- (void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_shim_updateBackIndicator;
- (void)_shim_updateBackdropView;
- (void)_shim_updateBackgroundViewIgnoringFlag;
- (void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2;
- (id)_shim_userContentGuide;
- (bool)_shim_wantsCustomTouchHandlingForTouches:(id)arg1;
- (void)_updateBackground;
- (void)_updateTitleViewForOpacityChange;
- (void)animateForSearchPresentation:(bool)arg1;
- (void)barSizeChanged;
- (bool)canHandleStatusBarTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)changeAppearance;
- (void)changeLayout;
- (long long)currentContentSize;
- (bool)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(id /* block */)arg2;
- (struct { double x1; double x2; })heightRangeFittingWidth:(double)arg1;
- (id)initWithNavigationBar:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;
- (id)navigationBar;
- (void)popAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)preferredFocusedView;
- (void)prepare;
- (void)prepareForPop;
- (void)prepareForPush;
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;
- (void)pushAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)recordBarSize:(struct CGSize { double x1; double x2; })arg1;
- (id)refreshControlHost;
- (void)safeAreaInsetsDidChange;
- (void)setBackButtonVisible:(bool)arg1 animated:(bool)arg2;
- (void)setRefreshControlHost:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setStack:(id)arg1;
- (void)setupTopNavigationItem;
- (bool)shouldUseHeightRangeFittingWidth;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stack;
- (void)stackDidChangeFrom:(id)arg1;
- (long long)statusBarStyle;
- (void)teardown;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateArchivedSubviews:(id)arg1;
- (void)updateConstraints;
- (void)updateTopNavigationItemAnimated:(bool)arg1;
- (void)updateTopNavigationItemTitleView;
- (bool)wantsLargeTitleDisplayed;

@end
