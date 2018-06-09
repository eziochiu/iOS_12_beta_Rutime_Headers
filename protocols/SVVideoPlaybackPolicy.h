/* made by EzioChiu.
 */

@protocol SVVideoPlaybackPolicy <NSObject>

@required

- (bool)isPlaybackAllowedToStart;
- (bool)playbackRequested;
- (void)setPlaybackIsAllowedToStart:(bool)arg1;
- (void)setPlaybackRequested:(bool)arg1;

@end
