/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPinchTracker : NSObject {
    bool  _allowTrackingOutside;
    bool  _didSetInitialPinchValues;
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
    PUValueFilter * _pinchRotationValueFilter;
    double  _rotationHysteresisDegrees;
    id /* block */  _updateHandler;
}

@property (nonatomic) bool allowTrackingOutside;
@property (nonatomic) double rotationHysteresisDegrees;
@property (nonatomic, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (void)_transformPinchLocation1:(struct CGPoint { double x1; double x2; })arg1 location2:(struct CGPoint { double x1; double x2; })arg2 intoCenter:(struct CGPoint { double x1; double x2; }*)arg3 distance:(double*)arg4 angle:(double*)arg5;
- (bool)allowTrackingOutside;
- (id)init;
- (id)initWithInitialCenter:(struct CGPoint { double x1; double x2; })arg1 initialSize:(struct CGSize { double x1; double x2; })arg2 initialTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (double)rotationHysteresisDegrees;
- (void)setAllowTrackingOutside:(bool)arg1;
- (void)setPinchLocation1:(struct CGPoint { double x1; double x2; })arg1 location2:(struct CGPoint { double x1; double x2; })arg2;
- (void)setRotationHysteresisDegrees:(double)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end
