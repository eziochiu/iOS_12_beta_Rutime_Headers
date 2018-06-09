/* made by EzioChiu.
 */

@protocol UIPDFAnnotationControllerDelegate

@optional

- (void)annotation:(UIPDFAnnotation *)arg1 didEndTrackingAtPoint:(struct CGPoint { double x1; double x2; })arg2 controller:(UIPDFAnnotationController *)arg3;
- (void)annotation:(UIPDFAnnotation *)arg1 isBeingPressedAtPoint:(struct CGPoint { double x1; double x2; })arg2 controller:(UIPDFAnnotationController *)arg3;
- (void)annotation:(UIPDFAnnotation *)arg1 wasTouchedAtPoint:(struct CGPoint { double x1; double x2; })arg2 controller:(UIPDFAnnotationController *)arg3;
- (void)annotationWasRemoved:(UIPDFAnnotation *)arg1 controller:(UIPDFAnnotationController *)arg2;
- (UIImage *)marginNoteImage:(UIPDFAnnotation *)arg1 controller:(UIPDFAnnotationController *)arg2;
- (struct CGSize { double x1; double x2; })marginNoteImageSize:(UIPDFAnnotationController *)arg1;
- (struct CGImage { }*)newHighlightMaskImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 controller:(UIPDFAnnotationController *)arg2;
- (struct CGImage { }*)underlineImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 controller:(UIPDFAnnotationController *)arg2;
- (bool)willTrackAnnotationAtPoint:(struct CGPoint { double x1; double x2; })arg1 controller:(UIPDFAnnotationController *)arg2;

@end
