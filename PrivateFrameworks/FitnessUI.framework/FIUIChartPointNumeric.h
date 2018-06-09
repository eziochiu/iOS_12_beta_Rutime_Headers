/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIChartPointNumeric : NSObject <FIUIChartPoint> {
    NSDate * _xValue;
    NSNumber * _yValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *maxYValue;
@property (nonatomic, readonly) NSNumber *minYValue;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *xValue;
@property (nonatomic, copy) NSNumber *yValue;

+ (id)chartPointWithXValue:(id)arg1 yValue:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2;
- (id)maxYValue;
- (id)minYValue;
- (void)setXValue:(id)arg1;
- (void)setYValue:(id)arg1;
- (id)xValue;
- (id)yValue;

@end
