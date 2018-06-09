/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartNonRep : NSObject <TSCHSupportsRendering> {
    TSCHChartInfo * mChartInfo;
    TSCHChartLayout * mChartLayout;
    NSArray * mRenderers;
}

@property (nonatomic, retain) TSCHChartInfo *chartInfo;
@property (nonatomic, retain) TSCHChartLayout *chartLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)chartInfo;
- (id)chartLayout;
- (void)clearRenderers;
- (id)commandController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertNaturalRectToLayerRelative:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertUnscaledToBoundsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)didDrawInLayer:(id)arg1 context:(struct CGContext { }*)arg2;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (bool)forceRenderBlankBackground;
- (id)geometry;
- (id)initWithChartInfo:(id)arg1;
- (bool)is2DRepFor3DChartRep;
- (bool)isDrawingIntoPDF;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outerShadowFrame;
- (bool)renderElements;
- (bool)renderElementsShadowOnly;
- (bool)renderElementsWithoutShadows;
- (bool)renderGrid;
- (bool)renderLabels;
- (bool)renderReferenceLines;
- (id)renderSeriesIndexSet;
- (bool)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;
- (id)renderValueIndexSetForSeries:(unsigned long long)arg1;
- (id)renderers;
- (bool)requireSeparateLabelLayer;
- (void)setChartInfo:(id)arg1;
- (void)setChartLayout:(id)arg1;
- (void)setupForDrawingInLayer:(id)arg1 context:(struct CGContext { }*)arg2;
- (bool)shadowsEnabled;
- (bool)shouldShowLegendHighlight;
- (double)viewScale;

@end
