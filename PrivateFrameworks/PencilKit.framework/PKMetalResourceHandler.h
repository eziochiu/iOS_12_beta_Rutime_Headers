/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKMetalResourceHandler : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    PKMetalShader * _blitIntoPaintShader;
    PKMetalShader * _blitShader;
    <MTLBuffer> * _cachedQuadTexCoordBuffer;
    <MTLBuffer> * _cachedQuadVertexBuffer;
    PKMetalShader * _copyAccumulatorIntoPaintShader;
    <MTLLibrary> * _defaultLibrary;
    <MTLDevice> * _device;
    PKMetalShader * _eraseOriginalBackShader;
    PKMetalShader * _erasePaintAccumulatorShader;
    PKMetalShader * _erasePaintShader;
    PKMetalShader * _eraseShader;
    PKMetalResourceHandlerBuffer * _gpuResourceBuffer;
    NSMutableDictionary * _inkTextures;
    PKMetalShader * _linesShader;
    unsigned long long  _paintAndParticlePixelFormat;
    PKMetalShader * _paintShader;
    PKMetalShader * _paintShaderForAccumulator;
    <MTLComputePipelineState> * _paintShaderKernelPipelineState;
    PKMetalShader * _paperShader;
    <MTLTexture> * _paperTexture;
    struct CGSize { 
        double width; 
        double height; 
    }  _paperTextureSize;
    <MTLBuffer> * _particleIndexBuffer;
    PKMetalShader * _particleShader;
    PKMetalShader * _particleShaderForAccumulator;
    PKMetalShader * _particleShaderForAccumulatorWithAspectRatioSupport;
    <MTLComputePipelineState> * _particleShaderKernelPipelineState;
    <MTLComputePipelineState> * _particleShaderKernelPipelineStateWithVariableSpacing;
    PKMetalShader * _particleShaderWithAspectRatioSupport;
    unsigned long long  _pixelFormat;
    PKMetalResourceHandlerBuffer * _purgeableResourceBuffer;
    <MTLBuffer> * _randomNumberBuffer;
    PKMetalResourceHandlerBuffer * _resourceBuffer;
    MTLRenderPipelineDescriptor * _sharedPipelineDescriptor;
    unsigned long long  _signpost_id;
    PKMetalShader * _singleAttachmentBlitShader;
    MTLRenderPipelineDescriptor * _singleColorPipelineDescriptor;
    unsigned long long  _stencilPixelFormat;
    PKLRUCache * _strokeRenderCache;
    struct unordered_map<unsigned long long, PKMetalShader *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, PKMetalShader *> > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, PKMetalShader *> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::hash<unsigned long long>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::equal_to<unsigned long long>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _uberShaders;
}

@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long paintAndParticlePixelFormat;
@property (nonatomic, readonly) <MTLTexture> *paperTexture;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } paperTextureSize;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, readonly) MTLPipelineBufferDescriptor *sharedPipelineDescriptor;
@property (nonatomic, readonly) unsigned long long stencilPixelFormat;

+ (id)inkBundle;
+ (id)resourceHandlerWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 paintAndParticlePixelFormat:(unsigned long long)arg3 stencilPixelFormat:(unsigned long long)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_inkTextureNamed:(id)arg1;
- (void)_preloadInkTextures;
- (void)_preloadShaders;
- (void)_setupCachedQuad;
- (void)_setupPaperTexture;
- (void)_setupParticleIndexBuffer;
- (void)_setupRandomNumberBuffer;
- (id)_signpostLog;
- (id)blitIntoPaintShader;
- (id)blitShader;
- (id)blitShaderWithColorAttachmentIndex:(unsigned int)arg1 sharedPipelineDescriptor:(bool)arg2;
- (id)cachedQuadTexCoordBuffer;
- (id)cachedQuadVertexBuffer;
- (id)compositeEraseShaderWithMode:(long long)arg1 clipping:(bool)arg2 colorAttachmentIndex:(unsigned long long)arg3;
- (id)compositeMultiplyShaderWithMode:(long long)arg1 clipping:(bool)arg2 colorAttachmentIndex:(unsigned long long)arg3;
- (id)compositeOverShaderWithMode:(long long)arg1 clipping:(bool)arg2 colorAttachmentIndex:(unsigned long long)arg3;
- (id)compositePaperShaderWithMode:(long long)arg1 colorAttachmentIndex:(unsigned long long)arg2;
- (id)compositeSoftWhiteShaderWithMode:(long long)arg1 clipping:(bool)arg2 colorAttachmentIndex:(unsigned long long)arg3;
- (id)constantValuesForKey:(long long)arg1 clipping:(bool)arg2 colorAttachmentIndex:(unsigned int)arg3;
- (id)copyAccumulatorIntoPaintShader;
- (id)copyFramebufferShaderWithSourceColorAttachmentIndex:(unsigned int)arg1 destinationColorAttachmentIndex:(unsigned int)arg2;
- (id)device;
- (id)eraseOriginalBackShader;
- (id)erasePaintAccumulatorShader;
- (id)erasePaintShader;
- (id)eraseShader;
- (id)eraseShaderWithColorAttachmentIndex:(unsigned int)arg1;
- (id)eraseShaderWithColorAttachmentIndex:(unsigned int)arg1 sharedPipelineDescriptor:(bool)arg2;
- (id)init;
- (id)initWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 paintAndParticlePixelFormat:(unsigned long long)arg3 stencilPixelFormat:(unsigned long long)arg4;
- (id)inkTextureNamed:(id)arg1;
- (id)linesShader;
- (id)newBufferWithLength:(unsigned long long)arg1 bytes:(const void*)arg2 outOffset:(unsigned long long*)arg3;
- (id)newGPUBufferWithLength:(unsigned long long)arg1 outOffset:(unsigned long long*)arg2;
- (id)newLinesShader;
- (id)newPaperShader;
- (id)newPurgeableBufferWithLength:(unsigned long long)arg1 bytes:(const void*)arg2 outOffset:(unsigned long long*)arg3;
- (unsigned long long)paintAndParticlePixelFormat;
- (id)paintShader;
- (id)paintShaderForAccumulator;
- (id)paintShaderKernelPipelineState;
- (id)paintShaderWithColorAttachmentIndex:(unsigned int)arg1;
- (id)paperShader;
- (id)paperTexture;
- (struct CGSize { double x1; double x2; })paperTextureSize;
- (id)particleIndexBuffer;
- (id)particleShader;
- (id)particleShaderForAccumulator;
- (id)particleShaderForAccumulatorWithAspectRatioSupport;
- (id)particleShaderKernelPipelineState;
- (id)particleShaderKernelPipelineStateWithVariableSpacing;
- (id)particleShaderWithAspectRatioSupport;
- (id)particleShaderWithColorAttachmentIndex:(unsigned int)arg1 aspectRatioSupport:(bool)arg2;
- (unsigned long long)pixelFormat;
- (const float*)randomNumberArray;
- (id)randomNumberBuffer;
- (id)sharedPipelineDescriptor;
- (id)singleAttachmentBlitShader;
- (unsigned long long)stencilPixelFormat;
- (id)strokeRenderCache;
- (id)textureByUnpremultiplyingAlphaInTexture:(id)arg1;
- (id)uberShaderForKey:(struct { union { struct { unsigned int x_1_2_1 : 3; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 4; unsigned int x_1_2_4 : 8; } x_1_1_1; unsigned long long x_1_1_2; } x1; })arg1;

@end
