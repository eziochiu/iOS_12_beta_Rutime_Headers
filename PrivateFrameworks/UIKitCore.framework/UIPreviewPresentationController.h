/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPreviewPresentationController : UIPresentationController <UIGestureRecognizerDelegate> {
    bool  _appliesVisualEffectsToPresentingView;
    id /* block */  _containerSuperviewFactoryBlock;
    id /* block */  _containerViewConfigurationBlock;
    UIResponder * _currentPinnedResponder;
    UITapGestureRecognizer * _dismissGestureRecognizer;
    id /* block */  _dismissalTransitionDidEndBlock;
    NSArray * _keyboardSnapshotViews;
    NSHashTable * _keyboardWindows;
    UIVisualEffectView * _presentationContainerEffectView;
    UIWindow * _presentationWindow;
    <UIPreviewPresentationControllerDelegate> * _previewPresentationDelegate;
    UIView * _statusBarSnapshotView;
    UIWindow * _statusBarWindow;
}

@property (nonatomic) bool appliesVisualEffectsToPresentingView;
@property (nonatomic, copy) id /* block */ containerSuperviewFactoryBlock;
@property (nonatomic, copy) id /* block */ containerViewConfigurationBlock;
@property (nonatomic) UIResponder *currentPinnedResponder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITapGestureRecognizer *dismissGestureRecognizer;
@property (nonatomic, copy) id /* block */ dismissalTransitionDidEndBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *keyboardSnapshotViews;
@property (nonatomic, copy) NSHashTable *keyboardWindows;
@property (nonatomic, retain) UIVisualEffectView *presentationContainerEffectView;
@property (nonatomic) UIWindow *presentationWindow;
@property (nonatomic) <UIPreviewPresentationControllerDelegate> *previewPresentationDelegate;
@property (nonatomic, retain) UIView *statusBarSnapshotView;
@property (nonatomic, retain) UIWindow *statusBarWindow;
@property (readonly) Class superclass;

+ (id)_backgroundEffectForTraitCollection:(id)arg1 interactive:(bool)arg2;
+ (bool)_shouldApplyVisualEffectsToPresentingView;
+ (bool)_shouldInterdictServiceViewTouches;

- (void).cxx_destruct;
- (void)_animatePreviewTransitionIfNeeded:(id)arg1;
- (void)_applyVisualEffectsForPresentationPhase:(unsigned long long)arg1;
- (void)_cancelTransitionDidEnd:(bool)arg1;
- (void)_finalizeAfterDismissalTransition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (id)_fullscreenPresentationSuperview;
- (void)_handleDismissGestureRecognizer:(id)arg1;
- (void)_interactiveHighlightTransitionDidEnd:(bool)arg1;
- (bool)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (void)_layoutForCancel;
- (void)_layoutForInteractiveHighlight;
- (void)_layoutForPreview;
- (void)_prepareContainerViewForPresentationTransition;
- (void)_prepareDismissAnimationsForTransitionCoordinator:(id)arg1;
- (void)_prepareDismissGestureRecognizersIfNeeded;
- (void)_prepareKeyboardForPresentationTransition;
- (void)_preparePresentationAnimationsForTransitionCoordinator:(id)arg1;
- (void)_prepareStatusBarForPresentationTransition;
- (id)_presentationContainerView;
- (bool)_presentationPotentiallyUnderlapsStatusBar;
- (void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1;
- (void)_previewTransitionDidEnd:(bool)arg1;
- (bool)_shouldBlurStatusBar;
- (bool)_shouldDisableInteractionDuringTransitions;
- (bool)_shouldKeepCurrentFirstResponder;
- (bool)_shouldSavePresentedViewControllerForStateRestoration;
- (bool)appliesVisualEffectsToPresentingView;
- (id /* block */)containerSuperviewFactoryBlock;
- (id /* block */)containerViewConfigurationBlock;
- (id)currentPinnedResponder;
- (id)dismissGestureRecognizer;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (id /* block */)dismissalTransitionDidEndBlock;
- (void)dismissalTransitionWillBegin;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)keyboardSnapshotViews;
- (id)keyboardWindows;
- (id)presentationContainerEffectView;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentationWindow;
- (id)previewPresentationDelegate;
- (void)setAppliesVisualEffectsToPresentingView:(bool)arg1;
- (void)setContainerSuperviewFactoryBlock:(id /* block */)arg1;
- (void)setContainerViewConfigurationBlock:(id /* block */)arg1;
- (void)setCurrentPinnedResponder:(id)arg1;
- (void)setDismissGestureRecognizer:(id)arg1;
- (void)setDismissalTransitionDidEndBlock:(id /* block */)arg1;
- (void)setKeyboardSnapshotViews:(id)arg1;
- (void)setKeyboardWindows:(id)arg1;
- (void)setPresentationContainerEffectView:(id)arg1;
- (void)setPresentationWindow:(id)arg1;
- (void)setPreviewPresentationDelegate:(id)arg1;
- (void)setStatusBarSnapshotView:(id)arg1;
- (void)setStatusBarWindow:(id)arg1;
- (id)statusBarSnapshotView;
- (id)statusBarWindow;

@end
