/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUISceneHostBridge : NSObject <FBSceneClient, FBUISceneHost> {
    NSString * _identifier;
    bool  _invalidated;
    <FBSceneHost> * _legacyHost;
    FBSSceneParameters * _parameters;
    <FBUISceneClientProxy> * _sceneClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property <FBSceneHost> *legacyHost;
@property (retain) <FBUISceneClientProxy> *sceneClient;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didInvalidateSceneClient:(id)arg1;
- (void)host:(id)arg1 configureWithDefinition:(id)arg2 parameters:(id)arg3;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;
- (id)initWithSceneIdentifier:(id)arg1 initialParameters:(id)arg2;
- (void)invalidateSceneClient;
- (id)legacyHost;
- (void)registerSceneClient:(id)arg1;
- (id)sceneClient;
- (void)sceneClient:(id)arg1 didAttachLayer:(id)arg2;
- (void)sceneClient:(id)arg1 didDetachLayer:(id)arg2;
- (void)sceneClient:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneClient:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)sceneClient:(id)arg1 didUpdateLayer:(id)arg2;
- (id)sceneIdentifier;
- (id)sceneSpecification;
- (void)setLegacyHost:(id)arg1;
- (void)setSceneClient:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
