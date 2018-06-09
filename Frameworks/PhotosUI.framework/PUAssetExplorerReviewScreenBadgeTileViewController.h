/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetExplorerReviewScreenBadgeTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver, PXChangeObserver, PXUIAssetBadgeViewDelegate> {
    PXUIAssetBadgeView * __badgeView;
    bool  __isOverContent;
    bool  __needsUpdateBadgeView;
    bool  __performingChanges;
    PUAssetActionManager * _actionManager;
    PUAssetReference * _assetReference;
    PUBrowsingViewModel * _browsingViewModel;
}

@property (nonatomic, readonly) PXUIAssetBadgeView *_badgeView;
@property (setter=_setOverContent:, nonatomic) bool _isOverContent;
@property (setter=_setNeedsUpdateBadgeView:, nonatomic) bool _needsUpdateBadgeView;
@property (getter=_isPerformingChanges, setter=_setPerformingChanges:, nonatomic) bool _performingChanges;
@property (nonatomic, retain) PUAssetActionManager *actionManager;
@property (nonatomic, retain) PUAssetReference *assetReference;
@property (nonatomic, retain) PUBrowsingViewModel *browsingViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_configureBadgeView:(id)arg1 isOverContent:(bool)arg2 isLivePhotoDisabled:(bool)arg3;
+ (struct CGSize { double x1; double x2; })badgeTileSize;

- (void).cxx_destruct;
- (id)_badgeView;
- (id)_disableLivePhotosSelectionManager;
- (void)_invalidateBadgeView;
- (bool)_isOverContent;
- (bool)_isPerformingChanges;
- (bool)_needsUpdate;
- (bool)_needsUpdateBadgeView;
- (id)_reviewActionManager;
- (void)_setNeedsUpdateBadgeView:(bool)arg1;
- (void)_setOverContent:(bool)arg1;
- (void)_setPerformingChanges:(bool)arg1;
- (void)_updateBadgeViewIfNeeded;
- (void)_updateIfNeeded;
- (id)actionManager;
- (void)applyLayoutInfo:(id)arg1;
- (void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2;
- (id)assetReference;
- (void)becomeReusable;
- (id)browsingViewModel;
- (id)loadView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setActionManager:(id)arg1;
- (void)setAssetReference:(id)arg1;
- (void)setBrowsingViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
