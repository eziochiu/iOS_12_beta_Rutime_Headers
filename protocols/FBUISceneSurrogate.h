/* made by EzioChiu.
 */

@protocol FBUISceneSurrogate <FBUISceneConduit>

@required

- (FBSSceneParameters *)configure;
- (void)registerSceneUpdater:(id <FBUISceneUpdater>)arg1;

@end
