/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAxisLabelDimensionMinuteSecond : HKAxisLabelDimensionScalar {
    NSDateFormatter * _dateFormatter;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)dateFormatter;
- (id)initWithStartDate:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (id)stringForLocation:(id)arg1;

@end
