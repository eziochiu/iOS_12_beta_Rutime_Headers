/* made by EzioChiu.
 */

@protocol VUILibraryEpisodeListCellDelegate <NSObject>

@optional

- (void)episodeListCellDidRequestCancelDownload:(VUILibraryEpisodeListCell *)arg1;
- (void)episodeListCellDidRequestStartDownload:(VUILibraryEpisodeListCell *)arg1;

@end
