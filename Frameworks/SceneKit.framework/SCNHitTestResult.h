/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNHitTestResult : NSObject {
    struct __C3DHitTestResult { } * _result;
}

@property (nonatomic, readonly) SCNNode *boneNode;
@property (nonatomic, readonly) long long faceIndex;
@property (nonatomic, readonly) long long geometryIndex;
@property (nonatomic, readonly) struct SCNVector3 { float x1; float x2; float x3; } localCoordinates;
@property (nonatomic, readonly) struct SCNVector3 { float x1; float x2; float x3; } localNormal;
@property (nonatomic, readonly) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } modelTransform;
@property (nonatomic, readonly) SCNNode *node;
@property (nonatomic, readonly) void simdLocalCoordinates;
@property (nonatomic, readonly) void simdLocalNormal;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } simdModelTransform;
@property (nonatomic, readonly) void simdWorldCoordinates;
@property (nonatomic, readonly) void simdWorldNormal;
@property (nonatomic, readonly) struct SCNVector3 { float x1; float x2; float x3; } worldCoordinates;
@property (nonatomic, readonly) struct SCNVector3 { float x1; float x2; float x3; } worldNormal;

+ (id)hitTestResultsFromHitTestResultRef:(struct __CFArray { }*)arg1;

- (id)boneNode;
- (void)dealloc;
- (id)description;
- (long long)faceIndex;
- (long long)geometryIndex;
- (id)initWithResult:(struct __C3DHitTestResult { }*)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })localCoordinates;
- (struct SCNVector3 { float x1; float x2; float x3; })localNormal;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })modelTransform;
- (id)node;
- (void)simdLocalCoordinates;
- (void)simdLocalNormal;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })simdModelTransform;
- (void)simdWorldCoordinates;
- (void)simdWorldNormal;
- (struct CGPoint { double x1; double x2; })textureCoordinate;
- (struct CGPoint { double x1; double x2; })textureCoordinatesWithMappingChannel:(long long)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })worldCoordinates;
- (struct SCNVector3 { float x1; float x2; float x3; })worldNormal;

@end