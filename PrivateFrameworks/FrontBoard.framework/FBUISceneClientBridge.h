/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUISceneClientBridge : NSObject <FBSceneHost, FBUISceneClient> {
    <FBUISceneClientDelegate> * _delegate;
    NSString * _identifier;
    <FBSceneClient> * _legacyClient;
    <FBUISceneHostProxy> * _sceneHost;
    FBSSceneSpecification * _specification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (retain) <FBSceneClient> *legacyClient;
@property <FBUISceneHostProxy> *sceneHost;
@property (nonatomic, readonly, copy) NSString *sceneIdentifier;
@property (nonatomic, readonly, copy) FBSSceneSpecification *sceneSpecification;
@property (nonatomic, readonly, copy) FBSSceneSpecification *specification;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)client:(id)arg1 attachLayer:(id)arg2;
- (void)client:(id)arg1 detachLayer:(id)arg2;
- (void)client:(id)arg1 didReceiveActions:(id)arg2;
- (void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)client:(id)arg1 updateLayer:(id)arg2;
- (void)clientWillInvalidate:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didInvalidateSceneHost:(id)arg1;
- (id)identifier;
- (id)initWithSceneIdentifier:(id)arg1 specification:(id)arg2 legacyClient:(id)arg3;
- (id)legacyClient;
- (void)registerWithDelegate:(id)arg1;
- (id)sceneHost;
- (void)sceneHost:(id)arg1 destroySceneWithTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)sceneHost:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneHost:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;
- (void)sceneHost:(id)arg1 registerWithInitialParameters:(id)arg2;
- (id)sceneIdentifier;
- (id)sceneSpecification;
- (void)setLegacyClient:(id)arg1;
- (void)setSceneHost:(id)arg1;
- (id)specification;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
