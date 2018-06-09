/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIInviteesViewProposedTimeSection : NSObject <EKUIInviteesViewConflictResolutionSection> {
    EKInviteeAlternativeTimeSearcher * _availabilitySearcher;
    NSArray * _busyParticipants;
    NSString * _cachedCellReuseIdentifier;
    long long  _checkedRow;
    bool  _conflictFound;
    EKEvent * _event;
    id /* block */  _newTimeChosen;
    NSArray * _proposedTimeResults;
    NSMutableOrderedSet * _proposedTimes;
    unsigned long long  _reuseIdentifierVersion;
    NSMutableSet * _rowsShowingAllParticipants;
    id /* block */  _showPreviewOfEventAtTime;
    id /* block */  _tableViewCellHook;
    NSString * _title;
}

@property (nonatomic, retain) EKInviteeAlternativeTimeSearcher *availabilitySearcher;
@property (nonatomic, retain) NSArray *busyParticipants;
@property (nonatomic, retain) NSString *cachedCellReuseIdentifier;
@property (nonatomic) long long checkedRow;
@property (nonatomic) bool conflictFound;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ newTimeChosen;
@property (nonatomic, retain) NSArray *proposedTimeResults;
@property (nonatomic, retain) NSMutableOrderedSet *proposedTimes;
@property (nonatomic) unsigned long long reuseIdentifierVersion;
@property (nonatomic, retain) NSMutableSet *rowsShowingAllParticipants;
@property (nonatomic, copy) id /* block */ showPreviewOfEventAtTime;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ tableViewCellHook;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (bool)_isValidRow:(long long)arg1;
- (id)availabilitySearcher;
- (void)availabilitySearcherChangedState:(long long)arg1;
- (id)busyParticipants;
- (id)busyParticipantsForDate:(id)arg1;
- (id)cachedCellReuseIdentifier;
- (bool)canEditRow:(id)arg1;
- (bool)canSelectRow:(id)arg1;
- (void)cancelOutstandingOperations;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (long long)checkedRow;
- (void)clearCheckmark;
- (void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
- (bool)conflictFound;
- (id)debugTitle;
- (long long)editingStyleForRow:(id)arg1;
- (double)estimatedHeightForRow:(id)arg1;
- (id)event;
- (id)headerTitle;
- (id)init;
- (bool)injectNewRowsBeforeLastExistingRow;
- (bool)isRowChecked:(long long)arg1;
- (id)namesForParticipantsProposingDate:(id)arg1;
- (id /* block */)newTimeChosen;
- (unsigned long long)numberOfRows;
- (id)proposedTimeResults;
- (id)proposedTimes;
- (void)refreshCellsAfterStateChange;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (unsigned long long)reuseIdentifierVersion;
- (id)rowsShowingAllParticipants;
- (bool)sectionShouldBeShown;
- (void)selectRow:(id)arg1;
- (void)setAvailabilitySearcher:(id)arg1;
- (void)setBusyParticipants:(id)arg1;
- (void)setCachedCellReuseIdentifier:(id)arg1;
- (void)setChecked:(long long)arg1;
- (void)setCheckedRow:(long long)arg1;
- (void)setConflictFound:(bool)arg1;
- (void)setEvent:(id)arg1;
- (void)setNewTimeChosen:(id /* block */)arg1;
- (void)setProposedTimeResults:(id)arg1;
- (void)setProposedTimes:(id)arg1;
- (void)setReuseIdentifierVersion:(unsigned long long)arg1;
- (void)setRowsShowingAllParticipants:(id)arg1;
- (void)setShowPreviewOfEventAtTime:(id /* block */)arg1;
- (void)setTableViewCellHook:(id /* block */)arg1;
- (void)setTitle:(id)arg1;
- (id /* block */)showPreviewOfEventAtTime;
- (id /* block */)tableViewCellHook;
- (id)title;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;
- (void)updateWithEvent:(id)arg1;

@end
