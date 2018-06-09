/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSRouteEstimatesView : UIView {
    NSDateFormatter * _arrivalDateFormatter;
    CPSLabeledValueView * _arrivalTimeView;
    NSCalendar * _calendar;
    CPSLabeledValueView * _distanceRemainingView;
    double  _estimatedTimeRemaining;
    NSDateComponentsFormatter * _remainingTimeFormatter;
    CPSLabeledValueView * _timeRemainingView;
}

@property (nonatomic, readonly) NSDateFormatter *arrivalDateFormatter;
@property (nonatomic, readonly) CPSLabeledValueView *arrivalTimeView;
@property (nonatomic, copy) NSTimeZone *arrivalTimeZone;
@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, copy) NSMeasurement *distanceRemaining;
@property (nonatomic, readonly) CPSLabeledValueView *distanceRemainingView;
@property (nonatomic) double estimatedTimeRemaining;
@property (nonatomic, readonly) NSDateComponentsFormatter *remainingTimeFormatter;
@property (nonatomic, readonly) CPSLabeledValueView *timeRemainingView;

- (void).cxx_destruct;
- (void)_setArrivalTime:(id)arg1;
- (void)_setDistanceRemaining:(id)arg1 units:(id)arg2;
- (void)_setTimeRemaining:(id)arg1 units:(id)arg2;
- (id)arrivalDateFormatter;
- (id)arrivalTimeView;
- (id)arrivalTimeZone;
- (id)calendar;
- (id)distanceRemainingView;
- (double)estimatedTimeRemaining;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)remainingTimeFormatter;
- (void)setArrivalTimeZone:(id)arg1;
- (void)setDistanceRemaining:(id)arg1;
- (void)setEstimatedTimeRemaining:(double)arg1;
- (id)timeRemainingView;

@end
