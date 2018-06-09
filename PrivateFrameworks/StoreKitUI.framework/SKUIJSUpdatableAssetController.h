/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIJSUpdatableAssetController : IKJSObject <SKUIJSUpdatableAssetController> {
    SKUIClientContext * _clientContext;
}

- (void).cxx_destruct;
- (id)currentManifestVersion;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2;
- (id)loadResource:(id)arg1;
- (id)newestCachedManifestVersion;
- (void)refreshCachedManifest:(id)arg1;

@end
