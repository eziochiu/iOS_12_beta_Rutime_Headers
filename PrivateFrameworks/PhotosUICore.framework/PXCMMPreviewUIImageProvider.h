/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPreviewUIImageProvider : NSObject <PXUIImageProvider> {
    <PXUIImageProvider> * _underlyingAssetImageProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PXUIImageProvider> *underlyingAssetImageProvider;

- (void).cxx_destruct;
- (void)cancelImageRequest:(long long)arg1;
- (id)init;
- (id)initWithUnderlyingAssetImageProvider:(id)arg1;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (id)underlyingAssetImageProvider;

@end
