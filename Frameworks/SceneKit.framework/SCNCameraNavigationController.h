/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNCameraNavigationController : NSObject <SCNCameraControllerDelegate, SCNEventHandler> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _accumulatedDrag;
    bool  _autoSwitchToFreeCamera;
    long long  _browseMode;
    SCNCameraController * _cameraController;
    float  _cameraOriginalFieldOfView;
    bool  _cameraTargetComputed;
    <SCNCameraNavigationControllerDelegate> * _delegate;
    bool  _didEverFocusNode;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _drawAtTimeLock;
    bool  _enableFreeCamera;
    bool  _enabled;
    float  _fieldOfViewZoomFactor;
    double  _flyModeVelocity;
    SCNNode * _freeViewCameraNode;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } lastDragLocation; 
        struct CGPoint { 
            double x; 
            double y; 
        } velocity; 
        double lastDragTime; 
    }  _inertia;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialInputLocation;
    void _initialPointOfViewWorldPosition;
    float  _initialZoom;
    bool  _isDraggingWithOneFinger;
    bool  _isOrbiting;
    bool  _isSceneBoundingSphereComputed;
    struct { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        NSDictionary *keyCodeConfiguration; 
        struct set<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> > { 
            struct __tree<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned short, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::less<unsigned short> > { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } keyDown; 
        struct vector<unsigned short, std::__1::allocator<unsigned short> > { 
            unsigned short *__begin_; 
            unsigned short *__end_; 
            struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > { 
                unsigned short *__value_; 
            } __end_cap_; 
        } forward; 
        struct vector<unsigned short, std::__1::allocator<unsigned short> > { 
            unsigned short *__begin_; 
            unsigned short *__end_; 
            struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > { 
                unsigned short *__value_; 
            } __end_cap_; 
        } backward; 
        struct vector<unsigned short, std::__1::allocator<unsigned short> > { 
            unsigned short *__begin_; 
            unsigned short *__end_; 
            struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > { 
                unsigned short *__value_; 
            } __end_cap_; 
        } left; 
        struct vector<unsigned short, std::__1::allocator<unsigned short> > { 
            unsigned short *__begin_; 
            unsigned short *__end_; 
            struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > { 
                unsigned short *__value_; 
            } __end_cap_; 
        } right; 
    }  _keyboard;
    long long  _lastGestureFingerCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastInputLocation;
    double  _lastKeyInputTime;
    double  _lastRotationAngle;
    bool  _mouseDown;
    float  _originalOrthoScale;
    float  _orthographicZoomFactor;
    UIGestureRecognizer * _panGesture;
    double  _panSensitivity;
    UIGestureRecognizer * _pinchGesture;
    bool  _pinchShouldMoveCamera;
    UIGestureRecognizer * _pressGesture;
    bool  _recordingPointOfViewEvents;
    UIGestureRecognizer * _rotateGesture;
    double  _rotationSensitivity;
    union { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*vector; 
    }  _sceneBoundingSphere;
    struct { 
        bool hasShift; 
        bool hasOption; 
    }  _scrollWheelModifiers;
    bool  _shouldIgnoreMomentumEvents;
    bool  _shouldUpdateTarget;
    struct { 
        bool stickyMoveEnabled; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*direction; 
    }  _stickyAxis;
    UIGestureRecognizer * _tapGesture;
    struct { 
        bool automaticLocationUpToDate; 
        bool hasAutomatic; 
    }  _target;
    bool  _translationAllowed;
    void _translationOrigin;
    double  _truckSensitivity;
    SCNView * _view;
}

