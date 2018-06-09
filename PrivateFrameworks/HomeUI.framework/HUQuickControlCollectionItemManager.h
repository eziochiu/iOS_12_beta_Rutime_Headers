/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlCollectionItemManager : HFItemManager {
    HFItemProvider * _gridItemProvider;
    id /* block */  _gridItemProviderCreator;
    HFItem<NSCopying> * _supplementaryItem;
}

@property (nonatomic, retain) HFItemProvider *gridItemProvider;
@property (nonatomic, readonly, copy) id /* block */ gridItemProviderCreator;
@property (nonatomic, readonly, copy) HFItem<NSCopying> *supplementaryItem;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)gridItemProvider;
- (id /* block */)gridItemProviderCreator;
- (id)initWithDelegate:(id)arg1 gridItemProviderCreator:(id /* block */)arg2 supplementaryItem:(id)arg3;
- (bool)isGridItem:(id)arg1;
- (void)setGridItemProvider:(id)arg1;
- (id)supplementaryItem;

@end
