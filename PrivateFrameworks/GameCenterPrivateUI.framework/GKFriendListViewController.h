/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKFriendListViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDataSource, UITableViewDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    <GKFriendListViewControllerDelegate> * _delegate;
    NSMutableArray * _friendPlayers;
    GKNoContentView * _noContentView;
    UISearchController * _searchController;
    NSArray * _searchPlayers;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GKFriendListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *friendPlayers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GKNoContentView *noContentView;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) NSArray *searchPlayers;
@property (readonly) Class superclass;

- (id)activityIndicator;
- (void)dealloc;
- (id)delegate;
- (id)friendPlayers;
- (void)hideNoContentPlaceholder;
- (void)loadData;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (id)noContentView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeAllFriendsButtonPressed;
- (id)searchController;
- (id)searchPlayers;
- (void)setActivityIndicator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFriendPlayers:(id)arg1;
- (void)setNoContentView:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchPlayers:(id)arg1;
- (void)setupNavBarItems;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)setupSearchController;
- (void)showLoadingIndicator;
- (void)showNoContentPlaceholderForError:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateTitlesWith:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
