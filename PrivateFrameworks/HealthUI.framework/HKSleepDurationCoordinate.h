/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSleepDurationCoordinate : HKMinMaxCoordinate {
    NSNumber * _goalLineYValue;
    bool  _highlighted;
    NSArray * _stackPoints;
}

@property (nonatomic, copy) NSNumber *goalLineYValue;
@property (nonatomic, readonly) bool highlighted;
@property (nonatomic, copy) NSArray *stackPoints;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (id)goalLineYValue;
- (bool)highlighted;
- (id)initWithStackPoints:(id)arg1 goalLineYValue:(id)arg2 highlighted:(bool)arg3 userInfo:(id)arg4;
- (void)setGoalLineYValue:(id)arg1;
- (void)setStackPoints:(id)arg1;
- (id)stackPoints;

@end
