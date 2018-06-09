/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StockGraphView : UIView <GraphRenderOperationDelegate> {
    StockChartData * _chartData;
    UIView<StockGraphViewContainer> * _chartViewDelegate;
    unsigned int  _dataCount;
    unsigned int  _dataSize;
    StockChartDisplayMode * _displayMode;
    NSArray * _dottedLinePositions;
    NSArray * _dottedLinePositionsForStyleOnly;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _graphInsets;
    bool  _isRendered;
    NSMutableArray * _linePointCounts;
    LineGraphView * _lineView;
    unsigned long long  _maxVolume;
    struct CGPoint { double x1; double x2; } * _points;
    GraphRenderOperation * _renderOperation;
    int  _valueCount;
    int  _valueIndex;
    struct CGPoint { double x1; double x2; } * _values;
    double  _volumeBarWidth;
    struct { double x1; unsigned long long x2; } * _volumeBars;
    unsigned int  _volumeCount;
    unsigned int  _volumeSize;
    VolumeGraphView * _volumeView;
}

@property (nonatomic) UIView<StockGraphViewContainer> *chartViewDelegate;
@property (nonatomic, retain) StockChartDisplayMode *displayMode;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } graphInsets;
@property (nonatomic, readonly) bool isRendered;
@property (nonatomic, readonly) bool isRendering;

- (void).cxx_destruct;
- (void)_finishCurrentLine;
- (void)_layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_lineViewFrameForBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)_normalizedAccumulatedVolumeInDataRange:(struct CGPoint { double x1; double x2; })arg1;
- (float)_priceAtTime:(double)arg1 dataPosition:(double*)arg2;
- (void)_processGraphDataForWidth:(double)arg1;
- (double)_timeAtPosition:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_trueGraphPointsRegion;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_volumeViewFrameForBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)cancelRenderOperation;
- (id)chartViewDelegate;
- (void)clearData;
- (void)clearPaths;
- (void)dealloc;
- (id)displayMode;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })graphInsets;
- (void)graphRenderOperationDidFinish:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRendered;
- (bool)isRendering;
- (void)loadStockChartData:(id)arg1;
- (struct { double x1; double x2; unsigned long long x3; })plottedPointNearestToPoint:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)readyForDisplayFromChartData;
- (void)recomputePathsAndRenderIfNeededForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)resizeSelectedLineClipViewWithLeftX:(double)arg1 rightX:(double)arg2;
- (void)resizeSelectedVolumeClipViewWithLeftX:(double)arg1 rightX:(double)arg2;
- (struct CGPoint { double x1; double x2; })rightmostPlottedPoint;
- (void)setChartViewDelegate:(id)arg1;
- (void)setDisplayMode:(id)arg1;
- (void)setDottedLinePositionsWithLabelInfo:(id)arg1;
- (void)setEvenlySpacedDottedLinePositionsWithCount:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGraphInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShowingSelectedLine:(bool)arg1;
- (void)setShowingSelectedVolumeRegion:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })volumeBarRectNearestToPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
