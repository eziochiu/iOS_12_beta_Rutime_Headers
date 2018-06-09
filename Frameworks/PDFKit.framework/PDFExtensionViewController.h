/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFExtensionViewController : UIViewController {
    PDFExtensionViewControllerPrivate * _private;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_annotationHitNotification:(id)arg1;
- (void)_annotationLongPressNotification:(id)arg1;
- (void)_goToDestination:(id)arg1;
- (void)_goToPage:(id)arg1;
- (void)_pageChangedNotification:(id)arg1;
- (void)_pdfViewZoomToRect:(id)arg1;
- (void)_selectionChangedNotification:(id)arg1;
- (void)_setupAutoScaleFactor;
- (void)_setupScrollViewContentSize;
- (void)_textSelectionDidCopyDataNotification:(id)arg1;
- (void)_textSelectionDidCopyStringNotification:(id)arg1;
- (void)_textSelectionPointChangedNotification:(id)arg1;
- (void)_textSelectionShowTextSelectionMenu:(id)arg1;
- (void)_textSelectionStateChangedNotification:(id)arg1;
- (void)_updateDocumentIsLocked;
- (void)_updatePageCount;
- (void)_zoomToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)beginPDFViewRotation:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)cancelFindString;
- (void)cancelFindStringWithHighlightsCleared:(bool)arg1;
- (void)clearSearchHighlights;
- (void)copy;
- (void)didMatchString:(id)arg1;
- (void)documentDidEndDocumentFind:(id)arg1;
- (void)endPDFViewRotation;
- (void)findString:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)focusOnSearchResultAtIndex:(unsigned long long)arg1;
- (void)goToPageIndex:(long long)arg1;
- (void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(struct CGPoint { double x1; double x2; })arg3 locationOfFirstTouch:(struct CGPoint { double x1; double x2; })arg4;
- (id)init;
- (void)selectAll;
- (void)setDocumentData:(id)arg1;
- (void)setMaximumZoomScale:(double)arg1;
- (void)setMinimumZoomScale:(double)arg1;
- (void)setScrollViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setup;
- (void)setupPDFView;
- (void)unlockWithPassword:(id)arg1;
- (void)updatePDFViewLayout:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 boundsInView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scrollViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 zoomScale:(double)arg4;
- (void)viewDidLoad;

@end
