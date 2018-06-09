/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSAnimationSettings : NSObject <BSXPCCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    double  _delay;
    double  _duration;
    double  _frameInterval;
    float  _speed;
    CAMediaTimingFunction * _timingFunction;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double delay;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double frameInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float speed;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAMediaTimingFunction *timingFunction;

+ (id)settingsWithDuration:(double)arg1;
+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2;
+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3;
+ (id)settingsWithDuration:(double)arg1 timingFunction:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithDuration:(double)arg1 delay:(double)arg2 frameInterval:(double)arg3 timingFunction:(id)arg4 speed:(float)arg5;
- (void)_setDelay:(double)arg1;
- (void)_setDuration:(double)arg1;
- (void)_setFrameInterval:(double)arg1;
- (void)_setSpeed:(float)arg1;
- (void)_setTimingFunction:(id)arg1;
- (void)applyToCAAnimation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)delay;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (double)frameInterval;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSpringAnimation;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (float)speed;
- (id)timingFunction;

@end
