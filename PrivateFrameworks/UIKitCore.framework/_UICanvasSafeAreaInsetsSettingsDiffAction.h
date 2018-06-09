/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICanvasSafeAreaInsetsSettingsDiffAction : NSObject <_UICanvasSettingsDiffAction> {
    UIApplicationSceneSettingsDiffInspector * _sceneSettingsSafeAreaInsetsDiffInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateSafeAreaInsetsWithSettingsObserverContext:(union { unsigned char x1; struct { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; } x2; })arg1 canvas:(id)arg2 transitionContext:(id)arg3;
- (void)performActionsForCanvas:(id)arg1 withUpdatedScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5;
- (id)sceneSettingsSafeAreaInsetsDiffInspector;

@end
