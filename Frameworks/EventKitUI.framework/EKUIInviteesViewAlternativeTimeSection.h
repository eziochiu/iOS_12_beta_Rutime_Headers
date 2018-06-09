/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIInviteesViewAlternativeTimeSection : NSObject <EKUIInviteesViewConflictResolutionSection> {
    NSArray * _alternativeTimes;
    bool  _availabilityRequestInProgress;
    EKInviteeAlternativeTimeSearcher * _availabilitySearcher;
    NSString * _cachedConflictSearchCellReuseIdentifier;
    NSString * _cachedTimeCellReuseIdentifier;
    bool  _hasCheckedRow;
    bool  _initialSearchInProgress;
    long long  _lastCheckedRow;
    unsigned long long  _maximumNumberOfTimeSlotsToShow;
    id /* block */  _newTimeChosen;
    unsigned long long  _reuseIdentifierVersion;
    NSMutableSet * _rowsShowingAllParticipants;
    bool  _searchExhausted;
    id /* block */  _showMoreAlternativeTimesTapped;
    id /* block */  _showPreviewOfEventAtTime;
    id /* block */  _tableViewCellHook;
    NSTimeZone * _timeZone;
}

@property (nonatomic, retain) NSArray *alternativeTimes;
@property (nonatomic) bool availabilityRequestInProgress;
@property (nonatomic, retain) EKInviteeAlternativeTimeSearcher *availabilitySearcher;
@property (nonatomic, retain) NSString *cachedConflictSearchCellReuseIdentifier;
@property (nonatomic, retain) NSString *cachedTimeCellReuseIdentifier;
@property (nonatomic, readonly) Class customTimeCellClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCheckedRow;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long initialNumberOfTimeSlotsToShow;
@property (nonatomic) bool initialSearchInProgress;
@property (nonatomic) long long lastCheckedRow;
@property (nonatomic) unsigned long long maximumNumberOfTimeSlotsToShow;
@property (nonatomic, copy) id /* block */ newTimeChosen;
@property (nonatomic) unsigned long long reuseIdentifierVersion;
@property (nonatomic, retain) NSMutableSet *rowsShowingAllParticipants;
@property (nonatomic) bool searchExhausted;
@property (nonatomic, readonly) NSArray *searcherTimeSlots;
@property (nonatomic, readonly) bool searchingForMoreTimes;
@property (nonatomic, copy) id /* block */ showMoreAlternativeTimesTapped;
@property (nonatomic, copy) id /* block */ showPreviewOfEventAtTime;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ tableViewCellHook;
@property (nonatomic, retain) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)_alternativeTimeAtIndex:(long long)arg1;
- (bool)_isConflictSearchRow:(long long)arg1;
- (bool)_isValidRow:(long long)arg1;
- (unsigned long long)_numberOfTimeSlotsShown;
- (id)alternativeTimes;
- (bool)availabilityRequestInProgress;
- (id)availabilitySearcher;
- (void)availabilitySearcherChangedState:(long long)arg1;
- (id)cachedConflictSearchCellReuseIdentifier;
- (id)cachedTimeCellReuseIdentifier;
- (bool)canEditRow:(id)arg1;
- (bool)canSelectRow:(id)arg1;
- (void)cancelOutstandingOperations;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)clearCheckmark;
- (void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
- (Class)customTimeCellClass;
- (id)debugTitle;
- (long long)editingStyleForRow:(id)arg1;
- (double)estimatedHeightForRow:(id)arg1;
- (bool)hasCheckedRow;
- (id)headerTitle;
- (id)init;
- (unsigned long long)initialNumberOfTimeSlotsToShow;
- (bool)initialSearchInProgress;
- (bool)injectNewRowsBeforeLastExistingRow;
- (long long)lastCheckedRow;
- (unsigned long long)maximumNumberOfTimeSlotsToShow;
- (id /* block */)newTimeChosen;
- (unsigned long long)numberOfRows;
- (void)refreshCellsAfterStateChange;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (unsigned long long)reuseIdentifierVersion;
- (id)rowsShowingAllParticipants;
- (bool)searchExhausted;
- (void)searchForMoreTimes;
- (id)searcherTimeSlots;
- (bool)searchingForMoreTimes;
- (bool)sectionShouldBeShown;
- (void)selectRow:(id)arg1;
- (void)setAlternativeTimes:(id)arg1;
- (void)setAvailabilityRequestInProgress:(bool)arg1;
- (void)setAvailabilitySearcher:(id)arg1;
- (void)setCachedConflictSearchCellReuseIdentifier:(id)arg1;
- (void)setCachedTimeCellReuseIdentifier:(id)arg1;
- (void)setHasCheckedRow:(bool)arg1;
- (void)setInitialSearchInProgress:(bool)arg1;
- (void)setLastCheckedRow:(long long)arg1;
- (void)setMaximumNumberOfTimeSlotsToShow:(unsigned long long)arg1;
- (void)setNewTimeChosen:(id /* block */)arg1;
- (void)setReuseIdentifierVersion:(unsigned long long)arg1;
- (void)setRowsShowingAllParticipants:(id)arg1;
- (void)setSearchExhausted:(bool)arg1;
- (void)setShowMoreAlternativeTimesTapped:(id /* block */)arg1;
- (void)setShowPreviewOfEventAtTime:(id /* block */)arg1;
- (void)setTableViewCellHook:(id /* block */)arg1;
- (void)setTimeZone:(id)arg1;
- (id /* block */)showMoreAlternativeTimesTapped;
- (id /* block */)showPreviewOfEventAtTime;
- (id /* block */)tableViewCellHook;
- (id)timeZone;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;

@end
