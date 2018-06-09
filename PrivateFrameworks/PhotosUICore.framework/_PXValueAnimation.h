/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXValueAnimation : NSObject {
    double  _duration;
    struct _PXValueAnimationSpec { 
        long long type; 
        double epsilon; 
        double stiffness; 
        double dampingRatio; 
        double initialVelocity; 
    }  _spec;
    double  _startTime;
}

@property (nonatomic, readonly) bool completed;
@property (nonatomic, readonly) double currentValue;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) struct _PXValueAnimationSpec { long long x1; double x2; double x3; double x4; double x5; } spec;

- (bool)completed;
- (double)currentValue;
- (double)duration;
- (double)elapsedTime;
- (id)init;
- (id)initWithDuration:(double)arg1 spec:(struct _PXValueAnimationSpec { long long x1; double x2; double x3; double x4; double x5; })arg2;
- (struct _PXValueAnimationSpec { long long x1; double x2; double x3; double x4; double x5; })spec;

@end
