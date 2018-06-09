/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanionTransientCustomPhotosEditor : NTKCompanionCustomPhotosEditor {
    NSMutableArray * _photos;
    bool  _previewIsValid;
}

- (void).cxx_destruct;
- (id)_writeTransientPhotosInto:(id)arg1;
- (bool)addAssetsFromAssetList:(id)arg1;
- (bool)addImageList:(id)arg1;
- (bool)addPhotosFromUIImagePicker:(id)arg1;
- (bool)canChangeOriginalCropOfPhotoAtIndex:(long long)arg1;
- (void)deletePhotoAtIndex:(long long)arg1;
- (void)finalizeWithCompletion:(id /* block */)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(id /* block */)arg1;
- (void)imageAndCropForPhotoAtIndex:(long long)arg1 completion:(id /* block */)arg2;
- (void)imageInPhotoLibraryForPhotoAtIndex:(long long)arg1 completion:(id /* block */)arg2;
- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2;
- (bool)isPhotoInPhotoLibraryAtIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })minimumNormalizedCropSizeForPhotoAtIndex:(long long)arg1;
- (void)movePhotoAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originalCropForPhotoAtIndex:(long long)arg1;
- (long long)photosCount;
- (bool)setOriginalCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPhotoAtIndex:(long long)arg2;

@end
