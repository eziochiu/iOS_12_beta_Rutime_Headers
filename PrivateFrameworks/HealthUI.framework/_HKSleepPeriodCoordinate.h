/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKSleepPeriodCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    NSArray * _asleepYValues;
    bool  _highlighted;
    NSArray * _inBedYValues;
    NSNumber * _lowerGoalYValue;
    NSNumber * _upperGoalYValue;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
    double  _xValue;
    NSArray * _yValues;
}

@property (nonatomic, readonly) NSArray *asleepYValues;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double endXValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool highlighted;
@property (nonatomic, readonly) NSArray *inBedYValues;
@property (nonatomic, readonly) NSNumber *lowerGoalYValue;
@property (nonatomic, readonly) double startXValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *upperGoalYValue;
@property (nonatomic, readonly) <HKGraphSeriesBlockCoordinateInfo> *userInfo;
@property (nonatomic, readonly) double xValue;
@property (nonatomic, readonly) NSArray *yValues;

- (void).cxx_destruct;
- (id)asleepYValues;
- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (double)endXValue;
- (bool)highlighted;
- (id)inBedYValues;
- (id)initWithXValue:(double)arg1 asleepYValues:(id)arg2 inBedYValues:(id)arg3 yValues:(id)arg4 upperGoalYValue:(id)arg5 lowerGoalYValue:(id)arg6 highlighted:(bool)arg7 userInfo:(id)arg8;
- (id)lowerGoalYValue;
- (double)startXValue;
- (id)upperGoalYValue;
- (id)userInfo;
- (double)xValue;
- (id)yValues;

@end
