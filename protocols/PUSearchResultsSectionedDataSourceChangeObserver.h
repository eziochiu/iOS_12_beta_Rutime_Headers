/* made by EzioChiu.
 */

@protocol PUSearchResultsSectionedDataSourceChangeObserver <NSObject>

@required

- (void)searchResultsDataSource:(PUSearchResultsSectionedDataSource *)arg1 didChangeThumbnailAssetsForSearchResult:(PUSearchTopAssetsResult *)arg2;
- (void)searchResultsDataSource:(PUSearchResultsSectionedDataSource *)arg1 didFetchAssetsForSearchResult:(PUSearchResultsValue *)arg2 indexPath:(NSIndexPath *)arg3;
- (void)searchResultsDataSourceHasPendingChanges:(PUSearchResultsSectionedDataSource *)arg1;

@end
