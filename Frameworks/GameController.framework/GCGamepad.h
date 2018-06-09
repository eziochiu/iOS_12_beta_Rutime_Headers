/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCGamepad : NSObject

@property (nonatomic, readonly) GCControllerButtonInput *buttonA;
@property (nonatomic, readonly) GCControllerButtonInput *buttonB;
@property (nonatomic, readonly) GCControllerButtonInput *buttonX;
@property (nonatomic, readonly) GCControllerButtonInput *buttonY;
@property (nonatomic, readonly) GCController *controller;
@property (nonatomic, readonly) GCControllerDirectionPad *dpad;
@property (nonatomic, readonly) GCControllerButtonInput *leftShoulder;
@property (nonatomic, readonly) GCControllerButtonInput *rightShoulder;
@property (nonatomic, copy) id /* block */ valueChangedHandler;

+ (bool)supportsUSBInterfaceProtocol:(unsigned char)arg1;

- (bool)allowsRotation;
- (id)button0;
- (id)button1;
- (id)button2;
- (id)button3;
- (id)buttonA;
- (id)buttonB;
- (id)buttonX;
- (id)buttonY;
- (id)controller;
- (id)dpad;
- (id)initWithController:(id)arg1;
- (id)inputForElement:(struct __IOHIDElement { }*)arg1;
- (id)leftShoulder;
- (bool)reportsAbsoluteDpadValues;
- (id)rightShoulder;
- (id)saveSnapshot;
- (void)setAllowsRotation:(bool)arg1;
- (void)setButton:(id)arg1 pressed:(bool)arg2;
- (void)setButton:(id)arg1 value:(double)arg2;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)setReportsAbsoluteDpadValues:(bool)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (id /* block */)valueChangedHandler;

@end
