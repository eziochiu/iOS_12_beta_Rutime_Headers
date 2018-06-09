/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPdfHandoutExporter : KNPdfExporter {
    bool  _isPrintingNote;
    bool  _printingDivider;
    bool  _printingNotes;
    bool  _printingRuledLines;
}

@property (getter=isPrintingDivider, nonatomic) bool printingDivider;
@property (getter=isPrintingNotes, nonatomic) bool printingNotes;
@property (getter=isPrintingRuledLines, nonatomic) bool printingRuledLines;

- (id)currentInfos;
- (bool)drawCurrentPageInContext:(struct CGContext { }*)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 createPage:(bool)arg4;
- (bool)incrementPage;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)isPrintingDivider;
- (bool)isPrintingNotes;
- (bool)isPrintingRuledLines;
- (void)p_drawDividerLineForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3;
- (void)p_drawNotesForNode:(id)arg1 index:(unsigned long long)arg2 forRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 unscaledClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 scaledClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 context:(struct CGContext { }*)arg6;
- (void)p_drawRuledLinesForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 numberOfLines:(unsigned long long)arg3 context:(struct CGContext { }*)arg4;
- (void)setPrintingDivider:(bool)arg1;
- (void)setPrintingNotes:(bool)arg1;
- (void)setPrintingRuledLines:(bool)arg1;

@end
