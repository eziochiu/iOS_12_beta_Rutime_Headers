/* made by EzioChiu.
 */

@protocol PUPhotoEditViewControllerPresentationDelegate <NSObject>

@required

- (void)photoEditController:(PUPhotoEditViewController *)arg1 didFinishPreparingForTransitionAfterEditingAsset:(id <PUEditableAsset>)arg2;

@end
