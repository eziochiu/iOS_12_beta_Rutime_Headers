/* made by EzioChiu.
 */

@protocol FCFeedGroupOutlining <NSObject>

@required

- (FCColorGradient *)backgroundGradient;
- (NSString *)backingTagID;
- (NSDate *)creationDate;
- (NTPBDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
- (FCFeedEdition *)edition;
- (long long)groupType;
- (NSArray *)headlines;
- (NSString *)identifier;
- (unsigned long long)mergeID;
- (unsigned long long)options;
- (NSString *)sourceIdentifier;
- (NTPBSpecialEventsConfig *)specialEventsConfig;
- (NSString *)subtitle;
- (NSString *)title;
- (FCColor *)titleColor;
- (NSArray *)videoPlaylistHeadlines;

@end
