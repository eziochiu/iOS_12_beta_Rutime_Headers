/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICanvasDisplayConfigurationSettingsDiffAction : NSObject <_UICanvasSettingsDiffAction> {
    UIApplicationSceneSettingsDiffInspector * _sceneSettingsDisplayConfigurationDiffInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIApplicationSceneSettingsDiffInspector *sceneSettingsDisplayConfigurationDiffInspector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)performActionsForCanvas:(id)arg1 withUpdatedScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5;
- (id)sceneSettingsDisplayConfigurationDiffInspector;
- (void)setSceneSettingsDisplayConfigurationDiffInspector:(id)arg1;

@end
