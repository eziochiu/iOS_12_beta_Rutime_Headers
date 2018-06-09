/* made by EzioChiu.
 */

@protocol DNDSScheduleManagerDataSource <NSObject>

@required

- (NSDate *)lastModeAssertionsCompleteInvalidationDateForScheduleManager:(DNDSScheduleManager *)arg1;
- (NSDate *)lastScheduleSettingsChangedDateForScheduleManager:(DNDSScheduleManager *)arg1;
- (NSString *)scheduleAssertionModeIdentifierForScheduleManager:(DNDSScheduleManager *)arg1;

@end
