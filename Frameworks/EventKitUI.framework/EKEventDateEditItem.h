/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDateEditItem : EKEventEditItem <EKCellShortener, EKTimeZoneViewControllerDelegate> {
    bool  _allDay;
    UITableViewCell * _allDayCell;
    bool  _changingDate;
    NSDateComponents * _endComponents;
    PreferencesTwoPartValueCell * _endDateCell;
    UIDatePicker * _endDatePicker;
    UITableViewCell * _endDatePickerCell;
    bool  _endTimeWasMessedUp;
    NSTimeZone * _endTimeZone;
    UITableViewCell * _endTimeZoneCell;
    <EKEventDateEditItemDelegate> * _eventDateEditItemDelegate;
    NSDate * _pendingProposedTime;
    bool  _proposedTime;
    bool  _pushingTZController;
    long long  _selectedSubitem;
    int  _shorteningStatus;
    bool  _showTimeZones;
    bool  _showsAllDay;
    NSDateComponents * _startComponents;
    PreferencesTwoPartValueCell * _startDateCell;
    UIDatePicker * _startDatePicker;
    UITableViewCell * _startDatePickerCell;
    NSTimeZone * _startTimeZone;
    UITableViewCell * _startTimeZoneCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <EKEventDateEditItemDelegate> *eventDateEditItemDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *pendingProposedTime;
@property (nonatomic) bool proposedTime;
@property (nonatomic) bool showsAllDay;
@property (readonly) Class superclass;

+ (id)_timeZoneLocalizedString;

- (void).cxx_destruct;
- (void)_adjustDatePickerFrame:(id)arg1 toFillEnclosingViewWidth:(id)arg2;
- (void)_adjustStartAndEndComponentsForEventIfNeeded:(id)arg1;
- (id)_allDayCell;
- (void)_allDayChanged:(id)arg1;
- (id)_calendarForEventComponents:(bool)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_dateComponentsInSystemCalendarFromDate:(id)arg1;
- (id)_dateFromComponents:(id)arg1 timeZone:(id)arg2;
- (id)_dateInSystemCalendarFromComponents:(id)arg1;
- (void)_datePickerChanged:(id)arg1;
- (void)_datePickerDoubleTapped:(id)arg1;
- (id)_endDateCell;
- (bool)_endDateIsBeforeStartDate;
- (id)_endDatePickerCell;
- (id)_endTimeZoneCell;
- (void)_hideInlineDateControls;
- (id)_newDatePicker;
- (void)_pickNextReasonableTime;
- (void)_refreshDatePicker;
- (void)_resetStartString:(bool)arg1 endString:(bool)arg2;
- (long long)_rowForSubitem:(long long)arg1;
- (void)_setAllDay:(bool)arg1;
- (void)_setEndDate:(id)arg1;
- (void)_setEndTimeZone:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (void)_setStartTimeZone:(id)arg1;
- (bool)_shouldShowTimeZone;
- (id)_startDateCell;
- (id)_startDatePickerCell;
- (id)_startTimeZoneCell;
- (long long)_subitemForRow:(long long)arg1;
- (id)_timeZoneDescription:(id)arg1;
- (void)_updateDateColors;
- (void)_updateDatePickerAnimated:(bool)arg1;
- (void)_updateTimeWidths;
- (void)_validateTimezones;
- (bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureForCalendarConstraints:(id)arg1;
- (void)dealloc;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)description;
- (bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (void)editor:(id)arg1 didStartEditingItem:(id)arg2;
- (void)endInlineEditing;
- (id)eventDateEditItemDelegate;
- (bool)forceRefreshInviteesItemOnSave;
- (bool)forceRefreshLocationItemOnSave;
- (id)init;
- (bool)isInline;
- (unsigned long long)numberOfSubitems;
- (id)pendingProposedTime;
- (bool)proposedTime;
- (void)refreshFromCalendarItemAndStore;
- (bool)requiresReconfigurationOnSave;
- (bool)saveAndDismissWithForce:(bool)arg1;
- (void)setEventDateEditItemDelegate:(id)arg1;
- (void)setPendingProposedTime:(id)arg1;
- (void)setProposedTime:(bool)arg1;
- (void)setShowsAllDay:(bool)arg1;
- (void)shortenCell:(id)arg1;
- (bool)showsAllDay;
- (void)timeZoneViewController:(id)arg1 didSelectTimeZone:(id)arg2;
- (void)timeZoneViewControllerDidCancel:(id)arg1;
- (bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;

@end
