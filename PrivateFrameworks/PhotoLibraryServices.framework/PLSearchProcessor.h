/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSearchProcessor : NSObject {
    PSIDatabase * _searchIndex;
}

@property (nonatomic, readonly) PSIDatabase *searchIndex;

- (void).cxx_destruct;
- (id)_alphabeticalSortDescriptors;
- (bool)_categoryMaskIsCombinable:(unsigned long long)arg1;
- (id)_dateSortDescriptors;
- (void)_extractSearchResultsFromGroupResults:(id)arg1 withResultsHandler:(id /* block */)arg2;
- (id)_numberOfAssetsSortDescriptors;
- (id)_searchResultsByCategoryMasksForSearchResults:(id)arg1;
- (bool)_shouldOmitSectionForCategoryMask:(unsigned long long)arg1;
- (id)_sortDescriptorsForCategoryMask:(unsigned long long)arg1;
- (id)completionSuggestionsWithSearchSections:(id)arg1 numberOfSuggestions:(unsigned long long)arg2;
- (id)initWithDatabase:(id)arg1;
- (void)performQuery:(id)arg1 withResultsHandler:(id /* block */)arg2;
- (id)searchIndex;
- (id)searchResultSectionsWithAssetResults:(id)arg1 collectionResults:(id)arg2 tripResults:(id)arg3 combineAssetSections:(bool)arg4;

@end
