/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCControllerAxisInput : GCControllerElement

@property (getter=isDigital, nonatomic, readonly) bool digital;
@property (getter=isFlipped, nonatomic, readonly) bool flipped;
@property (nonatomic, readonly) GCControllerButtonInput *negative;
@property (nonatomic, readonly) GCControllerButtonInput *positive;
@property (nonatomic, readonly) float value;
@property (nonatomic, copy) id /* block */ valueChangedHandler;

- (bool)_setValue:(float)arg1;
- (bool)_setValue:(float)arg1 queue:(id)arg2;
- (id)description;
- (bool)isAnalog;
- (bool)isDigital;
- (bool)isFlipped;
- (id)negative;
- (id)positive;
- (bool)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (bool)setHIDValue:(struct __IOHIDValue { }*)arg1 queue:(id)arg2;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (float)value;
- (id /* block */)valueChangedHandler;

@end
