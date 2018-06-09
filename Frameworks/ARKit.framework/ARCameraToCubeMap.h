/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARCameraToCubeMap : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLComputePipelineState> * _computePipelineState;
    <MTLDevice> * _device;
}

+ (id)allocateOutputTextureCubeOnDevice:(id)arg1 withCubeMapWidth:(unsigned long long)arg2 mipmapped:(bool)arg3;

- (void).cxx_destruct;
- (id)createCubeMapOfWidth:(void *)arg1 fromCameraImagePixelBuffer:(void *)arg2 cameraViewProjection:(void *)arg3 cameraPosition:(void *)arg4 lightProbePosition:(void *)arg5 mipmapped:(void *)arg6 withSettings:(void *)arg7; // needs 7 arg types, found 5: unsigned long long, struct __CVBuffer { }*, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, bool, struct ARCameraToCubeMapSettings { float x1; bool x2; bool x3; bool x4; bool x5; float x6; bool x7; float x8; }
- (id)init;

@end
