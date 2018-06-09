/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXValueSpringAnimation : _PXValueAnimation {
    double  _A;
    double  _B;
    double  _omega0;
}

+ (double)durationOfSpringAnimationWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 epsilon:(double)arg5;

- (double)currentValue;
- (id)initWithDuration:(double)arg1 spec:(struct _PXValueAnimationSpec { long long x1; double x2; double x3; double x4; double x5; })arg2;
- (id)initWithFromValue:(double)arg1 spec:(struct _PXValueAnimationSpec { long long x1; double x2; double x3; double x4; double x5; })arg2;

@end
