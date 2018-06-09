/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardScheduledTask : NSObject {
    _UIActionWhenIdle * _deferredAction;
    id /* block */  _enqueuedTask;
    id /* block */  _task;
    UIKeyboardTaskQueue * _taskQueue;
    double  _timeInterval;
    NSTimer * _timer;
}

@property (nonatomic, retain) _UIActionWhenIdle *deferredAction;
@property (nonatomic, copy) id /* block */ enqueuedTask;
@property (nonatomic, readonly) bool repeats;
@property (nonatomic, readonly) id /* block */ task;
@property (nonatomic, readonly) UIKeyboardTaskQueue *taskQueue;
@property (nonatomic, readonly) double timeInterval;
@property (nonatomic, retain) NSTimer *timer;

- (void)dealloc;
- (id)deferredAction;
- (id /* block */)enqueuedTask;
- (void)handleDeferredTimerFiredEvent;
- (id)initWithTaskQueue:(id)arg1 timeInterval:(double)arg2 repeats:(bool)arg3 task:(id /* block */)arg4;
- (void)invalidate;
- (bool)isValid;
- (bool)repeats;
- (void)resetTimer;
- (void)setDeferredAction:(id)arg1;
- (void)setEnqueuedTask:(id /* block */)arg1;
- (void)setTimer:(id)arg1;
- (id /* block */)task;
- (id)taskQueue;
- (double)timeInterval;
- (id)timer;
- (void)timerFired:(id)arg1;

@end
