/* made by EzioChiu.
 */

@protocol EKDayViewDataSource <NSObject>

@required

- (CalendarOccurrencesCollection *)dayView:(EKDayView *)arg1 eventsForStartDate:(EKCalendarDate *)arg2 endDate:(EKCalendarDate *)arg3;

@end
