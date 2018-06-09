/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXProgressArcLayer : CALayer {
    double  _endAngle;
    double  _lineWidth;
    double  _radius;
    double  _startAngle;
}

@property (nonatomic) double endAngle;
@property (nonatomic) double lineWidth;
@property (nonatomic) double radius;
@property (nonatomic) double startAngle;

- (void)drawInContext:(struct CGContext { }*)arg1;
- (double)endAngle;
- (id)init;
- (double)lineWidth;
- (double)radius;
- (void)setEndAngle:(double)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setRadius:(double)arg1;
- (void)setStartAngle:(double)arg1;
- (double)startAngle;

@end
