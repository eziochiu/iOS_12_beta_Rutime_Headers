/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICanvasLifecycleSettingsDiffAction : NSObject <_UICanvasSettingsDiffAction> {
    UIApplicationSceneSettingsDiffInspector * _sceneSettingsLifecycleEventDiffInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIApplicationSceneSettingsDiffInspector *sceneSettingsLifecycleEventDiffInspector;
@property (readonly) Class superclass;

+ (void)configureInitialDeactivationReasons:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)performActionsForCanvas:(id)arg1 withUpdatedScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5;
- (id)sceneSettingsLifecycleEventDiffInspector;
- (void)setSceneSettingsLifecycleEventDiffInspector:(id)arg1;

@end
