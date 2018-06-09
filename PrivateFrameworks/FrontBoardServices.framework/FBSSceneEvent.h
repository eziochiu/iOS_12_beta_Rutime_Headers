/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneEvent : FBSSceneMessage {
    FBSSceneClientSettingsDiff * _clientSettingsDiff;
    FBSSceneSettingsDiff * _settingsDiff;
    long long  _source;
    FBSSceneTransitionContext * _transitionContext;
}

@property (nonatomic, readonly) NSSet *actions;
@property (nonatomic, retain) FBSSceneClientSettingsDiff *clientSettingsDiff;
@property (nonatomic, retain) FBSSceneSettingsDiff *settingsDiff;
@property (nonatomic) long long source;
@property (nonatomic, retain) FBSSceneTransitionContext *transitionContext;

- (void).cxx_destruct;
- (id)actions;
- (id)clientSettingsDiff;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (void)setClientSettingsDiff:(id)arg1;
- (void)setSettingsDiff:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setTransitionContext:(id)arg1;
- (id)settingsDiff;
- (long long)source;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)transitionContext;

@end