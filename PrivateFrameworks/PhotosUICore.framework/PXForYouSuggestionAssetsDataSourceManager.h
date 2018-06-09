/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouSuggestionAssetsDataSourceManager : PXAssetsDataSourceManager <PXSectionedDataSourceManagerObserver> {
    <PXDisplaySuggestion> * _displayOriginalSuggestion;
    PXSuggestionsDataSource * _suggestionsDataSource;
    PXSuggestionsDataSourceManager * _suggestionsDataSourceManager;
}

@property (nonatomic, readonly) PXForYouSuggestionsAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <PXDisplaySuggestion> *displayOriginalSuggestion;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXSuggestionsDataSource *suggestionsDataSource;
@property (nonatomic, readonly) PXSuggestionsDataSourceManager *suggestionsDataSourceManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createInitialDataSource;
- (id)displayOriginalSuggestion;
- (id)initWithSuggestionsDataSourceManager:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setDisplayOriginalSuggestion:(id)arg1;
- (void)setSuggestionsDataSource:(id)arg1;
- (id)suggestionsDataSource;
- (id)suggestionsDataSourceManager;

@end