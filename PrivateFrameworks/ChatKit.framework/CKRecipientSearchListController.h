/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKRecipientSearchListController : MFAutocompleteResultsTableViewController <CKContactsSearchManagerDelegate, IDSBatchIDQueryControllerDelegate> {
    NSArray * _conversationCache;
    IMAccount * _defaultiMessageAccount;
    NSArray * _enteredRecipients;
    NSDate * _idsQueryStartTime;
    NSArray * _prefilteredRecipients;
    CKContactsSearchManager * _searchManager;
    NSArray * _searchResults;
    bool  _smsEnabled;
    IDSBatchIDQueryController * _statusQueryController;
}

@property (nonatomic, copy) NSArray *conversationCache;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) IMAccount *defaultiMessageAccount;
@property (nonatomic) <CKRecipientSearchListControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *enteredRecipients;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *idsQueryStartTime;
@property (nonatomic, retain) NSArray *prefilteredRecipients;
@property (nonatomic, retain) CKContactsSearchManager *searchManager;
@property (nonatomic, copy) NSArray *searchResults;
@property (nonatomic) bool smsEnabled;
@property (nonatomic, retain) IDSBatchIDQueryController *statusQueryController;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressGroupSuggestions;

- (void).cxx_destruct;
- (BOOL)_serviceColorForRecipients:(id)arg1;
- (id)_statusQueryController;
- (void)cancelSearch;
- (void)chatStateChanged:(id)arg1;
- (void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2;
- (id)conversationCache;
- (id)conversationCacheForCcontactsSearchManager:(id)arg1;
- (void)dealloc;
- (id)defaultiMessageAccount;
- (void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)enteredRecipients;
- (bool)hasSearchResults;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (id)idsQueryStartTime;
- (id)initWithStyle:(long long)arg1;
- (void)invalidateOutstandingIDStatusRequests;
- (void)invalidateSearchManager;
- (bool)isSearchResultsHidden;
- (void)loadView;
- (id)prefilteredRecipients;
- (Class)recipientTableViewCellClass;
- (void)removeRecipient:(id)arg1;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)searchManager;
- (id)searchResults;
- (void)searchWithText:(id)arg1;
- (void)setConversationCache:(id)arg1;
- (void)setDefaultiMessageAccount:(id)arg1;
- (void)setEnteredRecipients:(id)arg1;
- (void)setIdsQueryStartTime:(id)arg1;
- (void)setPrefilteredRecipients:(id)arg1;
- (void)setSearchManager:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (void)setSmsEnabled:(bool)arg1;
- (void)setStatusQueryController:(id)arg1;
- (void)setSuppressGroupSuggestions:(bool)arg1;
- (bool)smsEnabled;
- (id)statusQueryController;
- (bool)suppressGroupSuggestions;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewWillAppear:(bool)arg1;

@end
