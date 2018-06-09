/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PDImageManager : NSObject <PHMediaRequestContextDelegate> {
    int  _lastUsedRequestID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _managerID;
    NSMapTable * _requestContextsByID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long managerID;
@property (readonly) Class superclass;

+ (bool)_allowVideoAccessForAsset:(id)arg1 options:(id)arg2;
+ (unsigned long long)_nextManagerID;
+ (unsigned long long)_nextRequestID;
+ (id)_requestResultInfoForImageInfo:(id)arg1 videoInfo:(id)arg2 adjustmentInfo:(id)arg3 renderingError:(id)arg4;
+ (void)_setupContentEditing;
+ (id)defaultManager;

- (void).cxx_destruct;
- (id)_adjustmentRequestOptionsFromFullOptions:(id)arg1;
- (id)_imageRequestOptionsForAsset:(id)arg1 baseVersion:(long long)arg2 options:(id)arg3 progressEstimateForImageProgress:(id /* block */)arg4;
- (id)_infoDictionary:(id)arg1 withError:(id)arg2;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_renderVideoFromVideoURL:(id)arg1 asset:(id)arg2 adjustmentData:(id)arg3 canHandleAdjustmentData:(bool)arg4 resultHandler:(id /* block */)arg5;
- (int)_runRequestWithContext:(id)arg1;
- (id)_videoAVObjectBuilderFromVideoURL:(id)arg1 info:(id)arg2 playbackOnly:(bool)arg3;
- (id)_videoRequestOptionsForBaseVersion:(long long)arg1 asset:(id)arg2 options:(id)arg3 progressEstimateForVideoProgress:(id /* block */)arg4;
- (void)buildAVAssetFromVideoURL:(id)arg1 infoDictionary:(id)arg2 completion:(id /* block */)arg3;
- (void)buildAVPlayerItemFromVideoURL:(id)arg1 infoDictionary:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelContentEditingInputRequest:(unsigned long long)arg1;
- (void)cancelImageRequest:(int)arg1;
- (void)handleImageResult:(id)arg1 forRequest:(id)arg2 options:(id)arg3 info:(id)arg4 error:(id)arg5 resultHandler:(id /* block */)arg6;
- (id)init;
- (unsigned long long)managerID;
- (void)mediaRequestContext:(id)arg1 isQueryingCacheForRequest:(id)arg2 didWait:(bool*)arg3 didFindImage:(bool*)arg4 resultHandler:(id /* block */)arg5;
- (void)mediaRequestContext:(id)arg1 spawnedNewRequest:(id)arg2;
- (void)mediaRequestContextDidFinish:(id)arg1;
- (int)nextID;
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (unsigned long long)requestContentEditingInputForAsset:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (int)requestExportSessionForVideo:(id)arg1 options:(id)arg2 exportPreset:(id)arg3 resultHandler:(id /* block */)arg4;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 requestID:(int)arg5 resultHandler:(id /* block */)arg6;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;

@end
