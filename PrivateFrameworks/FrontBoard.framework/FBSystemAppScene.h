/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSystemAppScene : FBSScene <FBSSceneDelegate> {
    <FBSSceneDelegate> * _delegate;
    FBSSceneImpl * _scene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithSceneImpl:(id)arg1;
- (void)attachContext:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (id)clientSettings;
- (id)delegate;
- (id)description;
- (void)detachContext:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)detachSceneContext:(id)arg1;
- (id)identifier;
- (bool)invalidateSnapshotWithContext:(id)arg1;
- (id)layers;
- (bool)performSnapshotWithContext:(id)arg1;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(id /* block */)arg4;
- (void)sendActions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)settings;
- (id)snapshotRequest;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)updateClientSettingsWithBlock:(id /* block */)arg1;
- (void)updateClientSettingsWithTransitionBlock:(id /* block */)arg1;

@end