/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDebugCMMSuggestionsCollectionViewController : UICollectionViewController <PXCMMWorkflowCoordinatorDelegate, PXChangeObserver, PXSectionedDataSourceManagerObserver, UICollectionViewDelegateFlowLayout> {
    PHCachingImageManager * _cachingImageManager;
    PXCMMSuggestionsDataSource * _dataSource;
    PXCMMSuggestionsDataSourceManager * _dataSourceManager;
    UIView * _emptyPlaceholderView;
    PHImageRequestOptions * _imageRequestOptions;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastUpdateReferenceSize;
    PXDebugCMMSuggestionCollectionViewCell * _sizingCell;
    _PXCMMSizingSuggestion * _sizingSuggestion;
    <PXDebugCMMSuggestionsDelegate> * _suggestionsDelegate;
    PXCMMWorkflowCoordinator * _workflowCoordinator;
}

@property (nonatomic, readonly) PHCachingImageManager *cachingImageManager;
@property (nonatomic, retain) PXCMMSuggestionsDataSource *dataSource;
@property (nonatomic, readonly) PXCMMSuggestionsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHImageRequestOptions *imageRequestOptions;
@property (nonatomic) <PXDebugCMMSuggestionsDelegate> *suggestionsDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureGadgetView:(id)arg1 forSuggestion:(id)arg2;
- (bool)_dataSourceIsEmpty;
- (double)_suggestionCellWidth;
- (void)_updateCollectionViewLayout;
- (void)_updateEmptyPlaceholderView;
- (id)cachingImageManager;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)dataSource;
- (id)dataSourceManager;
- (id)imageRequestOptions;
- (id)initWithDataSourceManager:(id)arg1;
- (id)initWithDataSourceManager:(id)arg1 scrollDirection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setDataSource:(id)arg1;
- (void)setSuggestionsDelegate:(id)arg1;
- (id)suggestionsDelegate;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishWithActivityState:(unsigned long long)arg3;

@end
