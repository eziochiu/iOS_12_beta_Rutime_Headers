/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLTimer : NSObject {
    double  _fireInterval;
    id /* block */  _handler;
    double  _nextFireTime;
    <CLTimerScheduler> * _scheduler;
    CLSilo * _silo;
}

@property (nonatomic) double fireInterval;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) double nextFireTime;

- (void).cxx_destruct;
- (double)fireInterval;
- (id /* block */)handler;
- (id)initInSilo:(id)arg1 withScheduler:(id)arg2;
- (void)invalidate;
- (double)nextFireTime;
- (void)setFireInterval:(double)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setNextFireAfterDelay:(double)arg1;
- (void)setNextFireAfterDelay:(double)arg1 interval:(double)arg2;
- (void)setNextFireTime:(double)arg1;
- (void)setNextFireTime:(double)arg1 interval:(double)arg2;
- (void)shouldFire;
- (void)updateScheduler;

@end
