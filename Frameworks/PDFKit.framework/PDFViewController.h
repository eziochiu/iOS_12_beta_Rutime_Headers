/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFViewController : NSObject {
    PDFViewControllerPrivate * _private;
}

- (void).cxx_destruct;
- (id)_annotationAtGestureLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_annotationFollowing:(id)arg1 wrapAround:(bool)arg2;
- (void)_annotationHit:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_annotationHitLongPress:(id)arg1 gestureState:(long long)arg2 location:(struct CGPoint { double x1; double x2; })arg3;
- (id)_annotationPreceding:(id)arg1 wrapAround:(bool)arg2;
- (int)_canLollipopDragAtLocation:(struct CGPoint { double x1; double x2; })arg1 locationOfFirstTouch:(struct CGPoint { double x1; double x2; })arg2 gestureType:(unsigned long long)arg3;
- (bool)_canWordDragAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_clearSelection;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 toPageView:(id)arg2;
- (void)_doButtonHit:(id)arg1;
- (id)_getPagePoint:(struct CGPoint { double x1; double x2; }*)arg1 forGestureLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_handleButtonHit:(id)arg1;
- (void)_hideTextSelectionMenu;
- (void)_performDoubleTapAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_postAnnotationHitNotification:(id)arg1;
- (void)_postAnnotationWillHitNotification:(id)arg1;
- (bool)_shouldHandleAnnotation:(id)arg1;
- (void)_showTextSelectionMenu;
- (unsigned long long)_typeForGestureRecognizer:(id)arg1;
- (void)_updateLollipopDragAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateState:(int)arg1 forGesture:(unsigned long long)arg2 atLocation:(struct CGPoint { double x1; double x2; })arg3 locationOfFirstTouch:(struct CGPoint { double x1; double x2; })arg4;
- (void)_updateWordDragAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)activateNextAnnotation:(bool)arg1;
- (id)activeAnnotation;
- (void)clearSelection;
- (void)dealloc;
- (void)handleGesture:(id)arg1;
- (void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(struct CGPoint { double x1; double x2; })arg3 locationOfFirstTouch:(struct CGPoint { double x1; double x2; })arg4;
- (id)initWithView:(id)arg1;
- (void)interactWithAnnotation:(id)arg1;
- (bool)isDraggingLollipop;
- (bool)isTouchingLollipopAtLocation:(struct CGPoint { double x1; double x2; })arg1 locationOfFirstTouch:(struct CGPoint { double x1; double x2; })arg2 gestureType:(unsigned long long)arg3;
- (void)removeActiveAnnotation;
- (void)setActiveAnnotation:(id)arg1;
- (void)setActiveSelection:(id)arg1;
- (void)showTextSelectionMenu:(bool)arg1;
- (int)textSelectionState;

@end
