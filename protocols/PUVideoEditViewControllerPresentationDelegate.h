/* made by EzioChiu.
 */

@protocol PUVideoEditViewControllerPresentationDelegate <NSObject>

@optional

- (void)videoEditViewController:(PUVideoEditViewController *)arg1 didFinishPreparingForTransitionAfterEditingAsset:(id <PUEditableAsset>)arg2 modificationDate:(NSDate *)arg3 seekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;

@end
