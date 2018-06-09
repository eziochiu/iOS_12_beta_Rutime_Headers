/* made by EzioChiu.
 */

@protocol MTLDeviceSPI <MTLDevice>

@required

+ (void)registerDevices;

- (void)_setDeviceWrapper:(id <MTLDeviceSPI>)arg1;
- (unsigned int)acceleratorPort;
- (void)compilerPropagatesThreadPriority:(bool)arg1;
- (unsigned long long)dedicatedMemorySize;
- (unsigned long long)deviceLinearReadOnlyTextureAlignmentBytes;
- (unsigned long long)deviceLinearTextureAlignmentBytes;
- (bool)deviceOrFeatureProfileSupportsFeatureSet:(unsigned long long)arg1;
- (bool)deviceSupportsFeatureSet:(unsigned long long)arg1;
- (unsigned long long)doubleFPConfig;
- (NSString *)familyName;
- (unsigned long long)featureProfile;
- (unsigned long long)halfFPConfig;
- (struct IndirectArgumentBufferCapabilities { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 29; })indirectArgumentBufferCapabilities;
- (unsigned long long)iosurfaceReadOnlyTextureAlignmentBytes;
- (unsigned long long)iosurfaceTextureAlignmentBytes;
- (struct { unsigned int x1; unsigned int x2; })libraryCacheStats;
- (const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned long long x54; }*)limits;
- (unsigned long long)linearTextureAlignmentBytes;
- (unsigned long long)maxColorAttachments;
- (unsigned long long)maxComputeBuffers;
- (unsigned long long)maxComputeInlineDataSize;
- (unsigned long long)maxComputeLocalMemorySizes;
- (unsigned long long)maxComputeSamplers;
- (unsigned long long)maxComputeTextures;
- (unsigned long long)maxComputeThreadgroupMemory;
- (unsigned long long)maxComputeThreadgroupMemoryAlignmentBytes;
- (unsigned long long)maxCustomSamplePositions;
- (unsigned long long)maxFragmentBuffers;
- (unsigned long long)maxFragmentInlineDataSize;
- (unsigned long long)maxFragmentSamplers;
- (unsigned long long)maxFragmentTextures;
- (unsigned long long)maxFramebufferStorageBits;
- (unsigned long long)maxFunctionConstantIndices;
- (unsigned long long)maxIndirectBuffers;
- (unsigned long long)maxIndirectSamplers;
- (unsigned long long)maxIndirectSamplersPerDevice;
- (unsigned long long)maxIndirectTextures;
- (unsigned long long)maxInterpolants;
- (unsigned long long)maxInterpolatedComponents;
- (float)maxLineWidth;
- (float)maxPointSize;
- (unsigned long long)maxTessellationFactor;
- (unsigned long long)maxTextureBufferWidth;
- (unsigned long long)maxTextureDepth3D;
- (unsigned long long)maxTextureDimensionCube;
- (unsigned long long)maxTextureHeight2D;
- (unsigned long long)maxTextureHeight3D;
- (unsigned long long)maxTextureLayers;
- (unsigned long long)maxTextureWidth1D;
- (unsigned long long)maxTextureWidth2D;
- (unsigned long long)maxTextureWidth3D;
- (unsigned long long)maxTileBuffers;
- (unsigned long long)maxTileInlineDataSize;
- (unsigned long long)maxTileSamplers;
- (unsigned long long)maxTileTextures;
- (unsigned long long)maxTotalComputeThreadsPerThreadgroup;
- (unsigned long long)maxVertexAttributes;
- (unsigned long long)maxVertexBuffers;
- (unsigned long long)maxVertexInlineDataSize;
- (unsigned long long)maxVertexSamplers;
- (unsigned long long)maxVertexTextures;
- (unsigned long long)maxVisibilityQueryOffset;
- (bool)metalAssertionsEnabled;
- (unsigned long long)minBufferNoCopyAlignmentBytes;
- (unsigned long long)minConstantBufferAlignmentBytes;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minTilePixels;
- (<MTLArgumentEncoder> *)newArgumentEncoderWithLayout:(_MTLIndirectArgumentBufferLayout *)arg1;
- (<MTLBuffer> *)newBufferWithIOSurface:(struct __IOSurface { }*)arg1;
- (<MTLCommandQueue> *)newCommandQueueWithDescriptor:(MTLCommandQueueDescriptor *)arg1;
- (_MTLIndirectArgumentBufferLayout *)newIndirectArgumentBufferLayoutWithStructType:(MTLStructType *)arg1;
- (<MTLIndirectArgumentEncoder> *)newIndirectArgumentEncoderWithLayout:(_MTLIndirectArgumentBufferLayout *)arg1;
- (<MTLBuffer> *)newIndirectCommandBufferWithDescriptor:(MTLIndirectCommandBufferDescriptor *)arg1 maxCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (<MTLIndirectRenderCommandEncoder> *)newIndirectRenderCommandEncoderWithBuffer:(id <MTLBuffer>)arg1;
- (<MTLSharedEvent> *)newSharedEventWithMachPort:(unsigned int)arg1;
- (<MTLTexture> *)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned long long)arg3;
- (struct { unsigned int x1; unsigned int x2; })pipelineCacheStats;
- (NSString *)productName;
- (void)setMetalAssertionsEnabled:(bool)arg1;
- (unsigned long long)sharedMemorySize;
- (unsigned long long)singleFPConfig;
- (bool)supportPriorityBand;
- (bool)supportsSampleCount:(unsigned long long)arg1;
- (void)unloadShaderCaches;
- (NSString *)vendorName;

