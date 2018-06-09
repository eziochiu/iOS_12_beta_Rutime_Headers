/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartRadialBodyLayoutItem : TSCHChartBodyLayoutItem {
    TSCHRadialBodyLayoutItemPathCache * mPathCache;
    NSArray * mWedgeLayoutInfosInLocalSpace;
}

@property (retain) TSCHRadialBodyLayoutItemPathCache *p_pathCache;
@property (nonatomic, readonly) NSDictionary *wedgeLayoutInfosInChartCoordinateSpaceForSeriesIndex;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })bodySizeForOverhangSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcDrawingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcOverhangRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calloutLineBoundingBoxForSeries:(unsigned long long)arg1;
- (id)createAndOptimallyPlaceWedgeLayoutInfos;
- (id)createWedgeLayoutInfos;
- (id)defaultPieWedgeElementForSeriesModelCache:(id)arg1;
- (id)defaultPieWedgeLayoutInfoForSeriesModelCache:(id)arg1 pieLabels:(id)arg2 combinedLabelTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (id)knobsOfElementForSeries:(unsigned long long)arg1 withInnerRadius:(id)arg2;
- (id)knobsWithRadius:(double)arg1 center:(struct CGPoint { double x1; double x2; })arg2 startAngle:(double)arg3 midAngle:(double)arg4 endAngle:(double)arg5;
- (struct TSCHChartPieLabelGeometries { struct TSCHChartPieLabelGeometry { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_1_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_1_1_4; } x1; struct TSCHChartPieLabelGeometry { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_2_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_2_1_4; } x2; })labelGeometriesForRenderingLabelsForSeriesModelCache:(id)arg1 topLabelType:(long long)arg2 bottomLabelType:(long long)arg3;
- (struct TSCHChartPieLabelGeometry { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; })labelGeometryForRenderingLabelForSeriesModelCache:(id)arg1 labelType:(long long)arg2;
- (id)labelStringForType:(long long)arg1 seriesModelCache:(id)arg2;
- (struct CGPath { }*)newElementPathWithPercentage:(double)arg1 radius:(double)arg2 center:(struct CGPoint { double x1; double x2; })arg3 startAngle:(double)arg4 midAngle:(double)arg5 endAngle:(double)arg6 withInnerRadius:(id)arg7;
- (id)newPathsForRenderingCalloutLineForSeries:(unsigned long long)arg1 outStartLineEndPath:(id*)arg2 outEndLineEndPath:(id*)arg3 stroke:(id)arg4 outStroke:(id*)arg5 context:(struct CGContext { }*)arg6 contextScale:(float)arg7;
- (double)normalizedLabelDistanceFromWedgeTipForSeries:(id)arg1;
- (id)optimizedWedgeLayoutInfoPlacementForWedgeLayoutInfos:(id)arg1;
- (struct CGSize { double x1; double x2; })overhangSizeForBodySize:(struct CGSize { double x1; double x2; })arg1;
- (void)p_collectMaxRatio:(double*)arg1 maxLabelOverhang:(double*)arg2 maxWedgeExplosion:(float*)arg3 maxComboExplosion:(float*)arg4;
- (id)p_pathCache;
- (id)pathCacheForSeries:(unsigned long long)arg1 withInnerRadius:(id)arg2;
- (struct CGPath { }*)pathOfElementForSeries:(unsigned long long)arg1 outWedgeCenterPoint:(struct CGPoint { double x1; double x2; }*)arg2 withInnerRadius:(id)arg3;
- (id)renderersWithRep:(id)arg1;
- (id)seriesIndexToWedgeLayoutInfoMapWithWedgeLayoutInfos:(id)arg1;
- (id)seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
- (void)setLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setP_pathCache:(id)arg1;
- (struct CGSize { double x1; double x2; })titleSizeToUseForOverlapPreventionWithLabels;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingElementForSeries:(unsigned long long)arg1 outElementSize:(struct CGSize { double x1; double x2; }*)arg2 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 withInnerRadius:(id)arg4;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToMaintainLabelSameDistanceAwayFromWedge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wedgeElement:(id)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToShiftStraightLineLabelRectOutForEnableCalloutLineONSetting:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wedgeElement:(id)arg2;
- (id)wedgeLayoutInfosInChartCoordinateSpace;
- (id)wedgeLayoutInfosInChartCoordinateSpaceForSeriesIndex;
- (id)wedgeLayoutInfosInLocalSpaceForSeriesIndex;

@end
