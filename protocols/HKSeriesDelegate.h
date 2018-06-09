/* made by EzioChiu.
 */

@protocol HKSeriesDelegate

@required

- (void)autoscaleStateChangedForSeries:(HKGraphSeries *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenRectForSeries:(HKGraphSeries *)arg1;
- (void)seriesDidInvalidatePaths:(HKGraphSeries *)arg1 newDataArrived:(bool)arg2;
- (bool)seriesDrawingDuringAutoscale;
- (bool)seriesDrawingDuringScrolling;
- (bool)seriesDrawingDuringTiling;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })virtualMarginInsets;

@end
