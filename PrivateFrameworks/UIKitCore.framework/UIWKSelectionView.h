/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWKSelectionView : UIWebSelectionView {
    UIWebSelectionHandle * _handle;
    UIView<UIWKInteractionViewProtocol> * _interactionView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchPoint;
    bool  _thresholdIsValid;
    bool  _usingGesture;
}

- (void)clearSelection;
- (void)endSelectionCreationWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fetchSelectionBoundingRect;
- (id)initWithView:(id)arg1;
- (bool)isHorizontalWritingMode;
- (void)onAfterScrollOrZoomShowingSelection:(bool)arg1;
- (void)onBeforeScrollOrZoomHidingSelection:(bool)arg1;
- (void)resetSelection;
- (id)scroller;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBoundingRect;
- (void)selectionChanged;
- (void)selectionChangedWithTouchAt:(struct CGPoint { double x1; double x2; })arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3;
- (void)selectionCreationEndedWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)selectionCreationStartedWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)selectionCreationUpdatedWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)selectionRects;
- (void)showControls;
- (void)showCopyCalloutWithAnimation:(bool)arg1;
- (void)showRangeSelection;
- (void)startSelectionCreationWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)tintView;
- (void)touchChanged:(id)arg1 forHandleInText:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unobscuredRect;
- (void)updateFrameAndHandlesWithAnimation:(bool)arg1;
- (void)updateRangedSelectionData;
- (bool)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2;
- (void)updateSelectionCreationWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateSelectionRects;
- (void)updateTextRangeViewSelectionRects;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
