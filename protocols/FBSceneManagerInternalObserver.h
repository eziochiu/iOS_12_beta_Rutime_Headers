/* made by EzioChiu.
 */

@protocol FBSceneManagerInternalObserver <FBSceneManagerObserver>

@optional

- (void)sceneManager:(FBSceneManager *)arg1 amendSettings:(FBSMutableSceneSettings *)arg2 forUpdatingScene:(FBScene *)arg3;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(FBSceneManager *)arg1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(FBSceneManager *)arg1;

@end
