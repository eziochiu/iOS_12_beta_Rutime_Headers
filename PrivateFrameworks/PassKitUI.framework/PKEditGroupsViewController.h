/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKEditGroupsViewController : PKEditTableViewController <PKEditGroupViewControllerDelegate, PKEditTableViewControllerCachingDelegate, PKGroupDelegate, PKGroupsControllerDelegate, UIViewControllerPreviewingDelegate> {
    NSMutableArray * _actions;
    PKGroup * _deletingGroup;
    bool  _editingMode;
    PKGroupsController * _groupsController;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSizeNeeded;
    <UIViewControllerPreviewing> * _previewingContext;
    UITableView * _tableView;
    PKGroup * _viewingGroup;
    PKPass * _viewingPass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_showNoPassesViewIfNoGroupsToShow;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 withGroup:(id)arg3;
- (void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)groupAtIndexPath:(id)arg1;
- (void)groupViewController:(id)arg1 isDeletingGroup:(id)arg2;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didUpdateGroup:(id)arg2;
- (id)indexPathForGroup:(id)arg1;
- (id)initInEditingMode:(bool)arg1 existingGroupsController:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)passAtIndexPath:(id)arg1;
- (bool)passExistsWithUniqueIdentifier:(id)arg1;
- (void)prefetchItemsAtIndexPaths:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
