/* made by EzioChiu.
 */

@protocol FBSceneHostSnapshotView <NSObject>

@required

- (id)IOSurface;
- (FBSceneSnapshot *)sceneSnapshot;

@end
