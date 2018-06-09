/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSimpleItemManager : HFItemManager {
    id /* block */  _homeCreator;
    id /* block */  _itemComparator;
    id /* block */  _itemModuleCreator;
    id /* block */  _itemProviderCreator;
}

@property (nonatomic, copy) id /* block */ homeCreator;
@property (nonatomic, copy) id /* block */ itemComparator;
@property (nonatomic, copy) id /* block */ itemModuleCreator;
@property (nonatomic, copy) id /* block */ itemProviderCreator;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id /* block */)_comparatorForSectionIdentifier:(id)arg1;
- (id)_homeFuture;
- (id /* block */)homeCreator;
- (id)initWithDelegate:(id)arg1 itemProvidersCreator:(id /* block */)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 itemProvidersCreator:(id /* block */)arg3;
- (id /* block */)itemComparator;
- (id /* block */)itemModuleCreator;
- (id /* block */)itemProviderCreator;
- (void)setHomeCreator:(id /* block */)arg1;
- (void)setItemComparator:(id /* block */)arg1;
- (void)setItemModuleCreator:(id /* block */)arg1;
- (void)setItemProviderCreator:(id /* block */)arg1;

@end
