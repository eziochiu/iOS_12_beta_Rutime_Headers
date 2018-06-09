/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVTransition : NSObject {
    NSMutableArray * _allAnimators;
    UIView * _backgroundView;
    UIViewPropertyAnimator * _clientAnimator;
    UIView * _containerView;
    <AVTransitionDelegate> * _delegate;
    AVTransitionPresentationContext * _presentationContext;
    UIView * _touchBlockingView;
    UIViewPropertyAnimator * _transitionAnimator;
    <UIViewControllerContextTransitioningEx> * _transitionContext;
    long long  _transitionType;
    bool  _wasInitiallyInteractive;
}

@property (nonatomic, readonly) NSMutableArray *allAnimators;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) UIViewPropertyAnimator *clientAnimator;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic) <AVTransitionDelegate> *delegate;
@property (nonatomic, retain) AVTransitionPresentationContext *presentationContext;
@property (nonatomic, readonly) UIView *presentedView;
@property (nonatomic, readonly) UIView *presentingView;
@property (nonatomic, readonly) UIView *touchBlockingView;
@property (nonatomic, readonly) UIViewPropertyAnimator *transitionAnimator;
@property (nonatomic, readonly) <UIViewControllerContextTransitioningEx> *transitionContext;
@property (nonatomic, readonly) long long transitionType;
@property (nonatomic) bool wasInitiallyInteractive;

- (void).cxx_destruct;
- (void)_animateAlongsideInteractiveDismissalTransitionAnimationForCancelling;
- (void)_animateAlongsideInteractivePresentationTransitionAnimationForCancelling;
- (void)_animateFinishInteractiveTransition;
- (void)_dismissalTransitionDidEnd:(bool)arg1;
- (void)_dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_finalFrameForPresentedView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_finalTransformForPresentedView;
- (void)_freezeDismissingViewForFinishing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_initialFrameForPresentedView;
- (void)_presentationTransitionDidEnd:(bool)arg1;
- (void)_presentationTransitionWillBegin;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_rotationTransform:(double)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_rotationTransformFromPresentedViewToSourceView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceViewFrameInContainerView;
- (void)_startOrContinueAnimatorsReversed:(bool)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForDismissalAnimation;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForScale:(double)arg1 translation:(struct CGPoint { double x1; double x2; })arg2 rotation:(double)arg3 locationInWindow:(struct CGPoint { double x1; double x2; })arg4 sourceRectInContainerView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)_updateCornerAppearanceAttributesOfView:(id)arg1 toSourceView:(id)arg2 similarity:(double)arg3;
- (void)addRunAlongsideAnimationsIfNeeded;
- (id)allAnimators;
- (id)backgroundView;
- (void)cancelInteractiveTransition;
- (id)clientAnimator;
- (void)completeTransition:(bool)arg1;
- (id)containerView;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (void)finishInteractiveTransition;
- (id)initWithTransitionContext:(id)arg1;
- (void)pauseInteractiveTransition;
- (id)presentationContext;
- (id)presentedView;
- (id)presentingView;
- (void)setDelegate:(id)arg1;
- (void)setPresentationContext:(id)arg1;
- (void)setWasInitiallyInteractive:(bool)arg1;
- (void)startInteractiveTransition;
- (id)touchBlockingView;
- (id)transitionAnimator;
- (id)transitionContext;
- (long long)transitionType;
- (void)updateWithPercentComplete:(double)arg1 translation:(struct CGPoint { double x1; double x2; })arg2 rotation:(double)arg3 locationInWindow:(struct CGPoint { double x1; double x2; })arg4;
- (bool)wasInitiallyInteractive;

@end
