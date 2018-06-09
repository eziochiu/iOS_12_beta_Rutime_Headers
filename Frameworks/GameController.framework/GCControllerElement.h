/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCControllerElement : NSObject

@property (getter=isAnalog, nonatomic, readonly) bool analog;
@property (nonatomic, readonly) GCControllerElement *collection;

- (bool)_setValue:(float)arg1;
- (bool)_setValue:(float)arg1 queue:(id)arg2;
- (id)collection;
- (id)controller;
- (bool)isAnalog;
- (bool)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (bool)setHIDValue:(struct __IOHIDValue { }*)arg1 queue:(id)arg2;
- (float)value;

@end
