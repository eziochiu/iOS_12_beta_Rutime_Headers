/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIViewAnimationState : NSObject <CAAnimationDelegate> {
    NSMutableArray * _addedCompletions;
    bool  _allowUserInteractionToCutOffEndOfAnimation;
    bool  _allowsHitTesting;
    id /* block */  _alongsideAnimations;
    bool  _animationDidStopForced;
    bool  _animationDidStopSent;
    <_UIBasicAnimationFactory> * _animationFactory;
    bool  _animationFactoryMakesPerAnimationCustomCurves;
    NSString * _animationID;
    unsigned int  _autoreverses;
    bool  _belongsToTrackingAnimator;
    unsigned int  _cacheTransition;
    unsigned int  _completionCallbacksDisabledOnPop;
    void * _context;
    long long  _curve;
    CAMediaTimingFunction * _customCurve;
    double  _delay;
    id  _delegate;
    int  _didEndCount;
    SEL  _didEndSelector;
    bool  _disallowAdditiveAnimations;
    unsigned int  _disallowCaptureWithinPropertyAnimator;
    bool  _disallowInheritance;
    double  _duration;
    int  _filter;
    float  _filterValue;
    UIView * _filterView;
    long long  _finishedPosition;
    double  _frameInterval;
    unsigned int  _hasOuterAnimator;
    unsigned int  _hasOuterTrackingAnimator;
    unsigned int  _layoutSubviews;
    UIViewAnimationState * _nextState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    UIViewPropertyAnimator * _propertyAnimator;
    float  _repeatCount;
    UIViewAnimationState * _retainedSelf;
    unsigned int  _roundsToInteger;
    double  _start;
    NSMutableArray * _trackedAnimations;
    long long  _transition;
    UIView * _transitionView;
    unsigned int  _useCurrentLayerState;
    NSUUID * _uuid;
    NSMutableArray * _viewsPendingConstraintBasedAnimation;
    SEL  _willStartSelector;
    unsigned int  _willStartSent;
}

@property (nonatomic, readonly) bool _allowsUserInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_addConstraintPendingAnimation:(id)arg1 container:(id)arg2;
+ (void)_addSystemPostAnimationAction:(id /* block */)arg1;
+ (void)_addViewForConstraintBasedAnimation:(id)arg1;
+ (id)originalAnimationForKeyPath:(id)arg1 inLayer:(id)arg2;
+ (void)popAnimationState;
+ (void)pushViewAnimationState:(id)arg1 context:(void*)arg2;

- (void).cxx_destruct;
- (void)_acceptEarlyAnimationCutoff:(id)arg1;
- (void)_addAnimationStateForTracking:(id)arg1;
- (bool)_addCompletion:(id /* block */)arg1;
- (bool)_addCompletionWithPosition:(id /* block */)arg1;
- (bool)_addPendingKeyframeValue:(id)arg1 forKey:(id)arg2 view:(id)arg3;
- (bool)_allowsHitTesting;
- (bool)_allowsUserInteraction;
- (bool)_allowsUserInteractionToCutOffEndOfAnimation;
- (void)_animationDidStopWithNilAnimationFinished:(bool)arg1;
- (id)_canonicalTrackedLayerAnimationInLayer:(id*)arg1;
- (double)_canonicalTrackedUnpacedFractionComplete;
- (void)_decrementDidEndCount;
- (id)_defaultAnimationForKey:(id)arg1;
- (int)_didEndCount;
- (double)_elapsedTimeForCanonicallyTrackedAnimation;
- (void)_incrementDidEndCount;
- (bool)_isKeyframeAnimation;
- (bool)_isTrackingEnabled;
- (id)_outerPropertyAnimator:(bool)arg1;
- (void)_performWithCompletionCallbacksDisabledOnPop:(id /* block */)arg1;
- (void)_prepareForViewAnimationAfterPush;
- (void)_removeAnimationStateFromTrackingMap:(bool)arg1;
- (void)_removeAnimationStateFromTrackingMap:(bool)arg1 disableTrackingIfNeeded:(bool)arg2;
- (void)_removeLastCompletion;
- (void)_runAlongsideAnimations;
- (void)_runConstraintBasedLayoutAnimations;
- (void)_setAlongsideAnimations:(id /* block */)arg1;
- (void)_setCustomCurve:(id)arg1;
- (void)_setFinishedPosition:(long long)arg1;
- (bool)_shouldAnimateAdditivelyForKey:(id)arg1 onLayer:(id)arg2 forView:(id)arg3;
- (bool)_shouldStartFromCurrentStateForLayer:(id)arg1 key:(id)arg2 forView:(id)arg3;
- (void)_trackAnimation:(id)arg1 nonAdditiveAnimation:(id)arg2 withAnimationKey:(id)arg3 forKeyPath:(id)arg4 inLayer:(id)arg5;
- (void)_trackAnimation:(id)arg1 withAnimationKey:(id)arg2 forKeyPath:(id)arg3 inLayer:(id)arg4;
- (void)_trackObject:(id)arg1 withAnimationPropertyName:(id)arg2 inLayer:(id)arg3;
- (id)_trackedAnimations;
- (void)_transferAnimationToTrackingAnimator:(id)arg1;
- (void)_transformIntoAdditiveAnimationAndNoteOriginal:(id)arg1 inLayer:(id)arg2 animationKey:(id)arg3;
- (double)_unpacedFractionCompleteForAnimation:(id)arg1 inLayer:(id)arg2 duration:(double)arg3;
- (void)_untrackAnimationsWithIdentifier:(id)arg1 keyPath:(id)arg2 inLayer:(id)arg3 removeFromLayer:(bool)arg4;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)configureAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
- (id)init;
- (void)pop;
- (void)pushWithViewAnimationID:(id)arg1 context:(void*)arg2;
- (void)sendDelegateAnimationDidStop:(id)arg1 finished:(bool)arg2;
- (void)sendDelegateDidStopManually:(bool)arg1;
- (void)setAnimationAttributes:(id)arg1;
- (void)setAnimationAttributes:(id)arg1 correctZeroDuration:(bool)arg2 skipDelegateAssignment:(bool)arg3;
- (void)setAnimationAttributes:(id)arg1 correctZeroDuration:(bool)arg2 skipDelegateAssignment:(bool)arg3 customCurve:(id)arg4;
- (void)setupCustomTimingCurve;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(id /* block */)arg7 completion:(id /* block */)arg8;
- (bool)shouldAnimatePropertyWithKey:(id)arg1;

@end
