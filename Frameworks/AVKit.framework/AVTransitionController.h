/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVTransitionController : NSObject <AVInteractiveTransitionGestureTrackerDelegate, AVTransitionDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerTransitioningDelegate> {
    AVTransition * _activeTransition;
    <AVTransitionControllerDelegate> * _delegate;
    AVInteractiveTransitionGestureTracker * _gestureTracker;
    AVTransitionPresentationContext * _presentationContext;
    long long  _state;
}

@property (nonatomic, retain) AVTransition *activeTransition;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTransitionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVInteractiveTransitionGestureTracker *gestureTracker;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVTransitionPresentationContext *presentationContext;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsInteractiveStart;

- (void).cxx_destruct;
- (void)_createActiveTransitionAndPresentationContextIfNeededForTransitionContext:(id)arg1;
- (void)_recoverFromPresentationInStandaloneWindowIfNeeded:(id)arg1;
- (id)activeTransition;
- (void)addInteractiveGesturesToView:(id)arg1 additionalGesture:(id)arg2;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animationEnded:(bool)arg1;
- (void)beginFullScreenDismissal:(id /* block */)arg1;
- (void)beginFullScreenPresentationOfViewController:(id)arg1 fromView:(id)arg2 isInteractive:(bool)arg3 completion:(id /* block */)arg4;
- (id)delegate;
- (id)gestureTracker;
- (void)gestureTracker:(id)arg1 didBeginTrackingGesture:(long long)arg2;
- (void)gestureTracker:(id)arg1 didTrackPercentComplete:(double)arg2 translation:(struct CGPoint { double x1; double x2; })arg3 rotation:(double)arg4 locationInWindow:(struct CGPoint { double x1; double x2; })arg5;
- (bool)gestureTracker:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (void)gestureTrackerDidCancelTracking:(id)arg1;
- (void)gestureTrackerDidFinishTracking:(id)arg1;
- (bool)gestureTrackerShouldTrackPanToDismiss:(id)arg1;
- (bool)gestureTrackerShouldTrackPinchToDismiss:(id)arg1;
- (bool)gestureTrackerShouldTrackPinchToPresent:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)presentationContext;
- (void)presentedViewControllerWasForciblyDismissedWithoutAnimation;
- (void)setActiveTransition:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresentationContext:(id)arg1;
- (void)setState:(long long)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (long long)state;
- (double)transitionDuration:(id)arg1;
- (void)transitionWillComplete:(id)arg1 success:(bool)arg2;
- (bool)wantsInteractiveStart;

@end
