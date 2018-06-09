/* made by EzioChiu.
 */

@protocol TSKAVPlayerControllerDelegate <NSObject>

@required

- (void)playbackDidStopForPlayerController:(TSKAVPlayerController *)arg1;
- (void)playerController:(TSKAVPlayerController *)arg1 playbackDidFailWithError:(NSError *)arg2;

@end
