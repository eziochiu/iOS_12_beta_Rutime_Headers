/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCamera : NSObject {
    bool  _allowDatelineWraparound;
    double  _aspectRatio;
    double  _canonicalPitch;
    double  _distanceToGroundAndFarClipPlaneIntersection;
    double  _far;
    VKFootprint * _footprint;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _forward;
    double  _fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
    struct { 
        bool orthographic; 
        double width; 
        double height; 
        double near; 
        double far; 
        double horizontalOffset; 
    }  _frustum;
    double  _height;
    double  _horizontalOffset;
    double  _maxFarClipDistance;
    double  _maxHeight;
    double  _maxHeightNoPitch;
    double  _maxPitch;
    double  _minHeight;
    double  _ndcZNear;
    double  _near;
    bool  _needsUpdate;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _right;
    struct RunLoopController { struct MapEngine {} *x1; } * _runLoopController;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _scaledProjectionMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _scaledSkewedViewMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _scaledSkewedViewProjectionMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _scaledViewMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _scaledViewProjectionMatrix;
    double  _screenHeightOfGroundAndFarClipPlaneIntersection;
    double  _tanHalfHorizFOV;
    double  _tanHalfVerticalFOV;
    double  _terrainHeight;
    struct RigidTransform<double> { 
        struct Quaternion<double> { 
            struct Matrix<double, 3, 1> { 
                double _e[3]; 
            } _imaginary; 
            double _scalar; 
        } _rotation; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _translation; 
    }  _transform;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _unscaledProjectionMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _unscaledProjectionMatrixWithoutOffset;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _unscaledViewMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _unscaledViewProjectionMatrix;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _up;
    bool  _updating;
    double  _verticalFieldOfView;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _viewProjectionMatrixWithoutOffset;
    VKViewVolume * _viewVolume;
    double  _width;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _worldMatrix;
}

