/* made by EzioChiu.
 */

@protocol NUVideoPlaybackCounter <NSObject>

@required

- (unsigned long long)numberOfVideosPlayedInSession;
- (unsigned long long)numberOfVideosPlayedSinceLastAd;

@end
