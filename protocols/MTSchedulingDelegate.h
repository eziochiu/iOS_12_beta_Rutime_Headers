/* made by EzioChiu.
 */

@protocol MTSchedulingDelegate

@required

- (void)scheduleTimerForSeconds:(double)arg1;
- (void)unscheduleTimer;

@end
