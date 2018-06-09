/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIClickInteractionForceProgressProvider : NSObject <_UIClickInteractionProgressProviding> {
    long long  _currentState;
    <_UIClickInteractionProgressProvidingDelegate> * _delegate;
    UITouchForceGestureRecognizer * _gestureRecognizer;
    UIView * _view;
}

@property (nonatomic, readonly) long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIClickInteractionProgressProvidingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITouchForceGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double touchForce;
@property (nonatomic, retain) UIView *view;

- (void).cxx_destruct;
- (void)_handleGestureRecognizer:(id)arg1;
- (void)_updateInteractionForGestureRecognizer:(id)arg1;
- (void)cancelInteraction;
- (long long)currentState;
- (id)delegate;
- (id)gestureRecognizer;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setView:(id)arg1;
- (bool)shouldInvokeActionWhenTransitioningFromState:(long long)arg1 toState:(long long)arg2;
- (double)touchForce;
- (id)view;

@end
