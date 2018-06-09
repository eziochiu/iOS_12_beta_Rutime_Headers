/* made by EzioChiu.
 */

@protocol OFViewControllerTransitioningContext <NSObject>

@required

- (void)cancelInteractiveTransitionWithVelocity:(double)arg1;
- (void)completeTransition:(bool)arg1;
- (OFUIView *)containerView;
- (bool)doEaseIn;
- (bool)doEaseOut;
- (void)finishInteractiveTransitionWithVelocity:(double)arg1;
- (OFUIViewController *)fromViewController;
- (bool)initiallyInteractive;
- (bool)isCompleting;
- (bool)isInteractive;
- (bool)isRubberBanding;
- (void)makeTransitionInteractiveWithInteractor:(id <OFViewControllerInteractiveTransitioning>)arg1 andProgress:(double)arg2;
- (double)progress;
- (double)progressVelocity;
- (void)setProgressVelocity:(double)arg1;
- (void)startInteractiveTransition;
- (OFUIViewController *)toViewController;
- (void)updateInteractiveTransition:(double)arg1;
- (void)updateNonInteractiveTransitionWithProgress:(double)arg1;
- (bool)wasCancelled;

@end
