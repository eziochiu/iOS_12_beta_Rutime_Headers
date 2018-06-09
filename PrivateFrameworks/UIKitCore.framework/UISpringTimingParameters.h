/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISpringTimingParameters : NSObject <UITimingCurveProvider> {
    double  _damping;
    double  _dampingRatio;
    bool  _implicitDuration;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _initialVelocity;
    double  _mass;
    double  _stiffness;
}

@property (nonatomic, readonly) UICubicTimingParameters *cubicTimingParameters;
@property (nonatomic) double damping;
@property (nonatomic, readonly) double dampingRatio;
@property (nonatomic) bool implicitDuration;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } initialVelocity;
@property (nonatomic) double mass;
@property (nonatomic, readonly) double settlingDuration;
@property (nonatomic, readonly) UISpringTimingParameters *springTimingParameters;
@property (nonatomic) double stiffness;
@property (nonatomic, readonly) long long timingCurveType;

- (id)_mediaTimingFunction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cubicTimingParameters;
- (double)damping;
- (double)dampingRatio;
- (id)description;
- (id)effectiveTimingFunction;
- (void)encodeWithCoder:(id)arg1;
- (bool)implicitDuration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDampingRatio:(double)arg1;
- (id)initWithDampingRatio:(double)arg1 initialVelocity:(struct CGVector { double x1; double x2; })arg2;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(struct CGVector { double x1; double x2; })arg4;
- (struct CGVector { double x1; double x2; })initialVelocity;
- (double)mass;
- (void)setDamping:(double)arg1;
- (void)setImplicitDuration:(bool)arg1;
- (void)setMass:(double)arg1;
- (void)setStiffness:(double)arg1;
- (double)settlingDuration;
- (id)springTimingParameters;
- (double)stiffness;
- (long long)timingCurveType;

@end
