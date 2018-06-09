/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPopoverPresentationController : UIPresentationController <UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate> {
    bool  __centersPopoverIfSourceViewNotSet;
    double  __dimmingViewTopEdgeInset;
    bool  __ignoreBarButtonItemSiblings;
    bool  __shouldHideArrow;
    UIColor * _arrowBackgroundColor;
    UIColor * _backgroundColor;
    bool  _canOverlapSourceViewRect;
    UIViewController * _contentViewController;
    unsigned long long  _currentArrowDirection;
    SEL  _didEndSelector;
    bool  _didPresentInActiveSequence;
    UIDimmingView * _dimmingView;
    UIPanGestureRecognizer * _dimmingViewGestureRecognizer;
    bool  _dismissesOnRotation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _embeddedTargetRect;
    bool  _ignoresKeyboardNotifications;
    bool  _isArrowDirectionFixed;
    bool  _isDismissingBecauseDimmingViewTapped;
    UIView * _layoutConstraintView;
    UIViewController * _modalPresentationFromViewController;
    UIViewController * _modalPresentationToViewController;
    unsigned long long  _permittedArrowDirections;
    unsigned long long  _popoverArrowDirection;
    long long  _popoverBackgroundStyle;
    Class  _popoverBackgroundViewClass;
    struct CGSize { 
        double width; 
        double height; 
    }  _popoverContentSize;
    struct { 
        unsigned int isPresentingModalViewController : 1; 
        unsigned int isPresentingActionSheet : 1; 
        unsigned int wasIgnoringDimmingViewTouchesBeforeScrolling : 1; 
        unsigned int isInTextEffectsWindow : 1; 
        unsigned int isEmbeddingInView : 1; 
        unsigned int embeddedPresentationBounces : 1; 
        unsigned int isRepositioningRectDisabled : 1; 
    }  _popoverControllerFlags;
    long long  _popoverControllerStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _popoverLayoutMargins;
    _UIPopoverView * _popoverView;
    _UIPopoverLayoutInfo * _preferredLayoutInfo;
    long long  _presentationDirection;
    unsigned long long  _presentationEdge;
    int  _presentationState;
    UIView * _presentingView;
    UIPopoverPresentationController * _retainedSelf;
    bool  _retainsSelfWhilePresented;
    _UIMirrorNinePatchView * _shadowImageView;
    bool  _shouldDisableInteractionDuringTransitions;
    bool  _showsOrientationMarker;
    bool  _showsPresentationArea;
    bool  _showsTargetRect;
    unsigned long long  _slideTransitionCount;
    UIViewController * _slidingViewController;
    id  _target;
    UIBarButtonItem * _targetBarButtonItem;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetRectInContainerView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetRectInEmbeddingView;
    unsigned long long  _toViewAutoResizingMask;
    bool  _useSourceViewBoundsAsSourceRect;
    UIPanGestureRecognizer * _vendedGestureRecognizer;
    unsigned int  draggingChildScrollViewCount;
}

@property (getter=_arrowOffset, setter=_setArrowOffset:, nonatomic) double _arrowOffset;
@property (getter=_centersPopoverIfSourceViewNotSet, setter=_setCentersPopoverIfSourceViewNotSet:, nonatomic) bool _centersPopoverIfSourceViewNotSet;
@property (setter=_setDimmingViewTopEdgeInset:, nonatomic) double _dimmingViewTopEdgeInset;
@property (setter=_setIgnoreBarButtonItemSiblings:, nonatomic) bool _ignoreBarButtonItemSiblings;
@property (setter=_setIgnoresKeyboardNotifications:, nonatomic) bool _ignoresKeyboardNotifications;
@property (setter=_setPopoverBackgroundStyle:, nonatomic) long long _popoverBackgroundStyle;
@property (getter=_shouldHideArrow, setter=_setShouldHideArrow:, nonatomic) bool _shouldHideArrow;
@property (nonatomic, readonly) unsigned long long arrowDirection;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, retain) UIBarButtonItem *barButtonItem;
@property (nonatomic) bool canOverlapSourceViewRect;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIPopoverPresentationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDimmingView *dimmingView;
@property (nonatomic) bool dismissesOnRotation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *passthroughViews;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (nonatomic) unsigned long long popoverArrowDirection;
@property (nonatomic, retain) Class popoverBackgroundViewClass;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } popoverLayoutMargins;
@property (nonatomic, retain) _UIPopoverLayoutInfo *preferredLayoutInfo;
@property (getter=_presentationEdge, setter=_setPresentationEdge:, nonatomic) unsigned long long presentationEdge;
@property (getter=_presentingView, setter=_setPresentingView:, nonatomic) UIView *presentingView;
@property (nonatomic, retain) UIPopoverPresentationController *retainedSelf;
@property (getter=_retainsSelfWhilePresented, setter=_setRetainsSelfWhilePresented:, nonatomic) bool retainsSelfWhilePresented;
@property (getter=_shouldDisableInteractionDuringTransitions, setter=_setShouldDisableInteractionDuringTransitions:, nonatomic) bool shouldDisableInteractionDuringTransitions;
@property (nonatomic) bool showsOrientationMarker;
@property (nonatomic) bool showsPresentationArea;
@property (nonatomic) bool showsTargetRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) UIView *sourceView;
@property (readonly) Class superclass;

