/* made by EzioChiu.
 */

@protocol FBUISceneClient <FBUISceneClientProxy>

@required

- (void)registerWithDelegate:(id <FBUISceneClientDelegate>)arg1;
- (void)sceneHost:(id <FBUISceneHostProxy>)arg1 registerWithInitialParameters:(FBSSceneParameters *)arg2;

@end
