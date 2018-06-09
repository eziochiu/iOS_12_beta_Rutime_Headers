/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversationSearchResultsController : UITableViewController <UISearchResultsUpdating> {
    CKSpotlightQuery * _currentQuery;
    <CKConversationResultsControllerDelegate> * _delegate;
    NSArray * _searchResults;
    NSString * _selectedChatGUID;
}

@property (nonatomic, retain) CKSpotlightQuery *currentQuery;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKConversationResultsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *searchResults;
@property (nonatomic, retain) NSString *selectedChatGUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (Class)_conversationListCellClass;
- (void)_selectChatGUID:(id)arg1;
- (void)_updateTableViewRowHeights;
- (void)cancelCurrentQuery;
- (id)currentQuery;
- (void)dealloc;
- (id)delegate;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)searchEnded;
- (id)searchResults;
- (id)selectedChatGUID;
- (void)setCurrentQuery:(id)arg1;
- (void)setCurrentSearchResultSelected:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (void)setSelectedChatGUID:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;

@end
