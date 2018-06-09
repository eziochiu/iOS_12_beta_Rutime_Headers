/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKEditGroupViewController : PKEditTableViewController <PKEditPassesDetailsResponder, PKGroupDelegate, UIViewControllerPreviewingDelegate> {
    <PKEditGroupViewControllerDelegate> * _delegate;
    UIBarButtonItem * _deleteToolbarItem;
    UIBarButtonItem * _flexibleSpace;
    PKGroup * _group;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSizeNeeded;
    <UIViewControllerPreviewing> * _previewingContext;
    <PKGroupDelegate> * _savedDelegate;
    UITableView * _tableView;
    PKPass * _viewingPass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deleteAllPassesInGroup;
- (void)_deleteButtonPressed;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 withPass:(id)arg3;
- (void)dealloc;
- (id)group;
- (void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)initWithGroup:(id)arg1 existingGroupsController:(id)arg2 delegate:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pass;
- (id)passAtIndexPath:(id)arg1;
- (bool)passExistsWithUniqueIdentifier:(id)arg1;
- (void)prefetchItemsAtIndexPaths:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
