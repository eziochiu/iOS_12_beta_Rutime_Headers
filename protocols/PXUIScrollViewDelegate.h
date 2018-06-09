/* made by EzioChiu.
 */

@protocol PXUIScrollViewDelegate

@required

- (void)scrollView:(UIScrollView *)arg1 willBeginScrollingAnimationTowardsContentEdges:(unsigned long long)arg2;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView *)arg1;
- (void)scrollViewDidLayoutSubviews:(UIScrollView *)arg1;
- (void)scrollViewWillLayoutSubviews:(UIScrollView *)arg1;

@end
