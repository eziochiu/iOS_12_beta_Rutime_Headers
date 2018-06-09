/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PDMediaRequestContext : NSObject <PHAdjustmentDataRequestDelegate, PHImageRequestDelegate, PHRecyclableObject, PHResourceAvailabilityChangeRequestDelegate, PHVideoChoosingAndAvailabilityRequestDelegate, PHVideoRequestDelegate> {
    NSArray * _allProgresses;
    PHAsset * _asset;
    <PHMediaRequestContextDelegate> * _delegate;
    PHImageDisplaySpec * _displaySpec;
    NSError * _error;
    bool  _finalImageReceived;
    bool  _finalVideoReceived;
    PHImageRequestOptions * _imageOptions;
    NSDictionary * _info;
    PHMediaRequest * _initialRequest;
    bool  _isCancelled;
    NSMutableArray * _jobs;
    PHLivePhotoRequestOptions * _livePhotoOptions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _managerID;
    unsigned long long  _nextID;
    PDVideoRequest * _outboundVideoRequest;
    NSMutableDictionary * _progressByTaskIdentifier;
    int  _requestID;
    NSMutableDictionary * _requestedResourcesByTaskIdentifier;
    NSMutableArray * _requests;
    PHImageResult * _result;
    id /* block */  _resultHandler;
    NSProgress * _totalProgress;
    long long  _type;
    PHVideoRequestOptions * _videoOptions;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PHMediaRequestContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PHImageDisplaySpec *displaySpec;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHImageRequestOptions *imageOptions;
@property (nonatomic, retain) PHLivePhotoRequestOptions *livePhotoOptions;
@property (nonatomic, readonly) unsigned long long managerID;
@property (nonatomic, readonly) int requestID;
@property (readonly) Class superclass;
@property (nonatomic) long long type;
@property (nonatomic, retain) PHVideoRequestOptions *videoOptions;

+ (id)imageRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 imageRequestOptions:(id)arg4 displaySpec:(id)arg5 resultHandler:(id /* block */)arg6;
+ (void)initialize;
+ (id)livePhotoRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 livePhotoRequestOptions:(id)arg4 displaySpec:(id)arg5 resultHandler:(id /* block */)arg6;
+ (id)videoRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 videoRequestOptions:(id)arg4 resultHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)_adjustmentRequest;
- (void)_availabilityRequest:(id)arg1 didReportProgress:(double)arg2 completed:(bool)arg3 error:(id)arg4;
- (long long)_imageDeliveryMode;
- (long long)_imageVersion;
- (id)_initialImageRequest;
- (id)_initialVideoRequest;
- (bool)_isNetworkAccessAllowed;
- (bool)_isSynchronous;
- (void)_makeAvailabilityRequest:(id)arg1 forResource:(id)arg2 mediaRequest:(id)arg3;
- (id /* block */)_progressHandler;
- (id)_requestWithIdentifier:(id)arg1;
- (void)_setupProgressIfNeeded;
- (void)_spawnNewImageRequestWithBehaviorSpec:(id)arg1;
- (void)_startRequest:(id)arg1;
- (void)adjustmentDataRequest:(id)arg1 didFinishWithResultInfo:(id)arg2 error:(id)arg3;
- (void)adjustmentDataRequest:(id)arg1 didReportProgress:(double)arg2 completed:(bool)arg3 error:(id)arg4;
- (id)asset;
- (void)cancel;
- (id)delegate;
- (id)displaySpec;
- (id)imageOptions;
- (void)imageRequest:(id)arg1 didFinishLoadingImageResult:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)imageRequest:(id)arg1 didProcessHintsWithLocallyAvailable:(bool)arg2 isDegraded:(bool)arg3;
- (void)imageRequest:(id)arg1 isQueryingCacheAndDidWait:(bool*)arg2 didFindImage:(bool*)arg3 resultHandler:(id /* block */)arg4;
- (void)imageRequest:(id)arg1 isRequestingScheduledWorkBlock:(id /* block */)arg2;
- (bool)imageRequestIsInitialRequestOfMultistageRequest:(id)arg1;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 resultHandler:(id /* block */)arg5;
- (id)livePhotoOptions;
- (unsigned long long)managerID;
- (void)mediaRequest:(id)arg1 isRequestingLocalAvailabilityChangeForResource:(id)arg2;
- (void)prepareForReuse;
- (void)recycleRequests;
- (int)requestID;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didFinishWithSuccess:(bool)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didLoadData:(id)arg2;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didReportProgress:(double)arg2 completed:(bool)arg3 error:(id)arg4;
- (void)setDelegate:(id)arg1;
- (void)setImageOptions:(id)arg1;
- (void)setLivePhotoOptions:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setVideoOptions:(id)arg1;
- (void)start;
- (long long)type;
- (void)videoChoosingAndAvailabilityRequest:(id)arg1 didFinishWithVideoURL:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)videoChoosingAndAvailabilityRequest:(id)arg1 didReportProgress:(double)arg2 completed:(bool)arg3 error:(id)arg4;
- (id)videoOptions;
- (void)videoRequest:(id)arg1 didFinishLoadingVideoURL:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)videoRequest:(id)arg1 isRequestingVideoChoosingForSize:(struct CGSize { double x1; double x2; })arg2;

@end
