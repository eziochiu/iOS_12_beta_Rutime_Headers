/* made by EzioChiu.
 */

@protocol NTSectionDisplayDescriptor <NSCopying>

@required

- (NSString *)actionTitle;
- (NSURL *)actionURL;
- (NSString *)backgroundGradientColor;
- (NTPBDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
- (bool)displaysAsVideoPlaylist;
- (NSString *)name;
- (NSString *)nameColor;
- (bool)useNameColorInWidget;
- (bool)videoPlaysMutedByDefault;

@end
