/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLCamera : MDLObject {
    CAAnimation * _apertureAnimation;
    CAAnimation * _apertureAspectAnimation;
    unsigned long long  _apertureBladeCount;
    float  _barrelDistortion;
    struct RTCamera { int (**x1)(); unsigned long long x2; unsigned long long x3; float x4; float x5; int x6; float *x7; id **x8; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x9; void*x10; void*x11[4]; } * _camera;
    float  _chromaticAberration;
    float  _fStop;
    CAAnimation * _fStopAnimation;
    float  _fisheyeDistortion;
    void _flash;
    CAAnimation * _focalDistanceAnimation;
    CAAnimation * _focalLengthAnimation;
    float  _maximumCircleOfConfusion;
    float  _opticalVignetting;
    unsigned long long  _projection;
    double  _shutterOpenInterval;
    float  _worldToMetersConversionScale;
}

@property (nonatomic, copy) CAAnimation *apertureAnimation;
@property (nonatomic, copy) CAAnimation *apertureAspectAnimation;
@property (nonatomic) unsigned long long apertureBladeCount;
@property (nonatomic) float barrelDistortion;
@property (nonatomic) float chromaticAberration;
@property (nonatomic) void exposure;
@property (nonatomic) void exposureCompression;
@property (nonatomic) float fStop;
@property (nonatomic, copy) CAAnimation *fStopAnimation;
@property (nonatomic) float farVisibilityDistance;
@property (nonatomic) float fieldOfView;
@property (nonatomic) float fisheyeDistortion;
@property (nonatomic) void flash;
@property (nonatomic, copy) CAAnimation *focalDistanceAnimation;
@property (nonatomic) float focalLength;
@property (nonatomic, copy) CAAnimation *focalLengthAnimation;
@property (nonatomic) float focusDistance;
@property (nonatomic) float maximumCircleOfConfusion;
@property (nonatomic) float nearVisibilityDistance;
@property (nonatomic) float opticalVignetting;
@property (nonatomic) unsigned long long projection;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } projectionMatrix;
@property (nonatomic) float sensorAspect;
@property (nonatomic) void sensorEnlargement;
@property (nonatomic) void sensorShift;
@property (nonatomic) float sensorVerticalAperture;
@property (nonatomic) double shutterOpenInterval;
@property (nonatomic) float worldToMetersConversionScale;

// Image: /System/Library/Frameworks/ModelIO.framework/ModelIO

- (void).cxx_destruct;
- (float)aperture;
- (id)apertureAnimation;
- (id)apertureAspectAnimation;
- (unsigned long long)apertureBladeCount;
- (float)aspect;
- (float)barrelDistortion;
- (id)bokehKernelWithSize;
- (float)chromaticAberration;
- (float)circleOfConfusionForDistance:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)exposure;
- (void)exposureCompression;
- (float)fStop;
- (id)fStopAnimation;
- (float)farVisibilityDistance;
- (float)fieldOfView;
- (float)fisheyeDistortion;
- (void)flash;
- (id)focalDistanceAnimation;
- (float)focalLength;
- (id)focalLengthAnimation;
- (float)focusDistance;
- (float)fov;
- (void)frameBoundingBox:(struct { })arg1 setNearAndFar:(bool)arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })getProjectionMatrixAtTime:(double)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })getViewMatrixAtTime:(double)arg1;
- (id)init;
- (void)lookAt;
- (void)lookAtfrom;
- (float)maximumCircleOfConfusion;
- (float)nearVisibilityDistance;
- (float)opticalVignetting;
- (unsigned long long)projection;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })projectionMatrix;
- (void)rayToforViewPort;
- (struct RTCamera { int (**x1)(); unsigned long long x2; unsigned long long x3; float x4; float x5; int x6; float *x7; id **x8; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x9; void*x10; void*x11[4]; }*)rtCamera;
- (float)sensorAspect;
- (void)sensorEnlargement;
- (void)sensorShift;
- (float)sensorVerticalAperture;
- (void)setAperture:(float)arg1;
- (void)setApertureAnimation:(id)arg1;
- (void)setApertureAspectAnimation:(id)arg1;
- (void)setApertureBladeCount:(unsigned long long)arg1;
- (void)setAspect:(float)arg1;
- (void)setBarrelDistortion:(float)arg1;
- (void)setChromaticAberration:(float)arg1;
- (void)setExposure;
- (void)setExposureCompression;
- (void)setFStop:(float)arg1;
- (void)setFStopAnimation:(id)arg1;
- (void)setFarVisibilityDistance:(float)arg1;
- (void)setFieldOfView:(float)arg1;
- (void)setFisheyeDistortion:(float)arg1;
- (void)setFlash;
- (void)setFocalDistanceAnimation:(id)arg1;
- (void)setFocalLength:(float)arg1;
- (void)setFocalLengthAnimation:(id)arg1;
- (void)setFocusDistance:(float)arg1;
- (void)setFov:(float)arg1;
- (void)setMaximumCircleOfConfusion:(float)arg1;
- (void)setNearVisibilityDistance:(float)arg1;
- (void)setOpticalVignetting:(float)arg1;
- (void)setProjection:(unsigned long long)arg1;
- (void)setSensorAspect:(float)arg1;
- (void)setSensorEnlargement;
- (void)setSensorShift;
- (void)setSensorVerticalAperture:(float)arg1;
- (void)setShutterOpenInterval:(double)arg1;
- (void)setWorldToMetersConversionScale:(float)arg1;
- (void)setZFar:(float)arg1;
- (void)setZNear:(float)arg1;
- (double)shutterOpenInterval;
- (long long)version;
- (float)worldToMetersConversionScale;
- (float)zFar;
- (float)zNear;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)cameraWithSCNCamera:(id)arg1;

@end
