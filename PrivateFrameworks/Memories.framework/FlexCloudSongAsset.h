/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FlexCloudSongAsset : FMSongAsset {
    FlexCloudManager * _cloudManager;
}

@property (readonly) FlexCloudManager *cloudManager;

- (void).cxx_destruct;
- (unsigned long long)assetStatus;
- (void)cancelDownload;
- (id)cloudManager;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1;
- (bool)contentUpdateAvaliable;
- (long long)contentVersionForAssetLocation:(unsigned long long)arg1;
- (id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 cloudManager:(id)arg4 contentVersion:(long long)arg5 compatibilityVersion:(long long)arg6;
- (bool)isCloudBacked;
- (void)purgeLocalCache;
- (void)requestDownload;

@end
