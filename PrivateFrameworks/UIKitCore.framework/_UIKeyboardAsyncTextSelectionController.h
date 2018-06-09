/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKeyboardAsyncTextSelectionController : _UIKeyboardTextSelectionController {
    bool  _shouldDelayShowSelectionCommands;
}

- (void)beginFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(struct CGPoint { double x1; double x2; })arg2 executionContext:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForLeftmostSelectedPosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForRightmostSelectedPosition;
- (bool)cursorPositionIsContainedByRange:(id)arg1;
- (void)endFloatingCursor;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;
- (void)selectPositionAtPoint:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 executionContext:(id)arg3;
- (void)setRangedSelectionShouldShowGrabbers:(bool)arg1;
- (bool)shouldAllowSelectionGestureWithTouchType:(long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 toProgressToState:(long long)arg3;
- (void)showSelectionCommands;
- (void)showSelectionView;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentPoint:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)updateSelectionWithExtentPoint:(struct CGPoint { double x1; double x2; })arg1 withBoundary:(long long)arg2 executionContext:(id)arg3;

@end
