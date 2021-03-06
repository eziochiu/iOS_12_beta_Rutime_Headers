/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIViewAnimationAttributes : NSObject <NSSecureCoding> {
    long long  _curve;
    double  _delay;
    double  _duration;
    bool  _hasSpringAttributes;
    unsigned long long  _options;
    double  _springDamping;
    double  _springMass;
    double  _springStiffness;
    double  _springVelocity;
}

@property (getter=_curve, nonatomic, readonly) long long curve;
@property (getter=_delay, nonatomic, readonly) double delay;
@property (getter=_duration, nonatomic, readonly) double duration;
@property (getter=_hasSpringAttributes, nonatomic, readonly) bool hasSpringAttributes;
@property (getter=_springDamping, nonatomic, readonly) double springDamping;
@property (getter=_springMass, nonatomic, readonly) double springMass;
@property (getter=_springStiffness, nonatomic, readonly) double springStiffness;
@property (getter=_springVelocity, nonatomic, readonly) double springVelocity;

+ (bool)supportsSecureCoding;

- (long long)_curve;
- (double)_delay;
- (double)_duration;
- (bool)_hasSpringAttributes;
- (double)_springDamping;
- (double)_springMass;
- (double)_springStiffness;
- (double)_springVelocity;
- (long long)curve;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
