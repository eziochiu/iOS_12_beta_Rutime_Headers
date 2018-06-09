/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNCameraControlEventHandler : SCNEventHandler {
    unsigned int  _allowsTranslation;
    unsigned int  _alternateMode;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _autoCameraTarget;
    unsigned int  _automaticCameraTargetUpToDate;
    long long  _browseMode;
    float  _browseScaleFactor;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _cameraTarget;
    void _clickOrigin;
    unsigned int  _didEverFocusNode;
    unsigned int  _enabled;
    SCNNode * _freeViewCameraNode;
    double  _friction;
    unsigned int  _gimbalLockMode;
    unsigned int  _hasAutomaticCameraTarget;
    unsigned int  _inertia;
    unsigned int  _inertiaRunning;
    struct CGPoint { 
        double x; 
        double y; 
    }  _inertiaVelocity;
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _initialMatrix;
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _initialMatrixForRoll;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialPoint;
    float  _initialZoom;
    bool  _isDraggingWithOneFinger;
    unsigned int  _isViewedObjectSphereComputed;
    int  _lastGestureFingerCount;
    double  _lastSimulationTime;
    float  _originalFovX;
    float  _originalFovY;
    float  _originalOrthoScale;
    UIGestureRecognizer * _panGesture;
    UIGestureRecognizer * _pinchGesture;
    unsigned int  _pinchShouldMoveCamera;
    UIGestureRecognizer * _pressGesture;
    float  _roll;
    UIGestureRecognizer * _rotateGesture;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    unsigned long long  _stickyAxis;
    UIGestureRecognizer * _tapGesture;
    struct CGPoint { 
        double x; 
        double y; 
    }  _totalDragWithInertia;
    void _upDir;
    unsigned int  _upDirIsSet;
    struct C3DSphere { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  _viewedObjectSphere;
    float  _zoomFactor;
}

@property bool allowsTranslation;
@property bool automaticCameraTarget;
@property struct SCNVector3 { float x1; float x2; float x3; } cameraTarget;
@property bool enableInertia;
@property double friction;
@property bool gimbalLockMode;
@property struct SCNVector3 { float x1; float x2; float x3; } gimbalLockVector;
@property unsigned long long stickyAxis;

+ (void)frontVectorWithPointOfView:(id)arg1;
+ (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })matrixWithNoRoll:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;

- (bool)_3DConnexionIsPressed;
- (void)_beginTranslateAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (double)_browseScale;
- (bool)_freeCameraActivated;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_handlePress:(id)arg1;
- (void)_handleRotation:(id)arg1;
- (void)_installFreeViewCameraIfNeeded;
- (bool)_isInertiaRunning;
- (void)_onInertiaTimer;
- (void)_prepareFreeViewCamera;
- (void)_resetBrowseScaleFactor;
- (void)_resetFreeViewCamera;
- (void)_rotateWithDrag:(struct CGPoint { double x1; double x2; })arg1 mode:(long long)arg2 stickyAxis:(unsigned long long)arg3;
- (void)_setInertiaRunning:(bool)arg1;
- (void)_startBrowsingIfNeeded:(struct CGPoint { double x1; double x2; })arg1;
- (void)_switchToFreeViewCamera;
- (void)_translateTo:(struct CGPoint { double x1; double x2; })arg1;
- (float)_translationCoef;
- (void)activateFreeCamera;
- (bool)allowsTranslation;
- (bool)automaticCameraTarget;
- (void)beginGesture:(id)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })cameraAutomaticTargetPoint;
- (void)cameraDidChange;
- (struct SCNVector3 { float x1; float x2; float x3; })cameraTarget;
- (void)cameraWillChange;
- (void)clearRoll;
- (void)computeAutomaticTargetPoint;
- (bool)computeBoundingSphereOmittingFloorsForNode:(struct __C3DNode { }*)arg1 sphere:(struct C3DSphere { }*)arg2;
- (void)dealloc;
- (bool)enableInertia;
- (bool)enabled;
- (void)endDraggingWithVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (void)focusNode:(id)arg1;
- (id)freeCamera;
- (double)friction;
- (void)frontVector;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureRecognizers;
- (bool)gimbalLockMode;
- (struct SCNVector3 { float x1; float x2; float x3; })gimbalLockVector;
- (id)init;
- (void)invalidateCameraTarget;
- (void)panWithGestureRecognizer:(id)arg1;
- (void)pinchWithGestureRecognizer:(id)arg1;
- (void)rotateOf:(double)arg1;
- (void)rotateWithGestureRecognizer:(id)arg1;
- (void)rotateWithVector:(void *)arg1 mode:(void *)arg2; // needs 2 arg types, found 1: long long
- (void)sceneDidChange;
- (void)sceneWillChange;
- (void)setAllowsTranslation:(bool)arg1;
- (void)setAutomaticCameraTarget:(bool)arg1;
- (void)setCameraTarget:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setEnableFreeCamera:(bool)arg1;
- (void)setEnableInertia:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFriction:(double)arg1;
- (void)setGimbalLockMode:(bool)arg1;
- (void)setGimbalLockVector:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setStickyAxis:(unsigned long long)arg1;
- (void)setZoomFactor:(double)arg1;
- (unsigned long long)stickyAxis;
- (void)translateByX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)updateBrowseScaleFactor;
- (void)viewWillDrawAtTime:(double)arg1;
- (struct C3DSphere { })viewedObjectSphere;
- (bool)wantsRedraw;
- (void)zoomBy:(float)arg1;
- (void)zoomBy:(float)arg1 animate:(bool)arg2;
- (double)zoomFactor;

@end
