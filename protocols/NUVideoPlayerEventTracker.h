/* made by EzioChiu.
 */

@protocol NUVideoPlayerEventTracker <NUVideoEventTracker, NUVideoAdEventTracker>

@optional

- (void)videoPlayerDidBecomeInvisible;
- (void)videoPlayerDidBecomeVisible;

@end
