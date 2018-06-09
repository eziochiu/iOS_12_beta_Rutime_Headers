/* made by EzioChiu.
 */

@protocol EKCalendarEditItemDelegate <NSObject>

@required

- (void)calendarItemStartedEditing:(EKCalendarEditItem *)arg1;
- (bool)isNewCalendar;
- (UINavigationController *)owningNavigationController;
- (int)sectionForCalendarEditItem:(EKCalendarEditItem *)arg1;
- (UITableView *)tableView;

@end
