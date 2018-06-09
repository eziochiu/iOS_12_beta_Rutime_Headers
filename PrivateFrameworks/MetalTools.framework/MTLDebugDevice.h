/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugDevice : MTLToolsDevice {
    struct MTLSamplerDescriptorHashMap { 
        struct unordered_map<std::__1::array<unsigned long long, 3>, unsigned int, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned long long, 3>, unsigned int> > > { 
            struct __hash_table<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, std::__1::__unordered_map_hasher<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, true>, std::__1::__unordered_map_equal<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int> > > { 
                struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *> > > { 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *> > > { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> {} **__value_; 
                        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *> > { 
                            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *> > { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> {} *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, true> > { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, true> > { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } _map; 
        unsigned int _limit; 
    }  _argumentBufferSamplers;
    NSMutableSet * _buffersAlreadyChecksummedInFrame;
    unsigned int  _frameNum;
    bool  _prevResourceTrackingEnabled;
    bool  _resourceTrackingChecksummingEnabled;
    bool  _resourceTrackingChecksummingForceAll;
    bool  _resourceTrackingEnabled;
}

@property (nonatomic) unsigned int frameNum;
@property (nonatomic, readonly) bool resourceTrackingChecksummingEnabled;
@property (nonatomic, readonly) bool resourceTrackingChecksummingForceAll;
@property (nonatomic, readonly) bool resourceTrackingEnabled;

+ (bool)complainAboutSloppyTextureUsage;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)_resourceTrackingChecksummingEndOfFrame;
- (void)bufferChecksummedInFrame:(id)arg1;
- (unsigned int)checksumBuffer:(id)arg1;
- (void)dealloc;
- (void)eventSignaled:(id)arg1 value:(unsigned long long)arg2;
- (unsigned int)frameNum;
- (struct { unsigned long long x1; unsigned long long x2; })heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (struct { unsigned long long x1; unsigned long long x2; })heapTextureSizeAndAlignWithDescriptor:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (id)newArgumentEncoderWithArguments:(id)arg1;
- (id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(id /* block */)arg4;
- (id)newBufferWithIOSurface:(struct __IOSurface { }*)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newCommandQueue;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const struct { bool x1; unsigned long long x2; struct { /* ? */ } *x3; }*)arg2 error:(id*)arg3;
- (id)newDefaultLibrary;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newEvent;
- (id)newHeapWithDescriptor:(id)arg1;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newLibraryWithData:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id*)arg2;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)newLibraryWithURL:(id)arg1 error:(id*)arg2;
- (id)newPipelineLibraryWithFilePath:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newSharedEvent;
- (id)newSharedEventWithHandle:(id)arg1;
- (id)newSharedEventWithMachPort:(unsigned int)arg1;
- (id)newTextureLayoutWithDescriptor:(id)arg1 isHeapOrBufferBacked:(bool)arg2;
- (id)newTextureWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 deallocator:(id /* block */)arg4;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface { }*)arg2 plane:(unsigned long long)arg3;
- (void)notifySamplerStateDeallocated:(id)arg1;
- (bool)overrideResourceTrackingEnabled:(bool)arg1;
- (bool)resourceTrackingChecksummingEnabled;
- (bool)resourceTrackingChecksummingForceAll;
- (bool)resourceTrackingEnabled;
- (void)resourceTrackingEndOfFrame;
- (bool)restoreResourceTrackingEnabled;
- (void)setFrameNum:(unsigned int)arg1;
- (void)validateMemorylessResource:(id)arg1;
- (void)validateNewBufferArgs:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)validateResourceOptions:(unsigned long long)arg1 isTexture:(bool)arg2 isIOSurface:(bool)arg3;
- (void)validateTraceBuffer:(unsigned long long)arg1 maxBufferCount:(unsigned long long)arg2 options:(unsigned long long)arg3;

@end
