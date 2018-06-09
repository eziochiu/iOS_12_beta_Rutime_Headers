/* made by EzioChiu.
 */

@protocol PLVideoViewDelegate <NSObject>

@optional

- (void)videoView:(PLVideoView *)arg1 displayPlayOverlay:(UIView *)arg2;
- (void)videoView:(PLVideoView *)arg1 remakingProgressDidChange:(float)arg2;
- (bool)videoViewCanBeginPlayback:(PLVideoView *)arg1;
- (bool)videoViewCanCreateMetadata:(PLVideoView *)arg1;
- (void)videoViewDidBeginEditing:(PLVideoView *)arg1;
- (void)videoViewDidBeginPlayback:(PLVideoView *)arg1;
- (void)videoViewDidBeginRemaking:(PLVideoView *)arg1;
- (void)videoViewDidBeginScrubbing:(PLVideoView *)arg1;
- (void)videoViewDidCancelEditing:(PLVideoView *)arg1;
- (void)videoViewDidCreateAttachments:(PLVideoView *)arg1;
- (void)videoViewDidEndPlayback:(PLVideoView *)arg1 didFinish:(bool)arg2;
- (void)videoViewDidEndRemaking:(PLVideoView *)arg1 didSucceed:(bool)arg2;
- (void)videoViewDidEndScrubbing:(PLVideoView *)arg1;
- (void)videoViewDidPausePlayback:(PLVideoView *)arg1;
- (void)videoViewIsReadyToBeginPlayback:(PLVideoView *)arg1;
- (void)videoViewPlaybackDidFail:(PLVideoView *)arg1;
- (NSDictionary *)videoViewRequestsPickedAirplayRoute:(PLVideoView *)arg1;
- (double)videoViewScrubberWidth:(PLVideoView *)arg1;
- (double)videoViewScrubberYOrigin:(PLVideoView *)arg1 forOrientation:(long long)arg2;
- (bool)videoViewShouldRespondToPlayOverlayTap:(PLVideoView *)arg1;
- (void)videoViewWillBeginEditing:(PLVideoView *)arg1;

@end
