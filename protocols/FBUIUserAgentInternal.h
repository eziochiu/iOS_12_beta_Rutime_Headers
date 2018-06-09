/* made by EzioChiu.
 */

@protocol FBUIUserAgentInternal <FBUIUserAgent>

@required

- (bool)isSystemApp;
- (FBSSerialQueue *)mainQueue;
- (<FBUIProcessManagerInternal> *)processManager;
- (<FBUISceneManager> *)sceneManager;
- (void)setSystemApp:(bool)arg1;

@end
