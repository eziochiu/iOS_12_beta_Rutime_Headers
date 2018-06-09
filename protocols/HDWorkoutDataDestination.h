/* made by EzioChiu.
 */

@protocol HDWorkoutDataDestination <NSObject>

@required

- (void)addMetadata:(NSDictionary *)arg1 dataSource:(id <HDWorkoutDataSource>)arg2;
- (void)addSamples:(NSArray *)arg1 dataSource:(id <HDWorkoutDataSource>)arg2;
- (void)addWorkoutEvents:(NSArray *)arg1 dataSource:(id <HDWorkoutDataSource>)arg2;
- (<HDWorkoutDataAccumulator> *)workoutDataAccumulator;
- (unsigned long long)workoutDataDestinationState;
- (HKDataFlowLink *)workoutDataFlowLink;
- (NSUUID *)workoutDataProcessorUUID;

@end
