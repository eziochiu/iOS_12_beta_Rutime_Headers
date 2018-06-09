/* made by EzioChiu.
 */

@protocol HDWorkoutSessionObserver <NSObject>

@required

- (void)workoutSession:(HDWorkoutSessionServer *)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(NSDate *)arg4;
- (void)workoutSession:(HDWorkoutSessionServer *)arg1 didFailWithError:(NSError *)arg2;
- (void)workoutSession:(HDWorkoutSessionServer *)arg1 didGenerateEvent:(_HKWorkoutEvent *)arg2;

@end
