/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCControllerAxisButtonInput : _GCControllerButtonInput {
    _GCControllerAxisInput * _axis;
    bool  _positive;
}

@property (nonatomic) _GCControllerAxisInput *axis;
@property (getter=isPositive, nonatomic, readonly) bool positive;

- (void).cxx_destruct;
- (bool)_setValue:(float)arg1;
- (bool)_setValue:(float)arg1 queue:(id)arg2;
- (bool)_setValueFromAxisButton:(float)arg1;
- (bool)_setValueFromAxisButton:(float)arg1 queue:(id)arg2;
- (id)axis;
- (id)collection;
- (id)description;
- (id)initWithAxis:(id)arg1 positive:(bool)arg2;
- (bool)isAnalog;
- (bool)isPositive;
- (void)setAxis:(id)arg1;
- (bool)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (bool)setHIDValue:(struct __IOHIDValue { }*)arg1 queue:(id)arg2;
- (float)value;

@end