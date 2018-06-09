/* made by EzioChiu.
 */

@protocol PXScrollViewControllerObserver <NSObject>

@optional

- (void)scrollViewControllerContentBoundsDidChange:(PXScrollViewController *)arg1;
- (void)scrollViewControllerContentInsetDidChange:(PXScrollViewController *)arg1;
- (void)scrollViewControllerDidEndScrolling:(PXScrollViewController *)arg1;
- (void)scrollViewControllerDidEndScrollingAnimation:(PXScrollViewController *)arg1;
- (void)scrollViewControllerDidScroll:(PXScrollViewController *)arg1;
- (void)scrollViewControllerWillBeginScrolling:(PXScrollViewController *)arg1;
- (void)scrollViewControllerWillBeginScrollingAnimation:(PXScrollViewController *)arg1 towardsContentEdges:(unsigned long long)arg2;
- (void)scrollViewControllerWillEndScrolling:(PXScrollViewController *)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)scrollViewControllerWillLayoutSubviews:(PXScrollViewController *)arg1;

@end
