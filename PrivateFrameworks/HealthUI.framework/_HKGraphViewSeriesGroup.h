/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKGraphViewSeriesGroup : NSObject {
    NSArray * _axesToShowSimultaneously;
    _HKGraphViewAxisAnnotationHandler * _axisAnnotationHandler;
    NSMutableArray * _currentSeries;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastLegendSize;
    HKLegendView * _legendView;
    _HKGraphViewSelectionContext * _selectionContext;
    NSMutableDictionary * _zoomToSeriesMapping;
}

@property (nonatomic, retain) NSArray *axesToShowSimultaneously;
@property (nonatomic, retain) _HKGraphViewAxisAnnotationHandler *axisAnnotationHandler;
@property (nonatomic, retain) NSMutableArray *currentSeries;
@property (nonatomic) struct CGSize { double x1; double x2; } lastLegendSize;
@property (nonatomic, retain) HKLegendView *legendView;
@property (nonatomic, retain) _HKGraphViewSelectionContext *selectionContext;
@property (nonatomic, retain) NSMutableDictionary *zoomToSeriesMapping;

- (void).cxx_destruct;
- (id)axesToShowSimultaneously;
- (id)axisAnnotationHandler;
- (id)currentSeries;
- (id)init;
- (struct CGSize { double x1; double x2; })lastLegendSize;
- (id)legendView;
- (id)selectionContext;
- (void)setAxesToShowSimultaneously:(id)arg1;
- (void)setAxisAnnotationHandler:(id)arg1;
- (void)setCurrentSeries:(id)arg1;
- (void)setLastLegendSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLegendView:(id)arg1;
- (void)setSelectionContext:(id)arg1;
- (void)setZoomToSeriesMapping:(id)arg1;
- (id)zoomToSeriesMapping;

@end
