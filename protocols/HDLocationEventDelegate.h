/* made by EzioChiu.
 */

@protocol HDLocationEventDelegate

@required

- (void)elevationUpdated:(unsigned long long)arg1;
- (void)workoutRouteUpdated:(HKWorkoutRoute *)arg1;

@end
