/* made by EzioChiu.
 */

@protocol MPUNowPlayingDelegate <NSObject>

@optional

- (void)nowPlayingController:(MPUNowPlayingController *)arg1 elapsedTimeDidChange:(double)arg2;
- (void)nowPlayingController:(MPUNowPlayingController *)arg1 nowPlayingApplicationDidChange:(NSString *)arg2;
- (void)nowPlayingController:(MPUNowPlayingController *)arg1 nowPlayingInfoDidChange:(NSDictionary *)arg2;
- (void)nowPlayingController:(MPUNowPlayingController *)arg1 playbackStateDidChange:(bool)arg2;
- (void)nowPlayingControllerDidBeginListeningForNotifications:(MPUNowPlayingController *)arg1;
- (void)nowPlayingControllerDidStopListeningForNotifications:(MPUNowPlayingController *)arg1;

@end
