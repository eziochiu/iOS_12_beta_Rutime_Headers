/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosAlbumViewController : PUPhotosGridViewController <PUPhotosSectionHeaderViewDelegate, PUSectionedGridLayoutDelegate, PXEditableNavigationTitleViewDelegate> {
    PUPhotosAlbumViewControllerSpec * __albumSpec;
    bool  __hasAccurateCounts;
    bool  __isCountingAssetTypes;
    PUPhotosPickerViewController * _activePhotosPickerViewController;
    struct NSObject { Class x1; } * _album;
    PHAssetCollection * _assetCollection;
    PXEditableNavigationTitleView * _editableTitleView;
    struct { 
        bool sectionHeadersEnabled; 
    }  _needsUpdateFlags;
}

@property (setter=_setAlbumSpec:, nonatomic, retain) PUPhotosAlbumViewControllerSpec *_albumSpec;
@property (setter=_setHasAccurateCounts:, nonatomic) bool _hasAccurateCounts;
@property (setter=_setCountingAssetTypes:, nonatomic) bool _isCountingAssetTypes;
@property (nonatomic, retain) NSObject<PLAlbumProtocol> *album;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHFetchResult *assetCollectionAssets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXEditableNavigationTitleView *editableTitleView;
@property (nonatomic, readonly) NSString *globalFooterSubtitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldShowSectionHeaders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_albumSpec;
- (id)_collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (void)_collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (void)_countAssetTypesIfNeeded;
- (void)_ensureEditableTitleView;
- (void)_getDataForVisualSection:(long long)arg1 hasActionButton:(bool*)arg2 locations:(id*)arg3 title:(id*)arg4 startDate:(id*)arg5 endDate:(id*)arg6;
- (id)_globalHeaderTitle;
- (bool)_hasAccurateCounts;
- (void)_invalideSectionHeaders;
- (bool)_isCountingAssetTypes;
- (bool)_navigateToBottomIfNeededAnimated:(bool)arg1;
- (void)_performAddDropWithSession:(id)arg1;
- (void)_performMoveDropWithCoordinator:(id)arg1;
- (void)_setAlbumSpec:(id)arg1;
- (void)_setCountingAssetTypes:(bool)arg1;
- (void)_setHasAccurateCounts:(bool)arg1;
- (void)_setNeedsUpdate;
- (void)_updateSectionHeadersIfNeeded;
- (struct NSObject { Class x1; }*)album;
- (bool)allowSelectAllButton;
- (id)assetCollection;
- (id)assetCollectionAssets;
- (bool)canBeginStackCollapseTransition;
- (bool)canDragIn;
- (bool)canDragOut;
- (bool)canHandleDropSession:(id)arg1;
- (long long)cellFillMode;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGlobalHeaderView:(id)arg1;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (struct CGPoint { double x1; double x2; })contentOffsetForPreheating;
- (void)didTapHeaderView:(id)arg1;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)editableNavigationTitleView:(id)arg1 validateNewText:(id)arg2;
- (void)editableNavigationTitleViewDidEndEditing:(id)arg1;
- (id)editableTitleView;
- (id)filterPredicateForAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)globalFooterSubtitle;
- (double)globalHeaderHeight;
- (void)handleAddFromAction;
- (void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2;
- (void)handleTransitionFade:(bool)arg1 animate:(bool)arg2;
- (id)initWithAlbumSpec:(id)arg1;
- (id)initWithSpec:(id)arg1;
- (bool)isCameraRoll;
- (bool)isTrashBinViewController;
- (id)localizedTitleForAssets:(id)arg1;
- (id)newGridLayout;
- (void)photosDataSource:(id)arg1 didReceivePhotoLibraryChange:(id)arg2;
- (bool)prepareForDismissingForced:(bool)arg1;
- (bool)pu_handleSecondTabTap;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1 existingFetchResult:(id)arg2;
- (void)setAssetCollection:(id)arg1;
- (void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3;
- (void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3 existingFetchResults:(id)arg4;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setSessionInfo:(id)arg1;
- (void)setupScrubber;
- (bool)shouldShowSectionHeaders;
- (void)updateLayoutMetrics;
- (bool)updateSpec;
- (void)updateTitle;
- (unsigned long long)userEventSourceType;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsGlobalFooter;

@end
