/* made by EzioChiu.
 */

@protocol PUPhotoEditViewControllerSessionDelegate <NSObject>

@required

- (void)photoEditController:(PUPhotoEditViewController *)arg1 didFinishEditingSessionForAsset:(id <PUEditableAsset>)arg2 completed:(bool)arg3;

@end
