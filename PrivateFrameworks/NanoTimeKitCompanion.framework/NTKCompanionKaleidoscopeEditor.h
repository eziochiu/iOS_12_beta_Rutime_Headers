/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanionKaleidoscopeEditor : NTKCompanionResourceDirectoryEditor {
    PHAsset * _newAsset;
    UIImage * _newImage;
    UIImage * _pickedImage;
    NTKPhoto * _pickedPhoto;
}

@property (nonatomic, readonly) long long photosCount;

+ (id)_fetchAssetForPhoto:(id)arg1;

- (void).cxx_destruct;
- (void)_readPickedPhoto;
- (void)_reinitializeWithPhoto:(id)arg1 image:(id)arg2;
- (void)finalizeWithCompletion:(id /* block */)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(id /* block */)arg1;
- (void)imageForPhotoWithCompletion:(id /* block */)arg1;
- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2;
- (long long)photosCount;
- (void)setAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)setPhoto:(id)arg1 completion:(id /* block */)arg2;
- (void)setRawImage:(id)arg1 completion:(id /* block */)arg2;

@end
