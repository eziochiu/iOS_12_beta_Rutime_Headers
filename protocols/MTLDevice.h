/* made by EzioChiu.
 */

@protocol MTLDevice <NSObject>

@required

- (bool)areProgrammableSamplePositionsSupported;
- (bool)areRasterOrderGroupsSupported;
- (unsigned long long)argumentBuffersSupport;
- (unsigned long long)currentAllocatedSize;
- (void)getDefaultSamplePositions:(struct { float x1; float x2; }*)arg1 count:(unsigned long long)arg2;
- (struct { unsigned long long x1; unsigned long long x2; })heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (struct { unsigned long long x1; unsigned long long x2; })heapTextureSizeAndAlignWithDescriptor:(MTLTextureDescriptor *)arg1;
- (bool)isDepth24Stencil8PixelFormatSupported;
- (bool)isHeadless;
- (bool)isLowPower;
- (bool)isRemovable;
- (unsigned long long)maxArgumentBufferSamplerCount;
- (unsigned long long)maxBufferLength;
- (unsigned long long)maxThreadgroupMemoryLength;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })maxThreadsPerThreadgroup;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (NSString *)name;
- (<MTLArgumentEncoder> *)newArgumentEncoderWithArguments:(NSArray *)arg1;
- (<MTLBuffer> *)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (<MTLBuffer> *)newBufferWithBytesNoCopy:(void *)arg1 length:(void *)arg2 options:(void *)arg3 deallocator:(void *)arg4; // needs 4 arg types, found 10: void*, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, unsigned long long, void*
- (<MTLBuffer> *)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (<MTLCommandQueue> *)newCommandQueue;
- (<MTLCommandQueue> *)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (void)newComputePipelineStateWithDescriptor:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: MTLComputePipelineDescriptor *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLComputePipelineState> *, MTLComputePipelineReflection *, NSError *, void*
- (<MTLComputePipelineState> *)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newComputePipelineStateWithFunction:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: <MTLFunction> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLComputePipelineState> *, NSError *, void*
- (<MTLComputePipelineState> *)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithFunction:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: <MTLFunction> *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLComputePipelineState> *, MTLComputePipelineReflection *, NSError *, void*
- (<MTLComputePipelineState> *)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (<MTLLibrary> *)newDefaultLibrary;
- (<MTLLibrary> *)newDefaultLibraryWithBundle:(NSBundle *)arg1 error:(id*)arg2;
- (<MTLDepthStencilState> *)newDepthStencilStateWithDescriptor:(MTLDepthStencilDescriptor *)arg1;
- (<MTLEvent> *)newEvent;
- (<MTLFence> *)newFence;
- (<MTLHeap> *)newHeapWithDescriptor:(MTLHeapDescriptor *)arg1;
- (<MTLIndirectCommandBuffer> *)newIndirectCommandBufferWithDescriptor:(MTLIndirectCommandBufferDescriptor *)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (<MTLLibrary> *)newLibraryWithData:(NSObject<OS_dispatch_data> *)arg1 error:(id*)arg2;
- (<MTLLibrary> *)newLibraryWithFile:(NSString *)arg1 error:(id*)arg2;
- (void)newLibraryWithSource:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, MTLCompileOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLLibrary> *, NSError *, void*
- (<MTLLibrary> *)newLibraryWithSource:(NSString *)arg1 options:(MTLCompileOptions *)arg2 error:(id*)arg3;
- (<MTLLibrary> *)newLibraryWithURL:(NSURL *)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithDescriptor:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: MTLRenderPipelineDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLRenderPipelineState> *, NSError *, void*
- (<MTLRenderPipelineState> *)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithDescriptor:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: MTLRenderPipelineDescriptor *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLRenderPipelineState> *, MTLRenderPipelineReflection *, NSError *, void*
- (<MTLRenderPipelineState> *)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newRenderPipelineStateWithTileDescriptor:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: MTLTileRenderPipelineDescriptor *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLRenderPipelineState> *, MTLRenderPipelineReflection *, NSError *, void*
- (<MTLRenderPipelineState> *)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (<MTLSamplerState> *)newSamplerStateWithDescriptor:(MTLSamplerDescriptor *)arg1;
- (<MTLSharedEvent> *)newSharedEvent;
- (<MTLSharedEvent> *)newSharedEventWithHandle:(MTLSharedEventHandle *)arg1;
- (<MTLTexture> *)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1;
- (<MTLTexture> *)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned long long)arg3;
- (unsigned long long)readWriteTextureSupport;
- (unsigned long long)recommendedMaxWorkingSetSize;
- (unsigned long long)registryID;
- (bool)supportsFeatureSet:(unsigned long long)arg1;
- (bool)supportsTextureSampleCount:(unsigned long long)arg1;

@optional

- (unsigned long long)minimumTextureBufferAlignmentForPixelFormat:(unsigned long long)arg1;

@end
