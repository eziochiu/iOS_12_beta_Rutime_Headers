/* made by EzioChiu.
 */

@protocol CLTimerScheduler

@required

- (void)reflectNextFireTime:(double)arg1 fireInterval:(double)arg2;
- (void)setTimer:(CLTimer *)arg1;
- (CLTimer *)timer;

@end
