/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RELiveElementCoordinator : REElementCoordinator <REDataSourceManagerObserver, REElementDataSourceControllerDelegate, REElementRelevanceEngineDelegate> {
    NSObject<OS_dispatch_queue> * _controllerQueue;
    unsigned long long  _currentReloadTryCount;
    NSMutableDictionary * _elementIdElementMap;
    REElementRelevanceEngine * _relevanceEngine;
    bool  _reloadImmediately;
    NSCountedSet * _remainingInsertOperations;
    NSCountedSet * _remainingRemoveOperations;
    REUpNextScheduler * _scheduler;
    NSMutableArray * _updateList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateSectionsUsingBlock:(id /* block */)arg1;
- (void)_enumerateSectionsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)_interactionForElement:(id)arg1;
- (void)_main_queue_performViewUpdates:(id)arg1 toCoordinator:(id)arg2;
- (void)_onqueue_async:(id /* block */)arg1;
- (void)_queue_addElement:(id)arg1 toSection:(id)arg2;
- (void)_queue_refreshElement:(id)arg1;
- (void)_queue_reload;
- (void)_queue_reloadElement:(id)arg1;
- (void)_queue_removeElement:(id)arg1;
- (void)_queue_scheduleElementUpdate:(id)arg1;
- (void)addElement:(id)arg1 toSection:(id)arg2;
- (void)dataSourceManager:(id)arg1 didLoadDataSourceController:(id)arg2;
- (void)dataSourceManager:(id)arg1 willUnloadDataSourceController:(id)arg2;
- (void)elementDataSourceController:(id)arg1 didAddElement:(id)arg2 toSection:(id)arg3;
- (void)elementDataSourceController:(id)arg1 didRefreshElement:(id)arg2;
- (void)elementDataSourceController:(id)arg1 didReloadElement:(id)arg2;
- (void)elementDataSourceController:(id)arg1 didRemoveElement:(id)arg2;
- (bool)elementDataSourceController:(id)arg1 isElementVisible:(id)arg2;
- (void)elementDataSourceController:(id)arg1 performBatchUpdates:(id /* block */)arg2;
- (id)elementForElementId:(id)arg1;
- (id)elementRelevanceEngine;
- (id)featureMapForElementId:(id)arg1 trainingContext:(id)arg2;
- (id)initWithRelevanceEngine:(id)arg1;
- (id)predictionForElementAtPath:(id)arg1;
- (void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4;
- (void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 elementWasAdded:(id)arg2;
- (void)relevanceEngine:(id)arg1 elementWasRemoved:(id)arg2;
- (void)removeElement:(id)arg1;

@end
