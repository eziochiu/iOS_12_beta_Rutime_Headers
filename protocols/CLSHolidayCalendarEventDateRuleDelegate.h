/* made by EzioChiu.
 */

@protocol CLSHolidayCalendarEventDateRuleDelegate <NSObject>

@required

- (NSDate *)dateForRuleWithUUID:(NSString *)arg1 byEvaluatingForYear:(long long)arg2;

@end
