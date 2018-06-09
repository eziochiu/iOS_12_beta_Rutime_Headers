/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIChartView : UIView <FIUIChartDataGroupDataSource, FIUIChartSeriesDataSource> {
    double  _animationDuration;
    FIUIChartBackgroundView * _backgroundView;
    NSArray * _chartSeries;
    UIView * _containerView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentBufferEdgeInsets;
    FIUIChartDataGroup * _dataGroup;
    <FIUIChartDataSource> * _dataSource;
    NSDateInterval * _dateInterval;
    NSNumber * _highlightedYValue;
    bool  _labelsInsetChartBackground;
    NSNumber * _maxYValue;
    NSNumber * _minYValue;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _seriesEdgeInsets;
    FIUIChartTimeAxisDescriptor * _xAxisDescriptor;
    NSArray * _xAxisLabels;
    bool  _xAxisLabelsShouldBaselineAlign;
    NSArray * _xAxisSubLabels;
    double  _xAxisToLabelPadding;
    <FIUIChartAxisDescriptor> * _yAxisDescriptor;
    double  _yAxisEdgeInset;
    NSArray * _yAxisLabels;
}

@property (nonatomic) double animationDuration;
@property (nonatomic, retain) FIUIChartBackgroundView *backgroundView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentBufferEdgeInsets;
@property (nonatomic) <FIUIChartDataSource> *dataSource;
@property (nonatomic, retain) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *highlightedYValue;
@property (nonatomic) bool labelsInsetChartBackground;
@property (nonatomic, retain) NSNumber *maxYValue;
@property (nonatomic, retain) NSNumber *minYValue;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } seriesEdgeInsets;
@property (readonly) Class superclass;
@property (nonatomic, retain) FIUIChartTimeAxisDescriptor *xAxisDescriptor;
@property (nonatomic) bool xAxisLabelsShouldBaselineAlign;
@property (nonatomic) double xAxisToLabelPadding;
@property (nonatomic, retain) <FIUIChartAxisDescriptor> *yAxisDescriptor;
@property (nonatomic) double yAxisEdgeInset;

- (void).cxx_destruct;
- (double)_absolutePositionForXPlaneValue:(id)arg1;
- (void)_adjustMinMaxValues;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_chartRect;
- (id)_dataPointAtIndex:(unsigned long long)arg1 forSeriesAtIndex:(unsigned long long)arg2;
- (id)_dataPointsForSeriesAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_insetChartRect;
- (id)_labelsForSeriesAtIndex:(unsigned long long)arg1;
- (void)_layoutAxisLabels;
- (void)_layoutChartSeries;
- (void)_layoutContainerView;
- (void)_layoutXAxisLabels;
- (void)_layoutYAxisLabels;
- (unsigned long long)_numberOfDataPointsForSeriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)_numberOfSeries;
- (void)_orderSubviews;
- (float)_relativePositionForXPlaneValue:(id)arg1;
- (void)_reloadDataSeries;
- (id)_seriesAtIndex:(unsigned long long)arg1;
- (void)_updateBackgroundView;
- (void)_updateDataSeries;
- (void)_updateHighlightedValue;
- (double)_xAxisLabelPaddingForBackground:(bool)arg1;
- (double)_yAxisLabelPadding;
- (double)animationDuration;
- (id)backgroundView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentBufferEdgeInsets;
- (id)dataGroup:(id)arg1 dataPointsForSetAtIndex:(unsigned long long)arg2;
- (id)dataGroup:(id)arg1 labelsForSetAtIndex:(unsigned long long)arg2;
- (unsigned long long)dataGroup:(id)arg1 numberOfPointsInSetAtIndex:(unsigned long long)arg2;
- (id)dataGroup:(id)arg1 pointForSetAtIndex:(unsigned long long)arg2 pointIndex:(unsigned long long)arg3;
- (id)dataSource;
- (id)dateInterval;
- (id)highlightedYValue;
- (id)init;
- (id)initWithDateInterval:(id)arg1;
- (bool)labelsInsetChartBackground;
- (void)layoutSubviews;
- (id)maxXValueForChartSeries:(id)arg1;
- (id)maxYValue;
- (id)maxYValueForChartSeries:(id)arg1;
- (id)minXValueForChartSeries:(id)arg1;
- (id)minYValue;
- (id)minYValueForChartSeries:(id)arg1;
- (unsigned long long)numberOfDataSetsInGroup:(id)arg1;
- (void)reloadData;
- (void)selectAxisPoint:(long long)arg1 selected:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })seriesEdgeInsets;
- (void)setAnimationDuration:(double)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentBufferEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setHighlightedYValue:(id)arg1;
- (void)setLabelsInsetChartBackground:(bool)arg1;
- (void)setMaxYValue:(id)arg1;
- (void)setMinYValue:(id)arg1;
- (void)setSeriesEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setXAxisDescriptor:(id)arg1;
- (void)setXAxisLabelsShouldBaselineAlign:(bool)arg1;
- (void)setXAxisToLabelPadding:(double)arg1;
- (void)setYAxisDescriptor:(id)arg1;
- (void)setYAxisEdgeInset:(double)arg1;
- (id)xAxisDescriptor;
- (bool)xAxisLabelsShouldBaselineAlign;
- (double)xAxisToLabelPadding;
- (id)yAxisDescriptor;
- (double)yAxisEdgeInset;

@end
