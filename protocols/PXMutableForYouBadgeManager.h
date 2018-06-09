/* made by EzioChiu.
 */

@protocol PXMutableForYouBadgeManager <NSObject>

@required

- (NSDate *)latestCMMActivityDate;
- (NSDate *)latestSharedAlbumActivityDate;
- (void)setLatestCMMActivityDate:(NSDate *)arg1;
- (void)setLatestSharedAlbumActivityDate:(NSDate *)arg1;
- (void)setUnreadBadgeCount:(unsigned long long)arg1;
- (unsigned long long)unreadBadgeCount;

@end
