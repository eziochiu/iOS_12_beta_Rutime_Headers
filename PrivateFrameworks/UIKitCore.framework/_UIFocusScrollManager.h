/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusScrollManager : NSObject {
    NSHashTable * _activelyScrollingContainers;
    UIScreen * _screen;
    _UIFocusDisplayLinkScrollAnimator * _scrollAnimator;
}

@property (nonatomic, readonly) NSHashTable *activelyScrollingContainers;
@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) _UIFocusDisplayLinkScrollAnimator *scrollAnimator;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollableContainer:(id)arg1 toShowFocusItemWithInfo:(id)arg2;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollableContainer:(id)arg1 toShowFocusItemWithInfo:(id)arg2 itemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 targetOffset:(struct CGPoint { double x1; double x2; })arg4 targetBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)_ensureFocusItemIsOnscreen:(id)arg1 inScrollableContainer:(id)arg2;
- (void)_scrollToFocusItemWithInfo:(id)arg1 offset:(struct CGPoint { double x1; double x2; })arg2 inScrollableContainer:(id)arg3;
- (id)activelyScrollingContainers;
- (void)animateOffsetOfScrollableContainer:(id)arg1 toShowFocusItem:(id)arg2;
- (void)cancelScrollingForScrollableContainer:(id)arg1;
- (struct CGPoint { double x1; double x2; })contentOffsetForScrollableContainer:(id)arg1 toShowFocusItem:(id)arg2 targetOffset:(struct CGPoint { double x1; double x2; })arg3 targetBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (struct CGPoint { double x1; double x2; })contentOffsetForScrollableContainer:(id)arg1 toShowRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 targetOffset:(struct CGPoint { double x1; double x2; })arg3 targetBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (struct CGPoint { double x1; double x2; })currentVelocityForScrollableContainer:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (bool)isScrollingScrollableContainer:(id)arg1;
- (void)performScrollingIfNeededForFocusUpdateInContext:(id)arg1;
- (id)screen;
- (id)scrollAnimator;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForScrollableContainer:(id)arg1;

@end
