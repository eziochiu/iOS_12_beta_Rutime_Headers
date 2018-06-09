/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAppSearchResultsTableViewController : UITableViewController <UISearchResultsUpdating> {
    NSArray * _allPlugins;
    <CKBrowserAppManagerViewControllerDelegate> * _delegate;
    NSArray * _searchResults;
}

@property (nonatomic, retain) NSArray *allPlugins;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKBrowserAppManagerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *searchResults;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allPlugins;
- (id)delegate;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)searchEnded;
- (id)searchResults;
- (void)setAllPlugins:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;

@end
