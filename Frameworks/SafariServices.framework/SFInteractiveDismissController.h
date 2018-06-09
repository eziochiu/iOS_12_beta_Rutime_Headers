/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFInteractiveDismissController : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    double  _accelerations;
    double  _averageAcceleration;
    double  _averageVelocity;
    <SFInteractiveDismissControllerDelegate> * _delegate;
    UIView * _dimmingView;
    unsigned long long  _dismissMode;
    UIScreenEdgePanGestureRecognizer * _edgeSwipeGestureRecognizer;
    UIView * _edgeSwipeView;
    long long  _interactionState;
    double  _previousAcceleration;
    double  _previousDisplacement;
    double  _previousTimeStamp;
    double  _previousVelocity;
    unsigned long long  _sampleCount;
    double  _skipTimeStamp;
    double  _timestamps;
    double  _totalDistance;
    <UIViewControllerContextTransitioning> * _transitionContext;
    double  _velocities;
    UIViewController * _viewControllerToBeDismissed;
}

@property (nonatomic) double averageAcceleration;
@property (nonatomic) double averageVelocity;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFInteractiveDismissControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIScreenEdgePanGestureRecognizer *edgeSwipeGestureRecognizer;
@property (nonatomic, retain) UIView *edgeSwipeView;
@property (readonly) unsigned long long hash;
@property (nonatomic) double previousAcceleration;
@property (nonatomic) double previousDisplacement;
@property (nonatomic) double previousTimeStamp;
@property (nonatomic) double previousVelocity;
@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) double skipTimeStamp;
@property (readonly) Class superclass;
@property (nonatomic) double totalDistance;
@property (nonatomic) UIViewController *viewControllerToBeDismissed;

- (void).cxx_destruct;
- (void)_animateDismissalCancelTransition;
- (void)_animateDismissalCompleteTransition;
- (void)_dismissAnimateTransition:(id)arg1;
- (double)_percentComplete:(id)arg1;
- (void)_presentAnimateTransition:(id)arg1;
- (double)_translationCoefficient;
- (void)_updateStatistics:(id)arg1 firstSample:(bool)arg2 finalSample:(bool)arg3;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (double)averageAcceleration;
- (double)averageVelocity;
- (void)cancelInteractiveTransition;
- (id)delegate;
- (id)edgeSwipeGestureRecognizer;
- (id)edgeSwipeView;
- (void)finishInteractiveTransition;
- (id)init;
- (id)interactionControllerForDismissal:(id)arg1;
- (bool)popGesture:(id)arg1 withRemainingDuration:(double)arg2 shouldPopWithVelocity:(double*)arg3;
- (double)previousAcceleration;
- (double)previousDisplacement;
- (double)previousTimeStamp;
- (double)previousVelocity;
- (unsigned long long)sampleCount;
- (void)setAverageAcceleration:(double)arg1;
- (void)setAverageVelocity:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEdgeSwipeView:(id)arg1;
- (void)setPreviousAcceleration:(double)arg1;
- (void)setPreviousDisplacement:(double)arg1;
- (void)setPreviousTimeStamp:(double)arg1;
- (void)setPreviousVelocity:(double)arg1;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setSkipTimeStamp:(double)arg1;
- (void)setTotalDistance:(double)arg1;
- (void)setViewControllerToBeDismissed:(id)arg1;
- (double)skipTimeStamp;
- (void)startInteractiveTransition:(id)arg1;
- (void)swiped:(id)arg1;
- (double)totalDistance;
- (double)transitionDuration:(id)arg1;
- (struct CGPoint { double x1; double x2; })translationForStatistics;
- (struct CGPoint { double x1; double x2; })velocityForStatistics;
- (id)viewControllerToBeDismissed;

@end
