/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTNextAlarmManager : NSObject {
    MTAlarmManager * _alarmManager;
    NSSet * _nextAlarms;
    id /* block */  _updateHandler;
}

@property (nonatomic, retain) MTAlarmManager *alarmManager;
@property (nonatomic, retain) NSSet *nextAlarms;
@property (nonatomic, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (void)_handleAlarmsDidChange;
- (id)alarmManager;
- (void)calculateNextAlarms;
- (id)init;
- (id)nextAlarms;
- (void)setAlarmManager:(id)arg1;
- (void)setNextAlarms:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end
