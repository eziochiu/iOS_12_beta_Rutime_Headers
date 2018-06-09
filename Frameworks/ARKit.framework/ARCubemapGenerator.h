/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARCubemapGenerator : NSObject {
    ARCameraToCubeMap * _cameraToCubeMap;
    ARCubemapCompletion * _cubemapCompletion;
    ARGPUCubemapProjector * _cubemapProjector;
    float  _gaussianBlurSigmaCameraToCubeMap;
}

- (void).cxx_destruct;
- (float)approxCoveredSolidAngleByPlanes:(void *)arg1 atPosition:(void *)arg2; // needs 2 arg types, found 1: struct vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<ARTexturedPlane *, std::__1::allocator<ARTexturedPlane> > { struct { /* ? */ } *x_3_1_1; } x3; }
- (id)cubemapWithTransform:(void *)arg1 extent:(void *)arg2 fromPlanes:(void *)arg3 cameraImage:(void *)arg4 cameraTransform:(void *)arg5 cameraProjection:(void *)arg6 cameraExposure:(void *)arg7 texturingMode:(void *)arg8 error:(void *)arg9; // needs 9 arg types, found 8: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, struct vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<ARTexturedPlane *, std::__1::allocator<ARTexturedPlane> > { struct { /* ? */ } *x_3_1_1; } x3; }, struct __CVBuffer { }*, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, double, long long, id*
- (float)distanceToViewFrustrumAtPosition:(void *)arg1 withCameraViewProjection:(void *)arg2; // needs 2 arg types, found 1: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (id)init;

@end
