/* made by EzioChiu.
 */

@protocol HKLiveWorkoutDataSourceServerInterface <NSObject>

@required

- (void)remote_setDataSourceConfiguration:(HKWorkoutDataSourceConfiguration *)arg1;
- (void)remote_startTaskServerIfNeeded;

@end
