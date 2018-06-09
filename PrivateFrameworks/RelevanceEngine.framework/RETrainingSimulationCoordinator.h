/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RETrainingSimulationCoordinator : RESingleton <RETrainingSimulationServerInterface> {
    NSMutableDictionary * _elementsAddedByEngine;
    bool  _isActivelyTraining;
    RETrainingSimulationServer * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isActivelyTraining;
@property (readonly) Class superclass;

+ (void)prewarm;

- (void).cxx_destruct;
- (id)_engineWithName:(id)arg1;
- (void)_relevanceEnginesDidChange;
- (id)_unavailableEngineWithNameError:(id)arg1;
- (void)availableRelevanceEngines:(id /* block */)arg1;
- (void)dealloc;
- (void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllElementsInRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (void)gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (bool)isActivelyTraining;
- (void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(id /* block */)arg3;
- (void)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)setIsActivelyTraining:(bool)arg1;

@end
