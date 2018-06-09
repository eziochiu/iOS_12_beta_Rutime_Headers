/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface CalendarEventAlarmTable : UITableView <UITableViewDataSource, UITableViewDelegate> {
    long long  _alarmIdentifier;
    <CalendarEventAlarmTableDelegate> * _alarmTableDelegate;
    bool  _customSelected;
    NSString * _customString;
    bool  _eventHasTravelTime;
    bool  _immediateAlarmCreation;
    bool  _leaveNowAlarmSelected;
    NSIndexPath * _selectedItem;
    bool  _shouldAllowAlarmsTriggeringAfterStartDate;
    bool  _shouldShowLeaveNowOption;
    <EKStyleProvider> * _styleProvider;
    bool  _useAllDayAlarms;
}

@property (nonatomic) <CalendarEventAlarmTableDelegate> *alarmTableDelegate;
@property (nonatomic) bool customSelected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool eventHasTravelTime;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool leaveNowAlarmSelected;
@property (nonatomic) bool shouldAllowAlarmsTriggeringAfterStartDate;
@property (nonatomic) bool shouldShowLeaveNowOption;
@property (nonatomic, retain) <EKStyleProvider> *styleProvider;
@property (readonly) Class superclass;
@property (nonatomic) bool useAllDayAlarms;

- (void).cxx_destruct;
- (id)_indexPathForPresetIdentifier:(long long)arg1;
- (long long)_presetIdentifierForRow:(long long)arg1;
- (void)_selectIndexPath:(id)arg1;
- (id)alarmTableDelegate;
- (unsigned long long)countOfPresets;
- (bool)customSelected;
- (bool)eventHasTravelTime;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)intervalForPresetIdentifier:(long long)arg1;
- (bool)leaveNowAlarmSelected;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)presetIdentifier;
- (long long)presetIdentifierAtIndex:(unsigned long long)arg1;
- (void)setAlarmTableDelegate:(id)arg1;
- (void)setCustomSelected:(bool)arg1;
- (void)setCustomString:(id)arg1;
- (void)setEventHasTravelTime:(bool)arg1;
- (void)setLeaveNowAlarmSelected:(bool)arg1;
- (void)setPresetIdentifier:(long long)arg1;
- (void)setShouldAllowAlarmsTriggeringAfterStartDate:(bool)arg1;
- (void)setShouldShowLeaveNowOption:(bool)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setUseAllDayAlarms:(bool)arg1;
- (bool)shouldAllowAlarmsTriggeringAfterStartDate;
- (bool)shouldShowLeaveNowOption;
- (id)styleProvider;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (bool)useAllDayAlarms;

@end
