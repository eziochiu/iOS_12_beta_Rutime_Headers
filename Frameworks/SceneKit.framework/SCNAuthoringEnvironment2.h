/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNAuthoringEnvironment2 : NSObject {
    UIColor * _blue;
    SCNGeometry * _cameraFrustumGeometry;
    SCNGeometry * _cameraGeometry;
    SCNGeometry * _cameraNearPlaneGeometry;
    SCNNode * _cameraRoot;
    SCNNode * _cameraTarget;
    struct __CFDictionary { } * _camerasDictionary;
    UIColor * _cyan;
    long long  _displayMask;
    SCNGeometry * _fieldGeometry;
    UIColor * _grayDark;
    UIColor * _grayLight;
    UIColor * _grayMedium;
    UIColor * _green;
    SCNNode * _layerRoot;
    SCNGeometry * _lightGeometry;
    SCNNode * _lightRoot;
    struct __CFDictionary { } * _lightsDictionary;
    SCNManipulator * _manipulator;
    UIColor * _orange;
    SCNNode * _overlayLayerRoot;
    UIColor * _paleBlue;
    UIColor * _paleGreen;
    struct __CFDictionary { } * _particlesDictionary;
    SCNGeometry * _particlesGeometry;
    SCNNode * _particlesRoot;
    struct __CFDictionary { } * _physicsFieldsDictionary;
    SCNNode * _physicsFieldsRoot;
    UIColor * _pink;
    SCNNode * _pointsOfViewRoot;
    UIColor * _red;
    SCNRenderer * _renderer;
    struct __C3DScene { } * _scene;
    NSMutableSet * _selection;
    UIColor * _white;
    UIColor * _yellow;
}

@property (nonatomic, readonly) SCNNode *authoringLayer;
@property (nonatomic, readonly) SCNNode *authoringOverlayLayer;
@property long long displayMask;
@property (nonatomic, readonly) SCNManipulator *manipulator;

+ (id)authoringEnvironmentForScene:(id)arg1;
+ (id)authoringEnvironmentForScene:(id)arg1 createIfNeeded:(bool)arg2;

- (void)_resetLightAuthoringWithContainerNode:(id)arg1 source:(id)arg2 light:(id)arg3;
- (void)addCameraNode:(id)arg1;
- (void)addLightNode:(id)arg1;
- (void)addNodeToSelection:(id)arg1;
- (void)addParticlesNode:(id)arg1;
- (void)addPhysicsFieldNode:(id)arg1;
- (void)addedNode:(id)arg1;
- (id)authoringCamera:(long long)arg1;
- (id)authoringCameraNodes;
- (id)authoringLayer;
- (id)authoringOverlayLayer;
- (id)cameraFrustumGeometry;
- (id)cameraGeometry;
- (id)cameraNearPlaneGeometry;
- (void)cancelSelection;
- (void)dealloc;
- (bool)didTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)displayMask;
- (id)fieldGeometry;
- (id)geometryForLightType:(id)arg1;
- (id)initWithScene:(id)arg1;
- (id)manipulator;
- (id)particlesGeometry;
- (void)prepareScene:(id)arg1;
- (void)removeCameraNode:(id)arg1;
- (void)removeLightNode:(id)arg1;
- (void)removeParticlesNode:(id)arg1;
- (void)removePhysicsFieldNode:(id)arg1;
- (void)removedNode:(id)arg1;
- (void)selectNode:(id)arg1;
- (void)selectNodes:(id)arg1;
- (void)setAuthoringCamera:(long long)arg1 forView:(id)arg2;
- (void)setDisplayMask:(long long)arg1;
- (void)setupParticleMeshEmitter:(id)arg1 authoringNode:(id)arg2;
- (void)updateCameraNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateFieldNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateLightNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateLightTypeForNode:(id)arg1 source:(id)arg2 light:(id)arg3 screenspaceScalingFactor:(float)arg4;
- (void)updateParticlesNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateWithRenderer:(id)arg1;

@end
