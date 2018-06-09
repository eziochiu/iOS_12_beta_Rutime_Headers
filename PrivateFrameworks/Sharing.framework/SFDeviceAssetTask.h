/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceAssetTask : NSObject {
    NSBundle * _assetBundle;
    NSBundle * _cachedAssetBundle;
    id /* block */  _completionHandler;
    SFDeviceAssetQuery * _deviceAssetQuery;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSError * _error;
    NSBundle * _fallbackAssetBundle;
    NSObject<OS_dispatch_source> * _timer;
    bool  _useProcessLocalCache;
}

@property (nonatomic, readonly) NSBundle *assetBundle;
@property (nonatomic, readonly) NSBundle *cachedAssetBundle;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) SFDeviceAssetQuery *deviceAssetQuery;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSBundle *fallbackAssetBundle;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, readonly) bool useProcessLocalCache;

- (void).cxx_destruct;
- (id)assetBundle;
- (id)bundleAtURL:(id)arg1 error:(id*)arg2;
- (id)bundleURLFromAssetURL:(id)arg1;
- (id)cachedAssetBundle;
- (void)cancelTimeout;
- (bool)completeIfPossible;
- (void)completeWithBundle:(id)arg1 isFallback:(bool)arg2 isCached:(bool)arg3;
- (id /* block */)completionHandler;
- (id)deviceAssetQuery;
- (id)dispatchQueue;
- (id)error;
- (id)fallbackAssetBundle;
- (id)initWithDeviceQuery:(id)arg1 dispatchQueue:(id)arg2 useProcessLocalCache:(bool)arg3 timeout:(double)arg4 withCompletionHandler:(id /* block */)arg5;
- (bool)processCanAccessURL:(id)arg1 error:(id*)arg2;
- (id)timer;
- (bool)updateTaskWithAssetBundleURL:(id)arg1 error:(id)arg2 isFallback:(bool)arg3 isCached:(bool)arg4;
- (bool)updateTaskWithAssetURL:(id)arg1 error:(id)arg2 isFallback:(bool)arg3 isCached:(bool)arg4;
- (bool)updateTaskWithBundle:(id)arg1 error:(id)arg2 isFallback:(bool)arg3 isCached:(bool)arg4;
- (bool)useProcessLocalCache;

@end
