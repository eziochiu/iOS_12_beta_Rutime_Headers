/* made by EzioChiu.
 */

@protocol FBSceneTransformTarget <NSObject>

@required

- (void)transformDidInvalidate:(FBSceneTransform *)arg1;
- (void)transformDidUpdate:(FBSceneTransform *)arg1;

@end
