/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMedicalRecordChartPoint : NSObject <HKChartPoint> {
    NSNumber * _chartValue;
    bool  _chartValueOutOfRange;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
    NSDate * _xValue;
}

@property (nonatomic, retain) NSNumber *chartValue;
@property (nonatomic) bool chartValueOutOfRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <HKGraphSeriesBlockCoordinateInfo> *userInfo;
@property (nonatomic, retain) NSDate *xValue;

- (void).cxx_destruct;
- (id)allYValues;
- (id)chartValue;
- (bool)chartValueOutOfRange;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (void)setChartValue:(id)arg1;
- (void)setChartValueOutOfRange:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setXValue:(id)arg1;
- (id)userInfo;
- (id)xValue;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
