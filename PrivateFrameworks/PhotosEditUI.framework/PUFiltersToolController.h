/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUFiltersToolController : PUPhotoEditToolController <UICollectionViewDataSource, UICollectionViewDelegate> {
    unsigned long long  __cachedSelectionIndex;
    UICollectionView * __collectionView;
    UICollectionViewFlowLayout * __collectionViewLayout;
    bool  __needsThumbnails;
    NSMutableDictionary * __thumbnailImages;
    NSArray * _collectionViewConstraints;
    bool  _didPerformInitialScrollToReveal;
}

@property (setter=_setCachedSelectionIndex:, nonatomic) unsigned long long _cachedSelectionIndex;
@property (setter=_setCollectionView:, nonatomic, retain) UICollectionView *_collectionView;
@property (setter=_setCollectionViewLayout:, nonatomic, retain) UICollectionViewFlowLayout *_collectionViewLayout;
@property (nonatomic, readonly) bool _needsThumbnails;
@property (setter=_setThumbnailImages:, nonatomic, retain) NSMutableDictionary *_thumbnailImages;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *effects;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PUFiltersToolControllerSpec *spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_cachedSelectionIndex;
- (void)_changeModelEffect:(id)arg1 explicitly:(bool)arg2;
- (id)_collectionView;
- (id)_collectionViewLayout;
- (unsigned long long)_indexOfEffectWithIdentifier:(id)arg1;
- (void)_loadStateFromModelAnimated:(bool)arg1;
- (bool)_needsThumbnails;
- (void)_prepareThumbnailImagesIfNeeded;
- (void)_saveThumbnail:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)_scrollToNextEffectIfNecessaryIncludingOffscreen:(bool)arg1 animated:(bool)arg2;
- (void)_scrollToSelectedEffectAnimated:(bool)arg1;
- (id)_selectedIndexPath;
- (void)_setCachedSelectionIndex:(unsigned long long)arg1;
- (void)_setCollectionView:(id)arg1;
- (void)_setCollectionViewLayout:(id)arg1;
- (void)_setNeedsThumbnails;
- (void)_setThumbnailImages:(id)arg1;
- (id)_thumbnailImageForIndex:(unsigned long long)arg1;
- (id)_thumbnailImages;
- (void)_updateCollectionView;
- (void)_updateCollectionViewInsets;
- (void)_updateEffectSelection;
- (void)basePhotoInvalidated;
- (bool)canResetToDefaultValue;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectInCoordinateSpace:(id)arg1;
- (id)effects;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (bool)installTogglePreviewGestureRecognizer:(id)arg1;
- (id)localizedName;
- (id)localizedResetToolActionTitle;
- (void)photoEditModelDidChange;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredPreviewViewInsets;
- (void)resetToDefaultValueAnimated:(bool)arg1;
- (id)selectedToolbarIcon;
- (void)setDelegate:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)specDidChange;
- (id)toolbarIcon;
- (void)updateViewConstraints;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
