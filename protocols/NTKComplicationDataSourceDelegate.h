/* made by EzioChiu.
 */

@protocol NTKComplicationDataSourceDelegate <NSObject>

@required

- (void)appendEntries:(NSArray *)arg1;
- (void)invalidateEntries;
- (void)invalidateSwitcherTemplate;
- (double)minimumIntervalBetweenTimelineEntries;
- (void)setTimelineEndDate:(NSDate *)arg1;
- (void)setTimelineStartDate:(NSDate *)arg1;

@end
