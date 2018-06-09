/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAutocompleteResultsTableViewController : UITableViewController {
    bool  _cellAnimationsEnabled;
    UIColor * _cellBackgroundColor;
    bool  _deferTableViewUpdates;
    <MFAutocompleteResultsTableViewControllerDelegate> * _delegate;
    NSMutableArray * _searchResults;
    NSMutableArray * _serverSearchResults;
    bool  _shouldDimIrrelevantInformation;
    bool  _shouldHighlightCompleteMatches;
    NSMutableArray * _suggestedSearchResults;
    _MFAutocompleteResultsTableViewModel * _tableViewModel;
    bool  _tableViewNeedsReload;
}

@property (nonatomic, readonly) NSArray *allRecipients;
@property (getter=areCellAnimationsEnabled, nonatomic) bool cellAnimationsEnabled;
@property (nonatomic, retain) UIColor *cellBackgroundColor;
@property (nonatomic, readonly) NSArray *contactRecipients;
@property (getter=isDeferringTableViewUpdates, nonatomic) bool deferTableViewUpdates;
@property (nonatomic) <MFAutocompleteResultsTableViewControllerDelegate> *delegate;
@property (nonatomic, readonly) NSArray *directoryServerRecipients;
@property (nonatomic) bool shouldDimIrrelevantInformation;
@property (nonatomic) bool shouldHighlightCompleteMatches;
@property (nonatomic, readonly) NSArray *suggestedRecipients;

+ (id)cellBackgroundColorForInlineDisplay;
+ (id)cellBackgroundColorForPopoverDisplay;

- (id)_combinedResults;
- (id)_flattenedIndexPaths;
- (id)_indexPathForRecipient:(id)arg1;
- (id)_recipientAtIndexPath:(id)arg1;
- (void)_selectSearchResultsRecipientAtIndexPath:(id)arg1;
- (double)_tableViewHeaderHeight;
- (void)_updateTableViewModelAnimated:(bool)arg1;
- (id)allRecipients;
- (bool)areCellAnimationsEnabled;
- (id)cellBackgroundColor;
- (void)clear;
- (bool)confirmSelectedRecipient;
- (id)contactRecipients;
- (bool)containsRecipient:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)directoryServerRecipients;
- (id)initWithStyle:(long long)arg1;
- (void)invalidateSearchResultRecipient:(id)arg1;
- (bool)isDeferringTableViewUpdates;
- (void)loadView;
- (unsigned long long)numberOfResults;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentSearchResults:(id)arg1;
- (Class)recipientTableViewCellClass;
- (void)resetScrollPosition;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (void)setCellAnimationsEnabled:(bool)arg1;
- (void)setCellBackgroundColor:(id)arg1;
- (void)setDeferTableViewUpdates:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldDimIrrelevantInformation:(bool)arg1;
- (void)setShouldHighlightCompleteMatches:(bool)arg1;
- (bool)shouldDimIrrelevantInformation;
- (bool)shouldHighlightCompleteMatches;
- (id)suggestedRecipients;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
