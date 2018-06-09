/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetListEditViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    double  _contentMinY;
    <WGWidgetListEditViewControllerDataSource> * _dataSource;
    <WGWidgetListEditViewControllerDelegate> * _delegate;
    NSMutableArray * _disabledItemIDs;
    bool  _dismissingDueToInterfaceAction;
    NSMutableArray * _enabledTodayItemIDs;
    NSMutableArray * _enabledWidgetItemIDs;
    NSArray * _groupIDs;
    UINavigationController * _navigationController;
    id  _statusBarColorAssertion;
    UITableViewController * _tableViewController;
}

@property (nonatomic) <WGWidgetListEditViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WGWidgetListEditViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_isDismissingDueToInterfaceAction, setter=_setDismissingDueToInterfaceAction:, nonatomic) bool dismissingDueToInterfaceAction;
@property (readonly) unsigned long long hash;
@property (getter=_statusBarColorAssertion, setter=_setStatusBarColorAssertion:, nonatomic, retain) id statusBarColorAssertion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acknowledgeItemsAndResetNewWidgetsCount;
- (void)_acknowledgeItemsSavingItemState:(bool)arg1;
- (void)_cancelWidgetListEditView;
- (long long)_compareItemWithIdentifier:(id)arg1 andItemWithIdentifierConsideringIsNew:(id)arg2;
- (void)_disableItemAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)_dismissDueToInterfaceActionAndAcknowledgeItemsSavingItemState:(bool)arg1;
- (void)_dismissWidgetListEditView;
- (void)_enableItemAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (id)_enabledItemIdentifiersForGroupID:(id)arg1;
- (id)_groupKeyForSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)_indexForInsertingItemWithIdentifier:(id)arg1 intoArray:(id)arg2;
- (long long)_indexOfFirstEnabledWidgetInSection:(unsigned long long)arg1;
- (long long)_indexOfLastEnabledWidgetInSection:(unsigned long long)arg1;
- (id)_indexPathForItemWithIdentifier:(id)arg1;
- (bool)_isDismissingDueToInterfaceAction;
- (bool)_isNewItem:(id)arg1;
- (id)_itemIdentifierForIndexPath:(id)arg1;
- (id)_itemIdentifiersInSection:(unsigned long long)arg1;
- (long long)_layoutMode;
- (void)_loadItems;
- (void)_saveItemArrangement;
- (void)_saveItemState;
- (unsigned long long)_sectionIndexForGroupKey:(id)arg1;
- (void)_setDismissingDueToInterfaceAction:(bool)arg1;
- (void)_setStatusBarColorAssertion:(id)arg1;
- (id)_statusBarColorAssertion;
- (id)_widgetListEditViewTableHeaderView;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
