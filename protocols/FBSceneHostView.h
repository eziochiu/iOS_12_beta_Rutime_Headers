/* made by EzioChiu.
 */

@protocol FBSceneHostView <FBSceneHostAppearance>

@required

- (<FBSceneHostViewDelegate> *)delegate;
- (void)setDelegate:(id <FBSceneHostViewDelegate>)arg1;

@end
