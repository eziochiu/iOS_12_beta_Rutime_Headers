/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFAKOverlayAdaptor : NSObject {
    PDFAKOverlayAdaptorPrivate * _private;
}

@property (nonatomic, readonly) PDFView *pdfView;

+ (id)instanceForPlatformWithPDFView:(id)arg1;

- (void).cxx_destruct;
- (id)_annotationController;
- (void)_currentPageChanged:(id)arg1;
- (void)_installOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_pageRotationChanged:(id)arg1;
- (id)_pdfView;
- (void)_selectionChanged:(id)arg1;
- (void)_selectionDidEndChanging:(id)arg1;
- (void)_selectionWillBeginChanging:(id)arg1;
- (void)_setupGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;
- (void)_setupRotationNotificationObservationForPageAtIndex:(unsigned long long)arg1;
- (void)_teardown;
- (void)_teardownGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;
- (void)_teardownRotationNotificationObservationForPageAtIndex:(unsigned long long)arg1;
- (void)_uninstallAllOverlays;
- (void)_uninstallOverlayAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithPDFView:(id)arg1;
- (id)pdfView;
- (void)pdfView:(id)arg1 didAddView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(id)arg1 didSetDocument:(id)arg2;
- (void)pdfView:(id)arg1 willRemoveView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(id)arg1 willSetDocument:(id)arg2;
- (void)teardown;

@end