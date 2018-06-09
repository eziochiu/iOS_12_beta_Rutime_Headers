/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPreviewTransitionController : UIPercentDrivenInteractiveTransition <UIForceInteractionController, UIInteractionProgressObserver, UIViewControllerAnimatedTransitioning> {
    NSMutableDictionary * _animationsByPresentationPhase;
    _UIStatesFeedbackGenerator * _feedbackGenerator;
    UIInteractionProgress * _interactionProgress;
    unsigned long long  _targetPresentationPhase;
    <UIViewControllerContextTransitioning> * _transitionContext;
    NSDictionary * _viewsParticipatingInCommitTransition;
}

@property (nonatomic, retain) NSMutableDictionary *animationsByPresentationPhase;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIStatesFeedbackGenerator *feedbackGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIInteractionProgress *interactionProgress;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long targetPresentationPhase;
@property (nonatomic) <UIViewControllerContextTransitioning> *transitionContext;
@property (nonatomic, retain) NSDictionary *viewsParticipatingInCommitTransition;
@property (nonatomic, readonly) bool wantsInteractiveStart;

+ (id)performCommitTransitionWithDelegate:(id)arg1 forViewController:(id)arg2 previewViewController:(id)arg3 previewInteractionController:(id)arg4 completion:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)_animateCommitTransition:(id)arg1;
- (void)_animateDismissTransition:(id)arg1;
- (void)_animatePreviewTransition:(id)arg1;
- (void)_animateRevealTransition:(id)arg1;
- (void)_completeAnimationWithPresentationPhase:(unsigned long long)arg1 finished:(bool)arg2;
- (void)_layoutForPresentationPhase:(unsigned long long)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (id)animationsByPresentationPhase;
- (void)cancelInteractiveTransition;
- (id)feedbackGenerator;
- (void)finishInteractiveTransition;
- (id)init;
- (id)initWithInteractionProgress:(id)arg1 targetPresentationPhase:(unsigned long long)arg2;
- (id)interactionProgress;
- (void)interactionProgress:(id)arg1 didEnd:(bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)setAnimations:(id /* block */)arg1 completion:(id /* block */)arg2 forPresentationPhase:(unsigned long long)arg3;
- (void)setAnimationsByPresentationPhase:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setInteractionProgress:(id)arg1;
- (void)setTargetPresentationPhase:(unsigned long long)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setViewsParticipatingInCommitTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (unsigned long long)targetPresentationPhase;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;
- (void)updateInteractiveTransition:(double)arg1;
- (id)viewsParticipatingInCommitTransition;

@end
