/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUForYouSuggestionActionPerformer : PUAssetActionPerformer {
    PXForYouSuggestionDisplayAsset * _asset;
    PXPhotoKitAdjustedUIMediaProvider * _mediaProvider;
    <PUForYouSuggestionActionPerformerDelegate> * _statusDelegate;
}

@property (nonatomic, readonly) PXForYouSuggestionDisplayAsset *asset;
@property (nonatomic, readonly) PXPhotoKitAdjustedUIMediaProvider *mediaProvider;
@property (nonatomic) <PUForYouSuggestionActionPerformerDelegate> *statusDelegate;

- (void).cxx_destruct;
- (id)asset;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)mediaProvider;
- (void)setStatusDelegate:(id)arg1;
- (id)statusDelegate;

@end
