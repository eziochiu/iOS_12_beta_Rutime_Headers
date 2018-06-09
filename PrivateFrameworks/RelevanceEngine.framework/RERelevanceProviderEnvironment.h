/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RERelevanceProviderEnvironment : NSObject <REElementRelevanceProviderGenerator, RELoggable> {
    bool  _allowsLocationUse;
    NSHashTable * _customProviders;
    <RERelevanceProviderEnvironmentDelegate> * _delegate;
    REDependencyGraph * _dependencyGraph;
    RERelevanceEngine * _engine;
    NSMutableSet * _providerManagersToUpdate;
    NSHashTable * _providersToUpdate;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _relevanceClassManagerMap;
    NSMapTable * _relevanceHistogramMap;
    NSMutableArray * _relevanceManagers;
    REUpNextDisjointSet * _relevanceProviderSet;
    NSMapTable * _relevanceValues;
    NSLock * _relevanceValuesLock;
    bool  _running;
    REUpNextScheduler * _scheduler;
    REFeatureSet * _supportedFeatures;
}

@property (nonatomic) bool allowsLocationUse;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RERelevanceProviderEnvironmentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long relevanceProviderCount;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRelevanceValue:(id)arg1 forProvider:(id)arg2;
- (id)_histogramForFeature:(id)arg1;
- (id)_histogramForProvider:(id)arg1;
- (void)_onQueue_async:(id /* block */)arg1;
- (id)_providerManagerForProvider:(id)arg1;
- (void)_queue_performUpdate:(id /* block */)arg1;
- (id)_relevaneProviderWithType:(id)arg1 withOptions:(id)arg2;
- (void)_removeRelevanceValueForProvider:(id)arg1;
- (id)_scaleRelevanceProviderValues:(id)arg1 values:(id)arg2;
- (void)accessHistogramForFeature:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)addRelevanceProvider:(id)arg1;
- (bool)allowsLocationUse;
- (void)collectLoggableState:(id /* block */)arg1;
- (bool)containsRelevanceProvider:(id)arg1;
- (id)createRelevaneProviderWithType:(id)arg1 withOptions:(id)arg2;
- (id)currentRelevanceProvidersState;
- (void)dealloc;
- (id)delegate;
- (id)encodeRelevaneProvider:(id)arg1;
- (id)engine;
- (id)featuresForRelevanceProvider:(id)arg1;
- (void)immediateUpdateForRelevanceProviderManager:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithEngine:(id)arg1;
- (bool)isRelevanceProviderHistoric:(id)arg1;
- (bool)isRunning;
- (bool)isSupportedRelevanceProvider:(id)arg1;
- (void)pause;
- (void)relateRelevanceProvider:(id)arg1 toRelevanceProvider:(id)arg2;
- (unsigned long long)relevanceProviderCount;
- (id)relevancesForRelevanceProvider:(id)arg1;
- (id)relevancesForRelevanceProvider:(id)arg1 usingContext:(id)arg2;
- (void)removeRelevanceProvider:(id)arg1;
- (void)resume;
- (void)scheduleUpdateForRelevanceProvider:(id)arg1;
- (void)scheduleUpdateForRelevanceProviderManager:(id)arg1;
- (void)setAllowsLocationUse:(bool)arg1;
- (void)setDelegate:(id)arg1;

@end
