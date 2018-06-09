/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

@interface PLExpandedPlatterPreviewPresentationController : UIPreviewPresentationController <PLExpandedPlatterPresentationController> {
    <PLExpandedPlatterPresentationControllerDelegate> * _presentationControllerDelegate;
    PLExpandedPlatterPresentationControllerHelper * _presentationControllerHelper;
}

@property (nonatomic) double additionalHomeAffordanceSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIPanGestureRecognizer *homeAffordancePanGesture;
@property (getter=isHomeAffordanceVisible, nonatomic) bool homeAffordanceVisible;
@property (nonatomic) <PLExpandedPlatterPresentationControllerDelegate> *presentationControllerDelegate;
@property (readonly) Class superclass;

+ (bool)_shouldInterdictServiceViewTouches;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })useableContainerViewBoundsInContainerViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (bool)_shouldDisableInteractionDuringTransitions;
- (bool)_shouldMakePresentedViewControllerFirstResponder;
- (double)additionalHomeAffordanceSpacing;
- (void)completeDismissal;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (void)hintDismissalWithCommitProgress:(double)arg1 overallProgress:(double)arg2;
- (id)homeAffordancePanGesture;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 sourceView:(id)arg4;
- (bool)isHomeAffordanceVisible;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)presentationControllerDelegate;
- (void)presentationTransitionWillBegin;
- (void)setAdditionalHomeAffordanceSpacing:(double)arg1;
- (void)setHomeAffordancePanGesture:(id)arg1;
- (void)setHomeAffordanceVisible:(bool)arg1;
- (void)setPresentationControllerDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2;
- (void)viewControllerAnimatorDidFinishFirstResponderChanges:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
