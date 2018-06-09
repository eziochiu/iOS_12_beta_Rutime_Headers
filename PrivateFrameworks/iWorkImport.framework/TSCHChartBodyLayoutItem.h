/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartBodyLayoutItem : TSCHChartLayoutItem {
    bool  mVertical;
}

@property (nonatomic, readonly, copy) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcDrawingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcOverhangRect;
- (unsigned long long)countOfElementsForModel:(id)arg1 series:(id)arg2 forGroupsBySeries:(id)arg3 outNewElementBounds:(struct CGRect {}**)arg4 outNewClipRects:(struct CGRect {}**)arg5 outNewElementPaths:(const struct CGPath {}***)arg6;
- (id)initWithParent:(id)arg1;
- (bool)layoutSpacePointIsInChartBody:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPath { }*)newDragAndDropHighlightPathForSelection:(id)arg1;
- (void)p_addRendererOfClass:(Class)arg1 andRep:(id)arg2 toArray:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_calcDrawingRectForModel:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_calcDrawingRectForReferenceLinesForModel:(id)arg1;
- (id)p_errorBarSubselectionKnobsForSeries:(id)arg1 axisID:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_exactLabelsDrawingRectForSeries:(id)arg1;
- (void)p_layoutOutward;
- (void)p_nudgeBarElementFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 usingBarModelCache:(id)arg2 unitSpaceValueBegin:(double)arg3 unitSpaceValueEnd:(double)arg4;
- (id)p_refLineSubselectionKnobsForStyleSwapIndex:(unsigned long long)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })p_transformForRenderingLabelForBarColSeries:(unsigned long long)arg1 forGroup:(unsigned long long)arg2 outElementSize:(struct CGSize { double x1; double x2; }*)arg3 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })p_transformForRenderingLabelForLineAreaSeries:(unsigned long long)arg1 forGroup:(unsigned long long)arg2 outElementSize:(struct CGSize { double x1; double x2; }*)arg3 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (id)p_trendLineEquationSubselectionKnobsForSeries:(id)arg1;
- (id)p_trendLineR2SubselectionKnobsForSeries:(id)arg1;
- (id)p_trendLineSubselectionKnobsForSeries:(id)arg1;
- (id)p_valueLabelSubselectionKnobsForSeries:(id)arg1;
- (void)protected_iterateHitChartElements:(struct CGPoint { double x1; double x2; })arg1 withBlock:(id /* block */)arg2;
- (id)renderersWithRep:(id)arg1;
- (id)seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingLabelForSeries:(unsigned long long)arg1 forGroup:(unsigned long long)arg2 outElementSize:(struct CGSize { double x1; double x2; }*)arg3 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;

@end