/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFExtensionViewControllerPrivate : NSObject {
    long long  currentGestureState;
    bool  hasSelection;
    <PDFHostProtocol> * hostProxy;
    PDFView * pdfView;
    NSMutableArray * searchResults;
    PDFSelection * searchSelection;
    NSString * searchString;
}

- (void).cxx_destruct;

@end
