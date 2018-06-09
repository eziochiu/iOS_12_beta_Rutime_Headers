/* made by EzioChiu.
 */

@protocol FBSceneClient <NSObject>

@required

- (void)host:(id <FBSceneHost>)arg1 configureWithDefinition:(FBSSceneDefinition *)arg2 parameters:(FBSSceneParameters *)arg3;
- (void)host:(void *)arg1 didInvalidateWithTransitionContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <FBSceneHost> *, FBSSceneTransitionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)host:(id <FBSceneHost>)arg1 didReceiveActions:(NSSet *)arg2;
- (void)host:(void *)arg1 didUpdateSettings:(void *)arg2 withDiff:(void *)arg3 transitionContext:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: <FBSceneHost> *, FBSSceneSettings *, FBSSceneSettingsDiff *, FBSSceneTransitionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
