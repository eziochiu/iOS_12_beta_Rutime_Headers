/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFHostViewController : _UIRemoteViewController <UIDocumentPasswordViewDelegate, UIGestureRecognizerDelegate> {
    PDFHostViewControllerPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)createHostView:(id /* block */)arg1 forExtensionIdentifier:(id)arg2;
+ (id)exportedInterface;
+ (id)loadExtension:(id)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)_gestureInit;
- (bool)_hasDraggableSelectionAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_isTouchingLollipopAtLocationOfFirstTouch:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setMaximumZoomScale:(double)arg1;
- (void)_setMinimumZoomScale:(double)arg1;
- (unsigned long long)_typeForGestureRecognizer:(id)arg1;
- (void)appendPasswordUI;
- (void)beginPDFViewRotation;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cancelFindString;
- (void)cancelFindStringWithHighlightsCleared:(bool)arg1;
- (void)clearSearchHighlights;
- (void)copy:(id)arg1;
- (long long)currentPageIndex;
- (void)didCopyData:(id)arg1;
- (void)didCopyString:(id)arg1;
- (void)didLongPressPageIndex:(long long)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 withAnnotationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)didLongPressURL:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 withAnnotationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)documentIsLocked:(bool)arg1;
- (void)endPDFViewRotation;
- (void)endPDFViewRotation:(struct CGSize { double x1; double x2; })arg1 horizontalScaleFactor:(double)arg2 documentViewCenter:(struct CGPoint { double x1; double x2; })arg3;
- (void)findString:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)findStringUpdate:(unsigned long long)arg1 done:(bool)arg2;
- (void)focusOnSearchResultAtIndex:(unsigned long long)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)goToDestination:(long long)arg1 point:(struct CGPoint { double x1; double x2; })arg2;
- (void)goToPageIndex:(long long)arg1;
- (void)goToPageIndex:(long long)arg1 pageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)goToPageIndex:(long long)arg1 withViewFrustum:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)goToURL:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)handleGesture:(id)arg1;
- (double)maximumZoomScale;
- (double)minimumZoomScale;
- (long long)pageCount;
- (id)pageNumberIndicator;
- (void)selectAll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentData:(id)arg1 withScrollView:(id)arg2;
- (void)setHasSelection:(bool)arg1;
- (void)setSelectionRects:(id)arg1;
- (void)setTextSelectionPoints:(struct CGPoint { double x1; double x2; })arg1 right:(struct CGPoint { double x1; double x2; })arg2;
- (void)setTextSelectionState:(int)arg1;
- (void)setup;
- (void)setupAutoScaleFactor:(struct CGSize { double x1; double x2; })arg1;
- (void)setupScrollViewContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)showTextSelectionMenu:(bool)arg1 selectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)updateCurrentPageIndex:(long long)arg1;
- (void)updateDocumentIsLocked:(bool)arg1;
- (void)updatePDFViewLayout;
- (void)updatePageCount:(long long)arg1;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)zoomToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
