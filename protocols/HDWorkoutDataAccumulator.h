/* made by EzioChiu.
 */

@protocol HDWorkoutDataAccumulator

@required

- (void)addDataAccumulationObserver:(id <HDWorkoutDataAccumulatorObserver>)arg1;
- (NSArray *)currentEvents;
- (void)removeDataAccumulationObserver:(id <HDWorkoutDataAccumulatorObserver>)arg1;

@end
