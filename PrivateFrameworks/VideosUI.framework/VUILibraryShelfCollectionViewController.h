/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryShelfCollectionViewController : VUIShelfViewController {
    <VUILibraryShelfCollectionViewControllerDelegate> * _delegate;
    bool  _disableSeeAllButton;
    NSArray * _fetchResults;
    NSString * _headerSubtitle;
    NSString * _headerTitle;
    VUILibraryLockupViewCell * _sizingCell;
}

@property (nonatomic) <VUILibraryShelfCollectionViewControllerDelegate> *delegate;
@property (nonatomic) bool disableSeeAllButton;
@property (nonatomic, copy) NSArray *fetchResults;
@property (nonatomic, retain) NSString *headerSubtitle;
@property (nonatomic, retain) NSString *headerTitle;

- (void).cxx_destruct;
- (double)_computeBottomMargin;
- (struct CGSize { double x1; double x2; })_configureSizingCellWithEntity:(id)arg1;
- (void)_didPressSeeAllButton:(id)arg1;
- (bool)_hideSeeAllButton;
- (void)_updateHeaderView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureWithCollectionView:(id)arg1;
- (id)delegate;
- (bool)disableSeeAllButton;
- (id)fetchResults;
- (id)headerSubtitle;
- (id)headerTitle;
- (id)initWithFetchResults:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableSeeAllButton:(bool)arg1;
- (void)setFetchResults:(id)arg1;
- (void)setHeaderSubtitle:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderTitle:(id)arg1 andSubtitle:(id)arg2;
- (void)updateWithLatestMediaEntities:(id)arg1 andChangeSet:(id)arg2;

@end
