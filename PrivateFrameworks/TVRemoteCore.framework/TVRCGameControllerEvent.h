/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRCGameControllerEvent : NSObject <NSSecureCoding> {
    bool  _down;
    struct CGPoint { 
        double x; 
        double y; 
    }  _joystickLocation;
    double  _timestamp;
}

@property (getter=isDown, nonatomic, readonly) bool down;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } joystickLocation;
@property (nonatomic, readonly) double timestamp;

+ (bool)supportsSecureCoding;

- (id)_initWithTimestamp:(double)arg1 isDown:(bool)arg2 joystickLocation:(struct CGPoint { double x1; double x2; })arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDown;
- (struct CGPoint { double x1; double x2; })joystickLocation;
- (double)timestamp;

@end
