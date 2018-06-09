/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMemoryEditorTitleViewController : MiroMemoryEditorBasePlayerViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    long long  _activeCellIndex;
    NSString * _activeCellText;
    UITableViewCell * _collectionViewControllerCell;
    MiroMemory * _memory;
    MiroMemoryEditorPosterController * _posterController;
    UITableView * _tableView;
    MiroMemoryTitleStyleCollectionViewController * _titleStyleCollectionViewController;
    UIVisualEffectView * _translucentBar;
}

@property (nonatomic) long long activeCellIndex;
@property (nonatomic, retain) NSString *activeCellText;
@property (nonatomic, retain) UITableViewCell *collectionViewControllerCell;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MiroMemory *memory;
@property (nonatomic, retain) MiroMemoryEditorPosterController *posterController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) MiroMemoryTitleStyleCollectionViewController *titleStyleCollectionViewController;
@property (nonatomic, retain) UIVisualEffectView *translucentBar;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (long long)activeCellIndex;
- (id)activeCellText;
- (void)attachTranslucentBar;
- (id)collectionViewControllerCell;
- (void)dealloc;
- (id)defaultMemoriesTitleHelper;
- (id)initWithCoder:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)memory;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)posterController;
- (void)setActiveCellIndex:(long long)arg1;
- (void)setActiveCellText:(id)arg1;
- (void)setCollectionViewControllerCell:(id)arg1;
- (void)setMemory:(id)arg1;
- (void)setPosterController:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTitleStyleCollectionViewController:(id)arg1;
- (void)setTranslucentBar:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)textDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)titleStyleCollectionViewController;
- (id)translucentBar;
- (void)updateFonts;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end