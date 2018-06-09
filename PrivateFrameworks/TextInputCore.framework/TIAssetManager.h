/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIAssetManager : NSObject <TIAssetManaging> {
    bool  _assetDownloadingEnabled;
    NSMutableDictionary * _assetsByInputMode;
    NSMutableDictionary * _assetsByInputModeLevel;
    NSArray * _currentActiveRegions;
    NSArray * _currentNormalizedActiveRegions;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _enabledInputModeIdentifiersProviderBlock;
    TIMobileAssetMediator * _mobileAssetMediator;
    NSMutableArray * _notificationTokens;
    TIMobileAssetTimer * _timer;
}

@property (nonatomic, readonly) bool assetDownloadingEnabled;
@property (nonatomic, readonly) NSMutableDictionary *assetsByInputMode;
@property (nonatomic, readonly) NSMutableDictionary *assetsByInputModeLevel;
@property (nonatomic, retain) NSArray *currentActiveRegions;
@property (nonatomic, retain) NSArray *currentNormalizedActiveRegions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ enabledInputModeIdentifiersProviderBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TIMobileAssetMediator *mobileAssetMediator;
@property (readonly) Class superclass;
@property (nonatomic, retain) TIMobileAssetTimer *timer;

+ (id)_addressFromRegion:(id)arg1;
+ (id)_regionFromAddress:(id)arg1;
+ (void)setSharedAssetManager:(id)arg1;
+ (id)sharedAssetManager;
+ (id)sharedAssetManagerWithEnabledInputModesProvider:(id /* block */)arg1;
+ (id)singletonInstanceWithEnabledInputModesProvider:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)activeInputModeLevels;
- (void)addAssets:(id)arg1;
- (long long)amountOfPurgeableAssetsWithUrgency:(int)arg1;
- (void)appleKeyboardsInternalSettingsChanged:(id)arg1;
- (void)appleKeyboardsPreferencesChanged:(id)arg1;
- (id)assetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2;
- (bool)assetDownloadingEnabled;
- (id)assetsByInputMode;
- (id)assetsByInputModeLevel;
- (id)currentActiveRegions;
- (id)currentNormalizedActiveRegions;
- (void)dealloc;
- (id)defaultEnabledInputModes;
- (void)didUpdateAssets;
- (id)dispatchQueue;
- (id /* block */)enabledInputModeIdentifiersProviderBlock;
- (id)enabledInputModes;
- (void)gatherStatistics:(id)arg1;
- (id)init;
- (id)initWithEnabledInputModesProvider:(id /* block */)arg1;
- (id)levelsForInputMode:(id)arg1;
- (id)mobileAssetMediator;
- (void)newAssetInstalled:(id)arg1;
- (void)performMaintenance;
- (bool)purgeAsset:(id)arg1;
- (id)purgeableAssets;
- (id)recursiveDescription;
- (void)registerCacheDeleteCallbacks;
- (void)registerForNotifications;
- (void)scheduleNextDownload;
- (void)setCurrentActiveRegions:(id)arg1;
- (void)setCurrentNormalizedActiveRegions:(id)arg1;
- (void)setEnabledInputModeIdentifiersProviderBlock:(id /* block */)arg1;
- (void)setTimer:(id)arg1;
- (void)startDownloadingUninstalledAssetsForInputModeLevels:(id)arg1 regions:(id)arg2;
- (void)submitStatistics:(id)arg1;
- (id)timer;
- (long long)tryToPurgeAssetAmount:(long long)arg1 urgency:(int)arg2;
- (void)unregisterForNotifications;
- (void)updateAssetDownloadingEnabled;
- (id)updateInputModesAndGetNewLevels;
- (void)updateInstalledAssets;
- (id)updatedActiveRegions;

@end
