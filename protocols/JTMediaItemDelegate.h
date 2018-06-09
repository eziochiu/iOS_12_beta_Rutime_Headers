/* made by EzioChiu.
 */

@protocol JTMediaItemDelegate <NSObject>

@required

- (void)mediaItemDidLoad:(JTMediaItem *)arg1 error:(NSError *)arg2;
- (void)mediaItemWillLoad:(JTMediaItem *)arg1;

@optional

- (NSArray *)filtersForClip;
- (bool)hasAValidThumbnail;
- (void)mediaItem:(JTMediaItem *)arg1 hasAnUpdatedThumbnail:(UIImage *)arg2;
- (NSURL *)projectAssetsDirectory;
- (void)setMediaItemRequiresDownload:(JTMediaItem *)arg1;
- (NSValue *)transformInfoOfClip;

@end
