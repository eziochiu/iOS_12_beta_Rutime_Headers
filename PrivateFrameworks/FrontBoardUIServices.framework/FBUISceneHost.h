/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
 */

@interface FBUISceneHost : NSObject <FBUISceneHost, FBUISceneUpdater> {
    NSString * _identifier;
    <FBUISceneClientProxy> * _sceneClient;
    FBSSceneSpecification * _specification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentView;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didInvalidateSceneClient:(id)arg1;
- (id)initWithIdentifier:(id)arg1 specification:(id)arg2;
- (void)invalidateSceneClient;
- (void)registerSceneClient:(id)arg1;
- (id)sceneClient;
- (void)sceneClient:(id)arg1 didAttachLayer:(id)arg2;
- (void)sceneClient:(id)arg1 didDetachLayer:(id)arg2;
- (void)sceneClient:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneClient:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)sceneClient:(id)arg1 didUpdateLayer:(id)arg2;
- (id)sceneIdentifier;
- (id)sceneSpecification;
- (void)sendActions:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(id /* block */)arg3;

@end
