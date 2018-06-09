/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCControllerButtonInput : GCControllerElement

@property (getter=isPressed, nonatomic, readonly) bool pressed;
@property (nonatomic, copy) id /* block */ pressedChangedHandler;
@property (nonatomic, readonly) float value;
@property (nonatomic, copy) id /* block */ valueChangedHandler;

- (bool)_setValue:(float)arg1;
- (bool)_setValue:(float)arg1 queue:(id)arg2;
- (bool)isPressed;
- (id /* block */)pressedChangedHandler;
- (bool)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (bool)setHIDValue:(struct __IOHIDValue { }*)arg1 queue:(id)arg2;
- (void)setPressedChangedHandler:(id /* block */)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (float)value;
- (id /* block */)valueChangedHandler;

@end