+ (bool)_alwaysAllowPopoverPresentations;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_defaultPopoverLayoutMarginsForPopoverControllerStyle:(long long)arg1 andContentViewController:(id)arg2;
+ (bool)_forceAttemptsToAvoidKeyboard;
+ (Class)_popoverViewClass;
+ (void)_setAlwaysAllowPopoverPresentations:(bool)arg1;
+ (bool)_showTargetRectPref;

- (void).cxx_destruct;
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(bool)arg2;
- (bool)_alwaysAdaptToFullscreenForTraitCollection:(id)arg1;
- (double)_arrowOffset;
- (bool)_attemptsToAvoidKeyboard;
- (id)_backgroundView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_baseContentInsetsWithLeftMargin:(double*)arg1 rightMargin:(double*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateContainingFrame;
- (struct CGPoint { double x1; double x2; })_centerPointForScale:(double)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 anchor:(struct CGPoint { double x1; double x2; })arg3;
- (bool)_centersPopoverIfSourceViewNotSet;
- (void)_clearCachedPopoverContentSize;
- (void)_commonPresentPopoverFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(bool)arg4;
- (id /* block */)_completionBlockForDismissalWhenNotifyingDelegate:(bool)arg1;
- (void)_containedViewControllerModalStateChanged;
- (struct CGSize { double x1; double x2; })_currentPopoverContentSize;
- (Class)_defaultChromeViewClass;
- (long long)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (id)_dimmingView;
- (double)_dimmingViewTopEdgeInset;
- (void)_dismissPopoverAnimated:(bool)arg1 stateOnly:(bool)arg2 notifyDelegate:(bool)arg3;
- (double)_dismissalAnimationDuration;
- (bool)_embedsInView;
- (id)_exceptionStringForNilSourceViewOrBarButtonItem;
- (bool)_forcesPreferredAnimationControllers;
- (bool)_ignoreBarButtonItemSiblings;
- (bool)_ignoresKeyboardNotifications;
- (void)_incrementSlideTransitionCount:(bool)arg1;
- (id)_initialPresentationViewControllerForViewController:(id)arg1;
- (void)_invalidateLayoutInfo;
- (bool)_isDismissing;
- (bool)_isPresenting;
- (bool)_isShimmingPopoverControllerPresentation;
- (void)_keyboardStateChanged:(id)arg1;
- (id)_layoutInfoForCurrentKeyboardState;
- (id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1;
- (id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2;
- (bool)_manuallyHandlesContentViewControllerAppearanceCalls;
- (void)_moveAwayFromTheKeyboard:(id)arg1;
- (void)_newViewControllerWasPushed:(id)arg1;
- (void)_newViewControllerWillBePushed:(id)arg1;
- (id)_passthroughViews;
- (void)_performHierarchyCheckOnViewController:(id)arg1;
- (long long)_popoverBackgroundStyle;
- (bool)_popoverBackgroundViewWantsDefaultContentAppearance;
- (long long)_popoverControllerStyle;
- (id)_popoverHostingWindow;
- (bool)_popoverIsDismissingBecauseDimmingViewWasTapped;
- (Class)_popoverLayoutInfoForChromeClass:(Class)arg1;
- (void)_postludeForDismissal;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (double)_presentationAnimationDuration;
- (unsigned long long)_presentationEdge;
- (bool)_presentationPotentiallyUnderlapsStatusBar;
- (int)_presentationState;
- (id)_presentationView;
- (id)_presentingView;
- (void)_resetSlideTransitionCount;
- (bool)_retainsSelfWhilePresented;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_scrollViewWillBeginDragging:(id)arg1;
- (void)_sendDelegateWillRepositionToRect;
- (void)_setArrowOffset:(double)arg1;
- (void)_setCentersPopoverIfSourceViewNotSet:(bool)arg1;
- (void)_setContentViewController:(id)arg1 animated:(bool)arg2;
- (void)_setContentViewController:(id)arg1 backgroundStyle:(long long)arg2 animated:(bool)arg3;
- (void)_setDimmingViewTopEdgeInset:(double)arg1;
- (void)_setGesturesEnabled:(bool)arg1;
- (void)_setIgnoreBarButtonItemSiblings:(bool)arg1;
- (void)_setIgnoresKeyboardNotifications:(bool)arg1;
- (void)_setPopoverBackgroundStyle:(long long)arg1;
- (void)_setPopoverFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2 coordinator:(id)arg3;
- (void)_setPopoverView:(id)arg1;
- (void)_setPresentationEdge:(unsigned long long)arg1;
- (void)_setPresentationState:(int)arg1;
- (void)_setPresentingView:(id)arg1;
- (void)_setRetainsSelfWhilePresented:(bool)arg1;
- (void)_setShouldDisableInteractionDuringTransitions:(bool)arg1;
- (void)_setShouldHideArrow:(bool)arg1;
- (bool)_shouldDisableInteractionDuringTransitions;
- (bool)_shouldHideArrow;
- (bool)_shouldKeepCurrentFirstResponder;
- (bool)_shouldOccludeDuringPresentation;
- (bool)_shouldPresentedViewControllerControlStatusBarAppearance;
- (unsigned long long)_slideTransitionCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceRectInContainerView;
- (id)_sourceView;
- (void)_startWatchingForKeyboardNotificationsIfNecessary;
- (void)_startWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_startWatchingForScrollViewNotifications;
- (void)_stopWatchingForKeyboardNotifications;
- (void)_stopWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_stopWatchingForNotifications;
- (void)_stopWatchingForScrollViewNotifications;
- (void)_transitionFromDidEnd;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(bool)arg3;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)_updateShadowFrame;
- (id)arrowBackgroundColor;
- (unsigned long long)arrowDirection;
- (id)backgroundColor;
- (bool)canOverlapSourceViewRect;
- (void)containerViewWillLayoutSubviews;
- (void)dealloc;
- (id)dimmingView;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)dimmingViewWasTapped:(id)arg1 withDismissCompletion:(id /* block */)arg2;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (bool)dismissesOnRotation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)init;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (bool)isPopoverVisible;
- (bool)isPresentingOrDismissing;
- (id)passthroughViews;
- (unsigned long long)permittedArrowDirections;
- (unsigned long long)popoverArrowDirection;
- (Class)popoverBackgroundViewClass;
- (struct CGSize { double x1; double x2; })popoverContentSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })popoverLayoutMargins;
- (id)popoverView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)preferredLayoutInfo;
- (long long)presentationStyle;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (id)retainedSelf;
- (void)setArrowBackgroundColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanOverlapSourceViewRect:(bool)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setDismissesOnRotation:(bool)arg1;
- (void)setPassthroughViews:(id)arg1;
- (void)setPermittedArrowDirections:(unsigned long long)arg1;
- (void)setPopoverArrowDirection:(unsigned long long)arg1;
- (void)setPopoverBackgroundViewClass:(Class)arg1;
- (void)setPopoverContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPopoverContentSize:(struct CGSize { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setPopoverFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)setPopoverLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreferredLayoutInfo:(id)arg1;
- (void)setRetainedSelf:(id)arg1;
- (void)setShowsOrientationMarker:(bool)arg1;
- (void)setShowsPresentationArea:(bool)arg1;
- (void)setShowsTargetRect:(bool)arg1;
- (void)set_ignoreBarButtonItemSiblings:(bool)arg1;
- (bool)shouldPresentInFullscreen;
- (bool)shouldRemovePresentersView;
- (bool)showsOrientationMarker;
- (bool)showsPresentationArea;
- (bool)showsTargetRect;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
