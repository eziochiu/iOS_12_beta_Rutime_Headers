/* made by EzioChiu.
 */

@protocol HUAlarmEditViewControllerDelegate <NSObject>

@required

- (void)alarmEditController:(HUAlarmEditViewController *)arg1 didAddAlarm:(MTAlarm *)arg2;
- (void)alarmEditController:(HUAlarmEditViewController *)arg1 didDeleteAlarm:(MTAlarm *)arg2;
- (void)alarmEditController:(HUAlarmEditViewController *)arg1 didEditAlarm:(MTAlarm *)arg2;
- (void)alarmEditControllerDidCancel:(HUAlarmEditViewController *)arg1;

@end
