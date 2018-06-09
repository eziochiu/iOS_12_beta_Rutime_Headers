/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadFileManifest : NSObject {
    SSXPCConnection * _connection;
    long long  _manifestType;
}

@property (readonly) long long manifestType;

- (void)_removeItemsWithAssetPaths:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)getPathsForFilesWithClass:(long long)arg1 completionBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithManifestType:(long long)arg1;
- (long long)manifestType;
- (void)rebuildManifestWithCompletionBlock:(id /* block */)arg1;
- (void)removeItemWithAssetPath:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)removeItemsWithAssetPaths:(id)arg1 completionBlock:(id /* block */)arg2;

@end
