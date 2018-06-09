/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXPhotoKitAdjustedVideoRequest : _PXPhotoKitAdjustedUIMediaRequest {
    PHVideoRequestOptions * _options;
    PLPhotoEditRenderer * _renderer;
    id /* block */  _resultHandler;
}

@property (nonatomic, readonly) PHVideoRequestOptions *options;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;

- (void).cxx_destruct;
- (void)_handlePlayerItem:(id)arg1 error:(id)arg2;
- (void)_renderIfNeeded;
- (void)editSourceDidChange;
- (id)initWithRenderQueue:(id)arg1 asset:(id)arg2 options:(id)arg3 resultHandler:(id /* block */)arg4;
- (id)options;
- (void)progressDidChange;
- (id /* block */)resultHandler;
- (void)start;

@end
