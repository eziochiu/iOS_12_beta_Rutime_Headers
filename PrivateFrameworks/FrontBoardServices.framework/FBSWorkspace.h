/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspace : NSObject <FBSWorkspaceClientDelegate> {
    FBSSerialQueue * _callOutQueue;
    FBSWorkspaceClient * _client;
    <FBSWorkspaceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _scenesByIdentifier;
    NSObject<OS_dispatch_queue> * _scenesQueue;
    unsigned long long  _signpostName;
    bool  _synchronizingFence;
    BSMutableIntegerMap * _triggerToFenceNameMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSWorkspaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSSerialQueue *queue;
@property (nonatomic, readonly, copy) NSArray *scenes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_client;
- (Class)_clientClass;
- (id)_internalQueue;
- (void)_performDelegateCallOut:(id /* block */)arg1;
- (id)_sceneWithIdentifier:(id)arg1;
- (void)client:(id)arg1 handleActions:(id)arg2;
- (void)client:(id)arg1 handleCreateScene:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)client:(id)arg1 handleDestroyScene:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)clientBeginTransaction:(id)arg1;
- (void)clientEndTransaction:(id)arg1;
- (void)clientSystemApplicationTerminated:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)enumerateScenesWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)initWithSerialQueue:(id)arg1;
- (bool)isTrackingAnySystemAnimationFence;
- (bool)isUIApplicationWorkspace;
- (id)queue;
- (void)requestDestructionOfScene:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)requestSceneCreationWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 completion:(id /* block */)arg3;
- (void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(id /* block */)arg2;
- (id)requestSystemAnimationFence;
- (id)sceneWithIdentifier:(id)arg1;
- (id)scenes;
- (void)setDelegate:(id)arg1;
- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(id /* block */)arg1;
- (bool)trackSystemAnimationFence:(id)arg1;

@end