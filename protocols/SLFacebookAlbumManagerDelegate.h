/* made by EzioChiu.
 */

@protocol SLFacebookAlbumManagerDelegate

@required

- (void)albumManager:(SLFacebookAlbumManager *)arg1 didFailAlbumRefreshWithError:(NSError *)arg2;
- (void)albumManager:(SLFacebookAlbumManager *)arg1 didFailLoadingCoverImageForAlbum:(SLFacebookAlbum *)arg2 withError:(NSError *)arg3;
- (void)albumManager:(SLFacebookAlbumManager *)arg1 didLoadCoverImage:(UIImage *)arg2 forAlbum:(SLFacebookAlbum *)arg3;
- (void)albumManager:(SLFacebookAlbumManager *)arg1 didRefreshAlbums:(NSArray *)arg2;

@end
