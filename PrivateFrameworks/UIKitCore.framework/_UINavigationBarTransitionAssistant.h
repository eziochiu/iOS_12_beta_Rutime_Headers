/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UINavigationBarTransitionAssistant : NSObject {
    long long  _animationCount;
    NSMutableArray * _animationIDs;
    bool  _cancelledCleanUp;
    bool  _cancelledTransition;
    <_UINavigationBarDelegatePrivate> * _delegate;
    double  _duration;
    bool  _interactive;
    bool  _interruptable;
    UINavigationBar * _navigationBar;
    bool  _shouldHideBackButtonDuringTransition;
    bool  _shouldUpdatePromptAfterTransition;
    int  _transition;
    <UIViewControllerTransitionCoordinator> * _transitionCoordinator;
}

@property (nonatomic, readonly) NSArray *animationIDs;
@property (nonatomic, readonly) bool cancelledCleanUp;
@property (nonatomic, readonly) bool cancelledTransition;
@property (nonatomic, readonly) <_UINavigationBarDelegatePrivate> *delegate;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) bool interactive;
@property (nonatomic, readonly) bool interruptable;
@property (nonatomic, readonly) UINavigationBar *navigationBar;
@property (nonatomic, readonly) bool shouldAnimateAlongside;
@property (nonatomic, readonly) bool shouldCrossfade;
@property (nonatomic) bool shouldHideBackButtonDuringTransition;
@property (nonatomic) bool shouldUpdatePromptAfterTransition;
@property (nonatomic, readonly) int transition;
@property (nonatomic, readonly) <UIViewControllerTransitionCoordinator> *transitionCoordinator;

+ (id)popTransitionAssistantForNavigationBar:(id)arg1 delegate:(id)arg2 crossfade:(bool)arg3;
+ (id)pushTransitionAssistantForNavigationBar:(id)arg1 delegate:(id)arg2 crossfade:(bool)arg3;

- (void).cxx_destruct;
- (void)_clearAnimationsWithDuration:(double)arg1 curve:(long long)arg2 reverse:(bool)arg3;
- (void)_finishTrackingAnimations;
- (void)_getInteractive;
- (void)_getPopDurationAndTransitionAlwaysCrossfade:(bool)arg1;
- (void)_getPushDurationAndTransitionAlwaysCrossfade:(bool)arg1;
- (void)_getTransitionCoordinator;
- (void)_startTrackingAnimations;
- (id)animationIDs;
- (void)cancelCleanUp;
- (void)cancelInteractiveTransitionPercent:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (bool)cancelledCleanUp;
- (bool)cancelledTransition;
- (void)decrementAnimationCount;
- (id)delegate;
- (double)duration;
- (void)finishInteractiveTransitionPercent:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)finishTrackingInteractiveTransition;
- (void)incrementAnimationCount;
- (id)initWithNavigationBar:(id)arg1 delegate:(id)arg2;
- (bool)interactive;
- (bool)interruptable;
- (id)navigationBar;
- (void)setShouldHideBackButtonDuringTransition:(bool)arg1;
- (void)setShouldUpdatePromptAfterTransition:(bool)arg1;
- (bool)shouldAnimateAlongside;
- (bool)shouldCrossfade;
- (bool)shouldHideBackButtonDuringTransition;
- (bool)shouldUpdatePromptAfterTransition;
- (void)startInteractiveTransition;
- (int)transition;
- (id)transitionCoordinator;
- (void)updateInteractiveTransitionPercent:(double)arg1;

@end
