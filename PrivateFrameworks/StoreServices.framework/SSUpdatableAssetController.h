/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSUpdatableAssetController : NSObject <SKUIExternalResourceManager> {
    SSUpdatableAssetManifest * _bundledManifest;
    NSURL * _bundledManifestURL;
    NSString * _bundledManifestVersion;
    SSUpdatableAssetCacheManager * _cacheManager;
    SSXPCConnection * _connection;
    SSUpdatableAssetManifest * _currentManifest;
    NSURL * _manifestURL;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NSURL *bundledManifestURL;
@property (nonatomic, readonly) SSUpdatableAssetManifest *currentManifest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *manifestURL;
@property (nonatomic, readonly) SSUpdatableAssetManifest *newestCachedManifest;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (void).cxx_destruct;
- (id)_bundledManifest;
- (id)_bundledManifestVersion;
- (id)_connection;
- (id)bundledManifestURL;
- (void)clearCache:(id /* block */)arg1;
- (id)currentManifest;
- (void)dealloc;
- (id)initWithBundledManifestURL:(id)arg1;
- (id)initWithBundledManifestURL:(id)arg1 clientIdentifier:(id)arg2;
- (id)manifestURL;
- (id)newestCachedManifest;
- (void)refreshCachedManifest:(id /* block */)arg1;
- (void)setManifestURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (id)imageForResourceName:(id)arg1;

@end
