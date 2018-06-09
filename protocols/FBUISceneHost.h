/* made by EzioChiu.
 */

@protocol FBUISceneHost <FBUISceneHostProxy>

@required

- (void)invalidateSceneClient;
- (void)registerSceneClient:(id <FBUISceneClientProxy>)arg1;
- (<FBUISceneClientProxy> *)sceneClient;

@end
