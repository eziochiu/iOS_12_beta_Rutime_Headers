/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPreviewInteractionCompatibilityTouchForceProvider : NSObject <UIGestureRecognizerDelegate, _UIPreviewInteractionTouchForceProviding> {
    bool  _active;
    UITouch * _currentTouch;
    _UITouchesObservingGestureRecognizer * _gestureRecognizer;
    UIView * _view;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double touchForce;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_handleTouchObservingGestureRecognizer:(id)arg1;
- (void)cancelInteraction;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithView:(id)arg1;
- (bool)isActive;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (void)setActive:(bool)arg1;
- (double)touchForce;
- (id)view;

@end
