/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
 */

@interface FBUISceneClient : NSObject <FBUISceneClient> {
    <FBUISceneHostProxy> * _hostProxy;
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didInvalidateSceneHost:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)registerWithDelegate:(id)arg1;
- (void)sceneHost:(id)arg1 destroySceneWithTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)sceneHost:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneHost:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;
- (void)sceneHost:(id)arg1 registerWithInitialParameters:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end