/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFAKOverlayAdaptor_ios : PDFAKOverlayAdaptor {
    PDFAKOverlayAdaptorPrivate_ios * _privateIOS;
}

@property bool singleFingerScrollingDisabled;

- (void).cxx_destruct;
- (void)_installOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_scrollViewRecognizersForPageAtIndex:(unsigned long long)arg1;
- (void)_setupGestureRecognizersForPageAtIndex:(unsigned long long)arg1;
- (void)_setupGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;
- (void)_teardownGestureRecognizersForPageAtIndex:(unsigned long long)arg1;
- (void)_teardownGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;
- (void)_uninstallOverlayAtIndex:(unsigned long long)arg1;
- (void)addDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2;
- (void)adjustScrollViewForKeyboardNotification:(id)arg1;
- (void)annotationDidEndEditing:(id)arg1;
- (void)annotationWillBeginEditing:(id)arg1;
- (void)dealloc;
- (id)initWithPDFView:(id)arg1;
- (unsigned long long)pageIndexForAnnotation:(id)arg1;
- (void)removeDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2;
- (void)setSingleFingerScrollingDisabled:(bool)arg1;
- (bool)singleFingerScrollingDisabled;
- (void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(bool)arg3;

@end
