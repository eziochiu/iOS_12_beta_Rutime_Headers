/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFAKPageAdaptor : NSObject {
    PDFAKPageAdaptorPrivate * _private;
}

@property (nonatomic, readonly) AKPageModelController *akPageModelController;
@property (nonatomic, readonly) PDFPage *pdfPage;

- (void).cxx_destruct;
- (void)_annotationsWereAdded:(id)arg1;
- (void)_annotationsWereRemoved:(id)arg1;
- (void)_startObservingPageModel;
- (void)_stopObservingPageModel;
- (void)_teardown;
- (id)akPageModelController;
- (void)dealloc;
- (id)initWithPDFPage:(id)arg1;
- (id)initWithPDFPage:(id)arg1 pageModelController:(id)arg2;
- (void)initializeExifAndScaleOnAnnotation:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pdfPage;
- (void)pdfPage:(id)arg1 didAddAnnotation:(id)arg2;
- (void)pdfPage:(id)arg1 didRemoveAnnotation:(id)arg2;
- (void)pdfPageWasRotated:(id)arg1;
- (void)teardown;

@end
