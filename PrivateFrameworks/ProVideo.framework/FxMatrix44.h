/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface FxMatrix44 : NSObject {
    double  _mat;
}

- (bool)_planarInverseZ;
- (id)description;
- (id)init;
- (id)initWithColorMatrix44Data:(double)arg1;
- (id)initWithFxMatrix:(id)arg1;
- (id)initWithMatrix44Data:(double)arg1;
- (bool)invert;
- (double*)matrix;
- (void)setMatrix:(double)arg1;
- (void)setToIdentity;
- (struct CGPoint { double x1; double x2; })transform2DPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct FxPoint3D { double x1; double x2; double x3; })transform3DPoint:(struct FxPoint3D { double x1; double x2; double x3; })arg1;
- (void)transpose;

@end
