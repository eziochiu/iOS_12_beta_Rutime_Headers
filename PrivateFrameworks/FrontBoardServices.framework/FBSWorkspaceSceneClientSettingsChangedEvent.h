/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceSceneClientSettingsChangedEvent : FBSWorkspaceSceneEvent {
    FBSSceneClientSettingsDiff * _clientSettings;
    FBSSceneTransitionContext * _transition;
}

@property (nonatomic, retain) FBSSceneClientSettingsDiff *clientSettingsDiff;
@property (nonatomic, retain) FBSSceneTransitionContext *transitionContext;

- (void).cxx_destruct;
- (id)clientSettingsDiff;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setClientSettingsDiff:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (id)transitionContext;

@end
