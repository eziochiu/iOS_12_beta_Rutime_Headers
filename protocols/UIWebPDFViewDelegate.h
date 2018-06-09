/* made by EzioChiu.
 */

@protocol UIWebPDFViewDelegate

@optional

- (void)didDetermineDocumentBounds:(UIWebPDFView *)arg1;
- (void)handleLinkClick:(NSString *)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)handleLongPressOnLink:(NSString *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (NSString *)passwordForPDFView:(UIWebPDFView *)arg1;
- (void)pdfView:(UIWebPDFView *)arg1 zoomToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forPoint:(struct CGPoint { double x1; double x2; })arg3 considerHeight:(bool)arg4;
- (void)resetZoom:(UIWebPDFView *)arg1;

@end
