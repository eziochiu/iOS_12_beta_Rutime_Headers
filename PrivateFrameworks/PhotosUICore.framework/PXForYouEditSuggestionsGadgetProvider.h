/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouEditSuggestionsGadgetProvider : PXForYouSuggestionsGadgetProvider <PXOneUpPresentationDelegate> {
    PXForYouSuggestionAssetsDataSourceManager * _oneUpDataSourceManager;
    PXGestureProvider * _oneUpGestureProvider;
    PXAssetReference * _oneUpInitialAssetReference;
    PXPhotoKitAdjustedUIMediaProvider * _oneUpMediaProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_prepareForOneUpPresentationForSuggestion:(id)arg1;
- (void)configureGadget:(id)arg1;
- (id)init;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 inCoordinateSpace:(id)arg3;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationGestureProvider:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (void)presentOneUpForSuggestion:(id)arg1;
- (void)suggestionGadget:(id)arg1 commitViewController:(id)arg2;
- (void)suggestionGadget:(id)arg1 willDismissPreviewController:(id)arg2;
- (id)suggestionGadgetPreviewController:(id)arg1;

@end
