/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPinchTracker : PXObservable <PXMutablePinchTracker> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    bool  _didSetInitialValues;
    PXNumberFilter * _horizontalVelocityFilter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialCenter;
    double  _initialPinchAngle;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialPinchCenter;
    double  _initialPinchDistance;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialPinchOrigin;
    struct CGSize { 
        double width; 
        double height; 
    }  _initialSize;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _initialTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _initialTransformInverse;
    struct { 
        bool initialValues; 
        bool geometry; 
    }  _needsUpdateFlags;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pinchLocation1;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pinchLocation2;
    PXNumberFilter * _pinchRotationFilter;
    double  _rotationHysteris;
    PXNumberFilter * _rotationalVelocityFilter;
    double  _scale;
    long long  _scaleDirection;
    PXChangeDirectionNumberFilter * _scaleDirectionFilter;
    double  _scaleHysteresis;
    PXNumberFilter * _scaleVelocityFilter;
    bool  _shouldResize;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    double  _time;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    struct PXDisplayVelocity { 
        double x; 
        double y; 
        double scale; 
        double rotation; 
    }  _velocity;
    PXNumberFilter * _verticalVelocityFilter;
}

@property (setter=_setCenter:, nonatomic) struct CGPoint { double x1; double x2; } center;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } pinchLocation1;
@property (nonatomic) struct CGPoint { double x1; double x2; } pinchLocation2;
@property (nonatomic, readonly) double rotationHysteris;
@property (setter=_setScale:, nonatomic) double scale;
@property (setter=_setScaleDirection:, nonatomic) long long scaleDirection;
@property (nonatomic, readonly) double scaleHysteresis;
@property (nonatomic, readonly) bool shouldResize;
@property (setter=_setSize:, nonatomic) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic) double time;
@property (setter=_setTransform:, nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (setter=_setVelocity:, nonatomic) struct PXDisplayVelocity { double x1; double x2; double x3; double x4; } velocity;

- (void).cxx_destruct;
- (void)_invalidateGeometry;
- (void)_invalidateInitialValues;
- (bool)_needsUpdate;
- (void)_setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setNeedsUpdate;
- (void)_setScale:(double)arg1;
- (void)_setScaleDirection:(long long)arg1;
- (void)_setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)_setVelocity:(struct PXDisplayVelocity { double x1; double x2; double x3; double x4; })arg1;
- (void)_transformPinchLocation1:(struct CGPoint { double x1; double x2; })arg1 location2:(struct CGPoint { double x1; double x2; })arg2 intoCenter:(struct CGPoint { double x1; double x2; }*)arg3 distance:(double*)arg4 angle:(double*)arg5;
- (void)_updateGeometryIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateInitialValuesIfNeeded;
- (struct CGPoint { double x1; double x2; })center;
- (void)didPerformChanges;
- (id)init;
- (id)initWithCenter:(struct CGPoint { double x1; double x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (struct CGPoint { double x1; double x2; })pinchLocation1;
- (struct CGPoint { double x1; double x2; })pinchLocation2;
- (double)rotationHysteris;
- (double)scale;
- (long long)scaleDirection;
- (double)scaleHysteresis;
- (void)setPinchLocation1:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPinchLocation2:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTime:(double)arg1;
- (bool)shouldResize;
- (struct CGSize { double x1; double x2; })size;
- (double)time;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (struct PXDisplayVelocity { double x1; double x2; double x3; double x4; })velocity;

@end
