/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PDImageIODecoder : PDImageDecoder {
    NSObject<OS_dispatch_queue> * _activeRequestQueue;
    NSObject<OS_dispatch_semaphore> * _concurrentRequestSemaphore;
    NSObject<OS_dispatch_queue> * _pendingRequestQueue;
}

+ (id)sharedDecoder;

- (void).cxx_destruct;
- (void)cancelDecodeRequestForID:(unsigned long long)arg1;
- (unsigned long long)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 maxSideLength:(long long)arg3 applyOrientationTransform:(bool)arg4 waitUntilComplete:(bool)arg5 completion:(id /* block */)arg6;
- (id)init;

@end
