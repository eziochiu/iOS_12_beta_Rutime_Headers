/* made by EzioChiu.
 */

@protocol AVPictureInPictureViewControllerDelegate <NSObject>

@optional

- (void)pictureInPictureViewControllerViewDidAppear:(AVPictureInPictureViewController *)arg1;
- (void)pictureInPictureViewControllerViewWillDisappear:(AVPictureInPictureViewController *)arg1;

@end
