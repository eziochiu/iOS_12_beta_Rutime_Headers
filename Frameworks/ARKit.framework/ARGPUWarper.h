/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARGPUWarper : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    <MTLRenderPipelineState> * _homographyPipelineState;
}

- (void).cxx_destruct;
- (id)init;
- (void)warpCameraImage:(struct __CVBuffer { }*)arg1 withExposureOffset:(float)arg2 withCameraIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg3 withCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 toPlane:(struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; })arg5 withLoadAction:(unsigned long long)arg6 synchronous:(bool)arg7;
- (void)warpPlane:(struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; })arg1 toPlane:(struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; })arg2 withLoadAction:(unsigned long long)arg3 synchronous:(bool)arg4;

@end
