/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSleepPeriodSeries : HKGraphSeries {
    struct CGSize { 
        double width; 
        double height; 
    }  _cornerRadii;
    NSArray * _defaultFillStyles;
    HKStrokeStyle * _goalLineStokeStyle;
    NSArray * _highlightedFillStyles;
    id /* block */  _startOfDayTransform;
    HKStrokeStyle * _strokeStyle;
    HKStrokeStyle * _tiledStrokeStyle;
}

@property (nonatomic) struct CGSize { double x1; double x2; } cornerRadii;
@property (nonatomic, copy) NSArray *defaultFillStyles;
@property (nonatomic, copy) HKStrokeStyle *goalLineStokeStyle;
@property (nonatomic, copy) NSArray *highlightedFillStyles;
@property (nonatomic, copy) id /* block */ startOfDayTransform;
@property (nonatomic, copy) HKStrokeStyle *strokeStyle;
@property (nonatomic, copy) HKStrokeStyle *tiledStrokeStyle;

- (void).cxx_destruct;
- (void)_addAnnotationForValue:(double)arg1;
- (void)_assertCoordinateCompatibility:(id)arg1;
- (void)_drawGoalLinePath:(id)arg1 context:(struct CGContext { }*)arg2;
- (void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 context:(struct CGContext { }*)arg5;
- (void)_drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 context:(struct CGContext { }*)arg4 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (double)_maximumYForCoordinate:(id)arg1;
- (double)_minimumYForCoordinate:(id)arg1;
- (long long)_visibleBarCountWithZoomLevelConfiguration:(id)arg1;
- (double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 minimumSpacing:(double)arg3;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blockCoordinate:(id)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { long long x1; long long x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (struct CGSize { double x1; double x2; })cornerRadii;
- (id)defaultFillStyles;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6;
- (id)goalLineStokeStyle;
- (id)highlightedFillStyles;
- (void)setCornerRadii:(struct CGSize { double x1; double x2; })arg1;
- (void)setDefaultFillStyles:(id)arg1;
- (void)setGoalLineStokeStyle:(id)arg1;
- (void)setHighlightedFillStyles:(id)arg1;
- (void)setStartOfDayTransform:(id /* block */)arg1;
- (void)setStrokeStyle:(id)arg1;
- (void)setTiledStrokeStyle:(id)arg1;
- (bool)shouldInvertAxis;
- (id /* block */)startOfDayTransform;
- (id)stringFromTimeSinceNoon:(id)arg1;
- (id)strokeStyle;
- (bool)supportsMultiTouchSelection;
- (id)tiledStrokeStyle;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
