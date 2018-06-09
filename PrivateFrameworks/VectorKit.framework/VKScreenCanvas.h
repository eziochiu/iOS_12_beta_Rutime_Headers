/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKScreenCanvas : NSObject <VKCameraControllerDelegate> {
    struct AnimationRunner { struct MapEngine {} *x1; } * _animationRunner;
    ARSession * _arSession;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    }  _bgColor;
    VKCamera * _camera;
    VKCameraController * _cameraController;
    bool  _deallocing;
    float  _debugFramesPerSecond;
    <MDRenderTarget> * _displayTarget;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _edgeInsets;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _fullyOccludedEdgeInsets;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _labelEdgeInsets;
    struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; } * _layoutContext;
    <MDMapControllerDelegate> * _mapDelegate;
    struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; } * _mapEngine;
    struct Renderer { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> > { struct __compressed_pair<md::RenderQueue *, std::__1::default_delete<md::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_3_1_1; } x3; struct RenderLayer {} *x4[28]; struct RenderLayer {} *x5[65]; struct RunLoopController {} *x6; struct MapEngine {} *x7; } * _mapRenderer;
    struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> > { 
        struct __compressed_pair<md::RenderQueue *, std::__1::default_delete<md::RenderQueue> > { 
            struct RenderQueue {} *__value_; 
        } __ptr_; 
    }  _renderQueue;
    struct RunLoopController { struct MapEngine {} *x1; } * _runLoopController;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    bool  _userIsGesturing;
    struct PerspectiveView<double> { 
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
        } _transform; 
        struct Matrix<double, 4, 4> { 
            double _e[16]; 
        } _projectionMatrix; 
        struct Matrix<double, 4, 4> { 
            double _e[16]; 
        } _inverseProjection; 
        double _ndcZNear; 
        struct ViewSize { 
            unsigned short width; 
            unsigned short height; 
        } _size; 
        int _type; 
        double _verticalFOV; 
        double _near; 
        double _far; 
    }  _view;
}

@property (nonatomic) unsigned char applicationUILayout;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  bgColor; /* unknown property attribute:  1>=[4f]} */
@property (nonatomic, readonly) VKCamera *camera;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) float debugFramesPerSecond;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic) unsigned char emphasis;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } fullyOccludedEdgeInsets;
@property (getter=isGesturing, nonatomic) bool gesturing;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } labelEdgeInsets;
@property (nonatomic) <MDMapControllerDelegate> *mapDelegate;
@property (nonatomic, readonly) struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; /* Warning: unhandled struct encoding: '{_retain_ptr<GEOResourceManifestConfiguration *' */ struct x3; }*mapEngine; /* unknown property attribute:  std::__1::default_delete<md::LogicManager> >=^{LogicManager}}}BBB{atomic<bool>=AB}{atomic<bool>=AB}B} */
@property (readonly) Class superclass;
@property (nonatomic) unsigned char targetDisplay;
@property (nonatomic) struct VehicleState { bool x1; } vehicleState;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned char)applicationUILayout;
- (struct Matrix<float, 4, 1> { float x1[4]; })bgColor;
- (struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; })buildingMarkerAtScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)camera;
- (id)cameraController;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(bool)arg2;
- (void)cameraController:(id)arg1 canZoomInDidChange:(bool)arg2;
- (void)cameraController:(id)arg1 canZoomOutDidChange:(bool)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(bool)arg2;
- (void)cameraController:(id)arg1 didChangeRegionAnimated:(bool)arg2;
- (void)cameraController:(id)arg1 flyoverModeDidChange:(int)arg2;
- (void)cameraController:(id)arg1 flyoverModeWillChange:(int)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2;
- (void)cameraController:(id)arg1 willChangeRegionAnimated:(bool)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)cameraControllerDidFinishInitialTrackingAnimation:(id)arg1;
- (void)cameraControllerDidLeaveDefaultZoom:(id)arg1;
- (void)cameraControllerDidReturnToDefaultZoom:(id)arg1;
- (void)cameraControllerHasStartedPanning:(id)arg1;
- (void)cameraControllerHasStoppedPanning:(id)arg1;
- (void)cameraControllerRequestsLayout:(id)arg1;
- (void)cameraControllerRequestsUpdateDisplayLinkStatus:(id)arg1;
- (bool)currentSceneRequiresMSAA;
- (void)dealloc;
- (float)debugFramesPerSecond;
- (void)didPresent;
- (void)didReceiveMemoryWarning:(bool)arg1 beAggressive:(bool)arg2;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (unsigned char)emphasis;
- (void)enterARSessionAtCoordinate:(struct { double x1; double x2; })arg1;
- (void)exitARSession;
- (struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; })featureMarkerAtScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })fullyOccludedEdgeInsets;
- (void)gglWillDrawWithTimestamp;
- (id)initWithMapEngine:(struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1 inBackground:(bool)arg2;
- (bool)isGesturing;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })labelEdgeInsets;
- (id)mapDelegate;
- (struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)mapEngine;
- (void)puckAnimator:(id)arg1 updatedPosition:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg2 course:(const struct Unit<RadianUnitDescription, double> { double x1; }*)arg3;
- (bool)restoreViewportFromInfo:(id)arg1;
- (void)runAnimation:(id)arg1;
- (void)setApplicationUILayout:(unsigned char)arg1;
- (void)setCameraController:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setDebugFramesPerSecond:(float)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setEmphasis:(unsigned char)arg1;
- (void)setFullyOccludedEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGesturing:(bool)arg1;
- (void)setLabelEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setMapDelegate:(id)arg1;
- (void)setNeedsLayout;
- (void)setTargetDisplay:(unsigned char)arg1;
- (void)setVehicleState:(struct VehicleState { bool x1; })arg1;
- (void)setWantsLayout;
- (struct shared_ptr<gss::CartoStyle<gss::PropertyID> > { struct CartoStyle<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleForFeature:(const struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (struct shared_ptr<gss::StyleSheet<gss::PropertyID> > { struct StyleSheet<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })stylesheet;
- (unsigned char)targetDisplay;
- (long long)tileSize;
- (void)transferStateFromCanvas:(id)arg1;
- (void)updateCameraForFrameResize;
- (void)updateWithTimestamp:(double)arg1;
- (struct VehicleState { bool x1; })vehicleState;
- (id)viewportInfo;
- (bool)wantsTimerTick;

@end
