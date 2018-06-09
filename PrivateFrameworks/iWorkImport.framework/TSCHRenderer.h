/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHRenderer : NSObject <TSCHSupportsTextEditing> {
    TSCHChartLayoutItem * mChartLayoutItem;
    <TSCHSupportsRendering> * mChartRep;
}

@property (nonatomic, readonly) TSCHChartInfo *chartInfo;
@property (nonatomic, readonly) <TSCHSupportsRendering> *chartRep;
@property (nonatomic, readonly) struct CGColor { }*debugColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool debugLayout;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSCHChartLayoutItem *layoutItem;
@property (nonatomic, readonly) TSCHChartModel *model;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsSeparateLabelsRenderPass;
@property (nonatomic, readonly) double viewScale;

- (void).cxx_destruct;
- (void)addSelection:(id)arg1 toCGPath:(struct CGPath { }*)arg2 useWrapWidth:(bool)arg3;
- (bool)canEditTextForSelectionPath:(id)arg1;
- (bool)canRenderSelectionPath:(id)arg1;
- (id)chartInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })chartLayoutSpaceRenderingRect;
- (id)chartRep;
- (int)chunkPlane;
- (struct CGColor { }*)debugColor;
- (bool)debugLayout;
- (void)drawErrorBarsInContext:(struct CGContext { }*)arg1 chartVertical:(bool)arg2 elementRenderClass:(Class)arg3;
- (void)drawTrendLinesInContext:(struct CGContext { }*)arg1 chartVertical:(bool)arg2 elementRenderClass:(Class)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForEditingTextForSelectionPath:(id)arg1;
- (double)frameHeightChangeForPath:(id)arg1;
- (id)initWithChartRep:(id)arg1 layoutItem:(id)arg2;
- (bool)isCompositeRenderer;
- (id)layoutItem;
- (id)model;
- (void)p_debugLayoutInContext:(struct CGContext { }*)arg1;
- (void)p_renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)renderIntoContext:(struct CGContext { }*)arg1 selection:(id)arg2;
- (void)renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)strokeRectInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 color:(struct CGColor { }*)arg3;
- (bool)supportsSeparateLabelsRenderPass;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tLayerRectForContext:(struct CGContext { }*)arg1;
- (int)textDrawingFlagForSelectionPath:(id)arg1;
- (id)textEditorForSelectionPath:(id)arg1 chartEditor:(id)arg2;
- (void)useEditedString:(id)arg1;
- (double)viewScale;

@end
