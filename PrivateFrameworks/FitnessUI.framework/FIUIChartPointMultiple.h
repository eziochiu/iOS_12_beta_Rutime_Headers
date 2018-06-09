/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIChartPointMultiple : NSObject <FIUIChartPoint> {
    NSDate * _xValue;
    NSIndexSet * _yValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *maxYValue;
@property (nonatomic, readonly) NSNumber *minYValue;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *xValue;
@property (nonatomic, copy) NSIndexSet *yValue;

+ (id)chartPointWithDate:(id)arg1 valueIndexSet:(id)arg2;
+ (id)chartPointWithXValue:(id)arg1 yValue:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)maxYValue;
- (id)minYValue;
- (void)setXValue:(id)arg1;
- (void)setYValue:(id)arg1;
- (id)xValue;
- (id)yValue;

@end
