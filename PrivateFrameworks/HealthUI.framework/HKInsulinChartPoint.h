/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInsulinChartPoint : NSObject <HKChartPoint> {
    NSNumber * _basalSum;
    NSDate * _midDate;
    NSDate * _startDate;
    NSNumber * _totalSum;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
}

@property (nonatomic, retain) NSNumber *basalSum;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *midDate;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *totalSum;
@property (nonatomic, retain) <HKGraphSeriesBlockCoordinateInfo> *userInfo;

- (void).cxx_destruct;
- (id)allYValues;
- (id)basalSum;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)midDate;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (void)setBasalSum:(id)arg1;
- (void)setMidDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTotalSum:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)startDate;
- (id)totalSum;
- (id)userInfo;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
