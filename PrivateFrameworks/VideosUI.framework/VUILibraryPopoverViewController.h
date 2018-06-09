/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryPopoverViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    <VUILibraryPopoverDataSource> * _dataSource;
    <VUILibraryPopoverDelegate> * _delegate;
    NSString * _popoverTitle;
    VUILibraryListPopoverView * _popoverView;
    bool  _requiresRelayout;
    NSIndexPath * _selectedItemIndexPath;
}

@property (nonatomic) <VUILibraryPopoverDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUILibraryPopoverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *popoverTitle;
@property (nonatomic, retain) NSIndexPath *selectedItemIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureNavigationBar;
- (void)_dismissPopover;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)dataSource;
- (id)delegate;
- (id)initWithPopoverTitle:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)popoverTitle;
- (void)reloadData;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (id)selectedItemIndexPath;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedItemIndexPath:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
