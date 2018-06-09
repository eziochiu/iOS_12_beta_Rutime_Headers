/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDateGraphViewController : HKGraphViewController <HKGraphViewDelegate> {
    HKUIInteractiveChartDateLabelSlider * _dateLabelSlider;
    long long  _dayScopeType;
    bool  _disableXAxis;
    bool  _hasSetVisibleDateRange;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumSize;
}

@property (nonatomic) long long dayScopeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableXAxis;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createDateLabelSlider;
- (id)_createGraphViewWithDateZoom:(long long)arg1 previousDateZoom:(long long)arg2 previousXAxisSpace:(double)arg3;
- (id)_dateAxisStyle;
- (void)_marginStyleChangeForContext:(long long)arg1 graphView:(id)arg2;
- (void)_resizeDateLabelSlider:(struct CGSize { double x1; double x2; })arg1;
- (void)_setupGraphViewSelectionStyle;
- (void)_updateDateSliderWithRange:(id)arg1 graphView:(id)arg2;
- (id)_xAxisLabelFont;
- (long long)dayScopeType;
- (bool)disableXAxis;
- (void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2;
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;
- (void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateZoom:(long long)arg1 previousDateZoom:(long long)arg2 previousXAxisSpace:(double)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (struct CGSize { double x1; double x2; })minimumSize;
- (void)setDayScopeType:(long long)arg1;
- (void)setDetailView:(id)arg1;
- (void)setDisableXAxis:(bool)arg1;
- (void)setMinimumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
