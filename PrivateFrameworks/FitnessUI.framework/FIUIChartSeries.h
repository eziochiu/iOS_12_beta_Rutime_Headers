/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIChartSeries : UIView {
    FIUIChartDataSet * _dataSet;
    <FIUIChartSeriesDataSource> * _dataSource;
    bool  _displayAboveAxisLabels;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    NSDate * _maxXValue;
    NSNumber * _maxYValue;
    NSDate * _minXValue;
    NSNumber * _minYValue;
}

@property (nonatomic, retain) FIUIChartDataSet *dataSet;
@property (nonatomic) <FIUIChartSeriesDataSource> *dataSource;
@property (nonatomic) bool displayAboveAxisLabels;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } insetBounds;
@property (nonatomic, retain) NSNumber *maxYValue;
@property (nonatomic, retain) NSNumber *minYValue;

- (void).cxx_destruct;
- (float)_relativePositionForXPlaneValue:(id)arg1;
- (float)_relativePositionForYPlaneValue:(id)arg1;
- (void)_reloadMinMaxValues;
- (id)dataSet;
- (id)dataSource;
- (bool)displayAboveAxisLabels;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })insetBounds;
- (id)labelsFromDataSet;
- (void)layoutSubviews;
- (id)maxYValue;
- (id)minYValue;
- (void)setDataSet:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDisplayAboveAxisLabels:(bool)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMaxYValue:(id)arg1;
- (void)setMinYValue:(id)arg1;
- (double)xValueForPointFromChartPoint:(id)arg1;
- (double)yValueForPointFromChartPointValue:(id)arg1;

@end
