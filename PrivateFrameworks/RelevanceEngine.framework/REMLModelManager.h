/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REMLModelManager : RERelevanceEngineSubsystem <RELoggable> {
    REContentRanker * _contentRanker;
    REMLMetricsSet * _metrics;
    REMLLinearModel * _model;
    NSString * _modelFileLocation;
    REObserverStore * _observers;
    NSArray * _orderedFeatures;
    bool  _supportsContentRanking;
    NSObject<OS_dispatch_queue> * _trainingQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createOrderFeatureListFromModelFileURL:(id)arg1 mlFeatures:(id)arg2;
- (bool)_loadModelAtPath:(id)arg1 mlFeatures:(id)arg2 checkModelVersion:(bool)arg3;
- (void)_notifyObserversThatModelUpdated;
- (id)_orderedModelFeatures;
- (bool)_saveModelToDisk:(id*)arg1;
- (void)addObserver:(id)arg1;
- (void)collectLoggableState:(id /* block */)arg1;
- (id)comparatorWithRules:(id)arg1;
- (id)createOutputFeatureFromDouble:(double)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)initWithRelevanceEngine:(id)arg1;
- (void)performModelClear;
- (void)performTrainingWithFeatureMaps:(id)arg1 content:(id)arg2 events:(id)arg3 interactions:(id)arg4;
- (id)predicitionForLogicalElement:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)sentimentAnalyzer;

@end
