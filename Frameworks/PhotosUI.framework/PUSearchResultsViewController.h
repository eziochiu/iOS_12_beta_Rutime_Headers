/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchResultsViewController : UIViewController <PUSearchResultsFooterViewDelegate, PUSearchResultsSectionedDataSourceChangeObserver, PUTopResultDelegate, PXOneUpPresentationDelegate, UISearchBarDelegate, UISearchResultsUpdating, UITableViewDataSource, UITableViewDataSourcePrefetching, UITableViewDelegate> {
    bool  _aggdSearchSucceeded;
    UITableViewCell * _axDummyCell;
    UILabel * _axDummySubtitleLabel;
    UILabel * _axDummyTitleLabel;
    PHCachingImageManager * _cachingImageManager;
    bool  _indexing;
    PXAssetsDataSourceManager * _oneUpDataSourceManager;
    PXAssetReference * _oneUpInitialAssetReference;
    PXPhotoKitUIMediaProvider * _oneUpMediaProvider;
    PUNavigationController * _oneUpNavigationController;
    PXOneUpPresentation * _oneUpPresentation;
    id /* block */  _ppt_searchTestCompletionHandler;
    NSArray * _representedObjects;
    UISearchController * _searchController;
    PSIDatabase * _searchIndex;
    NSObject<OS_dispatch_semaphore> * _searchIndexReadySemaphore;
    NSTimer * _searchIndexStatusTimer;
    PLSearchMetadataStore * _searchMetadataStore;
    PUSearchResultsSectionedDataSource * _searchResultsDataSource;
    UITableView * _searchResultsTableView;
    NSString * _searchText;
    NSArray * _searchTokenRepresentedObjects;
    NSIndexPath * _selectedTopAssetsResultTVIndexPath;
    PUSearchResultsFooterView * _tableFooterView;
}

@property (nonatomic, readonly) bool _shouldApplyReadabilityInset;
@property (nonatomic) bool aggdSearchSucceeded;
@property (nonatomic, retain) UITableViewCell *axDummyCell;
@property (nonatomic, retain) UILabel *axDummySubtitleLabel;
@property (nonatomic, retain) UILabel *axDummyTitleLabel;
@property (nonatomic, retain) PHCachingImageManager *cachingImageManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isIndexing, nonatomic) bool indexing;
@property (nonatomic, retain) PUNavigationController *oneUpNavigationController;
@property (nonatomic, copy) id /* block */ ppt_searchTestCompletionHandler;
@property (nonatomic, copy) NSArray *representedObjects;
@property (nonatomic) UISearchController *searchController;
@property (nonatomic, retain) PSIDatabase *searchIndex;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *searchIndexReadySemaphore;
@property (nonatomic, retain) NSTimer *searchIndexStatusTimer;
@property (nonatomic, retain) PLSearchMetadataStore *searchMetadataStore;
@property (nonatomic, retain) PUSearchResultsSectionedDataSource *searchResultsDataSource;
@property (nonatomic, retain) UITableView *searchResultsTableView;
@property (nonatomic, copy) NSString *searchText;
@property (nonatomic, copy) NSArray *searchTokenRepresentedObjects;
@property (nonatomic, retain) NSIndexPath *selectedTopAssetsResultTVIndexPath;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUSearchResultsFooterView *tableFooterView;

+ (id)gridViewControllerSpec;
+ (id)preQuerySearchResultsLog;

