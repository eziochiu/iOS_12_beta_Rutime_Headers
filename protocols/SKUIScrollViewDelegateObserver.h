/* made by EzioChiu.
 */

@protocol SKUIScrollViewDelegateObserver <NSObject>

@optional

- (void)observedScrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)observedScrollViewDidScroll:(UIScrollView *)arg1;
- (void)observedScrollViewWillBeginDecelerating:(UIScrollView *)arg1;
- (void)observedScrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)observedScrollViewWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; })arg3;

@end
