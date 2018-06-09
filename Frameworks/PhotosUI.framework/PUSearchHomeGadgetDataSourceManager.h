/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchHomeGadgetDataSourceManager : PXGadgetDataSourceManager <PXSettingsKeyObserver> {
    PXNoContentGadget * _searchNoContentGadget;
    PUSearchZeroKeywordGadgetProvider * _zeroKeywordGadgetProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXNoContentGadget *searchNoContentGadget;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUSearchZeroKeywordGadgetProvider *zeroKeywordGadgetProvider;

- (void).cxx_destruct;
- (id)_sortingRankForGadget:(id)arg1;
- (id)filteredUndisplayedGadgets:(id)arg1;
- (id)gadgetProviders;
- (id /* block */)gadgetSortComparator;
- (id)init;
- (id)noContentGadget;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)arg1;
- (void)refreshData;
- (id)searchNoContentGadget;
- (void)setSearchNoContentGadget:(id)arg1;
- (void)setZeroKeywordGadgetProvider:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)zeroKeywordGadgetProvider;

@end
