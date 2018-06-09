/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StockChartView : UIView <ChartIntervalButtonRowDelegate, ChartUpdaterDelegate, StockGraphViewContainer, StockUpdateObserver> {
    ChartHUDView * _HUDView;
    bool  _animating;
    NSMutableArray * _axisViews;
    UIView * _chartBottomKeyline;
    StockChartData * _chartData;
    UIView * _chartTopKeyline;
    ChartUpdater * _chartUpdater;
    <StockChartViewDelegate> * _chartViewDelegate;
    StocksViewController * _controller;
    StockChartDisplayMode * _currentDisplayMode;
    NSMutableArray * _displayModes;
    bool  _drawsBottomLine;
    NSError * _error;
    NSMutableDictionary * _graphViews;
    ChartIntervalButtonRow * _intervalButtonRow;
    bool  _layoutPending;
    LoadingLabel * _loadingLabel;
    long long  _preferredInterval;
    UILabel * _previousCloseLabel;
    DashedLineView * _previousCloseLine;
    long long  _selectedInterval;
    Stock * _stock;
    ChartTitleLabel * _titleView;
    UIView * _xAxisKeyline;
    NSMutableArray * _xLabelViews;
    NSMutableArray * _yLabelViews;
}

@property (nonatomic, readonly) NSArray *alternateDisplayModes;
@property (nonatomic, retain) StockChartData *chartData;
@property (nonatomic) <StockChartViewDelegate> *chartViewDelegate;
@property (nonatomic) StocksViewController *controller;
@property (nonatomic, retain) StockChartDisplayMode *currentDisplayMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool drawsBottomLine;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long preferredInterval;
@property (nonatomic) long long selectedInterval;
@property (nonatomic, retain) Stock *stock;
@property (readonly) Class superclass;

+ (struct CGGradient { }*)LineBackgroundGradient;

- (void).cxx_destruct;
- (id)HUDView;
- (double)_evennessOfValue:(double)arg1 inRange:(double)arg2;
- (void)_layoutAxesAndXLabels;
- (void)_layoutIntervalButtonRow;
- (void)_layoutSubviews;
- (void)_layoutTopLabelsHidden:(bool)arg1;
- (void)_layoutVolumeSeparatorLineForGraphRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_layoutYLabels;
- (void)_prepareXAxisLabelsAndPositions;
- (void)_prepareYAxisLabelsAndPositionsForDisplayMode:(id)arg1;
- (void)_setDayLabelsWithInterval:(unsigned int)arg1 realTimePositions:(bool)arg2;
- (void)_setHourLabels;
- (void)_setMonthAndYearLabels;
- (void)_setShowingLoadingStatus:(bool)arg1;
- (void)addDisplayMode:(id)arg1;
- (id)alternateDisplayModes;
- (void)animateTransitionToDisplayMode:(id)arg1;
- (id)chartData;
- (void)chartIntervalButtonRow:(id)arg1 didSelectChartInterval:(long long)arg2;
- (id)chartUpdater;
- (void)chartUpdater:(id)arg1 didFailWithError:(id)arg2;
- (void)chartUpdater:(id)arg1 didReceiveStockChartData:(id)arg2;
- (id)chartViewDelegate;
- (void)clearData;
- (id)controller;
- (void)createYLabelsForMode:(id)arg1;
- (id)currentDisplayMode;
- (id)currentGraphView;
- (id)description;
- (void)didTransitionToDisplayMode:(id)arg1;
- (bool)drawsBottomLine;
- (void)enumerateGraphsAndDisplayModesUsingBlock:(id /* block */)arg1;
- (id)error;
- (void)forceLayout;
- (id)graphViewForMode:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })graphViewFrameForMode:(id)arg1;
- (bool)hadError;
- (void)hideLabelsAxesAndGraphs;
- (void)hideOtherGraphViews;
- (double)horizontalPadding;
- (id)initWithInitialDisplayMode:(id)arg1 preferredChartInterval:(long long)arg2 stockChartViewDelegate:(id)arg3;
- (bool)isCurrentChart;
- (bool)isLandscape;
- (bool)isLoading;
- (void)layoutGraphViews;
- (void)layoutIfNeeded;
- (void)layoutLoadingStatus;
- (void)layoutPreviousClose;
- (void)layoutSubviews;
- (double)lineGraphBottomPadding;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lineGraphFrame;
- (long long)maxSupportedIntervalFromDesiredInterval:(long long)arg1;
- (long long)preferredInterval;
- (void)prepareForTransitionToDisplayMode:(id)arg1;
- (void)reloadData;
- (void)reloadDataIfStale;
- (void)renderGraphDataIfNeeded;
- (void)renderGraphDataIfNeededForMode:(id)arg1;
- (void)resetLocale;
- (long long)selectedInterval;
- (void)setChartData:(id)arg1;
- (void)setChartViewDelegate:(id)arg1;
- (void)setController:(id)arg1;
- (void)setCurrentDisplayMode:(id)arg1;
- (void)setDrawsBottomLine:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLabelsAndAxesAlpha:(double)arg1;
- (void)setNeedsLayout;
- (void)setPreferredInterval:(long long)arg1;
- (void)setSelectedInterval:(long long)arg1;
- (void)setShowingHUD:(bool)arg1;
- (void)setStock:(id)arg1;
- (bool)shouldShowLoadingStatus;
- (id)stock;
- (void)stockGraphViewReadyForDisplay:(id)arg1;
- (void)updateChartViewForSelectedInterval;
- (void)updateHUDView;
- (double)widestYLabelWidthForMode:(id)arg1;

@end
