/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKDashboardCollectionViewController : GKLoadingViewController <NSPopoverDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    bool  _autoWidthUsesTwoColumnsWhenSpace;
    UIView * _collectionContainerView;
    UICollectionView * _collectionView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsetsBeforeKeyboard;
    GKCollectionDataSource * _dataSource;
    UIView * _keyboardAdjustedView;
    NSLayoutConstraint * _keyboardConstraint;
    double  _keyboardConstraintDefaultConstant;
    GKNoContentView * _noContentView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _scrollInsetsBeforeKeyboard;
    NSMutableIndexSet * _sectionsToReload;
}

@property (nonatomic) bool autoWidthUsesTwoColumnsWhenSpace;
@property (nonatomic) UIView *collectionContainerView;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsetsBeforeKeyboard;
@property (nonatomic, retain) GKCollectionDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLoading;
@property (nonatomic) UIView *keyboardAdjustedView;
@property (nonatomic) NSLayoutConstraint *keyboardConstraint;
@property (nonatomic) double keyboardConstraintDefaultConstant;
@property (nonatomic, retain) GKNoContentView *noContentView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } scrollInsetsBeforeKeyboard;
@property (nonatomic, retain) NSMutableIndexSet *sectionsToReload;
@property (readonly) Class superclass;

- (bool)autoWidthUsesTwoColumnsWhenSpace;
- (void)clearSelection;
- (void)clearSelectionForCollectionView:(id)arg1;
- (id)collectionContainerView;
- (id)collectionView;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsBeforeKeyboard;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)createCollectionViewInsideView:(id)arg1;
- (id)dataSource;
- (void)dataUpdated:(bool)arg1 withError:(id)arg2;
- (void)dealloc;
- (void)didEnterLoadingState;
- (void)didEnterRefreshingState;
- (void)didExitRefreshingState;
- (bool)hasData;
- (void)hideNoContentPlaceholder;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isLoading;
- (id)keyboardAdjustedView;
- (id)keyboardConstraint;
- (double)keyboardConstraintDefaultConstant;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadData;
- (void)loadView;
- (id)noContentView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (id)preferredFocusEnvironments;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })scrollInsetsBeforeKeyboard;
- (id)sectionsToReload;
- (void)setAutoWidthColumns:(long long)arg1;
- (void)setAutoWidthUsesTwoColumnsWhenSpace:(bool)arg1;
- (void)setCollectionContainerView:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContentInsetsBeforeKeyboard:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setKeyboardAdjustedView:(id)arg1;
- (void)setKeyboardConstraint:(id)arg1;
- (void)setKeyboardConstraintDefaultConstant:(double)arg1;
- (void)setNeedsRefresh;
- (void)setNoContentView:(id)arg1;
- (void)setScrollInsetsBeforeKeyboard:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSectionsToReload:(id)arg1;
- (void)setToHorizontalLayout:(bool)arg1;
- (void)setupDataSource;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)showNoContentPlaceholderForError:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)windowDidEndSheet:(id)arg1;

@end
