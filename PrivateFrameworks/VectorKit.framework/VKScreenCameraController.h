/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKScreenCameraController : VKCameraController <VKAnnotationTrackingCameraController, VKGesturingCameraController> {
    VKAnnotationTrackingCameraController * _annotationTrackingCameraController;
    long long  _annotationTrackingHeadingAnimationDisplayRate;
    long long  _annotationTrackingZoomStyle;
    VKGestureCameraBehavior * _gestureCameraControllerBehavior;
    bool  _isPitchIncreasing;
    VKTimedAnimation * _pitchAnimation;
    VKTimedAnimation * _regionAnimation;
    VKTimedAnimation * _rotationAnimation;
    VKTimedAnimation * _zoomAnimation;
}

@property (getter=isAnimatingToTrackAnnotation, nonatomic, readonly) bool animatingToTrackAnnotation;
@property (nonatomic) long long annotationTrackingHeadingAnimationDisplayRate;
@property (nonatomic) long long annotationTrackingZoomStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAnimatingToTrackAnnotation;
@property (nonatomic, readonly) bool isTrackingHeading;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <VKTrackableAnnotation> *trackingAnnotation;
@property (getter=isTrackingHeading, nonatomic, readonly) bool trackingHeading;

- (long long)annotationTrackingHeadingAnimationDisplayRate;
- (long long)annotationTrackingZoomStyle;
- (bool)canEnter3DMode;
- (void)clampZoomLevelIfNecessary;
- (void)dealloc;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (void)enter3DMode;
- (void)exit3DMode;
- (id)init;
- (bool)isAnimating;
- (bool)isAnimatingToTrackAnnotation;
- (bool)isTrackingHeading;
- (void)panWithOffset:(struct CGPoint { double x1; double x2; })arg1 relativeToScreenPoint:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3 duration:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)setAnnotationTrackingHeadingAnimationDisplayRate:(long long)arg1;
- (void)setAnnotationTrackingZoomStyle:(long long)arg1;
- (void)setCamera:(id)arg1;
- (void)setCenterCoordinate3D:(struct { double x1; double x2; double x3; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id /* block */)arg5;
- (void)setYaw:(double)arg1 animated:(bool)arg2;
- (bool)snapMapIfNecessary:(bool)arg1;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1 panAtStartPoint:(bool)arg2;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3;
- (void)stopAnimations;
- (void)stopPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopRegionAnimation;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopSnappingAnimations;
- (void)stopTrackingAnnotation;
- (long long)tileSize;
- (id)trackingAnnotation;
- (void)transferGestureState:(id)arg1;
- (void)updatePanWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)updateRotationWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 newValue:(double)arg2;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;

@end
