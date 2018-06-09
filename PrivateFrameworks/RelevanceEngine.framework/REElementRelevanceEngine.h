/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REElementRelevanceEngine : RERelevanceEngineSubsystem <REPredictorObserver, RERelevanceProviderEnvironmentDelegate, RESectionDelegate, REUpNextMLModelManagerObserver> {
    REDataSourceManager * _dataSourceManager;
    <REElementRelevanceEngineDelegate> * _delegate;
    bool  _deviceIsLocked;
    NSMutableSet * _elementsNeedingRelevanceUpdate;
    REFeatureTransmuter * _featureTransmuter;
    REKeyMultiValueMap * _identifierElementIdentifierMap;
    NSMutableDictionary * _predictedElements;
    REPredictorManager * _predictorManager;
    RERelevanceProviderEnvironment * _providerEnvironment;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _relevanceProviderElementMap;
    REUpNextScheduler * _scheduler;
    NSMutableDictionary * _sections;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <REElementRelevanceEngineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkPreferences;
- (id)_elementIdentifierForIdentifier:(id)arg1;
- (void)_enumerateAndGenerateSectionComparators:(id /* block */)arg1;
- (id)_identifierForElementIdentifier:(id)arg1;
- (void)_onqueue_async:(id /* block */)arg1;
- (id)_queue_featureMapForElement:(id)arg1 trainingContext:(id)arg2;
- (id)_queue_featureMapForElementWithId:(id)arg1 trainingContext:(id)arg2;
- (void)_queue_scheduleRelevanceUpdateForElement:(id)arg1;
- (void)_queue_updateElementRelevance;
- (void)addElement:(id)arg1 section:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)featureMapForElement:(id)arg1 trainingContext:(id)arg2;
- (id)initWithRelevanceEngine:(id)arg1;
- (void)modelManagerDidUpdateModel:(id)arg1;
- (id)pathForElement:(id)arg1;
- (void)pause;
- (id)predictionForElement:(id)arg1;
- (void)predictorDidUpdate:(id)arg1;
- (void)relevanceEnvironment:(id)arg1 didUpdateRelevanceProvider:(id)arg2;
- (id)relevanceProviderEnvironment;
- (void)removeElement:(id)arg1;
- (void)resume;
- (void)section:(id)arg1 didInsertElement:(id)arg2 atIndex:(long long)arg3 wantsSubsectionPositionUpdate:(bool)arg4;
- (void)section:(id)arg1 didMoveElement:(id)arg2 fromIndex:(long long)arg3 toIndex:(long long)arg4 wantsSubsectionPositionUpdate:(bool)arg5;
- (void)section:(id)arg1 didRemoveElement:(id)arg2 atIndex:(long long)arg3 wantsSubsectionPositionUpdate:(bool)arg4;
- (id)section:(id)arg1 groupForIdentifier:(id)arg2;
- (id)sectionForElement:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
