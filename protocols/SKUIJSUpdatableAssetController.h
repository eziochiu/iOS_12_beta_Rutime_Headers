/* made by EzioChiu.
 */

@protocol SKUIJSUpdatableAssetController <JSExport>

@required

- (NSString *)currentManifestVersion;
- (NSString *)loadResource:(NSString *)arg1;
- (NSString *)newestCachedManifestVersion;
- (void)refreshCachedManifest:(JSValue *)arg1;

@end
