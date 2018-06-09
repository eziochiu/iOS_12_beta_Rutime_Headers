/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBezierBoundingPath : _UIBoundingPath {
    _UIBoundingPathBitmap * _bitmap;
    long long  _orientation;
    double  _scale;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_inscribedRectInBoundingPathAndRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 byInsettingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_largestInscribedPortraitPixelRectInBoundingPathWithPortraitPixelRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 portraitAspectRatio:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_largestInscribedRectInBoundingPathAndRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withCenter:(struct CGPoint { double x1; double x2; })arg2 aspectRatio:(double)arg3;
- (struct _UIIntegralRect { struct _UIIntegralPoint { long long x_1_1_1; long long x_1_1_2; } x1; struct _UIIntegralSize { long long x_2_1_1; long long x_2_1_2; } x2; })_rectByHorizontallyInsettingPortraitPixelRect:(struct _UIIntegralRect { struct _UIIntegralPoint { long long x_1_1_1; long long x_1_1_2; } x1; struct _UIIntegralSize { long long x_2_1_1; long long x_2_1_2; } x2; })arg1 onPortraitEdges:(unsigned long long)arg2 performCompleteTest:(bool)arg3;
- (struct _UIIntegralRect { struct _UIIntegralPoint { long long x_1_1_1; long long x_1_1_2; } x1; struct _UIIntegralSize { long long x_2_1_1; long long x_2_1_2; } x2; })_rectByVerticallyInsettingPortraitPixelRect:(struct _UIIntegralRect { struct _UIIntegralPoint { long long x_1_1_1; long long x_1_1_2; } x1; struct _UIIntegralSize { long long x_2_1_1; long long x_2_1_2; } x2; })arg1 onPortraitEdges:(unsigned long long)arg2 performCompleteTest:(bool)arg3;
- (bool)_validateBitmap:(id)arg1 withOrientation:(long long)arg2 scale:(double)arg3 forCoordinateSpace:(id)arg4;
- (id)boundingPathForCoordinateSpace:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinateSpace:(id)arg1 orientation:(long long)arg2 scale:(double)arg3 boundingPathBitmap:(id)arg4;
- (bool)isNonRectangular;
- (void)setCoordinateSpace:(id)arg1;
- (bool)validateForCoordinateSpace;

@end
