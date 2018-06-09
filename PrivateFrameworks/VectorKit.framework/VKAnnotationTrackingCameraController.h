/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnnotationTrackingCameraController : VKCameraController {
    <VKTrackableAnnotation> * _annotation;
    <VKTrackableAnnotationPresentation> * _annotationPresentation;
    VKTimedAnimation * _currentAnimation;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _currentAnimationEndCameraPosition;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _currentAnimationEndPoint;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _currentAnimationStartCameraPosition;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _currentAnimationStartPoint;
    VKTimedAnimation * _currentHeadingAnimation;
    struct { 
        unsigned int hasPendingChange : 1; 
        unsigned int paused : 1; 
        unsigned int trackingHeading : 1; 
        unsigned int hasPendingHeadingChange : 1; 
        unsigned int isInitialRegionChange : 1; 
        unsigned int isJumpingToAnnotation : 1; 
        unsigned int annotationImplementsAccuracy : 1; 
        unsigned int annotationImplementsHeading : 1; 
        unsigned int annotationImplementsExpectedCoordinateUpdateInterval : 1; 
        unsigned int annotationImplementsExpectedHeadingUpdateInterval : 1; 
    }  _flags;
    float  _headingAnimationCompletedAngle;
    long long  _headingAnimationDisplayRate;
    double  _pendingChangeDuration;
    double  _pendingHeadingChangeDuration;
    long long  _zoomStyle;
}

@property (nonatomic, readonly) <VKTrackableAnnotation> *annotation;
@property (nonatomic) long long headingAnimationDisplayRate;
@property (getter=isTrackingHeading, nonatomic, readonly) bool trackingHeading;
@property (nonatomic) long long zoomStyle;

- (id).cxx_construct;
- (void)_goToAnnotationAnimated:(bool)arg1 duration:(double)arg2 isInitial:(bool)arg3;
- (void)_rotateToHeadingAnimated:(bool)arg1 duration:(double)arg2;
- (id)annotation;
- (void)dealloc;
- (long long)headingAnimationDisplayRate;
- (id)init;
- (bool)isAnimating;
- (bool)isTrackingHeading;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGesturing:(bool)arg1;
- (void)setHeadingAnimationDisplayRate:(long long)arg1;
- (void)setZoomStyle:(long long)arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3;
- (void)stopTrackingAnnotation;
- (void)updateFramerate;
- (long long)zoomStyle;

@end
