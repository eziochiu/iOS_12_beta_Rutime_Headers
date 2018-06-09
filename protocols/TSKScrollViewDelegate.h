/* made by EzioChiu.
 */

@protocol TSKScrollViewDelegate <UIScrollViewDelegate>

@optional

- (bool)allowsHorizontalScrollingForScrollView:(TSKScrollView *)arg1;
- (bool)allowsVerticalRubberbandingForScrollView:(TSKScrollView *)arg1;
- (struct CGPoint { double x1; double x2; })scrollView:(TSKScrollView *)arg1 restrictContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)scrollView:(TSKScrollView *)arg1 willAnimateToContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)scrollViewDidEndDecelerating:(TSKScrollView *)arg1;
- (void)scrollViewDidEndDragging:(TSKScrollView *)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(TSKScrollView *)arg1;
- (void)scrollViewDidEndSwipe:(TSKScrollView *)arg1;
- (void)scrollViewDidLayoutSubviews:(TSKScrollView *)arg1;
- (void)scrollViewDidScroll:(TSKScrollView *)arg1;
- (void)scrollViewWillBeginDragging:(TSKScrollView *)arg1;
- (void)scrollViewWillScroll:(TSKScrollView *)arg1;

@end
