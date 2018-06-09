/* made by EzioChiu.
 */

@protocol SVVideoControlsTimingProviding <NSObject>

@required

- (double)autoAppearanceTimeIntervalForVideo:(id <SVVideo>)arg1;
- (double)autoHideTimeIntervalForVideo:(id <SVVideo>)arg1;
- (double)moreFromVisibilityTimeIntervalForVideo:(id <SVVideo>)arg1;
- (double)nowPlayingVisibilityTimeIntervalForVideo:(id <SVVideo>)arg1;
- (double)upNextAppearanceTimeIntervalForVideo:(id <SVVideo>)arg1;

@end
