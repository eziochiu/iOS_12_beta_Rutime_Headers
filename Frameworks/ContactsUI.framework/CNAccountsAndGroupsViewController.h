/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAccountsAndGroupsViewController : UITableViewController <UITableViewDelegate> {
    CNAccountsAndGroupsDataSource * _dataSource;
    <CNAccountsAndGroupsViewControllerDelegate> * _delegate;
    bool  _needsReload;
    bool  _tableViewNeedsReloadAfterResume;
}

@property (nonatomic, retain) CNAccountsAndGroupsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNAccountsAndGroupsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applicationDidResume;
- (void)contactStoreDidChangeWithNotification:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)done:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
