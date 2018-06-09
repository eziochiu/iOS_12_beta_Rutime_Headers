/* made by EzioChiu.
 */

@protocol FBUISceneConduit <FBUISceneHostProxy, FBUISceneClientProxy>

@required

- (<FBUISceneClientProxy> *)sceneClient;
- (<FBUISceneHostProxy> *)sceneHost;
- (void)sceneHost:(id <FBUISceneHostProxy>)arg1 registerSceneClient:(id <FBUISceneClientProxy>)arg2 withInitialParameters:(FBSSceneParameters *)arg3;

@end
