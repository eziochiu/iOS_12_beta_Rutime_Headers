/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPuckAnimator : NSObject {
    VKTimedAnimation * _animation;
    unsigned long long  _behavior;
    VKRunningCurve * _curve;
    <VKPuckAnimatorDelegate> * _delegate;
    GEORouteMatch * _lastProjectedLocation;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _lastProjectedPosition;
    VKPuckAnimatorLocationProjector * _locationProjector;
    long long  _pausedCount;
    bool  _suspended;
    <VKPuckAnimatorTarget> * _target;
    double  _tracePlaybackSpeedMultiplier;
    double  _vehicleHeading;
}

@property (nonatomic) unsigned long long behavior;
@property (nonatomic) <VKPuckAnimatorDelegate> *delegate;
@property (nonatomic, retain) GEORouteMatch *lastProjectedLocation;
@property (nonatomic, retain) <VKPuckAnimatorTarget> *target;
@property (nonatomic) double tracePlaybackSpeedMultiplier;

- (id).cxx_construct;
- (void)_step;
- (unsigned long long)behavior;
- (void)dealloc;
- (id)delegate;
- (id)detailedDescription;
- (id)init;
- (id)lastProjectedLocation;
- (void)pause;
- (void)resume;
- (void)setBehavior:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastProjectedLocation:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTracePlaybackSpeedMultiplier:(double)arg1;
- (void)start;
- (void)stop;
- (id)target;
- (double)tracePlaybackSpeedMultiplier;
- (void)updateLocation:(id)arg1 routeMatch:(id)arg2;
- (void)updateVehicleHeading:(double)arg1;

@end
