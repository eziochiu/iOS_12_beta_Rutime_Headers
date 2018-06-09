/* made by EzioChiu.
 */

@protocol MiroMemoryEditorPlayerViewDelegate <NSObject>

@required

- (bool)isSeparatingOrCollapsing;
- (UIView *)placeSnapshotOfPlayerViewInContainerView:(UIView *)arg1;
- (bool)playerViewShouldShowInChildViewControllers;
- (void)playerViewWillResize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIsSeparatingOrCollapsing:(bool)arg1;
- (void)setMovieDisplayControllerParent:(UIViewController *)arg1 andSuperview:(UIView *)arg2;

@end
