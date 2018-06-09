/* made by EzioChiu.
 */

@protocol SBFIrisWallpaperViewDelegate <NSObject>

@optional

- (void)irisWallpaperView:(id <SBFIrisWallpaperView>)arg1 didReplaceGestureRecognizer:(UIGestureRecognizer *)arg2 withGestureRecognizer:(UIGestureRecognizer *)arg3;
- (void)irisWallpaperViewIsInteractingDidChange:(id <SBFIrisWallpaperView>)arg1;
- (void)irisWallpaperViewPlaybackStateDidChange:(id <SBFIrisWallpaperView>)arg1;

@end
