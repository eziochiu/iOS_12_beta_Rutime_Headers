/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIFocusAnimationCoordinator : NSObject {
    long long  _activeFocusAnimation;
    UIFocusUpdateContext * _focusUpdateContext;
    NSMutableArray * _focusingAnimations;
    NSMutableArray * _focusingCompletions;
    _UIFocusAnimationConfiguration * _focusingConfiguration;
    NSMutableArray * _legacyFocusingAnimations;
    NSMutableArray * _legacyUnfocusingAnimations;
    bool  _locked;
    NSMutableArray * _unfocusingAnimations;
    NSMutableArray * _unfocusingCompletions;
    _UIFocusAnimationConfiguration * _unfocusingConfiguration;
}

@property (getter=_activeAnimationDuration, nonatomic, readonly) double activeAnimationDuration;
@property (getter=_activeConfiguration, nonatomic, readonly, copy) _UIFocusAnimationConfiguration *activeConfiguration;
@property (nonatomic, readonly) long long activeFocusAnimation;
@property (getter=_animationDelay, nonatomic, readonly) double animationDelay;
@property (getter=_animationOptions, nonatomic, readonly) unsigned long long animationOptions;
@property (getter=_focusUpdateContext, nonatomic, readonly) UIFocusUpdateContext *focusUpdateContext;
@property (getter=_focusingAnimationDuration, nonatomic, readonly) double focusingAnimationDuration;
@property (nonatomic, readonly) NSMutableArray *focusingAnimations;
@property (nonatomic, readonly) NSMutableArray *focusingCompletions;
@property (nonatomic, retain) _UIFocusAnimationConfiguration *focusingConfiguration;
@property (nonatomic, readonly) NSMutableArray *legacyFocusingAnimations;
@property (nonatomic, readonly) NSMutableArray *legacyUnfocusingAnimations;
@property (getter=_isLocked, nonatomic, readonly) bool locked;
@property (getter=_unfocusingAnimationDuration, nonatomic, readonly) double unfocusingAnimationDuration;
@property (nonatomic, readonly) NSMutableArray *unfocusingAnimations;
@property (nonatomic, readonly) NSMutableArray *unfocusingCompletions;
@property (nonatomic, retain) _UIFocusAnimationConfiguration *unfocusingConfiguration;
@property (getter=_unfocusingRepositionAnimationDuration, nonatomic, readonly) double unfocusingRepositionAnimationDuration;

+ (id)_focusAnimationCoordinatorForAnimationType:(long long)arg1 withConfiguration:(id)arg2 inContext:(id)arg3;
+ (id)_focusingAnimationCoordinatorWithConfiguration:(id)arg1 inContext:(id)arg2;
+ (id)_unfocusingAnimationCoordinatorWithConfiguration:(id)arg1 inContext:(id)arg2;

- (void).cxx_destruct;
- (double)_activeAnimationDuration;
- (id)_activeConfiguration;
- (void)_animate;
- (void)_animateFocusAnimation:(long long)arg1;
- (double)_animationDelay;
- (unsigned long long)_animationOptions;
- (void)_cancelFocusAnimation:(long long)arg1;
- (id)_configurationForFocusAnimation:(long long)arg1;
- (void)_configureWithFocusUpdateContext:(id)arg1;
- (void)_consumeBlocks:(id)arg1;
- (void)_consumeBlocks:(id)arg1 withAnimationContext:(id)arg2;
- (id)_focusUpdateContext;
- (double)_focusingAnimationDuration;
- (id)_initWithFocusUpdateContext:(id)arg1;
- (bool)_isLocked;
- (void)_prepareForFocusAnimation:(long long)arg1;
- (void)_setConfiguration:(id)arg1 forFocusAnimation:(long long)arg2;
- (double)_unfocusingAnimationDuration;
- (double)_unfocusingRepositionAnimationDuration;
- (long long)activeFocusAnimation;
- (void)addCoordinatedAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)addCoordinatedAnimationsForAnimation:(long long)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)addCoordinatedFocusingAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)addCoordinatedUnfocusingAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)focusingAnimations;
- (id)focusingCompletions;
- (id)focusingConfiguration;
- (id)init;
- (id)legacyFocusingAnimations;
- (id)legacyUnfocusingAnimations;
- (void)setFocusingConfiguration:(id)arg1;
- (void)setUnfocusingConfiguration:(id)arg1;
- (id)unfocusingAnimations;
- (id)unfocusingCompletions;
- (id)unfocusingConfiguration;

@end
