/* made by EzioChiu.
 */

@protocol HDWorkoutDataAccumulatorObserver <NSObject>

@optional

- (void)workoutDataAccumulator:(id <HDWorkoutDataAccumulator>)arg1 didUpdateEvents:(NSArray *)arg2;
- (void)workoutDataAccumulator:(id <HDWorkoutDataAccumulator>)arg1 didUpdateMetadata:(NSDictionary *)arg2;
- (void)workoutDataAccumulator:(id <HDWorkoutDataAccumulator>)arg1 didUpdateStatistics:(NSDictionary *)arg2;

@end
