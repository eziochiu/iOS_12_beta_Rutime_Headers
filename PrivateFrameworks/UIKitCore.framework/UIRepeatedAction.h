/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIRepeatedAction : NSObject {
    bool  _didCompleteInvocationDelay;
    bool  _didCompletePreInvocationDelay;
    bool  _disableRepeat;
    NSInvocation * _invocation;
    id  _invocationArgument;
    double  _invocationDelay;
    double  _preInvocationDelay;
    double  _repeatedDelay;
    bool  _skipInitialFire;
    NSTimer * _timer;
}

@property (nonatomic) bool disableRepeat;
@property (nonatomic, retain) NSInvocation *invocation;
@property (nonatomic, retain) id invocationArgument;
@property (nonatomic) double invocationDelay;
@property (nonatomic) double preInvocationDelay;
@property (nonatomic) double repeatedDelay;
@property (nonatomic) bool skipInitialFire;
@property (nonatomic, retain) NSTimer *timer;

+ (id)_invocationForTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (id)actionWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

- (void).cxx_destruct;
- (void)_invocationTimerFire;
- (void)_preInvocationTimerFire;
- (void)_repeatedTimerFire;
- (void)dealloc;
- (bool)disableRepeat;
- (id)initWithInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)invalidate;
- (id)invocation;
- (id)invocationArgument;
- (double)invocationDelay;
- (bool)invoke;
- (double)preInvocationDelay;
- (double)repeatedDelay;
- (void)reset;
- (void)schedule;
- (void)scheduleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)setDisableRepeat:(bool)arg1;
- (void)setInvocation:(id)arg1;
- (void)setInvocationArgument:(id)arg1;
- (void)setInvocationDelay:(double)arg1;
- (void)setPreInvocationDelay:(double)arg1;
- (void)setRepeatedDelay:(double)arg1;
- (void)setSkipInitialFire:(bool)arg1;
- (void)setTimer:(id)arg1;
- (bool)skipInitialFire;
- (id)timer;

@end