@property (nonatomic) bool allowsTranslation;
@property (nonatomic) bool autoSwitchToFreeCamera;
@property (nonatomic) bool automaticCameraTarget;
@property (nonatomic, readonly) SCNCameraController *cameraController;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } cameraTarget;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SCNCameraNavigationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableFreeCamera;
@property (nonatomic) bool enableInertia;
@property (nonatomic) bool enabled;
@property (nonatomic) double flyModeVelocity;
@property (nonatomic, readonly) SCNNode *freeCamera;
@property (nonatomic) double friction;
@property (nonatomic) bool gimbalLockMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) double panSensitivity;
@property (nonatomic) double rotationSensitivity;
@property (nonatomic) unsigned long long stickyAxis;
@property (readonly) Class superclass;
@property (nonatomic) double truckSensitivity;
@property (nonatomic) SCNView *view;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)__didChangePointOfView;
- (void)__willChangePointOfView;
- (void)_computeAutomaticTargetPointIfNeeded;
- (bool)_computeBoundingSphereOmittingFloorsForNode:(struct __C3DNode { }*)arg1 sphere:(struct C3DSphere { }*)arg2;
- (void)_computeStickyAxisIfNeeded:(struct CGPoint { double x1; double x2; })arg1;
- (void)_computeTranslationOrigin3DFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_defaultTargetForScene:(id)arg1;
- (unsigned long long)_effectiveStickyAxis;
- (bool)_freeCameraActivated;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_handlePress:(id)arg1;
- (void)_handleRotation:(id)arg1;
- (void)_installFreeViewCameraIfNeeded;
- (double)_modeSensitivity;
- (float)_orthographicScaleForZoomFactor:(float)arg1;
- (float)_orthographicZoomFactorForProposedZoomFactor:(float)arg1;
- (float)_pointOfViewOrthographicScale;
- (bool)_pointOfViewUsesOrthographicProjection;
- (void)_prepareFreeViewCamera;
- (void)_resetFreeViewCamera;
- (union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; })_sceneBoundingSphere;
- (void)_setPointOfViewOrthographicScale:(float)arg1;
- (void)_setupUpVector;
- (void)_startBrowsingIfNeeded:(struct CGPoint { double x1; double x2; })arg1;
- (void)_stopInertia;
- (void)_switchToFreeViewCamera;
- (float)_targetDistance;
- (void)_translateToViewPoint:(struct CGPoint { double x1; double x2; })arg1;
- (float)_translationCoef;
- (void)_willBeginInteraction;
- (void)activateFreeCamera;
- (bool)allowsTranslation;
- (bool)autoSwitchToFreeCamera;
- (bool)automaticCameraTarget;
- (void)beginGesture:(id)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })cameraAutomaticTargetPoint;
- (id)cameraController;
- (void)cameraDidChange;
- (void)cameraInertiaDidEndForController:(id)arg1;
- (void)cameraInertiaWillStartForController:(id)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })cameraTarget;
- (void)cameraWillChange;
- (void)dealloc;
- (id)delegate;
- (bool)enableFreeCamera;
- (bool)enableInertia;
- (bool)enabled;
- (double)flyModeVelocity;
- (void)focusNode:(id)arg1;
- (void)focusNodes:(id)arg1;
- (id)freeCamera;
- (double)friction;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureRecognizers;
- (bool)gimbalLockMode;
- (struct SCNVector3 { float x1; float x2; float x3; })gimbalLockVector;
- (id)initWithView:(id)arg1;
- (void)invalidateCameraTarget;
- (double)panSensitivity;
- (void)panWithGestureRecognizer:(id)arg1;
- (void)pinchWithGestureRecognizer:(id)arg1;
- (id)pointOfView;
- (void)rotateOf:(double)arg1;
- (void)rotateWithGestureRecognizer:(id)arg1;
- (double)rotationSensitivity;
- (void)sceneDidChange;
- (void)sceneWillChange;
- (void)setAllowsTranslation:(bool)arg1;
- (void)setAutoSwitchToFreeCamera:(bool)arg1;
- (void)setAutomaticCameraTarget:(bool)arg1;
- (void)setCameraTarget:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnableFreeCamera:(bool)arg1;
- (void)setEnableInertia:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFlyModeVelocity:(double)arg1;
- (void)setFriction:(double)arg1;
- (void)setGimbalLockMode:(bool)arg1;
- (void)setGimbalLockVector:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setPanSensitivity:(double)arg1;
- (void)setRotationSensitivity:(double)arg1;
- (void)setStickyAxis:(unsigned long long)arg1;
- (void)setTruckSensitivity:(double)arg1;
- (void)setView:(id)arg1;
- (void)setZoomFactor:(double)arg1;
- (unsigned long long)stickyAxis;
- (void)translateByX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (double)truckSensitivity;
- (id)view;
- (void)viewDidDrawAtTime:(double)arg1;
- (void)viewWillDrawAtTime:(double)arg1;
- (bool)wantsRedraw;
- (void)worldFront;
- (void)zoomBy:(float)arg1;
- (void)zoomBy:(float)arg1 animate:(bool)arg2;
- (double)zoomFactor;

@end
