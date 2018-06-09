/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneManager : NSObject <FBSDisplayObserving, FBSceneDelegate, FBSceneLayerManagerObserver, FBUISceneManager> {
    FBSSceneClientSettingsDiffInspector * _clientSettingsDiffInspector;
    FBSceneManagerObserver * _delegate;
    NSMutableDictionary * _displayIdentityToOcclusionsStack;
    NSMutableDictionary * _displayIdentityToRootWindow;
    FBSceneEventQueue * _eventQueue;
    NSMutableOrderedSet * _observers;
    NSMutableArray * _pendingIdleEvents;
    NSMapTable * _providerToSceneMap;
    NSHashTable * _providersWithOpenTransactions;
    NSMutableDictionary * _scenesByID;
    unsigned long long  _synchronizationBlockDepth;
    NSMutableDictionary * _workspacesByID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSceneManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isSynchronizingSceneUpdates;
+ (id)sharedInstance;
+ (void)synchronizeChanges:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_appendCommonDescriptionItemsToBuilder:(id)arg1;
- (void)_applyMutableSettings:(id)arg1 toScene:(id)arg2 withTransitionContext:(id)arg3 completion:(id /* block */)arg4;
- (void)_beginSynchronizationBlock;
- (id)_createSceneWithDefinition:(id)arg1 initialParameters:(id)arg2 clientProvider:(id)arg3 transitionContext:(id)arg4;
- (void)_destroyScene:(id)arg1 withTransitionContext:(id)arg2;
- (void)_endSynchronizationBlock;
- (void)_enqueueEventForScene:(id)arg1 withName:(id)arg2 block:(id /* block */)arg3;
- (void)_enqueueInternalObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 withBlock:(id /* block */)arg3;
- (void)_enqueueObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 preferInternal:(bool)arg3 withBlock:(id /* block */)arg4;
- (void)_enqueueObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 withBlock:(id /* block */)arg3;
- (id)_eventForScene:(id)arg1 withName:(id)arg2 block:(id /* block */)arg3;
- (void)_executeEventWhenIdle:(id)arg1;
- (void)_executeNextIdleEventIfAppropriate;
- (void)_noteSceneChangedLevel:(id)arg1;
- (void)_noteSceneMovedToBackground:(id)arg1;
- (void)_noteSceneMovedToForeground:(id)arg1;
- (id)_occlusionStackForDisplayIdentity:(id)arg1 creatingIfNecessary:(bool)arg2;
- (void)_positionWrapperViewInRootViewOrderedCorrectly:(id)arg1 rootWindow:(id)arg2;
- (void)_reEvaluateNeedForRootWindowOnDisplayWithIdentity:(id)arg1;
- (id)_rootWindowForDisplayConfiguration:(id)arg1 createIfNecessary:(bool)arg2;
- (id)_rootWindowForRootDisplayIdentity:(id)arg1 createIfNecessary:(bool)arg2;
- (void)_sendOutstandingOcclusionChangesForStack:(id)arg1 withTransitionContext:(id)arg2;
- (void)_startLayerHostingForScene:(id)arg1;
- (void)_stopLayerHostingForScene:(id)arg1;
- (void)_updateScene:(id)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 completion:(id /* block */)arg4;
- (void)addObserver:(id)arg1;
- (void)attachDefaultTransform:(id)arg1 forDisplay:(id)arg2;
- (void)attachDefaultTransform:(id)arg1 forDisplayWithRootIdentity:(id)arg2;
- (id)createSceneWithDefinition:(id)arg1 initialParameters:(id)arg2;
- (id)createSceneWithIdentifier:(id)arg1 display:(id)arg2 settings:(id)arg3 initialClientSettings:(id)arg4 clientProvider:(id)arg5 transitionContext:(id)arg6;
- (id)createSceneWithIdentifier:(id)arg1 settings:(id)arg2 initialClientSettings:(id)arg3 clientProvider:(id)arg4 transitionContext:(id)arg5;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)destroyScene:(id)arg1 withTransitionContext:(id)arg2;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (void)enumerateScenesWithBlock:(id /* block */)arg1;
- (id)init;
- (void)invalidateSceneWorkspace:(id)arg1;
- (void)registerSceneWorkspace:(id)arg1;
- (void)removeDefaultTransform:(id)arg1 forDisplay:(id)arg2;
- (void)removeDefaultTransform:(id)arg1 forDisplayWithRootIdentity:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)scene:(id)arg1 handleUpdateToSettings:(id)arg2 withTransitionContext:(id)arg3 completion:(id /* block */)arg4;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)arg1;
- (void)sceneLayerManagerWillStartTrackingLayers:(id)arg1;
- (id)sceneWithIdentifier:(id)arg1;
- (id)scenesMatchingPredicate:(id)arg1;
- (id)scenesPassingTest:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)shutdown:(bool)arg1;
- (void)workspace:(id)arg1 createSceneWithName:(id)arg2 specification:(id)arg3;
- (void)workspace:(id)arg1 destroySceneWithIdentifier:(id)arg2;
- (id)workspace:(id)arg1 sceneIdentifierForName:(id)arg2;

@end
