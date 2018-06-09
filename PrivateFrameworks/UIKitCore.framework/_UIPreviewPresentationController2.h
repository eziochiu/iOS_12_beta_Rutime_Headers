/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPreviewPresentationController2 : UIPreviewPresentationController {
    _UIPreviewPresentationPlatterView * _contentPlatterView;
    <_UIPreviewInteractionHighlighting> * _currentHighlighter;
    UIViewPropertyAnimator * _currentTransitionAnimator;
    bool  _hasPerformedInitialLayout;
    double  _interactiveTransitionFraction;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _preferredContentPlatterTransform;
    <UIViewControllerPreviewing_Internal> * _previewingContext;
    _UIPreviewPresentationPlatterView * _revealPlatterView;
    bool  _shouldEnableUserInteractionOnPlatter;
    bool  _shouldScaleContentViewToAspectFitPlatter;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _computedPlatterFrame;
@property (nonatomic, retain) _UIPreviewPresentationPlatterView *contentPlatterView;
@property (nonatomic) <_UIPreviewInteractionHighlighting> *currentHighlighter;
@property (nonatomic) UIViewPropertyAnimator *currentTransitionAnimator;
@property (nonatomic) bool hasPerformedInitialLayout;
@property (nonatomic) double interactiveTransitionFraction;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredContentPlatterTransform;
@property (nonatomic) <UIViewControllerPreviewing_Internal> *previewingContext;
@property (nonatomic, retain) _UIPreviewPresentationPlatterView *revealPlatterView;
@property (nonatomic) bool shouldEnableUserInteractionOnPlatter;
@property (nonatomic) bool shouldScaleContentViewToAspectFitPlatter;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computedPlatterFrame;
- (void)_layoutContentViews;
- (void)_performDismissAnimationsWithTransitionContext:(id)arg1;
- (void)_performPresentationAnimationsWithTransitionContext:(id)arg1;
- (void)_performReducedMotionDismissAnimationsWithTransitionContext:(id)arg1;
- (void)_performReducedMotionPresentationAnimationsWithTransitionContext:(id)arg1;
- (void)_performTransitionAnimations:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_preferredContentPlatterRectForContainerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_prepareContentPlatterViewForPresentationTransitionIfNeeded:(id)arg1;
- (void)_prepareContentViewsForPresentationAnimationsIfNeeded;
- (void)_preparePresentationAnimationsForTransitionCoordinator:(id)arg1;
- (void)_prepareRevealPlatterViewForPresentationTransitionIfNeeded:(id)arg1;
- (void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1;
- (bool)_shouldDisableInteractionDuringTransitions;
- (bool)_shouldReduceMotion;
- (void)_updateFromInteractionEffect:(id)arg1;
- (void)containerViewDidLayoutSubviews;
- (id)contentPlatterView;
- (id)currentHighlighter;
- (id)currentTransitionAnimator;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (bool)hasPerformedInitialLayout;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 previewingContext:(id)arg3;
- (double)interactiveTransitionFraction;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredContentPlatterTransform;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)previewingContext;
- (id)revealPlatterView;
- (void)setContentPlatterView:(id)arg1;
- (void)setCurrentHighlighter:(id)arg1;
- (void)setCurrentTransitionAnimator:(id)arg1;
- (void)setHasPerformedInitialLayout:(bool)arg1;
- (void)setInteractiveTransitionFraction:(double)arg1;
- (void)setPreferredContentPlatterTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPreviewingContext:(id)arg1;
- (void)setRevealPlatterView:(id)arg1;
- (void)setShouldEnableUserInteractionOnPlatter:(bool)arg1;
- (void)setShouldScaleContentViewToAspectFitPlatter:(bool)arg1;
- (bool)shouldEnableUserInteractionOnPlatter;
- (bool)shouldScaleContentViewToAspectFitPlatter;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;

@end
