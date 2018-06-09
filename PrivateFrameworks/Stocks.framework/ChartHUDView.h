/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface ChartHUDView : UIView {
    double  _barHeight;
    UILabel * _centeredLabel;
    StockChartView * _chartView;
    bool  _enabled;
    bool  _forceTouchUpdate;
    StockGraphView * _graphView;
    NSMutableSet * _inactiveTouchInfoSet;
    long long  _interval;
    UILabel * _leftDateLabel;
    bool  _overlayHidden;
    PricePopoverBar * _pricePopoverBar;
    UILabel * _rightDateLabel;
    StocksTapDragGestureRecognizer * _tapDragGesture;
    NSMutableSet * _touchInfoSet;
}

@property (nonatomic) double barHeight;
@property (nonatomic) StockChartView *chartView;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) StockGraphView *graphView;
@property (getter=isOverlayHidden, nonatomic) bool overlayHidden;

+ (id)_dateRangeSeparatorString;
+ (void)initializeDateFormattersIfNeededForInterval:(long long)arg1 withTimeZone:(id)arg2;
+ (id)monoSpacedFontWithFont:(id)arg1;
+ (id)newHUDLabel;
+ (id)stringForTimeIntervalSince1970:(double)arg1 withInterval:(long long)arg2 isDouble:(bool)arg3 isLeft:(bool)arg4;

- (void).cxx_destruct;
- (void)_showHUD;
- (double)barHeight;
- (id)chartView;
- (bool)enabled;
- (id)graphView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOverlayHidden;
- (bool)isTrackingTouches;
- (void)layoutSubviews;
- (void)resetLocale;
- (void)resizeSelectedClipViewsIfNeeded;
- (void)setBarHeight:(double)arg1;
- (void)setChartView:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGraphView:(id)arg1;
- (void)setOverlayHidden:(bool)arg1;
- (void)setSelectedInterval:(long long)arg1 timeZone:(id)arg2;
- (void)setShowingTracking:(bool)arg1 withTouchInfo:(id)arg2 animated:(bool)arg3;
- (void)tapDragGestureChanged:(id)arg1;

@end
