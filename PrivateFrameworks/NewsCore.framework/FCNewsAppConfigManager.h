/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNewsAppConfigManager : NSObject <FCCoreConfigurationManager, FCFeldsparIDProviderObserving, FCNewsAppConfigurationManager> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSArray * _additionalSegmentSetIDs;
    NSHashTable * _appConfigObservers;
    FCContextConfiguration * _contextConfiguration;
    NSHashTable * _coreConfigObservers;
    <FCNewsAppConfiguration> * _currentConfiguration;
    RCConfigurationSettings * _currentSettings;
    <FCFeldsparIDProvider> * _feldsparIDProvider;
    FCKeyValueStore * _localStore;
    bool  _overrideDisableABTesting;
    NSArray * _overrideSegmentSetIDs;
    RCConfigurationManager * _remoteConfigurationManager;
    FCAsyncSerialQueue * _requestSerialQueue;
    NSArray * _segmentSetIDs;
    bool  _shouldIgnoreCache;
    NSArray * _treatmentIDs;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, copy) NSArray *additionalSegmentSetIDs;
@property (nonatomic, retain) NSHashTable *appConfigObservers;
@property (nonatomic, readonly) <FCNewsAppConfiguration> *appConfiguration;
@property (nonatomic, readonly) NSArray *availableExperiments;
@property (nonatomic, readonly) <FCCoreConfiguration> *configuration;
@property (nonatomic, readonly) FCContextConfiguration *contextConfiguration;
@property (nonatomic, retain) NSHashTable *coreConfigObservers;
@property (nonatomic, copy) <FCNewsAppConfiguration> *currentConfiguration;
@property (nonatomic, readonly, copy) NSNumber *currentModdedBucketID;
@property (nonatomic, copy) RCConfigurationSettings *currentSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *feldsparID;
@property (nonatomic, readonly) <FCFeldsparIDProvider> *feldsparIDProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCKeyValueStore *localStore;
@property (nonatomic) bool overrideDisableABTesting;
@property (nonatomic, copy) NSArray *overrideSegmentSetIDs;
@property (nonatomic, readonly) RCConfigurationManager *remoteConfigurationManager;
@property (nonatomic, readonly) FCAsyncSerialQueue *requestSerialQueue;
@property (nonatomic, copy) NSArray *segmentSetIDs;
@property (nonatomic) bool shouldIgnoreCache;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *treatmentIDs;

+ (id)internalOverrideAdditionalSegmentSetIDs;
+ (id)internalOverrideSegmentSetIDs;

- (void).cxx_destruct;
- (bool)_checkIfShouldIgnoreCache;
- (void)_configurationDidChange;
- (id)_configurationSettingsWithRequestKey:(id)arg1 feldsparID:(id)arg2 storefrontID:(id)arg3 contextConfiguration:(id)arg4;
- (unsigned long long)_configurationSourceForSourceName:(id)arg1;
- (void)_fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)_loadConfigurationFromStore:(id)arg1;
- (id)_permanentURLForRequestKey:(id)arg1 storefrontID:(id)arg2;
- (id)_recordIDPrefixForRequestKey:(id)arg1;
- (unsigned long long)_remoteConfigurationEnvironmentForContextIdentifier:(long long)arg1;
- (id)_responseKeyForRequestKey:(id)arg1;
- (id)_storefrontID;
- (id)accessQueue;
- (void)addAppConfigObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)additionalSegmentSetIDs;
- (id)appConfigObservers;
- (id)appConfiguration;
- (id)configuration;
- (id)contextConfiguration;
- (id)coreConfigObservers;
- (id)currentConfiguration;
- (id)currentSettings;
- (id)feldsparID;
- (id)feldsparIDProvider;
- (void)feldsparIDProviderDidChangeFeldsparID:(id)arg1;
- (void)fetchAppConfigurationIfNeededWithCompletion:(id /* block */)arg1;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchConfigurationIfNeededWithCompletion:(id /* block */)arg1;
- (void)fetchConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchTrendingSearchesIfNeededWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithContextConfiguration:(id)arg1 contentHostDirectoryFileURL:(id)arg2 feldsparIDProvider:(id)arg3;
- (id)localStore;
- (bool)overrideDisableABTesting;
- (id)overrideSegmentSetIDs;
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)arg1 refreshCompletion:(id /* block */)arg2;
- (id)remoteConfigurationManager;
- (void)removeAppConfigObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)requestSerialQueue;
- (id)segmentSetIDs;
- (void)setAdditionalSegmentSetIDs:(id)arg1;
- (void)setAppConfigObservers:(id)arg1;
- (void)setCoreConfigObservers:(id)arg1;
- (void)setCurrentConfiguration:(id)arg1;
- (void)setCurrentSettings:(id)arg1;
- (void)setLocalStore:(id)arg1;
- (void)setOverrideDisableABTesting:(bool)arg1;
- (void)setOverrideSegmentSetIDs:(id)arg1;
- (void)setSegmentSetIDs:(id)arg1;
- (void)setShouldIgnoreCache:(bool)arg1;
- (void)setTreatmentIDs:(id)arg1;
- (bool)shouldIgnoreCache;
- (id)treatmentIDs;

@end
