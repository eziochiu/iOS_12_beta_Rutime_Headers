/* made by EzioChiu.
 */

@protocol HKWorkoutBuilderClientInterface <NSObject>

@required

- (void)clientRemote_didChangeElapsedTimeBasisWithStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2;
- (void)clientRemote_didRecoverSeriesBuilders:(NSDictionary *)arg1;
- (void)clientRemote_didUpdateEvents:(NSArray *)arg1;
- (void)clientRemote_didUpdateMetadata:(NSDictionary *)arg1;
- (void)clientRemote_didUpdateStatistics:(NSDictionary *)arg1;

@end
