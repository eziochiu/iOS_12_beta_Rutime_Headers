/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHBarColumnElementBuilder : TSCHElementBuilder {
    bool  mVertical;
}

+ (void)calculateGapsForChartModel:(id)arg1 forTotalWidth:(float)arg2 outBarWidth:(float*)arg3 outBarGroupGap:(float*)arg4 outBarGap:(float*)arg5;

- (unsigned long long)countOfBarRectsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewGroupIndexArray:(unsigned long long**)arg4 outNewElementRectsArray:(struct CGRect {}**)arg5 outNewClipRectsArray:(struct CGRect {}**)arg6;
- (unsigned long long)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(struct CGRect {}**)arg4 outNewClipRects:(struct CGRect {}**)arg5 outNewElementPaths:(const struct CGPath {}***)arg6 outSelectionKnobLocations:(id*)arg7;
- (unsigned long long)countOfErrorBarsInSeries:(id)arg1 forGroups:(id)arg2 forAxisID:(id)arg3 forBodyLayout:(id)arg4 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 outNewErrorBarDescriptors:(struct { /* ? */ }**)arg6;
- (unsigned long long)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(struct CGAffineTransform {}**)arg4 outNewElementSizes:(struct CGSize {}**)arg5 outNewClipRect:(struct CGRect {}**)arg6 outNewStrings:(id*)arg7;
- (id)init;
- (id)initWithVertical:(bool)arg1;
- (struct CGPath { }*)newRoundedRectPathWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 chartInfo:(id)arg2 series:(id)arg3 groupIndex:(unsigned long long)arg4 isVertical:(bool)arg5 forGroups:(id)arg6 forBodyLayout:(id)arg7;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nudgeBarElementFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inPlotAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 usingBarModelCache:(id)arg3 unitSpaceValueBegin:(double)arg4 unitSpaceValueEnd:(double)arg5 withViewScale:(double)arg6;
- (double)p_beginValueForSeries:(id)arg1 index:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(bool)arg4 valueAxis:(id)arg5;
- (void)p_calcGapsForBodyLayout:(id)arg1 outBarWidth:(float*)arg2 outBarGroupGap:(float*)arg3 outBarGap:(float*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_createBarRectInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSeries:(id)arg2 valueIndex:(unsigned long long)arg3 valueAxis:(id)arg4 groupAxis:(id)arg5 barWidth:(float)arg6 barGroupGap:(float)arg7 barGap:(float)arg8;
- (unsigned long long)p_logicalSeriesIndexForSeries:(id)arg1;
- (void)p_nudgeBarElementFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 inPlotAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 usingBarModelCache:(id)arg3 unitSpaceValueBegin:(double)arg4 unitSpaceValueEnd:(double)arg5 withViewScale:(double)arg6;
- (unsigned long long)p_numberOfSeriesForGapCalcInModel:(id)arg1;
- (void)p_trendlineInfoForSeries:(id)arg1 forBodyLayout:(id)arg2 outVertical:(bool*)arg3 outOffsetInBody:(double*)arg4;

@end
