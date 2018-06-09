/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUForYouSuggestionActivityItemProvider : UIActivityItemProvider {
    PXForYouSuggestionDisplayAsset * _asset;
    PXPhotoKitAdjustedUIMediaProvider * _mediaProvider;
}

@property (nonatomic, readonly) PXForYouSuggestionDisplayAsset *asset;
@property (nonatomic, readonly) PXPhotoKitAdjustedUIMediaProvider *mediaProvider;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)asset;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)item;
- (id)mediaProvider;

@end
