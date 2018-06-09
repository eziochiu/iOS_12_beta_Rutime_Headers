/* made by EzioChiu.
 */

@protocol MTAlarmClient <NSObject>

@required

- (void)alarmDismissed:(MTAlarm *)arg1;
- (void)alarmFired:(MTAlarm *)arg1;
- (void)alarmSnoozed:(MTAlarm *)arg1;
- (void)alarmsAdded:(NSArray *)arg1;
- (void)alarmsRemoved:(NSArray *)arg1;
- (void)alarmsUpdated:(NSArray *)arg1;
- (void)nextAlarmChanged:(MTAlarm *)arg1;

@end
