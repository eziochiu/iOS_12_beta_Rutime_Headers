/* made by EzioChiu.
 */

@protocol FBUIProcessManagerInternal <FBUIProcessManager>

@required

- (void)invalidateClientWorkspace:(id <FBUISceneClientWorkspace>)arg1;
- (<FBUISceneClientWorkspace> *)workspaceForSceneClientWithIdentity:(FBUISceneClientIdentity *)arg1;

@end
