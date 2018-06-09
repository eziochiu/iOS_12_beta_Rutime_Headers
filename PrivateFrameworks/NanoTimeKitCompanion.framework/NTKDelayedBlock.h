/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKDelayedBlock : NSObject {
    id /* block */  _action;
    bool  _canceled;
    double  _delay;
    bool  _invalidated;
    NSString * _runLoopMode;
    NSTimer * _timer;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic) bool canceled;
@property (nonatomic) double delay;
@property (nonatomic) bool invalidated;
@property (nonatomic, copy) NSString *runLoopMode;
@property (nonatomic, retain) NSTimer *timer;

- (void).cxx_destruct;
- (id /* block */)action;
- (void)cancel;
- (bool)canceled;
- (void)dealloc;
- (double)delay;
- (id)initWithDelay:(double)arg1 action:(id /* block */)arg2;
- (id)initWithDelay:(double)arg1 runLoopMode:(id)arg2 action:(id /* block */)arg3;
- (bool)invalidated;
- (void)reset;
- (void)resetWithDelay:(double)arg1;
- (id)runLoopMode;
- (void)setAction:(id /* block */)arg1;
- (void)setCanceled:(bool)arg1;
- (void)setDelay:(double)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setRunLoopMode:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;
- (void)timerFired:(id)arg1;

@end
