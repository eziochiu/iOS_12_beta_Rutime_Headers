/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKAlarmsViewModel : NSObject {
    EKCalendarItem * _calendarItem;
    bool  _canHaveLeaveNowAlarm;
    bool  _hasLeaveNowAlarm;
    bool  _needsUpdate;
    NSMutableArray * _uiAlarms;
}

@property (nonatomic, retain) EKCalendarItem *calendarItem;
@property (nonatomic, readonly) bool canHaveLeaveNowAlarm;
@property (nonatomic, readonly) bool hasLeaveNowAlarm;
@property (nonatomic) bool needsUpdate;
@property (nonatomic, retain) NSMutableArray *uiAlarms;

+ (id)labelTextForIndex:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_hasUIAlarmChangedFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2;
- (void)_updateAlarms;
- (void)_updateLeaveNowFlags;
- (id)calendarItem;
- (bool)canHaveLeaveNowAlarm;
- (id)createAlarmEditItemViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forAlarmAtIndex:(unsigned long long)arg2;
- (bool)hasLeaveNowAlarm;
- (id)init;
- (id)initWithCalendarItem:(id)arg1;
- (bool)needsUpdate;
- (void)setCalendarItem:(id)arg1;
- (void)setNeedsUpdate;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setUiAlarms:(id)arg1;
- (id)uiAlarms;
- (void)updateIfNeeded;
- (void)updatedUIAlarmFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2 atIndex:(unsigned long long)arg3 completion:(id /* block */)arg4;

@end
