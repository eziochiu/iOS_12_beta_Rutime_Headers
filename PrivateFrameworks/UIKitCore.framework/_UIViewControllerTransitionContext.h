/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioningEx> {
    bool  __allowUserInteraction;
    <UIViewControllerAnimatedTransitioning> * __animator;
    _UIViewControllerTransitionCoordinator * __auxContext;
    long long  __completionCurve;
    id /* block */  __completionHandler;
    double  __completionVelocity;
    NSArray * __containerViews;
    id /* block */  __didCompleteHandler;
    double  __duration;
    id /* block */  __interactiveUpdateHandler;
    <UIViewControllerInteractiveTransitioning> * __interactor;
    bool  __isPresentation;
    double  __percentOffset;
    id /* block */  __postInteractiveCompletionHandler;
    long long  __state;
    id /* block */  __willCompleteHandler;
    bool  _animated;
    UIView * _containerView;
    bool  _currentlyInteractive;
    NSArray * _disabledViews;
    bool  _initiallyInteractive;
    long long  _presentationStyle;
    double  _previousPercentComplete;
    bool  _rotating;
    struct { 
        unsigned int interactorImplementsCompletionSpeed : 1; 
        unsigned int interactorImplementsCompletionCurve : 1; 
        unsigned int transitionWasCancelled : 1; 
        unsigned int transitionIsCompleting : 1; 
        unsigned int transitionIsInterruptible : 1; 
    }  _transitionContextFlags;
}

@property (getter=_allowUserInteraction, setter=_setAllowUserInteraction:, nonatomic) bool _allowUserInteraction;
@property (setter=_setAnimator:, nonatomic) <UIViewControllerAnimatedTransitioning> *_animator;
@property (setter=_setAuxContext:, nonatomic, retain) _UIViewControllerTransitionCoordinator *_auxContext;
@property (setter=_setCompletionCurve:, nonatomic) long long _completionCurve;
@property (setter=_setCompletionHandler:, nonatomic, copy) id /* block */ _completionHandler;
@property (setter=_setCompletionVelocity:, nonatomic) double _completionVelocity;
@property (setter=_setContainerViews:, nonatomic, retain) NSArray *_containerViews;
@property (setter=_setDidCompleteHandler:, nonatomic, copy) id /* block */ _didCompleteHandler;
@property (setter=_setDuration:, nonatomic) double _duration;
@property (setter=_setInteractiveUpdateHandler:, nonatomic, copy) id /* block */ _interactiveUpdateHandler;
@property (setter=_setInteractor:, nonatomic) <UIViewControllerInteractiveTransitioning> *_interactor;
@property (setter=_setIsPresentation:, nonatomic) bool _isPresentation;
@property (setter=_setPercentOffset:, nonatomic) double _percentOffset;
@property (setter=_setPostInteractiveCompletionHandler:, nonatomic, copy) id /* block */ _postInteractiveCompletionHandler;
@property (setter=_setState:, nonatomic) long long _state;
@property (setter=_setTransitionIsCompleting:, nonatomic) bool _transitionIsCompleting;
@property (setter=_setWillCompleteHandler:, nonatomic, copy) id /* block */ _willCompleteHandler;
@property (getter=_affineTransform, nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } affineTransform;
@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (nonatomic, readonly) UIView *containerView;
@property (getter=isCurrentlyInteractive, setter=_setCurrentlyInteractive:, nonatomic) bool currentlyInteractive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_initiallyInteractive, setter=_setInitiallyInteractive:, nonatomic) bool initiallyInteractive;
@property (getter=isInteractive, nonatomic, readonly) bool interactive;
@property (getter=isInterruptible, setter=_setInterruptible:, nonatomic) bool interruptible;
@property (setter=_setPresentationStyle:, nonatomic) long long presentationStyle;
@property (getter=_isRotating, setter=_setRotating:, nonatomic) bool rotating;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } targetTransform;
@property (nonatomic, readonly) bool transitionWasCancelled;

+ (id)_associatedTransitionContextForObject:(id)arg1;

- (void).cxx_destruct;
- (void)__runAlongsideAnimations;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_affineTransform;
- (bool)_allowUserInteraction;
- (long long)_alongsideAnimationsCount;
- (id)_animator;
- (id)_auxContext;
- (long long)_completionCurve;
- (id /* block */)_completionHandler;
- (double)_completionVelocity;
- (id)_containerViews;
- (id /* block */)_didCompleteHandler;
- (void)_disableInteractionForViews:(id)arg1;
- (double)_duration;
- (void)_enableInteractionForDisabledViews;
- (bool)_initiallyInteractive;
- (id /* block */)_interactiveUpdateHandler;
- (void)_interactivityDidChange:(bool)arg1;
- (id)_interactor;
- (bool)_isPresentation;
- (bool)_isRotating;
- (double)_percentOffset;
- (id /* block */)_postInteractiveCompletionHandler;
- (double)_previousPercentComplete;
- (void)_runAlongsideCompletions;
- (void)_setAllowUserInteraction:(bool)arg1;
- (void)_setAnimator:(id)arg1;
- (void)_setAuxContext:(id)arg1;
- (void)_setCompletionCurve:(long long)arg1;
- (void)_setCompletionHandler:(id /* block */)arg1;
- (void)_setCompletionVelocity:(double)arg1;
- (void)_setContainerView:(id)arg1;
- (void)_setContainerViews:(id)arg1;
- (void)_setCurrentlyInteractive:(bool)arg1;
- (void)_setDidCompleteHandler:(id /* block */)arg1;
- (void)_setDuration:(double)arg1;
- (void)_setInitiallyInteractive:(bool)arg1;
- (void)_setInteractiveUpdateHandler:(id /* block */)arg1;
- (void)_setInteractor:(id)arg1;
- (void)_setInterruptible:(bool)arg1;
- (void)_setIsAnimated:(bool)arg1;
- (void)_setIsPresentation:(bool)arg1;
- (void)_setPercentOffset:(double)arg1;
- (void)_setPostInteractiveCompletionHandler:(id /* block */)arg1;
- (void)_setPresentationStyle:(long long)arg1;
- (void)_setPreviousPercentComplete:(double)arg1;
- (void)_setRotating:(bool)arg1;
- (void)_setState:(long long)arg1;
- (void)_setTransitionIsCompleting:(bool)arg1;
- (void)_setTransitionIsInFlight:(bool)arg1;
- (void)_setWillCompleteHandler:(id /* block */)arg1;
- (long long)_state;
- (void)_stopInteractiveTransition;
- (id)_transitionCoordinator;
- (bool)_transitionIsCompleting;
- (bool)_transitionIsInFlight;
- (void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(double)arg1;
- (id /* block */)_willCompleteHandler;
- (void)cancelInteractiveTransition;
- (void)completeTransition:(bool)arg1;
- (id)containerView;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrameForViewController:(id)arg1;
- (void)finishInteractiveTransition;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameForViewController:(id)arg1;
- (bool)initiallyInteractive;
- (bool)isAnimated;
- (bool)isCurrentlyInteractive;
- (bool)isInteractive;
- (bool)isInterruptible;
- (void)pauseInteractiveTransition;
- (long long)presentationStyle;
- (void)setTransitionWasCancelled:(bool)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })targetTransform;
- (bool)transitionWasCancelled;
- (void)updateInteractiveTransition:(double)arg1;
- (id)viewControllerForKey:(id)arg1;
- (id)viewForKey:(id)arg1;

@end
