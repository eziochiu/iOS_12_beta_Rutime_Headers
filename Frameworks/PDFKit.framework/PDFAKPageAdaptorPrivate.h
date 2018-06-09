/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFAKPageAdaptorPrivate : NSObject {
    AKPageModelController * akPageModelController;
    bool  isObservingPageModel;
    bool  isSyncingFromAKPageModel;
    bool  isSyncingFromPDFPage;
    bool  isTornDown;
    PDFPage * pdfPage;
}

- (void).cxx_destruct;

@end
