/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDistributionBlockPoint : NSObject <HKGraphSeriesBlockCoordinate> {
    NSArray * _distributionSegments;
    struct CGPoint { 
        double x; 
        double y; 
    }  _maxPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _minPoint;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *distributionSegments;
@property (nonatomic, readonly) double endXValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } maxPoint;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } minPoint;
@property (nonatomic, readonly) double startXValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKGraphSeriesBlockCoordinateInfo> *userInfo;

- (void).cxx_destruct;
- (id)_applyTransformToSegments:(id)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (id)_quickDate:(id)arg1;
- (id)_segmentsFromChartPoint:(id)arg1 forX:(double)arg2 minY:(double)arg3 maxY:(double)arg4;
- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (id)description;
- (id)distributionSegments;
- (double)endXValue;
- (id)initWithChartPoint:(id)arg1 xAxisTransform:(id)arg2 yAxisTransform:(id)arg3;
- (id)initWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 blockPoint:(id)arg2;
- (struct CGPoint { double x1; double x2; })maxPoint;
- (struct CGPoint { double x1; double x2; })minPoint;
- (double)startXValue;
- (id)userInfo;

@end
