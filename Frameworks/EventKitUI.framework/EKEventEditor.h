/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventEditor : EKCalendarItemEditor <EKEventAutocompleteResultsEditItemDelegate> {
    EKCalendarItemAlarmEditItem * _alarmEditItem;
    EKEventAttendeesEditItem * _attendeesEditItem;
    EKEventAutocompleteResultsEditItem * _autocompleteEditItem;
    EKUIAutocompletePETTracker * _autocompletePETTracker;
    bool  _autocompleteResultsVisible;
    NSString * _autocompleteSearchString;
    NSTimer * _autocompleteTimer;
    UIColor * _backgroundColor;
    EKCalendarItemCalendarEditItem * _calendarEditItem;
    EKEventDateEditItem * _dateItem;
    unsigned long long  _focusOnAppearanceTarget;
    bool  _hasShownNaturalLanguageResult;
    bool  _hasShownZeroKeywordResult;
    bool  _isTransitioning;
    EKCalendarItemLocationInlineEditItem * _locationInlineEditItem;
    EKUIAutocompleteSearchResult * _naturalLanguageResult;
    EKEventURLAndNotesInlineEditItem * _notesEditItem;
    <EKUIAutocompletePendingSearchProtocol> * _pendingSearch;
    EKUIAutocompleteSearchResult * _selectedAutocompleteResult;
    unsigned long long  _selectedAutocompleteResultIndex;
    bool  _shouldAutocomplete;
    bool  _showAttachments;
    NSString * _suggestionKey;
    EKCalendarItemTitleInlineEditItem * _titleInlineEditItem;
    EKUIAutocompleteSearchResult * _zeroKeywordResult;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showAttachments;
@property (nonatomic, retain) NSString *suggestionKey;
@property (readonly) Class superclass;

+ (Class)_SGSuggestionsServiceClass;
+ (void)_applyTimeToAutocompleteResults:(id)arg1 usingCurrentStartDate:(id)arg2 currentEndDate:(id)arg3 timeImplicitlySet:(bool)arg4;
+ (id)_copyAlarmsForAutocompleteFromResult:(id)arg1;
+ (id)_copyAttendeesForAutocompleteFromResult:(id)arg1;
+ (void)_modifyCurrentEvent:(id)arg1 withAutocompleteResult:(id)arg2;
+ (id)_now;
+ (id)defaultTitleForCalendarItem;

- (void).cxx_destruct;
- (void)_beginAutocompleteSearch:(id)arg1;
- (id)_calendarItemIndexSet;
- (void)_cancelPendingAutocompleteAndCleanup;
- (void)_copyEventForPossibleRevert;
- (id)_editItems;
- (void)_hideAndCancelAutocompleteResults;
- (id)_nameForDeleteButton;
- (id)_orderedEditItems;
- (void)_revertEvent;
- (void)_scheduleAutocompleteSearchWithString:(id)arg1;
- (void)_scheduleAutocompleteTimerIfNeeded;
- (void)_setAutocompleteResultsVisible:(bool)arg1;
- (void)_setEventTitleForTestingAutocomplete:(id)arg1;
- (void)_showAutocompleteResults;
- (void)_updateTitleEditItemSeparatorVisibility;
- (id)_viewForSheet;
- (void)autocompleteResultsEditItem:(id)arg1 resultSelected:(id)arg2;
- (void)autocompleteResultsEditItemDidHideResults:(id)arg1;
- (void)autocompleteResultsEditItemDidShowResults:(id)arg1;
- (id)backgroundColor;
- (id)defaultAlertTitle;
- (void)editItemDidStartEditing:(id)arg1;
- (void)editItemTextChanged:(id)arg1;
- (unsigned long long)entityType;
- (id)event;
- (void)focusAndSelect:(unsigned long long)arg1;
- (void)loadView;
- (id)notificationNamesForLocaleChange;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)preferredTitle;
- (void)prepareEditItems;
- (void)refreshInvitees;
- (void)refreshLocation;
- (void)refreshStartAndEndDates;
- (bool)saveCalendarItemWithSpan:(long long)arg1 error:(id*)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setShowAttachments:(bool)arg1;
- (void)setSuggestionKey:(id)arg1;
- (void)setupDeleteButton;
- (bool)shouldAutorotate;
- (bool)showAttachments;
- (id)suggestionKey;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
