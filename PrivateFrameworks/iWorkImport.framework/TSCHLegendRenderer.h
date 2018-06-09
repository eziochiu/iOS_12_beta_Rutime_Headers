/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendRenderer : TSCHRenderer {
    struct CGPoint { 
        double x; 
        double y; 
    }  _textEditingPixelAlignmentOffset;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } textEditingPixelAlignmentOffset;

- (void)addSelection:(id)arg1 toCGPath:(struct CGPath { }*)arg2 useWrapWidth:(bool)arg3;
- (bool)canRenderSelectionPath:(id)arg1;
- (void)p_draw3DLineBadgeIntoContext:(struct CGContext { }*)arg1 forCell:(id)arg2;
- (void)p_drawBadgeForCell:(id)arg1 intoContext:(struct CGContext { }*)arg2;
- (void)p_drawDefaultBadgeIntoContext:(struct CGContext { }*)arg1 forCell:(id)arg2;
- (void)p_drawDonutBadgeIntoContext:(struct CGContext { }*)arg1 forCell:(id)arg2;
- (void)p_drawLabelForCell:(id)arg1 intoContext:(struct CGContext { }*)arg2 rangePtr:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (void)p_drawLineAreaBadgeIntoContext:(struct CGContext { }*)arg1 forCell:(id)arg2;
- (void)p_drawPieBadgeIntoContext:(struct CGContext { }*)arg1 forCell:(id)arg2;
- (void)p_renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)p_selectionPathForCell:(id)arg1;
- (void)renderIntoContext:(struct CGContext { }*)arg1 selection:(id)arg2;
- (void)setTextEditingPixelAlignmentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })textEditingPixelAlignmentOffset;

@end