- (void).cxx_destruct;
- (id)_axDummyCell;
- (void)_configureCell:(id)arg1 inTableView:(id)arg2 atIndexAPath:(id)arg3;
- (id)_configureContentViewForCell:(id)arg1;
- (void)_configureTopResultsCell:(id)arg1 atIndexPath:(id)arg2;
- (id)_correctedIndexPathForIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForAsset:(id)arg1;
- (void)_getInfoForCellInTableView:(id)arg1 atIndexPath:(id)arg2 completion:(id /* block */)arg3;
- (void)_getTitleForSearchResult:(id)arg1 outAttributedTitle:(id*)arg2 outSubtitle:(id*)arg3;
- (bool)_hasSuggestions;
- (id)_highlightedAttributedStringForString:(id)arg1 highlightedSubstring:(id)arg2;
- (bool)_isWordEmbeddingsForIndexPath:(id)arg1;
- (unsigned long long)_numberOfSuggestions;
- (void)_preferredContentSizeChanged:(id)arg1;
- (void)_pushDetailViewForPhotosWithUUIDs:(id)arg1 title:(id)arg2;
- (void)_pushGridForAlbumWithUUID:(id)arg1;
- (void)_pushGridForPhotosWithUUIDs:(id)arg1 title:(id)arg2 searchCategories:(unsigned long long)arg3 headerViewTitle:(id)arg4;
- (void)_pushPersonDetailViewForPersonUUID:(id)arg1;
- (void)_pushViewForCollectionWithUUID:(id)arg1;
- (void)_pushViewForMemoryWithUUID:(id)arg1;
- (void)_pushViewForTripSearchResult:(id)arg1;
- (void)_resetPreheating;
- (id)_resultTitleForCurrentSearch;
- (long long)_rowForRelatedToRow;
- (double)_rowHeightForCurrentFont;
- (bool)_rowShouldAllowTapForIndexPath:(id)arg1;
- (void)_saveSearch;
- (void)_selectResultAtIndexPath:(id)arg1;
- (void)_selectSuggestionAtIndexPath:(id)arg1;
- (bool)_shouldApplyReadabilityInset;
- (bool)_shouldShowRelatedToRow;
- (bool)_shouldShowStringLiteralRow;
- (bool)_shouldShowSuggestionSection;
- (id)_suggestionAttributedStringForIndexPath:(id)arg1;
- (id)_suggestionForIndexPath:(id)arg1;
- (id)_thumbnailImageRequestOptions;
- (id)_titleForHeaderButtonInSection:(long long)arg1;
- (id)_topResultContentViewForIndexPath:(id)arg1;
- (void)_updateIndexingProgressViewVisibility;
- (void)_updateSearchResultsTable;
- (bool)aggdSearchSucceeded;
- (id)axDummyCell;
- (id)axDummySubtitleLabel;
- (id)axDummyTitleLabel;
- (id)cachingImageManager;
- (void)dealloc;
- (id)description;
- (void)didSelectSectionShowAllButton:(id)arg1;
- (void)didSelectTapToRadarButton:(id)arg1;
- (id)init;
- (bool)isIndexing;
- (id)newSearchResultsControllerWithSpec:(id)arg1 searchResults:(id)arg2 orAlbum:(struct NSObject { Class x1; }*)arg3 title:(id)arg4 headerViewTitle:(id)arg5;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)oneUpNavigationController;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 inCoordinateSpace:(id)arg3;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (id /* block */)ppt_searchTestCompletionHandler;
- (id)representedObjects;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)searchController;
- (id)searchIndex;
- (id)searchIndexReadySemaphore;
- (id)searchIndexStatusTimer;
- (id)searchMetadataStore;
- (id)searchResultsDataSource;
- (void)searchResultsDataSource:(id)arg1 didChangeThumbnailAssetsForSearchResult:(id)arg2;
- (void)searchResultsDataSource:(id)arg1 didFetchAssetsForSearchResult:(id)arg2 indexPath:(id)arg3;
- (void)searchResultsDataSourceHasPendingChanges:(id)arg1;
- (id)searchResultsTableView;
- (id)searchText;
- (id)searchTokenRepresentedObjects;
- (id)selectedTopAssetsResultTVIndexPath;
- (void)setAggdSearchSucceeded:(bool)arg1;
- (void)setAxDummyCell:(id)arg1;
- (void)setAxDummySubtitleLabel:(id)arg1;
- (void)setAxDummyTitleLabel:(id)arg1;
- (void)setCachingImageManager:(id)arg1;
- (void)setIndexing:(bool)arg1;
- (void)setOneUpNavigationController:(id)arg1;
- (void)setPpt_searchTestCompletionHandler:(id /* block */)arg1;
- (void)setRepresentedObjects:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchIndex:(id)arg1;
- (void)setSearchIndexReadySemaphore:(id)arg1;
- (void)setSearchIndexStatusTimer:(id)arg1;
- (void)setSearchMetadataStore:(id)arg1;
- (void)setSearchResultsDataSource:(id)arg1;
- (void)setSearchResultsTableView:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setSearchTokenRepresentedObjects:(id)arg1;
- (void)setSelectedTopAssetsResultTVIndexPath:(id)arg1;
- (void)setTableFooterView:(id)arg1;
- (void)showOneUpWithAssetCollection:(id)arg1 withInitialAsset:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)startMonitoringSearchIndexStatus;
- (void)stopMonitoringSearchIndexStatus;
- (id)tableFooterView;
- (void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)thumbnailAssetsForIndexPaths:(id)arg1;
- (void)topResultContentView:(id)arg1 didSelectAssetIndex:(unsigned long long)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 withNumberOfImages:(unsigned long long)arg4;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateTableFooterViewFrame;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)wordEmbeddingTapped:(id)arg1;

@end
