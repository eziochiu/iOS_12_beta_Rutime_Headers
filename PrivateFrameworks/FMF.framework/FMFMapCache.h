/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFMapCache : NSObject {
    NSMutableDictionary * _cacheMetaData;
    NSObject<OS_dispatch_queue> * _cacheMetaQueue;
    NSString * _cachePath;
    bool  _fileProtectionDeactivated;
    NSMutableDictionary * _gridImageMetaData;
    NSObject<OS_dispatch_queue> * _gridImageQueue;
    NSString * _imageCachePath;
    NSMutableDictionary * _mapImageMetaData;
    NSObject<OS_dispatch_queue> * _mapImageQueue;
    double  _mapLocationDistanceThreshold;
    NSMutableDictionary * _noLocationImageMetaData;
    NSObject<OS_dispatch_queue> * _noLocationImageQueue;
    NSObject<OS_dispatch_queue> * _pendingImageQueue;
    NSMutableDictionary * _pendingMapImageMetaData;
}

@property (nonatomic, retain) NSMutableDictionary *cacheMetaData;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cacheMetaQueue;
@property (nonatomic, retain) NSString *cachePath;
@property (nonatomic) bool fileProtectionDeactivated;
@property (nonatomic, retain) NSMutableDictionary *gridImageMetaData;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *gridImageQueue;
@property (nonatomic, retain) NSString *imageCachePath;
@property (nonatomic, retain) NSMutableDictionary *mapImageMetaData;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *mapImageQueue;
@property (nonatomic) double mapLocationDistanceThreshold;
@property (nonatomic, retain) NSMutableDictionary *noLocationImageMetaData;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *noLocationImageQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *pendingImageQueue;
@property (nonatomic, retain) NSMutableDictionary *pendingMapImageMetaData;

- (void).cxx_destruct;
- (void)cacheGridImage:(id)arg1 forWidth:(double)arg2 andHeight:(double)arg3;
- (void)cacheMapImage:(id)arg1 forLocation:(id)arg2 altitude:(double)arg3 pitch:(double)arg4 width:(double)arg5 andHeight:(double)arg6;
- (void)cacheMapImage:(id)arg1 forRequest:(id)arg2;
- (id)cacheMetaData;
- (id)cacheMetaQueue;
- (void)cacheNoLocationImage:(id)arg1 forWidth:(double)arg2 andHeight:(double)arg3;
- (id)cachePath;
- (id)cachedGridImageForWidth:(double)arg1 andHeight:(double)arg2;
- (id)cachedMapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 andHeight:(double)arg5;
- (id)cachedMapImageForRequest:(id)arg1;
- (id)cachedNoLocationImageForWidth:(double)arg1 andHeight:(double)arg2;
- (bool)fileProtectionDeactivated;
- (id)gridImageMetaData;
- (id)gridImageQueue;
- (id)gridKeyForWidth:(double)arg1 andHeight:(double)arg2;
- (id)imageCachePath;
- (id)init;
- (id)mapImageKeyForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 andHeight:(double)arg5;
- (id)mapImageMetaData;
- (id)mapImageQueue;
- (double)mapLocationDistanceThreshold;
- (id)noLocationImageMetaData;
- (id)noLocationImageQueue;
- (id)noLocationKeyForWidth:(double)arg1 andHeight:(double)arg2;
- (id)pendingImageQueue;
- (bool)pendingMapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 andHeight:(double)arg5;
- (bool)pendingMapImageForRequest:(id)arg1;
- (id)pendingMapImageMetaData;
- (void)readMetaData;
- (void)saveMetaData;
- (void)setCacheMetaData:(id)arg1;
- (void)setCacheMetaQueue:(id)arg1;
- (void)setCachePath:(id)arg1;
- (void)setFileProtectionDeactivated:(bool)arg1;
- (void)setGridImageMetaData:(id)arg1;
- (void)setGridImageQueue:(id)arg1;
- (void)setImageCachePath:(id)arg1;
- (void)setMapImageMetaData:(id)arg1;
- (void)setMapImageQueue:(id)arg1;
- (void)setMapLocationDistanceThreshold:(double)arg1;
- (void)setNoLocationImageMetaData:(id)arg1;
- (void)setNoLocationImageQueue:(id)arg1;
- (void)setPendingImageQueue:(id)arg1;
- (void)setPendingMapImageMetaData:(id)arg1;

@end
