/* made by EzioChiu.
 */

@protocol MTNotificationResponseDelegate <NSObject>

@required

- (MTAlarmStorage *)alarmStorage;
- (MTTimerStorage *)timerStorage;

@end
