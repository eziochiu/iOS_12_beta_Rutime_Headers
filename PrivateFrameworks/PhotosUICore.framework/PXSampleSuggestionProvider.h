/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSampleSuggestionProvider : PXGadgetProvider <PXOneUpPresentationDelegate> {
    NSArray * _assets;
    bool  _includeHorizontal;
    PXUIMediaProvider * _mediaProvider;
    PXAssetsDataSourceManager * _oneUpDataSourceManager;
    PXAssetReference * _oneUpInitialAssetReference;
    NSArray * _suggestions;
}

@property (nonatomic, retain) NSArray *assets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeHorizontal;
@property (nonatomic, retain) PXAssetsDataSourceManager *oneUpDataSourceManager;
@property (nonatomic, retain) PXAssetReference *oneUpInitialAssetReference;
@property (nonatomic, retain) NSArray *suggestions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fetchHistoricImage;
- (id)_fetchOptionsForHistoricImage;
- (id)_fetchOptionsForPlaybackStyle:(long long)arg1;
- (id)_fetchSingleAnimatedImage;
- (id)_fetchSingleAssetWithVariation:(unsigned short)arg1;
- (id)_fetchSingleImage;
- (id)_fetchSingleLivePhotoAssetWithVariation:(unsigned short)arg1;
- (id)_fetchSingleLoopingVideo;
- (id)_fetchSinglePortraitImage;
- (id)_fetchSingleVideo;
- (id)_gadgetForAssetReference:(id)arg1;
- (id)_lastYearsDate;
- (void)_prepareForOneUpPresentationForGadget:(id)arg1;
- (id)assets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (void)generateGadgets;
- (bool)includeHorizontal;
- (id)init;
- (id)initWithHorizontalGadget:(bool)arg1;
- (void)loadDataForGadgets;
- (id)oneUpDataSourceManager;
- (id)oneUpInitialAssetReference;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 inCoordinateSpace:(id)arg3;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setIncludeHorizontal:(bool)arg1;
- (void)setOneUpDataSourceManager:(id)arg1;
- (void)setOneUpInitialAssetReference:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (void)suggestionGadget:(id)arg1 commitViewController:(id)arg2;
- (void)suggestionGadget:(id)arg1 willDismissPreviewController:(id)arg2;
- (id)suggestionGadgetPreviewController:(id)arg1;
- (void)suggestionGadgetsWantsOneUpPresentation:(id)arg1;
- (id)suggestions;

@end
