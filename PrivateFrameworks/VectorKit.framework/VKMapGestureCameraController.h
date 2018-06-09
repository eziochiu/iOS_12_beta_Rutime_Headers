/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapGestureCameraController : VKGestureCameraBehavior {
    double  _beganPitch;
    bool  _isPitchIncreasing;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panLastScreenPoint;
    VKTimedAnimation * _zoomAnimation;
}

- (void)beginPitch:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isPitchIncreasing;
- (void)updatePan:(struct CGPoint { double x1; double x2; })arg1 lastScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)updatePitch:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateZoom:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;

@end
