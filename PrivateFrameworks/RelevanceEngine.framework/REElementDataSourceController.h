/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REElementDataSourceController : NSObject <REElementDataSourceDelegate> {
    bool  _allowsLocationUse;
    int  _boostCount;
    NSArray * _contentAttributes;
    REElementDataSource * _dataSource;
    Class  _dataSourceClass;
    NSMutableDictionary * _dataSourceElementIdentifierMap;
    NSMutableDictionary * _dataSourceElementSectionMap;
    NSMutableSet * _dataSourceElements;
    NSObject<OS_dispatch_queue> * _defaultPriorityQueue;
    <REElementDataSourceControllerDelegate> * _delegate;
    NSMutableArray * _enqueuedBlocks;
    bool  _hasDataAvailable;
    NSObject<OS_dispatch_queue> * _highPriorityQueue;
    bool  _isPerformingReload;
    NSString * _loggingHeader;
    RERelevanceProviderEnvironment * _providerEnvironment;
    NSObject<OS_dispatch_queue> * _queue;
    RERelevanceEngine * _relevanceEngine;
    REUpNextScheduler * _reloadScheduler;
    unsigned long long  _state;
    NSSet * _supportedSections;
    bool  _supportsContentRelevance;
    REUpNextScheduler * _updateScheduler;
    NSMutableArray * _updates;
    bool  _wantsReloadWhilePaused;
    bool  _willUnload;
}

@property (nonatomic, readonly) NSArray *allElements;
@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) REElementDataSource *dataSource;
@property (nonatomic, readonly) Class dataSourceClass;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <REElementDataSourceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasLoadedData;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

+ (id)_sharedDataSourceQueue;

- (void).cxx_destruct;
- (void)_addElementIdentifier:(id)arg1;
- (id)_allDataSourceElements;
- (bool)_containsElementIdentifier:(id)arg1;
- (id)_dataSourceIdentifierFromIdentifier:(id)arg1;
- (id)_elementForIdentifier:(id)arg1;
- (id)_elementsByRemovingInvalidElements:(id)arg1;
- (id)_groupElements:(id)arg1 bySections:(id)arg2;
- (void)_handleDeviceLockStateChange:(id)arg1;
- (void)_handleSignifiantTimeChange:(id)arg1;
- (void)_loadLoggingHeader;
- (void)_namespaceElementIdentifier:(id)arg1 section:(id)arg2;
- (void)_performOrEnqueueUpdateBlock:(id /* block */)arg1;
- (id)_queue_elementsForIds:(id)arg1;
- (void)_queue_performUpdates;
- (void)_queue_processUpdates:(id)arg1 forSection:(id)arg2;
- (void)_queue_reload:(id /* block */)arg1;
- (void)_queue_scheduleUpdate:(id)arg1;
- (void)_queue_updateDataSourceLocationUse;
- (void)_removeElementForIdentifier:(id)arg1;
- (void)_removeElementIdentifier:(id)arg1;
- (id)_sectionForElementWithIdentifier:(id)arg1;
- (void)_setSection:(id)arg1 forElementWithIdentifier:(id)arg2;
- (id)_shallowCopiedElements:(id)arg1;
- (void)_storeElement:(id)arg1;
- (id)_updateRelevanceProvidersForElement:(id)arg1;
- (bool)_validElement:(id)arg1;
- (void)addElements:(id)arg1 toSection:(unsigned long long)arg2;
- (void)addElements:(id)arg1 toSectionWithIdentifier:(id)arg2;
- (id)allElements;
- (id)applicationBundleIdentifier;
- (id)bundleIdentifier;
- (void)collectLoggableState:(id /* block */)arg1;
- (void)dataBecameAvailable;
- (id)dataSource;
- (Class)dataSourceClass;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)elementDidBecomeHidden:(id)arg1;
- (id)elementOperationQueue;
- (void)elementWillBecomeVisible:(id)arg1;
- (void)fetchElementWithIdentifierVisible:(id)arg1 withHandler:(id /* block */)arg2;
- (bool)hasElementWithId:(id)arg1 inSection:(unsigned long long)arg2;
- (bool)hasElementWithId:(id)arg1 inSectionWithIdentifier:(id)arg2;
- (bool)hasLoadedData;
- (id)initWithRelevanceEngine:(id)arg1 dataSourceClass:(Class)arg2;
- (void)invalidateAndReload;
- (void)invalidateElements;
- (void)pause;
- (void)prepareToUnload;
- (void)refreshElement:(id)arg1;
- (void)reloadElement:(id)arg1;
- (void)removeElements:(id)arg1 fromSection:(unsigned long long)arg2;
- (void)removeElementsWithIds:(id)arg1;
- (void)resume;
- (void)setAllowsLocationUse:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
