/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetsScene : NSObject <PXAssetsDataSourceManagerObserver, PXChangeObserver, PXReusableObjectPoolDelegate, PXTileSource, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate> {
    NSMutableArray * __anchors;
    PXAssetsDataSource * __dataSource;
    bool  _animatesContent;
    PXAssetBadgeManager * _badgeManager;
    PXAssetsDataSourceManager * _dataSourceManager;
    <PXAssetsSceneDelegate> * _delegate;
    struct { 
        bool respondsToTileIdentifierConverterForChange; 
        bool respondsToWillTransitionToDataSource; 
        bool respondsToDidTransitionToDataSource; 
        bool respondsToTransitionAnimationCoordinatorForChange; 
    }  _delegateFlags;
    bool  _hasScheduledUpdate;
    bool  _isAskingForTileIdentifierConverter;
    bool  _isAskingForTransitionAnimationCoordinator;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    PXMediaProvider * _mediaProvider;
    struct { 
        bool layout; 
    }  _needsUpdateFlags;
    PXScrollViewSpeedometer * _scrollSpeedometer;
    PXSectionedSelectionManager * _selectionManager;
    PXTilingController * _tilingController;
    PXReusableObjectPool * _viewTileReusePool;
}

@property (nonatomic, readonly) NSMutableArray *_anchors;
@property (setter=_setDataSource:, nonatomic, retain) PXAssetsDataSource *_dataSource;
@property (nonatomic) bool animatesContent;
@property (nonatomic, readonly) PXAssetBadgeManager *badgeManager;
@property (nonatomic, readonly) PXAssetsTilingLayout *currentLayout;
@property (nonatomic, readonly) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXAssetsSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic, readonly) PXScrollViewSpeedometer *scrollSpeedometer;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXAssetsTilingLayout *targetLayout;
@property (nonatomic, readonly) PXTilingController *tilingController;
@property (nonatomic, readonly) PXReusableObjectPool *viewTileReusePool;

- (void).cxx_destruct;
- (id)_anchors;
- (void)_configureLayout:(id)arg1;
- (id)_dataSource;
- (void)_invalidateLayout;
- (void)_saveAnchorAsset;
- (void)_setDataSource:(id)arg1;
- (void)_updateDataSourceIfNeeded;
- (void)_updateLayoutIfNeeded;
- (bool)animatesContent;
- (id)badgeManager;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (id)currentLayout;
- (id)dataSourceManager;
- (void)dealloc;
- (id)delegate;
- (void)didTransitionToDataSource:(id)arg1;
- (id)init;
- (id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 delegate:(id)arg4;
- (id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 selectionManager:(id)arg4 delegate:(id)arg5;
- (id)mediaProvider;
- (bool)needsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (bool)providesTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;
- (id)scrollSpeedometer;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (id)selectionManager;
- (void)setAnimatesContent:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsUpdate;
- (id)targetLayout;
- (id)tilingController;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(struct CGPoint { double x1; double x2; })arg3;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (void)transitionToLayout:(id)arg1;
- (void)updateIfNeeded;
- (id)viewTileReusePool;
- (void)willTransitionToDataSource:(id)arg1;

@end
