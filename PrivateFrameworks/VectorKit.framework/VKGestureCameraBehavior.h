/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGestureCameraBehavior : NSObject <VKGesturingCameraController> {
    VKCameraController * _cameraController;
    double  _lastRotation;
    bool  _notifyCameraStateChanges;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panLastScreenPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panStartFocusPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panStartScreenPoint;
    bool  _panning;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pinchStartFocusPoint;
    bool  _pinching;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pitchStartFocusPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pitchStartScreenPoint;
    bool  _pitching;
    struct CGPoint { 
        double x; 
        double y; 
    }  _rotateStartFocusPoint;
    bool  _rotating;
    bool  _shouldRotationRubberband;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)beginPan:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginPitch:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginRotate:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginZoom:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (void)endPan:(struct CGPoint { double x1; double x2; })arg1;
- (void)endPitch:(struct CGPoint { double x1; double x2; })arg1;
- (void)endRotate:(struct CGPoint { double x1; double x2; })arg1;
- (void)endZoom:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithCameraController:(id)arg1;
- (bool)isGesturing;
- (bool)isPanning;
- (bool)isPinching;
- (bool)isPitching;
- (bool)isRotating;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1 panAtStartPoint:(bool)arg2;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)tapZoom:(struct CGPoint { double x1; double x2; })arg1 levels:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)transferGestureState:(id)arg1;
- (void)updatePan:(struct CGPoint { double x1; double x2; })arg1 lastScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)updatePanWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitch:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateRotationWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 newValue:(double)arg2;
- (void)updateZoom:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;

@end
