/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUGlobalSettings : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _settings;
}

+ (bool)bufferStorageFactoryUsePool;
+ (long long)cacheNodeCacheSizeLimit;
+ (id)cacheNodeDirectoryURL;
+ (long long)cacheNodeFilePermissions;
+ (double)cacheNodeImageCompression;
+ (long long)deviceDefaultSampleMode;
+ (bool)deviceDisableMetal;
+ (bool)deviceDisableOpenGL;
+ (bool)devicePrintRenderer;
+ (id)globalSettings;
+ (bool)imageLayerDebug;
+ (bool)imageRenderJobUseSurfaceRenderer;
+ (bool)imageRenderJobUseTextureRenderer;
+ (bool)imageSourceDisableCacheImmediately;
+ (bool)imageSourceDisableRAW;
+ (long long)imageTileSize;
+ (bool)isViewDebugEnabled;
+ (bool)logPeakRenderCIUsuage;
+ (id)pipelineSourceURL;
+ (bool)platformHasWideColor;
+ (double)renderJSPipelineTimeout;
+ (bool)renderVideoLive;
+ (bool)rendererClampToAlpha;
+ (bool)rendererUseHalfFloat;
+ (bool)rendererUseP3Linear;
+ (void)reset;
+ (void)setBufferStorageFactoryUsePool:(bool)arg1;
+ (void)setCacheNodeCacheSizeLimit:(long long)arg1;
+ (void)setCacheNodeDirectoryURL:(id)arg1;
+ (void)setCacheNodeFilePermissions:(long long)arg1;
+ (void)setCacheNodeImageCompression:(double)arg1;
+ (void)setDeviceDefaultSampleMode:(long long)arg1;
+ (void)setDeviceDisableMetal:(bool)arg1;
+ (void)setDeviceDisableOpenGL:(bool)arg1;
+ (void)setDevicePrintRenderer:(bool)arg1;
+ (void)setImageLayerDebug:(bool)arg1;
+ (void)setImageRenderJobUseSurfaceRenderer:(bool)arg1;
+ (void)setImageRenderJobUseTextureRenderer:(bool)arg1;
+ (void)setImageSourceDisableCacheImmediately:(bool)arg1;
+ (void)setImageSourceDisableRAW:(bool)arg1;
+ (void)setImageTileSize:(long long)arg1;
+ (void)setLogPeakRenderCIUsuage:(bool)arg1;
+ (void)setPipelineSourceURL:(id)arg1;
+ (void)setPlatformHasWideColor:(bool)arg1;
+ (void)setRenderJSPipelineTimeout:(double)arg1;
+ (void)setRenderVideoLive:(bool)arg1;
+ (void)setRendererClampToAlpha:(bool)arg1;
+ (void)setRendererUseHalfFloat:(bool)arg1;
+ (void)setRendererUseP3Linear:(bool)arg1;
+ (void)setStoragePoolMigrationDelay:(double)arg1;
+ (void)setStoragePoolNonPurgeableLimit:(long long)arg1;
+ (void)setStoragePoolPurgeableLimit:(long long)arg1;
+ (void)setSurfaceStorageFactoryUsePool:(bool)arg1;
+ (void)setViewDebugEnabled:(bool)arg1;
+ (double)storagePoolMigrationDelay;
+ (long long)storagePoolNonPurgeableLimit;
+ (long long)storagePoolPurgeableLimit;
+ (bool)surfaceStorageFactoryUsePool;

- (void).cxx_destruct;
- (id)_settingForKey:(id)arg1 defaultValue:(id /* block */)arg2;
- (bool)boolSettingForKey:(id)arg1 defaultValue:(id /* block */)arg2;
- (double)doubleSettingForKey:(id)arg1 defaultValue:(id /* block */)arg2;
- (id)init;
- (long long)integerSettingForKey:(id)arg1 defaultValue:(id /* block */)arg2;
- (void)reset;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)settingForKey:(id)arg1 defaultValue:(id /* block */)arg2;
- (id)stringSettingForKey:(id)arg1 defaultValue:(id /* block */)arg2;
- (id)urlSettingForKey:(id)arg1 defaultValue:(id /* block */)arg2;

@end
