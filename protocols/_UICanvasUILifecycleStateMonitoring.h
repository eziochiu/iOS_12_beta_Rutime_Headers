/* made by EzioChiu.
 */

@protocol _UICanvasUILifecycleStateMonitoring <_UICanvasLifecycleStateMonitoring>

@required

- (void)_transitionLifecycleStateWithTransitionContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: UIApplicationSceneTransitionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSWorkspaceSceneUpdateResponse *, void*
- (void)forceDeactivateWithTransitionContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: UIApplicationSceneTransitionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSWorkspaceSceneUpdateResponse *, void*
- (UIStatusBarWindow *)statusBarWindow;

@end
