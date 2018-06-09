/* made by EzioChiu.
 */

@protocol MCDNowPlayingViewControllerDelegate <NSObject>

@optional

- (bool)nowPlayingViewController:(MCDNowPlayingViewController *)arg1 buttonShouldBeActive:(long long)arg2;
- (void)nowPlayingViewController:(MCDNowPlayingViewController *)arg1 didSendAction:(long long)arg2 state:(long long)arg3;
- (bool)nowPlayingViewController:(MCDNowPlayingViewController *)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id*)arg3 existingIdentifier:(NSString *)arg4 tinted:(out bool*)arg5;
- (void)nowPlayingViewControllerAddToLibrary:(MCDNowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerCanRepeat:(MCDNowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerCanShowAddToLibrary:(MCDNowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerCanShowAlbumLink:(MCDNowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerCanShowChangePlaybackRate:(MCDNowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerCanShowMore:(MCDNowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerCanShuffle:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerChangePlaybackRate:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidRequestAlbum:(MCDNowPlayingViewController *)arg1;
- (NSNumber *)nowPlayingViewControllerGetPlaybackRate:(MCDNowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerIsFuseSubscriber:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerMore:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerToggleRepeat:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerToggleShuffle:(MCDNowPlayingViewController *)arg1;

@end
