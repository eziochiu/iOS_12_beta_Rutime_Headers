/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDynamicGridViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUICollectionDOMFeatureTargetting, SKUIGridViewElementPageSectionConfigurationDataSource> {
    SKUIViewElementLayoutContext * _cellLayoutContext;
    SKUIGridViewElementPageSectionConfiguration * _configuration;
    SKUIDynamicPageSectionIndexMapper * _dynamicPageSectionIndexMapper;
    bool  _editing;
    <SKUIEntityProviding> * _entityProvider;
    struct { 
        unsigned int respondsToSectionEntityValueProviderAtIndex : 1; 
    }  _entityProviderFlags;
    CPLRUDictionary * _globalIndexToEntityValueProviderValueCache;
    CPLRUDictionary * _globalIndexToTemplateViewElementCache;
    SKUIViewElement * _independentlySizedViewElement;
    SKUIViewElementTextLayoutCache * _labelLayoutCache;
    long long  _minimumEntityCountForSections;
    unsigned long long  _numberOfSections;
    SKUIMutableIntegerValue * _reusableGlobalIndexIntegerValue;
    _SKUIDynamicGridSizeCacheKey * _reusableSizeCacheKey;
    unsigned long long * _sectionHeaderGlobalIndices;
    bool  _showsSectionHeaders;
    NSMutableDictionary * _sizeCacheKeyToCachedCellSize;
    NSMutableDictionary * _templateViewElementsCache;
    bool  _usesSizingEntityValueProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic, readonly) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUIGridComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dynamicGridViewElement;
- (long long)_entityGlobalIndexForGlobalIndex:(long long)arg1 returningSection:(out long long*)arg2;
- (id)_entityValueProviderForGlobalIndex:(long long)arg1 sectionIndex:(long long*)arg2;
- (void)_enumerateVisibleCellsUsingBlock:(id /* block */)arg1;
- (long long)_globalIndexForEntityGlobalIndex:(long long)arg1;
- (void)_invalidateCellSizeCache;
- (id)_itemTemplateViewElementForEntityValueProvider:(id)arg1;
- (void)_reloadEntityProperties;
- (void)_reloadViewElementProperties;
- (void)_reloadVisibleCellsAnimated:(bool)arg1;
- (void)_resetLayoutProperties;
- (id)_sectionTemplateViewElementForEntityValueProvider:(id)arg1;
- (void)_setContext:(id)arg1;
- (id)_templateViewElementsForType:(id)arg1 mode:(id)arg2;
- (bool)_updateShowsSectionHeaders;
- (void)_updateStyleProperties;
- (id)_viewElementAtGlobalIndex:(long long)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidConfirmButtonElement:(id)arg1 withClickInfo:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (void)deselectItemsAnimated:(bool)arg1;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (void)gridViewElementPageSectionConfiguration:(id)arg1 configurePosition:(inout long long*)arg2 forItemAtIndexPath:(id)arg3;
- (id)gridViewElementPageSectionConfiguration:(id)arg1 viewElementForIndexPath:(id)arg2;
- (id)indexPathsForPinningItems;
- (id)initWithPageComponent:(id)arg1;
- (void)invalidateCachedLayoutInformation;
- (bool)isEditing;
- (long long)numberOfCells;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pinningContentInsetForItemAtIndexPath:(id)arg1;
- (long long)pinningStyleForItemAtIndexPath:(id)arg1;
- (id)relevantEntityProviders;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (void)reloadVisibleCellsWithReason:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInset;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2;
- (bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(bool)arg3;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
