/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICanvasGeometrySettingsDiffAction : NSObject <_UICanvasSettingsDiffAction> {
    UIApplicationSceneSettingsDiffInspector * _sceneSettingsGeometryMutationDiffInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIApplicationSceneSettingsDiffInspector *sceneSettingsGeometryMutationDiffInspector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateSceneGeometryWithSettingObserverContext:(struct { unsigned int x1 : 1; unsigned int x2 : 1; })arg1 canvas:(id)arg2 transitionContext:(id)arg3;
- (void)performActionsForCanvas:(id)arg1 withUpdatedScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5;
- (id)sceneSettingsGeometryMutationDiffInspector;
- (void)setSceneSettingsGeometryMutationDiffInspector:(id)arg1;

@end
