/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKRemoteAssetManager : NSObject {
    NSMutableArray * _completionHandlers;
    NSURL * _directoryURL;
    NSMutableDictionary * _manifestItemsByRelativeURL;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _sha1HexFromRelativeManifest;
}

- (void).cxx_destruct;
- (void)_callCompletionHandlersWithFinishState:(bool)arg1 progress:(float)arg2 error:(id)arg3;
- (void)_downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(id /* block */)arg3;
- (void)_flushBundleCaches;
- (bool)addRemoteAssetData:(id)arg1 forManifestItem:(id)arg2 error:(id*)arg3;
- (bool)assetExistsLocally:(id)arg1;
- (id)deviceSpecificItems;
- (id)deviceSpecificItemsForScreenScale:(double)arg1 suffix:(id)arg2;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)arg1;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithFileURL:(id)arg1 queue:(id)arg2;
- (id)itemWithRelativePath:(id)arg1;
- (id)remoteAssetManifests;
- (id)sha1HexFromRelativeManifestWithRelativePath:(id)arg1;

@end
