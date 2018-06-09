/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    double  _duration;
    bool  _interactive;
    double  _interactiveProgress;
    UIPercentDrivenInteractiveTransition * _interactiveTransition;
    bool  _startedInteractively;
    <UIViewControllerContextTransitioning> * _transitionContext;
    double  _visibleInteractiveProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double imageModulationIntensity;
@property (getter=isInteractive, setter=_setInteractive:, nonatomic) bool interactive;
@property (setter=_setInteractiveProgress:, nonatomic) double interactiveProgress;
@property (nonatomic) bool startedInteractively;
@property (readonly) Class superclass;
@property (nonatomic) double visibleInteractiveProgress;

+ (id)interactionControllerForAnimationController:(id)arg1;

- (void).cxx_destruct;
- (id)_newInteractiveTransition;
- (void)_setInteractive:(bool)arg1;
- (void)_setInteractiveProgress:(double)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (void)cancelInteractiveTransition;
- (void)completeTransition:(bool)arg1;
- (id)containerView;
- (void)didCompleteTransitionAnimation;
- (double)duration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFromViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalToViewFrame;
- (void)finishInteractiveTransition;
- (id)fromViewController;
- (double)imageModulationIntensity;
- (void)imageModulationIntensityDidChange;
- (id)initWithDuration:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFromViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialToViewFrame;
- (double)interactiveProgress;
- (id)interactiveTransition;
- (bool)isInteractive;
- (void)setStartedInteractively:(bool)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setVisibleInteractiveProgress:(double)arg1;
- (bool)startedInteractively;
- (id)toViewController;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;
- (void)updateInteractiveTransitionProgress:(double)arg1;
- (void)updateInteractiveTransitionProgress:(double)arg1 visibleTransitionProgress:(double)arg2;
- (double)visibleInteractiveProgress;

@end
