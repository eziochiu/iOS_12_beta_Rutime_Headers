/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPreviewInteractionPresentationTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {
    bool  _didScheduleCancelTransition;
    bool  _didScheduleFinishTransition;
    double  _interactiveTransitionFraction;
    UIViewPropertyAnimator * _presentationAnimator;
    bool  _shouldPerformAsDismissTransition;
    <UIViewControllerContextTransitioning> * _transitionContext;
}

@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double interactiveTransitionFraction;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsInteractiveStart;

- (void).cxx_destruct;
- (void)_applyPushDecayEffectTransformToView:(id)arg1;
- (id)_newPushDecayAnimator;
- (id)_newReducedMotionTimingCurveProviderForPreviewTransition;
- (id)_newTimingCurveProviderForPreviewTransition;
- (void)_performCancelTransition;
- (void)_performFinishTransition;
- (id)_preparedPresentationAnimator;
- (id)_previewPresentationControllerForTransitionContext:(id)arg1;
- (id)_previewPresentationControllerForViewController:(id)arg1;
- (bool)_shouldReduceMotion;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (void)cancelTransition;
- (void)finishTransition;
- (id)init;
- (double)interactiveTransitionFraction;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)updateInteractiveTransition:(double)arg1;
- (bool)wantsInteractiveStart;

@end
