/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchResultsController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    <PSSearchResultsControllerDelegate> * _delegate;
    NSMutableDictionary * _iconViewMap;
    NSMutableArray * _reusableIconViews;
    PSSearchResults * _searchResults;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSSearchResultsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PSSearchResults *searchResults;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_removeIconViewForSection:(id)arg1;
- (void)_updateIconViews:(bool)arg1;
- (id)delegate;
- (id)init;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (id)searchResults;
- (void)setDelegate:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)viewWillLayoutSubviews;

@end
