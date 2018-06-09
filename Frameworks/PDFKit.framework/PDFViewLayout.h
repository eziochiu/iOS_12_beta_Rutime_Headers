/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFViewLayout : NSObject {
    PDFViewLayoutPrivate * _private;
}

@property (nonatomic) id delegate;
@property (nonatomic) PDFDocument *document;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForPage:(id)arg1;
- (struct CGSize { double x1; double x2; })contentSizeWithCurrentPage:(id)arg1;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromPage:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toPage:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toPage:(id)arg2 forScaleFactor:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3;
- (void)dealloc;
- (id)delegate;
- (id)document;
- (id)facingPageForPage:(id)arg1;
- (long long)functionalDisplayMode;
- (void)generateInternalDocumentGeometry;
- (id)init;
- (void)invalidateInternalDocumentGeometry;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedPageBounds:(id)arg1;
- (id)pageNearestPoint:(struct CGPoint { double x1; double x2; })arg1 currentPage:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDocument:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visiblePageRangeInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 currentPage:(id)arg2;
- (id)visiblePagesInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 currentPage:(id)arg2;

@end
