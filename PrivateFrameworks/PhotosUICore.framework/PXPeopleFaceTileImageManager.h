/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleFaceTileImageManager : NSObject <NSCacheDelegate, PXPhotoLibraryUIChangeObserver> {
    <NSObject> * _backgroundEntraceObserver;
    bool  _concurrencyEnabled;
    NSObject<OS_dispatch_queue> * _cropCacheQueue;
    NSMapTable * _faceTileRequestByRequestID;
    NSObject<OS_dispatch_queue> * _fetchQueue;
    NSMapTable * _highPriorityCachedIdentifiers;
    NSObject<OS_dispatch_queue> * _highPriorityCachedIdentifiersQueue;
    PXLRUMemoryCache * _memoryCache;
    <NSObject> * _memoryWarningObserver;
    NSObject<OS_dispatch_queue> * _requestLookupIsolationQueue;
}

@property (nonatomic, retain) <NSObject> *backgroundEntraceObserver;
@property (getter=isConcurrencyEnabled, nonatomic) bool concurrencyEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLRUMemoryCache *memoryCache;
@property (nonatomic, retain) <NSObject> *memoryWarningObserver;
@property (readonly) Class superclass;

+ (id)imageTransformQueue;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_addRequestResult:(id)arg1 forIdentifier:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundedCropRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withTargetAspectRatio:(double)arg3;
- (id)_cachedResultForIdentifier:(id)arg1 params:(struct PXFaceTileImageParams { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; bool x4; bool x5; bool x6; })arg2 allowVeryLowQuality:(bool)arg3 isLowResResult:(bool*)arg4;
- (id)_cachedResultForIdentifier:(id)arg1 params:(struct PXFaceTileImageParams { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; bool x4; bool x5; bool x6; })arg2 isLowResResult:(bool*)arg3;
- (void)_cropImage:(id)arg1 cacheResult:(bool)arg2 isDegraded:(bool)arg3 forRequest:(id)arg4 cropInfo:(struct { bool x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })arg5 didCallFastBlock:(bool)arg6 completionBlock:(id /* block */)arg7;
- (bool)_deliverCachedResultIfPossibleForRequest:(id)arg1 allowDegradedDelivery:(bool)arg2 allowVeryLowQuality:(bool)arg3 completionBlock:(id /* block */)arg4;
- (bool)_deliverCachedResultIfPossibleForRequest:(id)arg1 allowDegradedDelivery:(bool)arg2 completionBlock:(id /* block */)arg3;
- (bool)_doesChange:(id)arg1 containVisibleChangesToPHAssetWithOID:(id)arg2;
- (id)_fetchAssetFromFace:(id)arg1;
- (id)_fetchKeyFaceFromPerson:(id)arg1 error:(id*)arg2;
- (void)_handleMemoryClearRequest;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_normalizedAspectCropRectForFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 aspectRatio:(double)arg2 inImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_requestFaceTileImageFromFace:(id)arg1 fromPHObject:(id)arg2 imageRequest:(id)arg3 faceImageRequest:(id)arg4 cacheResult:(bool)arg5 completionBlock:(id /* block */)arg6 fastDisplayBlock:(id /* block */)arg7;
- (int)_requestFaceTileImageFromRequest:(id)arg1 withTargetSize:(struct CGSize { double x1; double x2; })arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(bool)arg5 boundFaceRect:(bool)arg6 completionBlock:(id /* block */)arg7 fastDisplayBlock:(id /* block */)arg8;
- (void)_startListeningForChanges;
- (void)_stopListeningForChanges;
- (void)addHighPriorityCachedItemIdentifier:(id)arg1 forOwner:(id)arg2;
- (id)backgroundEntraceObserver;
- (void)cancelRequest:(int)arg1;
- (void)clearMemoryCache;
- (void)dealloc;
- (id)init;
- (void)invalidateCacheForPerson:(id)arg1;
- (bool)isActiveRequestWithRequestID:(int)arg1;
- (bool)isConcurrencyEnabled;
- (id)memoryCache;
- (id)memoryWarningObserver;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)removeHighPriorityCachedItemIdentifier:(id)arg1 forOwner:(id)arg2;
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize { double x1; double x2; })arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(bool)arg5 boundFaceRect:(bool)arg6 completionBlock:(id /* block */)arg7 fastDisplayBlock:(id /* block */)arg8;
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize { double x1; double x2; })arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(bool)arg5 completionBlock:(id /* block */)arg6;
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize { double x1; double x2; })arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(bool)arg5 completionBlock:(id /* block */)arg6 fastDisplayBlock:(id /* block */)arg7;
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize { double x1; double x2; })arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(id /* block */)arg5;
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize { double x1; double x2; })arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(bool)arg5 boundFaceRect:(bool)arg6 completionBlock:(id /* block */)arg7;
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize { double x1; double x2; })arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(bool)arg5 completionBlock:(id /* block */)arg6;
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize { double x1; double x2; })arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(id /* block */)arg5;
- (int)requestFastFaceTileImageFromRequest:(id)arg1 withTargetSize:(struct CGSize { double x1; double x2; })arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(id /* block */)arg5 fastDisplayBlock:(id /* block */)arg6;
- (void)setBackgroundEntraceObserver:(id)arg1;
- (void)setConcurrencyEnabled:(bool)arg1;
- (void)setMemoryWarningObserver:(id)arg1;

@end
