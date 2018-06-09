/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXTransformedViewContentNonuniformTransform : PXNonuniformTransform {
    PXNonuniformTransform * _transform;
    UIView * _transformedView;
}

@property (nonatomic, readonly) PXNonuniformTransform *transform;
@property (nonatomic, readonly) UIView *transformedView;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransformForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)initWithTransformedView:(id)arg1 transform:(id)arg2;
- (id)inverseTransform;
- (id)transform;
- (id)transformedView;

@end
