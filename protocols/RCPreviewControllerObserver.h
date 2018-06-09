/* made by EzioChiu.
 */

@protocol RCPreviewControllerObserver <NSObject>

@required

- (void)previewController:(RCPreviewController *)arg1 playbackDidBeginWithRate:(float)arg2;
- (void)previewController:(RCPreviewController *)arg1 playbackDidStopPlayingWithError:(NSError *)arg2;
- (void)previewController:(RCPreviewController *)arg1 playbackTimeDidJumpWithPreviousTime:(double)arg2;

@optional

- (void)previewController:(RCPreviewController *)arg1 playbackTimeDidUpdateToCurrentTime:(double)arg2;
- (void)previewController:(RCPreviewController *)arg1 playbackTimeDidUpdateToCurrentTime:(double)arg2 didJumpTime:(bool)arg3;
- (void)previewControllerDidChangePreparingState:(RCPreviewController *)arg1;

@end
