/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAnimator : NSObject {
    NSMutableArray * _animations;
    /* Warning: unhandled array encoding: '[3@]' */ id  _heartbeat;
    int  _heartbeatClientCount;
    double  _lastUpdateTime;
}

+ (void)disableAnimation;
+ (void)enableAnimation;
+ (id)sharedAnimator;

- (void).cxx_destruct;
- (void)_LCDHeartbeatCallback:(id)arg1;
- (void)_TVHeartbeatCallback:(id)arg1;
- (void)_TimerHeartbeatCallback:(id)arg1;
- (void)_addAnimation:(id)arg1 withDuration:(double)arg2 start:(bool)arg3 startTime:(double)arg4;
- (void)_advanceAnimationsOfType:(int)arg1 withTimestamp:(double)arg2;
- (bool)_isRunningAnimation:(id)arg1;
- (void)_startAnimation:(id)arg1 withStartTime:(double)arg2;
- (void)addAnimation:(id)arg1 withDuration:(double)arg2 start:(bool)arg3;
- (void)addAnimations:(id)arg1 withDuration:(double)arg2 start:(bool)arg3;
- (void)dealloc;
- (void)removeAnimationsForTarget:(id)arg1;
- (void)removeAnimationsForTarget:(id)arg1 ofKind:(Class)arg2;
- (void)startAnimation:(id)arg1;
- (void)stopAnimation:(id)arg1;

@end
