/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarItemAlarmEditItem : EKCalendarItemEditItem {
    CalendarEventAlarmTable * _alarmTable;
    NSArray * _alarms;
    EKAlarmsViewModel * _alarmsViewModel;
    bool  _canHaveLeaveNowAlarm;
    unsigned long long  _disclosedSubitem;
    bool  _hasLeaveNowAlarm;
    int  _lastSeenAllDayState;
    bool  _userChangedAlarm;
}

@property (nonatomic, retain) EKAlarmsViewModel *alarmsViewModel;

- (void).cxx_destruct;
- (bool)_alarmsMatchCalendarItem;
- (bool)_calendarItemHasLeaveNowAlarm;
- (void)_updateAlarms;
- (void)_updateDefaultAlarm;
- (id)alarmsViewModel;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureForCalendarConstraints:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (bool)editItemViewControllerSave:(id)arg1;
- (id)init;
- (unsigned long long)numberOfSubitems;
- (void)refreshFromCalendarItemAndStore;
- (bool)saveAndDismissWithForce:(bool)arg1;
- (void)setAlarmsViewModel:(id)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (void)updateInternalTravelTimeStateForCalendarItem:(id)arg1;

@end