@property (nonatomic) bool allowDatelineWraparound;
@property (nonatomic) double aspectRatio;
@property (nonatomic) /* Warning: unhandled struct encoding: '{VKCameraState={RigidTransform<double>={Quaternion<double>={Matrix<double' */ struct  cameraState; /* unknown property attribute:  1>=[3d]}}ddd} */
@property (nonatomic) double canonicalPitch;
@property (nonatomic, readonly) double distanceToGroundAndFarClipPlaneIntersection;
@property (nonatomic, readonly) double farClipDistance;
@property (nonatomic, readonly) VKFootprint *footprint;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  forwardVector; /* unknown property attribute:  1>=[3d]} */
@property (nonatomic) double fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
@property (nonatomic, readonly) struct { bool x1; double x2; double x3; double x4; double x5; double x6; } frustum;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  groundPoint; /* unknown property attribute:  1>=[3d]} */
@property (nonatomic, readonly) float horizontalFieldOfView;
@property (nonatomic) double horizontalOffset;
@property (nonatomic) double maxHeight;
@property (nonatomic) double maxHeightNoPitch;
@property (nonatomic) double maxPitch;
@property (nonatomic) double minHeight;
@property (nonatomic) double ndcZNear;
@property (nonatomic, readonly) double nearClipDistance;
@property (nonatomic) const /* Warning: unhandled struct encoding: '{Quaternion<double>={Matrix<double' */ struct *orientation; /* unknown property attribute:  1>=[3d]}d} */
@property (nonatomic, readonly) double pitch;
@property (nonatomic) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *position; /* unknown property attribute:  1>=[3d]} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  rightVector; /* unknown property attribute:  1>=[3d]} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *scaledProjectionMatrix; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *scaledSkewedViewProjectionMatrix; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *scaledViewMatrix; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *scaledViewProjectionMatrix; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) double screenHeightOfGroundAndFarClipPlaneIntersection;
@property (nonatomic, readonly) double tanHalfHorizFOV;
@property (nonatomic, readonly) double tanHalfVerticalFOV;
@property (nonatomic) double terrainHeight;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *unscaledProjectionMatrix; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *unscaledProjectionMatrixWithoutOffset; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *unscaledViewMatrix; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *unscaledViewProjectionMatrix; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  upVector; /* unknown property attribute:  1>=[3d]} */
@property (nonatomic) float verticalFieldOfView;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *viewProjectionMatrixWithoutOffset; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) VKViewVolume *viewVolume;
@property (nonatomic, readonly) double yaw;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setPosition:(const struct Matrix<double, 3, 1> { double x1[3]; }*)arg1;
- (void)adjustClipPlanes;
- (bool)allowDatelineWraparound;
- (id /* block */)annotationCoordinateTest;
- (id /* block */)annotationRectTest;
- (double)aspectRatio;
- (struct VKCameraState { struct RigidTransform<double> { struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_3_1[3]; } x_1_2_1; double x_1_2_2; } x_1_1_1; struct Matrix<double, 3, 1> { double x_2_2_1[3]; } x_1_1_2; } x1; double x2; double x3; double x4; })cameraState;
- (double)canonicalPitch;
- (void)dealloc;
- (double)depthForViewWidth:(double)arg1;
- (id)description;
- (id)descriptionDictionaryRepresentation;
- (id)detailedDescription;
- (double)displayZoomLevel;
- (double)distanceToGroundAndFarClipPlaneIntersection;
- (double)farClipDistance;
- (id)footprint;
- (struct Matrix<double, 3, 1> { double x1[3]; })forwardVector;
- (double)fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
- (struct { bool x1; double x2; double x3; double x4; double x5; double x6; })frustum;
- (struct Matrix<double, 3, 1> { double x1[3]; })groundPlaneIntersectionPoint;
- (struct Matrix<double, 3, 1> { double x1[3]; })groundPoint;
- (struct Matrix<double, 3, 1> { double x1[3]; })groundPointFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct Matrix<double, 3, 1> { double x1[3]; })groundPointFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1 atGroundLevel:(double)arg2;
- (bool)hasChangedState:(struct VKCameraState { struct RigidTransform<double> { struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_3_1[3]; } x_1_2_1; double x_1_2_2; } x_1_1_1; struct Matrix<double, 3, 1> { double x_2_2_1[3]; } x_1_1_2; } x1; double x2; double x3; double x4; }*)arg1;
- (float)horizontalFieldOfView;
- (double)horizontalOffset;
- (id)initWithRunLoopController:(struct RunLoopController { struct MapEngine {} *x1; }*)arg1;
- (bool)isOuterWorldBoundsVisible;
- (bool)isWorldSpaceRectVisible:(const struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; }*)arg1;
- (double)maxHeight;
- (double)maxHeightNoPitch;
- (double)maxPitch;
- (float)maximumStyleZForRect:(const struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; }*)arg1;
- (double)minHeight;
- (double)ndcZNear;
- (double)nearClipDistance;
- (const struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_1_1[3]; } x1; double x2; }*)orientation;
- (double)pitch;
- (const struct Matrix<double, 3, 1> { double x1[3]; }*)position;
- (struct Matrix<double, 3, 1> { double x1[3]; })projectWorldSpaceToClipSpace:(const struct Mercator3<double> { double x1[3]; }*)arg1;
- (struct Matrix<double, 3, 1> { double x1[3]; })rightVector;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)scaledProjectionMatrix;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)scaledSkewedViewProjectionMatrix;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)scaledViewMatrix;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)scaledViewProjectionMatrix;
- (double)screenHeightOfGroundAndFarClipPlaneIntersection;
- (void)setAllowDatelineWraparound:(bool)arg1;
- (void)setAspectRatio:(double)arg1;
- (void)setCameraState:(struct VKCameraState { struct RigidTransform<double> { struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_3_1[3]; } x_1_2_1; double x_1_2_2; } x_1_1_1; struct Matrix<double, 3, 1> { double x_2_2_1[3]; } x_1_1_2; } x1; double x2; double x3; double x4; })arg1;
- (void)setCanonicalPitch:(double)arg1;
- (void)setFractionOfScreenAboveFarClipPlaneAtCanonicalPitch:(double)arg1;
- (void)setHorizontalOffset:(double)arg1;
- (void)setMaxHeight:(double)arg1;
- (void)setMaxHeightNoPitch:(double)arg1;
- (void)setMaxPitch:(double)arg1;
- (void)setMinHeight:(double)arg1;
- (void)setNdcZNear:(double)arg1;
- (void)setNeedsUpdate;
- (void)setOrientation:(const struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_1_1[3]; } x1; double x2; }*)arg1;
- (void)setPosition:(const struct Matrix<double, 3, 1> { double x1[3]; }*)arg1;
- (void)setTerrainHeight:(double)arg1;
- (void)setVerticalFieldOfView:(float)arg1;
- (double)tanHalfHorizFOV;
- (double)tanHalfVerticalFOV;
- (double)terrainHeight;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)unscaledProjectionMatrix;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)unscaledProjectionMatrixWithoutOffset;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)unscaledViewMatrix;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)unscaledViewProjectionMatrix;
- (struct Matrix<double, 3, 1> { double x1[3]; })upVector;
- (void)updateIfNeeded;
- (float)verticalFieldOfView;
- (struct View<double> { struct RigidTransform<double> { struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_3_1[3]; } x_1_2_1; double x_1_2_2; } x_1_1_1; struct Matrix<double, 3, 1> { double x_2_2_1[3]; } x_1_1_2; } x1; struct Matrix<double, 4, 4> { double x_2_1_1[16]; } x2; struct Matrix<double, 4, 4> { double x_3_1_1[16]; } x3; double x4; struct ViewSize { unsigned short x_5_1_1; unsigned short x_5_1_2; } x5; int x6; })view:(struct ViewSize { unsigned short x1; unsigned short x2; })arg1;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)viewProjectionMatrixWithoutOffset;
- (id)viewVolume;
- (double)widthOfViewAtDepth:(double)arg1;
- (double)yaw;
- (float)zoomAtCentrePoint;
- (float)zoomAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end