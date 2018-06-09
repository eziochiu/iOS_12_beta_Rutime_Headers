/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStackedBarColumnElementBuilder : TSCHBarColumnElementBuilder

- (struct CGPath { }*)newRoundedRectPathWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 chartInfo:(id)arg2 series:(id)arg3 groupIndex:(unsigned long long)arg4 isVertical:(bool)arg5 forGroups:(id)arg6 forBodyLayout:(id)arg7;
- (double)p_beginValueForSeries:(id)arg1 index:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(bool)arg4 valueAxis:(id)arg5;
- (unsigned long long)p_logicalSeriesIndexForSeries:(id)arg1;
- (unsigned long long)p_numberOfSeriesForGapCalcInModel:(id)arg1;
- (id)p_stackedRectsWithChartInfo:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3;

@end
