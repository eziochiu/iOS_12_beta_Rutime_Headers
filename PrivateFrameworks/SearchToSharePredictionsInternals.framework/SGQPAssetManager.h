/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPAssetManager : NSObject <SGQPSettingsObserver> {
    id /* block */  _assetFactory;
    _PASAsset * _commonAsset;
    NSString * _currentABGroup;
    NSString * _currentLocale;
    _PASAsset * _currentPrimaryAsset;
    _PASNotificationToken * _currentPrimaryAssetNotificationToken;
    NSObject<SGQPAssetUpdateDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    SGQPSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)abGroup:(id)arg1 existsIn:(id)arg2;
+ (id)chooseABGroupForVendorUUID:(id)arg1 fromGroups:(id)arg2;
+ (id)chooseLocaleIdForCurrentLocale:(id)arg1 availableLocales:(id)arg2;
+ (id)thisDeviceVendorUUID;

- (void).cxx_destruct;
- (void)_decideWhatPrimaryAssetVariantAndRequestIt;
- (void)commonAssetReady;
- (id)init;
- (id)initWithDelegate:(id)arg1 settings:(id)arg2;
- (id)initWithDelegate:(id)arg1 settings:(id)arg2 assetFactory:(id /* block */)arg3;
- (void)primaryAssetReady;
- (void)settingsChanged;
- (void)waitForQueueForTesting;

@end
