/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTAssetManager : NSObject {
    VTPolicy * _enablePolicy;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_assetQueryForLanguage:(id)arg1 supportPremium:(bool)arg2 localOnly:(bool)arg3;
- (id)_createPredicateForLanguage:(id)arg1 supportPremium:(bool)arg2;
- (id)_defaultDownloadOptions;
- (void)_downloadAsset:(id)arg1 withComplete:(id /* block */)arg2;
- (void)_fetchRemoteAssetForLanguage:(id)arg1 supportPremium:(bool)arg2;
- (void)_fetchRemoteMetaData;
- (id)_findLatestInstalledAsset:(id)arg1;
- (id)_installedAssetForLanguage:(id)arg1 supportPremium:(bool)arg2;
- (bool)_isReadyToUse;
- (void)_runAssetQuery:(id)arg1 completion:(id /* block */)arg2;
- (void)_startDownloadingVoiceTriggerAsset:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_updateFromRemoteToLocalAssets:(id)arg1;
- (id)assetForLanguage:(id)arg1;
- (id)init;
- (id)installedAssetForLanguage:(id)arg1;

@end
