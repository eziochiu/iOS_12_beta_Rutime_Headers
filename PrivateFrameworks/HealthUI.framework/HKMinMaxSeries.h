/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMinMaxSeries : HKGraphSeries {
    UIImage * _selectedPointMarkerImage;
    HKStrokeStyle * _selectedStrokeStyle;
    UIImage * _unselectedPointMarkerImage;
    HKStrokeStyle * _unselectedStrokeStyle;
}

@property (nonatomic, retain) UIImage *selectedPointMarkerImage;
@property (nonatomic, retain) HKStrokeStyle *selectedStrokeStyle;
@property (nonatomic, retain) UIImage *unselectedPointMarkerImage;
@property (nonatomic, retain) HKStrokeStyle *unselectedStrokeStyle;

- (void).cxx_destruct;
- (void)_drawPointMarkersWithBlockCoordinates:(id)arg1 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 context:(struct CGContext { }*)arg3;
- (void)_drawStrokeWithBlockCoordinates:(id)arg1 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 context:(struct CGContext { }*)arg3 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blockCoordinate:(id)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { long long x1; long long x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6;
- (id)selectedPointMarkerImage;
- (id)selectedStrokeStyle;
- (void)setSelectedPointMarkerImage:(id)arg1;
- (void)setSelectedStrokeStyle:(id)arg1;
- (void)setUnselectedPointMarkerImage:(id)arg1;
- (void)setUnselectedStrokeStyle:(id)arg1;
- (bool)supportsMultiTouchSelection;
- (id)unselectedPointMarkerImage;
- (id)unselectedStrokeStyle;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
