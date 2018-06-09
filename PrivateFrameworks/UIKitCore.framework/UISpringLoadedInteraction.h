/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISpringLoadedInteraction : NSObject <UIDragGestureRecognizerDelegate, UIInteraction, UIInteraction_Internal, UISpringLoadedInteractionBehaviorDelegate> {
    UIDelayedAction * _activateAction;
    UISpringLoadedInteractionContextImpl * _context;
    UIDelayedAction * _emphasizeAction;
    id /* block */  _handler;
    <UISpringLoadedInteractionBehavior> * _interactionBehavior;
    <UISpringLoadedInteractionEffect> * _interactionEffect;
    double  _possibleStateDuration;
    UIView * _view;
}

@property (setter=_setPossibleStateDuration:, nonatomic) double _possibleStateDuration;
@property (nonatomic, retain) UIDelayedAction *activateAction;
@property (nonatomic, retain) UISpringLoadedInteractionContextImpl *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDelayedAction *emphasizeAction;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <UISpringLoadedInteractionBehavior> *interactionBehavior;
@property (nonatomic, readonly) <UISpringLoadedInteractionEffect> *interactionEffect;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

+ (id)_blinkEffect;
+ (id)_defaultInteractionBehavior;
+ (id)hysteresisBehaviorWithBeginningVelocity:(double)arg1 cancelingVelocity:(double)arg2;
+ (id)springLoadedInteractionWithHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_activateSpringLoading:(id)arg1;
- (void)_cancelActions;
- (id)_dynamicGestureRecognizersForEvent:(id)arg1;
- (void)_emphasizeSpringLoading:(id)arg1;
- (double)_possibleStateDuration;
- (void)_reloadSpringLoadedInteractionBehavior;
- (void)_resetBehavior;
- (void)_setPossibleStateDuration:(double)arg1;
- (bool)_shouldAllowInteractionWithContext:(id)arg1;
- (void)_springloadedStateChanged:(id)arg1;
- (void)_startActivateAction;
- (void)_startEmphasizeAction;
- (id)activateAction;
- (id)context;
- (void)didMoveToView:(id)arg1;
- (id)emphasizeAction;
- (id /* block */)handler;
- (id)initWithActivationHandler:(id /* block */)arg1;
- (id)initWithInteractionBehavior:(id)arg1 interactionEffect:(id)arg2 activationHandler:(id /* block */)arg3;
- (id)interactionBehavior;
- (id)interactionEffect;
- (void)setActivateAction:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setEmphasizeAction:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setState:(long long)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
