/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIClickInteractionLongPressProgressProvider : NSObject <_UIClickInteractionProgressProviding> {
    long long  _currentState;
    <_UIClickInteractionProgressProvidingDelegate> * _delegate;
    CADisplayLink * _displayLink;
    UILongPressGestureRecognizer * _gestureRecognizer;
    double  _touchStartTimestamp;
    UIView * _view;
}

@property (nonatomic, readonly) long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIClickInteractionProgressProvidingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, retain) UILongPressGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double touchStartTimestamp;
@property (nonatomic, retain) UIView *view;

- (void).cxx_destruct;
- (void)_displayLinkDidFire:(id)arg1;
- (void)_handleGestureRecognizer:(id)arg1;
- (void)_updateInteraction:(bool)arg1;
- (void)cancelInteraction;
- (long long)currentState;
- (void)dealloc;
- (id)delegate;
- (id)displayLink;
- (id)gestureRecognizer;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setTouchStartTimestamp:(double)arg1;
- (void)setView:(id)arg1;
- (bool)shouldInvokeActionWhenTransitioningFromState:(long long)arg1 toState:(long long)arg2;
- (double)touchStartTimestamp;
- (id)view;

@end
