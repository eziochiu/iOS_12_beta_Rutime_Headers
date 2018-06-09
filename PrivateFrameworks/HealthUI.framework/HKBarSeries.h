/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKBarSeries : HKGraphSeries {
    struct CGSize { 
        double width; 
        double height; 
    }  _cornerRadii;
    HKFillStyle * _selectedFillStyle;
    HKStrokeStyle * _selectedStrokeStyle;
    HKStrokeStyle * _tiledStrokeStyle;
    HKFillStyle * _unselectedFillStyle;
    HKStrokeStyle * _unselectedStrokeStyle;
}

@property (nonatomic) struct CGSize { double x1; double x2; } cornerRadii;
@property (nonatomic, retain) HKFillStyle *selectedFillStyle;
@property (nonatomic, retain) HKStrokeStyle *selectedStrokeStyle;
@property (nonatomic, retain) HKStrokeStyle *tiledStrokeStyle;
@property (nonatomic, retain) HKFillStyle *unselectedFillStyle;
@property (nonatomic, retain) HKStrokeStyle *unselectedStrokeStyle;

- (void).cxx_destruct;
- (void)_drawPath:(id)arg1 withFillStyle:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 context:(struct CGContext { }*)arg5;
- (double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 minimumSpacing:(double)arg3;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blockCoordinate:(id)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { long long x1; long long x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (struct CGSize { double x1; double x2; })cornerRadii;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6;
- (void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 context:(struct CGContext { }*)arg4 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (id)selectedFillStyle;
- (id)selectedStrokeStyle;
- (void)setCornerRadii:(struct CGSize { double x1; double x2; })arg1;
- (void)setSelectedFillStyle:(id)arg1;
- (void)setSelectedStrokeStyle:(id)arg1;
- (void)setTiledStrokeStyle:(id)arg1;
- (void)setUnselectedFillStyle:(id)arg1;
- (void)setUnselectedStrokeStyle:(id)arg1;
- (bool)supportsMultiTouchSelection;
- (id)tiledStrokeStyle;
- (id)unselectedFillStyle;
- (id)unselectedStrokeStyle;
- (long long)visibleBarCountWithZoomLevelConfiguration:(id)arg1;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
