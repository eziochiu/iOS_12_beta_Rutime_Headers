/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAssetManager : NSObject <CSLanguageCodeUpdateMonitorDelegate, CSSpeechEndpointAssetMetaUpdateMonitorDelegate, CSVoiceTriggerAssetMetaUpdateMonitorDelegate> {
    NSDictionary * _csAssetsDictionary;
    NSString * _currentLanguageCode;
    CSPolicy * _enablePolicy;
    NSMutableDictionary * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSString *currentLanguageCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)getEndpointAssetCurrentCompatibilityVersion;
+ (id)getEndpointAssetTypeString;
+ (unsigned long long)getVoiceTriggerAssetCurrentCompatibilityVersion;
+ (id)getVoiceTriggerAssetTypeString;
+ (id)predicateForAssetType:(unsigned long long)arg1 language:(id)arg2;
+ (id)predicateForfetchRemoteMetadataForAssetType:(unsigned long long)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)CSSpeechEndpointAssetMetaUpdateMonitor:(id)arg1 didReceiveNewSpeechEndpointAssetMetaData:(bool)arg2;
- (void)CSVoiceTriggerAssetMetaUpdateMonitor:(id)arg1 didReceiveNewVoiceTriggerAssetMetaData:(bool)arg2;
- (id)_assetQueryForAssetType:(unsigned long long)arg1 withPredicate:(id)arg2 localOnly:(bool)arg3;
- (id)_defaultDownloadOptions;
- (void)_downloadAsset:(id)arg1 withComplete:(id /* block */)arg2;
- (void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2;
- (void)_fetchRemoteMetaData;
- (id)_findLatestInstalledAsset:(id)arg1;
- (id)_installedAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2;
- (void)_installedAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2 completion:(id /* block */)arg3;
- (bool)_isReadyToUse;
- (void)_runAssetQuery:(id)arg1 completion:(id /* block */)arg2;
- (void)_startDownloadingAsset:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_updateFromRemoteToLocalAssets:(id)arg1 forAssetType:(unsigned long long)arg2;
- (void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2;
- (id)assetForCurrentLanguageOfType:(unsigned long long)arg1;
- (void)assetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)assetOfType:(unsigned long long)arg1 language:(id)arg2;
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(id /* block */)arg3;
- (id)currentLanguageCode;
- (id)init;
- (id)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1;
- (void)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;
- (void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(id /* block */)arg3;
- (id)installedAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2;
- (void)installedAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2 completion:(id /* block */)arg3;
- (void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2;

@end
