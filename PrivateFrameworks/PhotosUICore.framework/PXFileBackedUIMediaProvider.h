/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFileBackedUIMediaProvider : PXUIMediaProvider {
    NSCache * _cache;
    NSOperationQueue * _queue;
}

- (void).cxx_destruct;
- (id)_createImageForKey:(id)arg1 error:(id*)arg2;
- (void)_handleImageCreated:(id)arg1 imageKey:(id)arg2;
- (id)_resizeImageAtURL:(id)arg1 imageUTI:(id)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 bakeInOrientation:(bool)arg4 error:(id*)arg5;
- (id)init;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;

@end
