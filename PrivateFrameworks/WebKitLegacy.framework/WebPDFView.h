/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebPDFView : WAKView <WebPDFDocumentRepresentation, WebPDFDocumentView> {
    struct CGPDFDocument { } * _PDFDocument;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _pageRects;
    NSString * _title;
    bool  dataSourceHasBeenSet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)_representationClassForWebFrame:(id)arg1;
+ (struct CGColor { }*)backgroundColor;
+ (struct CGColor { }*)shadowColor;
+ (id)supportedMIMETypes;

- (void)_checkPDFTitle;
- (void)_computePageRects;
- (id)_pagesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)canProvideDocumentSource;
- (void)dataSourceUpdated:(id)arg1;
- (void)dealloc;
- (struct CGPDFDocument { }*)doc;
- (id)documentSource;
- (void)drawPage:(struct CGPDFPage { }*)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)layout;
- (unsigned int)pageNumberForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPageNumber:(unsigned int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setNeedsLayout:(bool)arg1;
- (id)title;
- (unsigned int)totalPages;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;

@end
