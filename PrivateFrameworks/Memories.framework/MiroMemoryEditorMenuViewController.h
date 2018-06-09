/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMemoryEditorMenuViewController : MiroMemoryEditorBasePlayerViewController <MiroMemoryEditorAutoEditCompletionActionDelegate, UITableViewDataSource, UITableViewDelegate> {
    MiroMemory * _memory;
    <MiroMemoryEditorMenuViewControllerDelegate> * _menuDelegate;
    NSIndexPath * _selectedIndexPath;
    bool  _showingActivityIndicatorForContentEditor;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MiroMemory *memory;
@property (nonatomic) <MiroMemoryEditorMenuViewControllerDelegate> *menuDelegate;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (nonatomic) bool showingActivityIndicatorForContentEditor;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (id)_getTimeStringFromSeconds:(double)arg1;
- (id)_normalizedIndexPathForRow:(long long)arg1 inSection:(long long)arg2;
- (void)_updateFonts;
- (void)cancelAutoEditWaitingBehavior;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)memory;
- (id)menuDelegate;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)performAutoEditDidCompleteAction;
- (void)popFromNavigationController;
- (id)selectedIndexPath;
- (void)setMemory:(id)arg1;
- (void)setMenuDelegate:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setShowingActivityIndicatorForContentEditor:(bool)arg1;
- (void)setTableView:(id)arg1;
- (bool)showingActivityIndicatorForContentEditor;
- (void)startAutoEditWaitingBehavior;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
