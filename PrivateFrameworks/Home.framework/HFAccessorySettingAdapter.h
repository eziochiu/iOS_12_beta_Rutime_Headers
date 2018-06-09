/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingAdapter : NSObject <HFAccessorySettingsObserver, HFMediaObjectObserver> {
    HMAccessory * _accessory;
    HMAccessorySettings * _accessorySettings;
    HFHomeKitDispatcher * _dispatcher;
    NSMutableDictionary * _keyPathStringToFuture;
    NSSet * _keyPaths;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    unsigned long long  _mode;
    id /* block */  _updateHandler;
    HFMediaProfileContainerSettingsValueManager * _valueManager;
    NSMutableDictionary * _watchedSettings;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HMAccessorySettings *accessorySettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFHomeKitDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSMutableDictionary *keyPathStringToFuture;
@property (nonatomic, readonly, copy) NSSet *keyPaths;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, readonly) unsigned long long mode;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) id /* block */ updateHandler;
@property (nonatomic, readonly) HFMediaProfileContainerSettingsValueManager *valueManager;
@property (nonatomic, retain) NSMutableDictionary *watchedSettings;

+ (id)createDefaultHomeSettingAdapterCollectionForProfile:(id)arg1;

- (void).cxx_destruct;
- (id)_beginMonitoringSettingsKeyPath:(id)arg1;
- (id)_endMonitoringSettingsKeyPath:(id)arg1;
- (id)_missingKeyPaths;
- (void)_reportUpdatedValueForSetting:(id)arg1;
- (bool)_setupKeyPaths;
- (void)_setupMissingKeyPaths;
- (void)_tearDownKeyPaths;
- (void)_teardownSetting:(id)arg1;
- (bool)_updateRootAccessorySettings;
- (bool)_updateRootAccessorySettingsIfNeeded;
- (void)_watchSetting:(id)arg1;
- (id)accessory;
- (void)accessorySettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)accessorySettings;
- (void)accessorySettings:(id)arg1 didUpdateSetting:(id)arg2;
- (void)accessorySettings:(id)arg1 didWriteValueForSettings:(id)arg2 failedSettings:(id)arg3;
- (void)accessorySettings:(id)arg1 willWriteValueForSettings:(id)arg2;
- (id)dispatcher;
- (id)home;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(id /* block */)arg4;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 updateHandler:(id /* block */)arg3;
- (id)keyPathStringToFuture;
- (id)keyPaths;
- (void)mediaObject:(id)arg1 didUpdateSettings:(id)arg2;
- (id)mediaProfileContainer;
- (unsigned long long)mode;
- (void)setDispatcher:(id)arg1;
- (void)setKeyPathStringToFuture:(id)arg1;
- (void)setWatchedSettings:(id)arg1;
- (id)settingForKeyPath:(id)arg1;
- (id)settingWatchFutureForKeyPath:(id)arg1;
- (void)settingsDidUpdate:(id)arg1;
- (id /* block */)updateHandler;
- (id)updateSetting:(id)arg1 value:(id)arg2;
- (id)updateSettingWithKeyPath:(id)arg1 value:(id)arg2;
- (id)valueManager;
- (id)watchedSettings;

@end
