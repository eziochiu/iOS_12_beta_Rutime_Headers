/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPreviewItemMediaProvider : NSObject

- (void)cancelImageRequest:(int)arg1;
- (struct CGSize { double x1; double x2; })imageSizeForPreviewItem:(id)arg1;
- (int)requestImageForParticipant:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 resultHandler:(id /* block */)arg3;
- (int)requestImageForPreviewItem:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 resultHandler:(id /* block */)arg3;

@end
