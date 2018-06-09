/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartPieWedgeElement : NSObject <NSCopying> {
    double  mEndAngle;
    double  mLabelExplosion;
    struct TSCHChartPieWedgeElementLayoutSystem { 
        long long coordinateSpace; 
        struct CGPoint { 
            double x; 
            double y; 
        } centerPoint; 
    }  mLayoutSystem;
    double  mMidAngle;
    double  mRadius;
    TSCHChartSeries * mSeries;
    double  mStartAngle;
    double  mWedgeExplosion;
}

@property (nonatomic, readonly) double angleAtWedgeTip;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } centerPoint;
@property (nonatomic) double endAngle;
@property (nonatomic) double labelExplosion;
@property (nonatomic) struct TSCHChartPieWedgeElementLayoutSystem { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; } layoutSystem;
@property (nonatomic) double midAngle;
@property (nonatomic) double radius;
@property (nonatomic) TSCHChartSeries *series;
@property (nonatomic) double startAngle;
@property (nonatomic) double wedgeExplosion;

- (void).cxx_destruct;
- (double)angleAtWedgeTip;
- (bool)angleInRange:(double)arg1 startAngle:(double)arg2 endAngle:(double)arg3;
- (struct CGPoint { double x1; double x2; })arcEndPoint;
- (struct CGPoint { double x1; double x2; })arcStartPoint;
- (struct CGPoint { double x1; double x2; })bendedLineMidpointWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 length:(double)arg2 shouldBeUpwards:(bool)arg3;
- (bool)calloutLineIntersectsWedgeWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 midPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })centerPoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { double x1; double x2; })defaultBendedLineEndpointWithStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })defaultBendedLineMidpointWithStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })defaultLabelCenterPoint;
- (struct CGPoint { double x1; double x2; })defaultLabelCenterPointForLabelWithSize:(struct CGSize { double x1; double x2; })arg1 bended:(bool)arg2;
- (struct CGPoint { double x1; double x2; })defaultLabelEndpointForBendedLineLabels;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultLabelRectForLabelWithSize:(struct CGSize { double x1; double x2; })arg1 bended:(bool)arg2;
- (double)endAngle;
- (struct CGPoint { double x1; double x2; })firstHalfOfBendedLineVectorNormalizedShouldBeUpwards:(bool)arg1;
- (id)initWithRadius:(double)arg1 startAngle:(double)arg2 midAngle:(double)arg3 endAngle:(double)arg4 labelExplosion:(double)arg5 wedgeExplosion:(double)arg6 series:(id)arg7;
- (bool)isInUpperHalfOfChartWithStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isOnLeftSideOfChart;
- (double)labelExplosion;
- (struct TSCHChartPieLabelRects { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })labelRectsForFirstLabelWithSize:(struct CGSize { double x1; double x2; })arg1 secondLabelSize:(struct CGSize { double x1; double x2; })arg2 stacked:(bool)arg3 stackedLabelCenterAlign:(bool)arg4 placeToTheSideOfPieChart:(bool)arg5;
- (struct TSCHChartPieWedgeElementLayoutSystem { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })layoutSystem;
- (bool)lineIntersectsLineWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 firstLineEndPoint:(struct CGPoint { double x1; double x2; })arg2 secondLineStartPoint:(struct CGPoint { double x1; double x2; })arg3 secondLineEndPoint:(struct CGPoint { double x1; double x2; })arg4 outIntersectionPoint:(struct CGPoint { double x1; double x2; }*)arg5;
- (bool)lineIntersectsWedgeWithLineStartPoint:(struct CGPoint { double x1; double x2; })arg1 lineEndPoint:(struct CGPoint { double x1; double x2; })arg2;
- (double)midAngle;
- (struct CGPoint { double x1; double x2; })midpointOnClosestEdgeToWedgeTip:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })normalizedWedgeBisectionVector;
- (double)p_xShiftAmountWithEndpoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })pointAlongWedgeBisectionInChartCoordinateSpaceWithFloatDistanceFromWedgeTip:(double)arg1;
- (struct CGPoint { double x1; double x2; })pointAlongWedgeBisectionInChartCoordinateSpaceWithPercentDistanceFromWedgeTip:(double)arg1;
- (struct CGPoint { double x1; double x2; })pointAtWedgeCircumferenceMiddleInChartCoordinateSpace;
- (struct CGPoint { double x1; double x2; })pointAtWedgeTipInChartCoordinateSpace;
- (bool)pointWithinWedgeSpread:(struct CGPoint { double x1; double x2; })arg1;
- (bool)pointWithinWedgeSpread:(struct CGPoint { double x1; double x2; })arg1 percentage:(double)arg2;
- (double)radius;
- (id)series;
- (void)setEndAngle:(double)arg1;
- (void)setLabelExplosion:(double)arg1;
- (void)setLayoutSystem:(struct TSCHChartPieWedgeElementLayoutSystem { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMidAngle:(double)arg1;
- (void)setRadius:(double)arg1;
- (void)setSeries:(id)arg1;
- (void)setStartAngle:(double)arg1;
- (void)setToChartCoordinateSpaceWithChartBodyCenterPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setToLocalCoordinateSpace;
- (void)setWedgeExplosion:(double)arg1;
- (bool)shouldUsePerpendicularBendedLineWithStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)startAngle;
- (bool)wedgeBisectionIntersectsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outIntersectionPointClosestToWedgeTip:(struct CGPoint { double x1; double x2; }*)arg2;
- (double)wedgeExplosion;

@end
