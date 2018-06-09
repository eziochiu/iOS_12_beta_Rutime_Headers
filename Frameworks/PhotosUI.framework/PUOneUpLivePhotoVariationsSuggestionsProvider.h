/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpLivePhotoVariationsSuggestionsProvider : PUOneUpSuggestionsProvider <PXChangeObserver> {
    NSMutableDictionary * _infos;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *infos;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCancellationForAsset:(id)arg1;
- (void)_handleRenderCompletionForAsset:(id)arg1 withSuccess:(bool)arg2 result:(id)arg3 error:(id)arg4;
- (void)_handleRenderProgressChangeForInfo:(id)arg1;
- (void)_handleRenderStatusChangeForAsset:(id)arg1 info:(id)arg2;
- (long long)_recommendedVariationTypeForAsset:(id)arg1;
- (bool)canProvideSuggestionForAsset:(id)arg1;
- (id)infos;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)requestSuggestionForAsset:(id)arg1 withResultHandler:(id /* block */)arg2;

@end
