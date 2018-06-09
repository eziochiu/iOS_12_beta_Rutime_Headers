/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBShapeOperator : NSObject {
    double  _scale;
}

@property (nonatomic) double scale;

+ (id)operatorWithScale:(double)arg1;

- (struct { double x1; double x2; })_scaleRange:(struct { double x1; double x2; })arg1 factor:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scaleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 factor:(struct CGSize { double x1; double x2; })arg2;
- (id)geometryByScalingShapeGeometry:(id)arg1 factor:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectByScalingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 factor:(struct CGSize { double x1; double x2; })arg2;
- (double)scale;
- (void)setScale:(double)arg1;
- (id)shapeByScalingShape:(id)arg1 factor:(struct CGSize { double x1; double x2; })arg2;
- (id)shapesByCenteringShapes:(id)arg1 insideRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)shapesByElaboratingShapes:(id)arg1 insideShape:(id)arg2 count:(long long)arg3;
- (id)shapesByRepositioningShapes:(id)arg1 withOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)shapesByScalingShapes:(id)arg1 factor:(struct CGSize { double x1; double x2; })arg2;

@end
