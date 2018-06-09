/* made by EzioChiu.
 */

@protocol MPCModelPlaybackAssetCacheProviding <NSObject>

@required

- (void)clearPlaybackAssetCacheFileAssetForGenericObject:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: MPModelGenericObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getPlaybackAssetCacheDestinationURL:(id*)arg1 purchaseBundleDestinationURL:(id*)arg2 forGenericObject:(MPModelGenericObject *)arg3 assetQualityType:(long long)arg4 pathExtension:(NSString *)arg5;
- (void)setPlaybackAssetCacheFileAsset:(void *)arg1 forGenericObject:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: MPModelFileAsset *, MPModelGenericObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
