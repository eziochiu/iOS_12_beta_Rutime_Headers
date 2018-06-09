/* made by EzioChiu.
 */

@protocol MPMovieViewDelegate <NSObject>

@optional

- (void)movieView:(MPMovieView *)arg1 willMoveToSuperview:(UIView *)arg2;
- (void)movieView:(MPMovieView *)arg1 willMoveToWindow:(UIWindow *)arg2;
- (void)movieViewDidMoveToWindow:(MPMovieView *)arg1;

@end
