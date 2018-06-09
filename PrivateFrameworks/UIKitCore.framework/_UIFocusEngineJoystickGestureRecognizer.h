/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusEngineJoystickGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousStickPosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _stickPosition;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } previousStickPosition;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } stickPosition;

- (void)_calculateStickPositionFromPresses:(id)arg1 withEvent:(id)arg2;
- (bool)_shouldReceivePress:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })previousStickPosition;
- (void)reset;
- (struct CGPoint { double x1; double x2; })stickPosition;

@end
