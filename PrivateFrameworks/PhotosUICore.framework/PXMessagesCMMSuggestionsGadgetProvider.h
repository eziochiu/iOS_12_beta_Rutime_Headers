/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMessagesCMMSuggestionsGadgetProvider : PXGadgetProvider <PXMessagesCMMSuggestionGadgetActionDelegate, PXSectionedDataSourceManagerObserver> {
    PXCMMSuggestionsDataSource * _dataSource;
    bool  _didGenerateGadgets;
    NSArray * _suggestionGadgets;
    PXCMMSuggestionsDataSourceManager * _suggestionsDataSourceManager;
    PXMessagesExtensionViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXCMMSuggestionsDataSourceManager *suggestionsDataSourceManager;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (id)_createSuggestionGadgetWithSuggestion:(id)arg1;
- (void)_setDataSource:(id)arg1 changes:(id)arg2;
- (void)didSelectSuggestionGadget:(id)arg1;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (id)initWithViewModel:(id)arg1 suggestionsDataSourceManager:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setSuggestionsDataSourceManager:(id)arg1;
- (id)suggestionsDataSourceManager;

@end
