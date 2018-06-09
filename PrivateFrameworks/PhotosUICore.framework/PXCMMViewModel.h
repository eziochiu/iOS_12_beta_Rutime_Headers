/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMViewModel : PXObservable <PXChangeObserver, PXMediaTypeAggregating> {
    NSSet * _disabledActionTypes;
    NSDate * _endDate;
    PXPhotosGlobalFooterViewModel * _footerViewModel;
    bool  _loadingPeopleSuggestions;
    unsigned long long  _numberOfReceivedAssets;
    PXRecipient * _originatorRecipient;
    long long  _photosCount;
    <PXDisplayAsset> * _posterAsset;
    <PXUIImageProvider> * _posterMediaProvider;
    NSArray * _recipients;
    long long  _selectedCount;
    long long  _selectedPhotosCount;
    long long  _selectedVideosCount;
    bool  _selecting;
    PXSectionedSelectionManager * _selectionManager;
    NSURL * _shareURL;
    bool  _shouldShowPlaceholder;
    NSDate * _startDate;
    NSString * _title;
    long long  _totalCount;
    long long  _videosCount;
}

@property (nonatomic, readonly) long long aggregateMediaType;
@property (nonatomic, readonly) long long aggregateMediaTypeForSelection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *disabledActionTypes;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) PXPhotosGlobalFooterViewModel *footerViewModel;
@property (readonly) unsigned long long hash;
@property (getter=isLoadingPeopleSuggestions, nonatomic, readonly) bool loadingPeopleSuggestions;
@property (nonatomic, readonly) unsigned long long numberOfReceivedAssets;
@property (nonatomic, readonly, copy) PXRecipient *originatorRecipient;
@property (nonatomic, readonly) long long photosCount;
@property (nonatomic, readonly) <PXDisplayAsset> *posterAsset;
@property (nonatomic, readonly) <PXUIImageProvider> *posterMediaProvider;
@property (nonatomic, readonly, copy) NSArray *recipients;
@property (nonatomic, readonly) long long selectedCount;
@property (nonatomic, readonly) long long selectedPhotosCount;
@property (nonatomic, readonly) long long selectedVideosCount;
@property (getter=isSelecting, nonatomic, readonly) bool selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, readonly, copy) NSURL *shareURL;
@property (nonatomic, readonly) bool shouldShowPlaceholder;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long totalCount;
@property (nonatomic, readonly) long long videosCount;

- (void).cxx_destruct;
- (long long)aggregateMediaType;
- (long long)aggregateMediaTypeForSelection;
- (id)disabledActionTypes;
- (id)endDate;
- (id)footerViewModel;
- (bool)isLoadingPeopleSuggestions;
- (bool)isSelecting;
- (id)mutableChangeObject;
- (unsigned long long)numberOfReceivedAssets;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)originatorRecipient;
- (void)performChanges:(id /* block */)arg1;
- (long long)photosCount;
- (id)posterAsset;
- (id)posterMediaProvider;
- (id)recipients;
- (long long)selectedCount;
- (long long)selectedPhotosCount;
- (long long)selectedVideosCount;
- (id)selectionManager;
- (void)setDisabledActionTypes:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setLoadingPeopleSuggestions:(bool)arg1;
- (void)setNumberOfReceivedAssets:(unsigned long long)arg1;
- (void)setOriginatorRecipient:(id)arg1;
- (void)setPhotosCount:(long long)arg1;
- (void)setPosterAsset:(id)arg1 posterMediaProvider:(id)arg2;
- (void)setRecipients:(id)arg1;
- (void)setSelectedCount:(long long)arg1;
- (void)setSelectedPhotosCount:(long long)arg1;
- (void)setSelectedVideosCount:(long long)arg1;
- (void)setSelecting:(bool)arg1;
- (void)setSelectionManager:(id)arg1;
- (void)setShareURL:(id)arg1;
- (void)setShouldShowPlaceholder:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTotalCount:(long long)arg1;
- (void)setVideosCount:(long long)arg1;
- (id)shareURL;
- (bool)shouldShowPlaceholder;
- (id)startDate;
- (id)title;
- (long long)totalCount;
- (long long)videosCount;

@end
