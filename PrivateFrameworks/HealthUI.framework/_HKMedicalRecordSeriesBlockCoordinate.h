/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKMedicalRecordSeriesBlockCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _coordinate;
    bool  _outOfRange;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double endXValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool outOfRange;
@property (nonatomic, readonly) double startXValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKGraphSeriesBlockCoordinateInfo> *userInfo;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })coordinate;
- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (id)description;
- (double)endXValue;
- (id)initWithCoordinate:(struct CGPoint { double x1; double x2; })arg1 outOfRange:(bool)arg2 userInfo:(id)arg3;
- (double)maxYValue;
- (double)minYValue;
- (bool)outOfRange;
- (double)startXValue;
- (id)userInfo;

@end
