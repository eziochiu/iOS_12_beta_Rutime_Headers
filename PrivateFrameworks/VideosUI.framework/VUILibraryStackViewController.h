/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryStackViewController : VUILibraryFetchControllerViewController <UICollectionViewDelegate> {
    NSIndexPath * _focusedIndexPath;
    bool  _requiresRelayout;
    UICollectionView * _stackCollectionView;
    VUILibraryStackView * _stackView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UICollectionView *stackCollectionView;
@property (nonatomic, readonly) VUILibraryStackView *stackView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateLayouts;
- (void)_updateNavigationBarPadding;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (long long)preferredStatusBarStyle;
- (id)stackCollectionView;
- (id)stackView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
