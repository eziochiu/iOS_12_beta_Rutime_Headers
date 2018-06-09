/* made by EzioChiu.
 */

@protocol _UIScrollViewScrollObserver_Internal <_UIScrollViewScrollObserver>

@optional

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_collapsableContentPaddingForObservedScrollView:(UIScrollView *)arg1;
- (void)_didScroll;
- (void)_observeScrollView:(UIScrollView *)arg1 didBeginTransitionToDeferredContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)_observeScrollView:(UIScrollView *)arg1 willEndDraggingWithVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3 unclampedOriginalTarget:(struct CGPoint { double x1; double x2; })arg4;
- (void)_observeScrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)_observeScrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(bool)arg2;
- (void)_observeScrollViewWillBeginDragging:(UIScrollView *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_revealableContentPaddingForObservedScrollView:(UIScrollView *)arg1 includeContentWithCollapsedAffinity:(bool)arg2;

@end
