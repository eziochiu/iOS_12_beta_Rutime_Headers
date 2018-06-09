/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARGPUCubemapProjector : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDepthStencilState> * _cubemapDepthState;
    <MTLRenderPipelineState> * _cubemapPipelineState;
    <MTLDevice> * _device;
}

- (void).cxx_destruct;
- (id)init;
- (id)projectToCubeWithResolution:(unsigned long long)arg1 transformWorldFromCube:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 planes:(const struct vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<ARTexturedPlane *, std::__1::allocator<ARTexturedPlane> > { struct { /* ? */ } *x_3_1_1; } x3; }*)arg3;

@end
