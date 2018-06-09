/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFilmstripMediaProvider : PUMediaProvider {
    NSMutableDictionary * __completionHandlersByRequestNumber;
    NSCache * __imageCache;
    AVAssetImageGenerator * __imageGenerator;
    NSMutableArray * __pendingResults;
    long long  __requestNumber;
    NSMutableDictionary * __resultsByRequestNumber;
    AVAsset * _asset;
    bool  _deliversImagesInOrder;
    NSObject<OS_dispatch_queue> * _generationQueue;
    UIImage * _placeholderImage;
    double  _timeTolerance;
    AVVideoComposition * _videoComposition;
}

@property (setter=_setCompletionHandlersByRequestNumber:, nonatomic, retain) NSMutableDictionary *_completionHandlersByRequestNumber;
@property (setter=_setImageCache:, nonatomic, retain) NSCache *_imageCache;
@property (setter=_setImageGenerator:, nonatomic, retain) AVAssetImageGenerator *_imageGenerator;
@property (setter=_setPendingResults:, nonatomic, retain) NSMutableArray *_pendingResults;
@property (setter=_setRequestNumber:, nonatomic) long long _requestNumber;
@property (setter=_setResultsByRequestNumber:, nonatomic, retain) NSMutableDictionary *_resultsByRequestNumber;
@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic) bool deliversImagesInOrder;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic) double timeTolerance;
@property (nonatomic, readonly) AVVideoComposition *videoComposition;

- (void).cxx_destruct;
- (id)_completionHandlersByRequestNumber;
- (void)_deliverPendingResults;
- (void)_deliverPlaceholderImage;
- (void)_deliverResult:(id)arg1;
- (void)_didGenerateImage:(struct CGImage { }*)arg1 error:(id)arg2 requestedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 actualTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 forResult:(id)arg5;
- (void)_generateImageForResult:(id)arg1;
- (id)_imageCache;
- (id)_imageGenerator;
- (id)_pendingResults;
- (long long)_requestNumber;
- (id)_resultsByRequestNumber;
- (void)_setCompletionHandlersByRequestNumber:(id)arg1;
- (void)_setImageCache:(id)arg1;
- (void)_setImageGenerator:(id)arg1;
- (void)_setPendingResults:(id)arg1;
- (void)_setRequestNumber:(long long)arg1;
- (void)_setResultsByRequestNumber:(id)arg1;
- (id)asset;
- (void)cancelAllRequests;
- (void)cancelImageRequest:(int)arg1;
- (void)dealloc;
- (bool)deliversImagesInOrder;
- (id)init;
- (id)initWithAVAsset:(id)arg1 videoComposition:(id)arg2;
- (id)placeholderImage;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (void)setDeliversImagesInOrder:(bool)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setTimeTolerance:(double)arg1;
- (double)timeTolerance;
- (id)videoComposition;

@end
