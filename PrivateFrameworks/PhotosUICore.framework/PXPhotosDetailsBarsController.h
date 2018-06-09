/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsBarsController : PXBarsController <PXActionMenuDelegate, PXActionPerformerDelegate, PXChangeObserver, PXPhotosDataSourceChangeObserver, UIPopoverPresentationControllerDelegate> {
    PXActionMenuController * __activeMenuController;
    PXActionPerformer * __activePerformer;
    PXAssetActionManager * __assetActionManager;
    PXAssetCollectionActionManager * __assetCollectionActionManager;
    PXBarAppearance * __barAppearance;
    NSMutableDictionary * __barButtonItemByActionType;
    NSMutableDictionary * __barButtonItemCacheByBarItemIdentifier;
    PXPhotosDetailsContext * __context;
    PXPhotosDataSource * __dataSource;
    PXExtendedTraitCollection * __extendedTraitCollection;
    PXActionPerformer * __lastActionPerformer;
    PXSectionedSelectionManager * __selectionManager;
    bool  __showTitleView;
    UIView * __titleView;
    PXPhotosDetailsViewModel * __viewModel;
    struct { 
        bool assetActionManager; 
        bool assetCollectionActionManager; 
    }  _needsUpdateFlags;
}

@property (nonatomic, retain) PXActionMenuController *_activeMenuController;
@property (setter=_setActivePerformer:, nonatomic, retain) PXActionPerformer *_activePerformer;
@property (nonatomic, readonly) PXAssetActionManager *_assetActionManager;
@property (nonatomic, readonly) PXAssetCollectionActionManager *_assetCollectionActionManager;
@property (setter=_setBarAppearance:, nonatomic, retain) PXBarAppearance *_barAppearance;
@property (nonatomic, readonly) NSMutableDictionary *_barButtonItemByActionType;
@property (nonatomic, readonly) NSMutableDictionary *_barButtonItemCacheByBarItemIdentifier;
@property (nonatomic, readonly) PXPhotosDetailsContext *_context;
@property (nonatomic, readonly) PXPhotosDataSource *_dataSource;
@property (nonatomic, readonly) PXExtendedTraitCollection *_extendedTraitCollection;
@property (setter=_setLastActionPerformer:, nonatomic) PXActionPerformer *_lastActionPerformer;
@property (setter=_setSelectionManager:, nonatomic, retain) PXSectionedSelectionManager *_selectionManager;
@property (setter=_setShowTitleView:, nonatomic) bool _showTitleView;
@property (nonatomic, readonly) UIView *_titleView;
@property (nonatomic, readonly) PXPhotosDetailsViewModel *_viewModel;
@property (nonatomic, retain) PXPhotosDetailsBarSpec *barSpec;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeMenuController;
- (id)_activePerformer;
- (id)_assetActionManager;
- (id)_assetCollection;
- (id)_assetCollectionActionManager;
- (id)_barAppearance;
- (id)_barButtonItemByActionType;
- (id)_barButtonItemCacheByBarItemIdentifier;
- (id)_barButtonItemForBarItem:(id)arg1 placement:(unsigned long long)arg2;
- (id)_barButtonItemsForBarItems:(id)arg1 placement:(unsigned long long)arg2;
- (id)_context;
- (id)_dataSource;
- (bool)_dismissViewControllerIfSafeAnimated:(bool)arg1;
- (id)_extendedTraitCollection;
- (id)_flexibleSpaceBarButtonItem;
- (void)_invalidateAssetActionManager;
- (void)_invalidateAssetCollectionActionManager;
- (id)_lastActionPerformer;
- (id)_localizedSelectionTitle;
- (id)_selectionManager;
- (void)_setActivePerformer:(id)arg1;
- (void)_setBarAppearance:(id)arg1;
- (void)_setLastActionPerformer:(id)arg1;
- (void)_setSelectionManager:(id)arg1;
- (void)_setShowTitleView:(bool)arg1;
- (bool)_shouldAddBarItemForBarItemIdentifier:(id)arg1;
- (bool)_shouldEnableActionWithBarItemIdentifier:(id)arg1;
- (bool)_showTitleView;
- (id)_sourceBarButtonItemForActionType:(id)arg1;
- (id)_titleView;
- (long long)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)arg1;
- (void)_updateTitleViewAlpha;
- (id)_viewModel;
- (void)actionMenu:(id)arg1 actionPerformer:(id)arg2 didChangeState:(unsigned long long)arg3;
- (bool)actionMenu:(id)arg1 dismissViewController:(struct NSObject { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionMenu:(id)arg1 presentViewController:(id)arg2;
- (void)actionMenuButtonItemTapped:(id)arg1;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)cancelBarButtonItemTapped:(id)arg1;
- (id)createAssetActionManager;
- (id)createAssetCollectionActionManager;
- (id)createTitleView;
- (void)doneBarButtonItemTapped:(id)arg1;
- (void)faceModeButtonItemTapped:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1 viewModel:(id)arg2 extendedTraitCollection:(id)arg3;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)selectBarButtonItemTapped:(id)arg1;
- (void)set_activeMenuController:(id)arg1;
- (void)shouldShowTitleView:(bool)arg1 animated:(bool)arg2;
- (void)updateBars;

@end
