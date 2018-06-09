/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetResourceManager : NSObject {
    int  _currentRequestID;
    NSMutableDictionary * _requestsById;
    NSOperationQueue * _resourceRequestQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_streamWriteDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_synchronized:(id /* block */)arg1;
- (id)assetUUIDsWithNonLocalResourcesForAssetUUIDs:(id)arg1 cplResourceTypes:(id)arg2;
- (void)cancelDataRequest:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)photoLibrary;
- (int)requestDataForAssetResource:(id)arg1 options:(id)arg2 dataReceivedHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (int)requestFileURLForAssetResource:(id)arg1 options:(id)arg2 urlReceivedHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)writeDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;

@end
