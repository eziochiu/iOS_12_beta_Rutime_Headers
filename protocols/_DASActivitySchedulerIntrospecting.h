/* made by EzioChiu.
 */

@protocol _DASActivitySchedulerIntrospecting <NSObject>

@required

- (NSDictionary *)activityRunStatistics;
- (NSDictionary *)currentPredictions;
- (void)forceRunActivities:(NSArray *)arg1;
- (NSArray *)runningActivities;
- (NSArray *)runningGroupActivities;
- (NSArray *)scoresForActivityWithName:(NSString *)arg1;
- (NSArray *)submittedActivities;

@end