@optional

- (NSData *)endCollectingPipelineDescriptors;
- (void*)getShaderCacheKeys;
- (NSObject<OS_dispatch_data> *)indirectArgumentBufferDecodingData;
- (unsigned long long)indirectArgumentBuffersSupport;
- (bool)isQuadDataSharingSupported;
- (bool)mapShaderSampleBufferWithBuffer:(struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 capacity:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (void)newComputePipelineStateWithDescriptor:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: MTLComputePipelineDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLComputePipelineState> *, NSError *, void*
- (<MTLComputePipelineState> *)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 error:(id*)arg2;
- (<MTLComputePipelineState> *)newComputePipelineStateWithImageFilterFunctionsSPI:(NSArray *)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (<MTLFunction> *)newFunctionWithGLIR:(void*)arg1 functionType:(unsigned long long)arg2;
- (<MTLFunction> *)newFunctionWithGLIR:(void*)arg1 inputsDescription:(NSObject<OS_dispatch_data> *)arg2 functionType:(unsigned long long)arg3;
- (<MTLIndirectArgumentEncoder> *)newIndirectArgumentEncoderWithArguments:(NSArray *)arg1;
- (<MTLLibrary> *)newLibraryWithCIFilters:(NSArray *)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (<MTLLibrary> *)newLibraryWithCIFiltersForComputePipeline:(NSArray *)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (<MTLPipelineLibrarySPI> *)newPipelineLibraryWithFilePath:(NSString *)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithTileDescriptor:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: MTLTileRenderPipelineDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLRenderPipelineState> *, NSError *, void*
- (<MTLRenderPipelineState> *)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 error:(id*)arg2;
- (<MTLTextureLayout> *)newTextureLayoutWithDescriptor:(MTLTextureDescriptor *)arg1 isHeapOrBufferBacked:(bool)arg2;
- (<MTLTexture> *)newTextureWithBytesNoCopy:(void *)arg1 length:(void *)arg2 descriptor:(void *)arg3 deallocator:(void *)arg4; // needs 4 arg types, found 10: void*, unsigned long long, MTLTextureDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, unsigned long long, void*
- (void)reserveResourceIndicesForResourceType:(unsigned long long)arg1 indices:(unsigned long long*)arg2 indexCount:(unsigned long long)arg3;
- (unsigned long long)resourcePatchingTypeForResourceType:(unsigned long long)arg1;
- (void)setIndirectArgumentBufferDecodingData:(NSObject<OS_dispatch_data> *)arg1;
- (void)setShaderDebugInfoCaching:(bool)arg1;
- (void)setupMPSFunctionTable:(struct MPSFunctionTable { }*)arg1;
- (bool)shaderDebugInfoCaching;
- (void)startCollectingPipelineDescriptors;
- (const struct MTLTargetDeviceArch { unsigned int x1; unsigned int x2; char *x3; }*)targetDeviceInfo;
- (void)unmapShaderSampleBuffer;

@end
