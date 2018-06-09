/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneUpdateContext : NSObject <BSDescriptionProviding> {
    <NSObject><NSCopying> * _clientContext;
    NSString * _sceneID;
    FBSSceneSettings * _settings;
    FBSSceneSettingsDiff * _settingsDiff;
    unsigned long long  _transactionID;
    FBSSceneTransitionContext * _transitionContext;
}

@property (nonatomic, copy) <NSObject><NSCopying> *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sceneID;
@property (nonatomic, retain) FBSSceneSettings *settings;
@property (nonatomic, retain) FBSSceneSettingsDiff *settingsDiff;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transactionID;
@property (nonatomic) FBSSceneTransitionContext *transitionContext;

+ (id)contextWithScene:(id)arg1;

- (void).cxx_destruct;
- (id)clientContext;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)sceneID;
- (void)setClientContext:(id)arg1;
- (void)setSceneID:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setSettingsDiff:(id)arg1;
- (void)setTransactionID:(unsigned long long)arg1;
- (void)setTransitionContext:(id)arg1;
- (id)settings;
- (id)settingsDiff;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)transactionID;
- (id)transitionContext;

@end
