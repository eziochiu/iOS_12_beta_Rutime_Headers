/* made by EzioChiu.
 */

@protocol HDWorkoutDataSource <NSObject>

@required

- (void)workoutDataDestination:(id <HDWorkoutDataDestination>)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id <HDWorkoutDataDestination>)arg1 requestsDataFrom:(NSDate *)arg2 to:(NSDate *)arg3;
- (HKDataFlowLink *)workoutDataFlowLink;
- (NSUUID *)workoutDataProcessorUUID;

@optional

- (NSSet *)quantityTypesToIncludeWhilePaused;

@end
