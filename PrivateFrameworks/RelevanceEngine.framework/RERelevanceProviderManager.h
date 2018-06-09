/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RERelevanceProviderManager : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    int  _boostCount;
    bool  _dataStoresOpened;
    NSObject<OS_dispatch_queue> * _defaultPriorityQueue;
    NSArray * _effectiveFeatures;
    RERelevanceProviderEnvironment * _environment;
    NSObject<OS_dispatch_queue> * _highPriorityQueue;
    NSString * _loggingHeader;
    NSHashTable * _providers;
    NSObject<OS_dispatch_queue> * _relevanceQueue;
    REPriorityQueue * _scheduledUpdates;
    REFeatureSet * _supportedFeatures;
    REUpNextTimer * _updateTimer;
}

@property (nonatomic, readonly) NSArray *allProviders;
@property (nonatomic, readonly) NSArray *effectiveFeatures;
@property (nonatomic) RERelevanceProviderEnvironment *environment;
@property (nonatomic, retain) REFeatureSet *supportedFeatures;

+ (id)_dependencyClasses;
+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (bool)_requiresLocationServices;
+ (id)_sharedProviderQueue;
+ (bool)_supportsHistoricProviders;
+ (bool)_wantsDelayedUpdate;
+ (id)providerManagerClasses;
+ (bool)supportsHistoricProviders;

- (void).cxx_destruct;
- (void)_addedProvider:(id)arg1;
- (void)_closeDataStoresAndObserveChanges;
- (bool)_dataSourcesOpened;
- (void)_enumerateProviders:(id /* block */)arg1;
- (void)_handleSignificantTimeChange;
- (bool)_isHistoricProvider:(id)arg1;
- (bool)_isValidProvider:(id)arg1;
- (void)_loadLoggingHeader;
- (id)_manager_queue;
- (void)_openDataStoresAndObserveChanges;
- (void)_performUpdate:(id)arg1;
- (void)_prepareForUpdate;
- (void)_prepareForUpdateWithCompletion:(id /* block */)arg1;
- (void)_queue_performPendingUpdatesAndScheduleTimerIfNeeded;
- (void)_queue_resetTimer;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (float)_relevanceForProvider:(id)arg1;
- (void)_removeAllPendingUpdates;
- (void)_removeProvider:(id)arg1;
- (void)_scheduleUpdate:(id)arg1;
- (id)_valueForHistoricProvider:(id)arg1 feature:(id)arg2;
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (void)addProvider:(id)arg1;
- (id)allProviders;
- (void)collectLoggableState:(id /* block */)arg1;
- (bool)containsProvider:(id)arg1;
- (void)dealloc;
- (id)effectiveFeatures;
- (id)environment;
- (unsigned long long)hash;
- (id)initWithQueue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)isProviderHistoric:(id)arg1 completion:(id /* block */)arg2;
- (void)pause;
- (void)relevanceForHistoricProvider:(id)arg1 completion:(id /* block */)arg2;
- (void)relevanceForProvider:(id)arg1 completion:(id /* block */)arg2;
- (id)relevanceForProvider:(id)arg1 context:(id)arg2;
- (void)removeProvider:(id)arg1;
- (void)resume;
- (void)setEnvironment:(id)arg1;
- (void)setSupportedFeatures:(id)arg1;
- (id)supportedFeatures;

@end
