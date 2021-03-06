/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanionSinglePHAssetEditor : NTKCompanionResourceDirectoryEditor

@property (nonatomic) bool shouldFinalize;

+ (id)_assetForResourceDirectoryForDevice:(id)arg1;
+ (id)_createResourceDirectoryForSinglePHAssetForDevice:(id)arg1 previewOnly:(bool)arg2;

- (void)finalizeWithCompletion:(id /* block */)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(id /* block */)arg1;
- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2 shouldFinalize:(bool)arg3;
- (void)setShouldFinalize:(bool)arg1;
- (bool)shouldFinalize;

@end
