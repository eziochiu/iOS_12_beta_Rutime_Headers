/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMedicalRecordChartSeries : HKGraphSeries {
    UIImage * _outOfRangeSelectedMarker;
    UIImage * _outOfRangeUnselectedMarker;
    UIImage * _withinRangeSelectedMarker;
    UIImage * _withinRangeUnselectedMarker;
}

@property (nonatomic, retain) UIImage *outOfRangeSelectedMarker;
@property (nonatomic, retain) UIImage *outOfRangeUnselectedMarker;
@property (nonatomic, retain) UIImage *withinRangeSelectedMarker;
@property (nonatomic, retain) UIImage *withinRangeUnselectedMarker;

- (void).cxx_destruct;
- (void)_renderPointMarkersInContext:(struct CGContext { }*)arg1 blockCoordinates:(id)arg2 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blockCoordinate:(id)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { long long x1; long long x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6;
- (id)outOfRangeSelectedMarker;
- (id)outOfRangeUnselectedMarker;
- (void)setOutOfRangeSelectedMarker:(id)arg1;
- (void)setOutOfRangeUnselectedMarker:(id)arg1;
- (void)setWithinRangeSelectedMarker:(id)arg1;
- (void)setWithinRangeUnselectedMarker:(id)arg1;
- (bool)supportsMultiTouchSelection;
- (id)withinRangeSelectedMarker;
- (id)withinRangeUnselectedMarker;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end