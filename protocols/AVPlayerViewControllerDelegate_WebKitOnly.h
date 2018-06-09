/* made by EzioChiu.
 */

@protocol AVPlayerViewControllerDelegate_WebKitOnly <AVPlayerViewControllerDelegate>

@optional

- (bool)playerViewController:(AVPlayerViewController *)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (bool)playerViewControllerShouldStartPictureInPictureFromInlineWhenEnteringBackground:(AVPlayerViewController *)arg1;

@end
