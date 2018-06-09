/* made by EzioChiu.
 */

@protocol MPAVPlaylistManagerDelegate <NSObject>

@required

- (void)playlistManager:(MPAVPlaylistManager *)arg1 didFailLoadingAllItemsForQueueFeeder:(MPQueueFeeder *)arg2;
- (void)playlistManager:(MPAVPlaylistManager *)arg1 didTransitionToPlaylistFeeder:(MPQueueFeeder *)arg2;
- (void)playlistManager:(MPAVPlaylistManager *)arg1 queueCoordinator:(MPAVQueueCoordinator *)arg2 willInsertItem:(MPAVItem *)arg3 afterItem:(MPAVItem *)arg4;

@end
