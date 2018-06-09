/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXPhotoKitAdjustedPHLivePhotoRequest : _PXPhotoKitAdjustedUIMediaRequest {
    long long  _contentMode;
    UIImage * _image;
    _PXPhotoKitAdjustedUIImageRequest * _imageRequest;
    PHLivePhotoRequestOptions * _options;
    AVPlayerItem * _playerItem;
    id /* block */  _resultHandler;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    _PXPhotoKitAdjustedVideoRequest * _videoRequest;
}

@property (nonatomic, readonly) long long contentMode;
@property (nonatomic, readonly) PHLivePhotoRequestOptions *options;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;

- (void).cxx_destruct;
- (void)_handleImageRequestResult:(id)arg1 info:(id)arg2;
- (void)_handleVideoRequestResult:(id)arg1 info:(id)arg2;
- (void)_prepareLivePhotoIfPossible;
- (void)cancel;
- (long long)contentMode;
- (id)initWithRenderQueue:(id)arg1 asset:(id)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 contentMode:(long long)arg4 options:(id)arg5 resultHandler:(id /* block */)arg6;
- (id)options;
- (id /* block */)resultHandler;
- (void)start;
- (struct CGSize { double x1; double x2; })targetSize;

@end
