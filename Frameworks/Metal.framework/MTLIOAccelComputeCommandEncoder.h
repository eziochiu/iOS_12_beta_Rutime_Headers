/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelComputeCommandEncoder : MTLIOAccelCommandEncoder

- (void)bindEmulationArguments;
- (void*)getBufferContentsAtIndex:(unsigned long long)arg1;
- (id)getComputePipelineState;
- (unsigned long long)getType;
- (void)memoryBarrierWithResources:(const id*)arg1 count:(unsigned long long)arg2;
- (void)memoryBarrierWithScope:(unsigned long long)arg1;
- (void)setEmulationBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setEmulationSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setEmulationTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)updateFence:(id)arg1;
- (void)useHeap:(id)arg1;
- (void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;
- (void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)waitForFence:(id)arg1;

@end
