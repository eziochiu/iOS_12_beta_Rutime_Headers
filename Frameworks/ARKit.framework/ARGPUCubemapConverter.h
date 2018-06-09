/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARGPUCubemapConverter : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLComputePipelineState> * _cubemapToLatLongPipelineState;
    <MTLDevice> * _device;
    bool  _gpuFamilyAtleast4;
    <MTLComputePipelineState> * _latLongToCubemapPipelineState;
}

@property (getter=isGPUFamilyAtleast4, nonatomic, readonly) bool gpuFamilyAtleast4;

- (void).cxx_destruct;
- (id)cubemapTextureWithSize:(unsigned long long)arg1 forLatLong:(id)arg2;
- (id)init;
- (bool)isGPUFamilyAtleast4;
- (id)latlongTextureWithSize:(unsigned long long)arg1 forCubemap:(id)arg2;

@end
