/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAstronomyRotationModel : NSObject {
    void _accumulatedPushVector;
    CADisplayLink * _displayLink;
    float  _effectivePullAcceleration;
    float  _effectivePushDeceleration;
    const struct NTKAstronomyInteractionSettings { float x1; float x2; float x3; float x4; } * _interactionSettings;
    bool  _isPulling;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _landingCoordinate;
    <NTKAstronomyRotationModelObserver> * _observer;
    double  _previousDisplayLinkCallbackTime;
    double  _pullStartTime;
    double  _pushStartTime;
    <NURotatable> * _rotatable;
    long long  _state;
}

@property (nonatomic, readonly) const struct NTKAstronomyInteractionSettings { float x1; float x2; float x3; float x4; }*interactionSettings;
@property (nonatomic) <NTKAstronomyRotationModelObserver> *observer;
@property (getter=isPulling, nonatomic) bool pulling;
@property (nonatomic) <NURotatable> *rotatable;

- (void).cxx_destruct;
- (void)_handleDisplayLink;
- (void)_update;
- (void)dealloc;
- (id)init;
- (const struct NTKAstronomyInteractionSettings { float x1; float x2; float x3; float x4; }*)interactionSettings;
- (bool)isAtHomeCoordinate;
- (bool)isPulling;
- (id)observer;
- (void)push;
- (id)rotatable;
- (void)setObserver:(id)arg1;
- (void)setPulling:(bool)arg1;
- (void)setRotatable:(id)arg1;
- (void)stop;

@end
