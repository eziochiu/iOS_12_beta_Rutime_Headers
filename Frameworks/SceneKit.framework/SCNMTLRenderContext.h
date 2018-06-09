/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLRenderContext : NSObject <SCNBufferStream> {
    struct __C3DEngineStats { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; double x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; unsigned int x56; double x57; unsigned int x58; double x59; unsigned int x60; double x61; double x62; double x63; double x64; double x65[60]; } * __engineStats;
    struct __C3DFXMetalProgram {} * _background2DProgram;
    struct __C3DFXMetalProgram {} * _backgroundCubeProgram;
    struct __C3DRasterizerStates { } * _backgroundRasterizerStates;
    struct __C3DFXMetalProgram {} * _backgroundVideoProgram;
    NSMutableArray * _bufferPool;
    struct Cache { 
        struct __C3DRasterizerStates {} *rasterizerStates; 
        struct __C3DMesh {} *mesh; 
        SCNMTLMesh *metalMesh; 
        struct __C3DMeshElement {} *meshElement; 
        SCNMTLMeshElement *metalMeshElement; 
        struct __C3DFXProgram {} *program; 
        struct __C3DMaterial {} *material; 
        struct __C3DGeometry {} *geometry; 
        SCNMTLShadable *metalShadable; 
        struct __C3DEffectCommonProfile {} *commonProfile; 
        struct __C3DBlendStates {} *blendStates; 
        unsigned char colorBufferWriteMask; 
        unsigned char topologyClass; 
        struct __C3DNode {} *node; 
        unsigned long long vertexDescriptorHash; 
        unsigned char tessellationPipelineStateHash; 
        SCNMTLRenderPipeline *renderPipeline; 
    }  _cache;
    <MTLCommandBuffer> * _clientCommandBuffer;
    <MTLRenderCommandEncoder> * _clientRenderCommandEncoder;
    MTLRenderPassDescriptor * _clientRenderPassDescriptor;
    <MTLCommandQueue> * _commandQueue;
    struct { 
        bool collectEnabled; 
        NSMutableDictionary *errors; 
    }  _compilationIssues;
    struct { 
        unsigned long long pixelFormat; 
        unsigned long long depthFormat; 
        unsigned long long stencilFormat; 
        unsigned long long sampleCount; 
        SCNMTLRenderPipeline *pipeline; 
    }  _compositeRendering;
    struct SCNMTLBufferPool {} * _constantBufferPools;
    double  _contentScaleFactor;
    struct { 
        unsigned int modelTransformBindingCount; 
        unsigned int modelViewTransformBindingCount; 
        unsigned int normalTransformBindingCount; 
        unsigned int nodeOpacityBindingCount; 
    }  _counters;
    <MTLCommandBuffer> * _currentCommandBuffer;
    long long  _currentFrameIndex;
    struct __C3DFXPass { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFString {} *x2; int x3; int x4; bool x5; struct __C3DFXTechnique {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; struct __CFString {} *x9; struct __CFString {} *x10; bool x11; struct __C3DFXProgram {} *x12; struct __C3DMaterial {} *x13; struct __C3DBlendStates {} *x14; struct __C3DRasterizerStates {} *x15; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_16_1_1; } x16; unsigned char x17; unsigned int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; } * _currentPass;
    MTLRenderPassDescriptor * _currentRenderPassDescriptor;
    struct { 
        BOOL vertexIndex; 
        BOOL fragmentIndex; 
    }  _currentStreamBufferIndices;
    struct { 
        unsigned long long pixelFormat; 
        unsigned long long sampleCount; 
        SCNMTLRenderPipeline *displayCubemapPipeline; 
        SCNMTLRenderPipeline *displayTexture2DPipeline; 
        SCNMTLRenderPipeline *displayDepth2DPipeline; 
        SCNMTLRenderPipeline *displayDepthCubePipeline; 
    }  _debug;
    unsigned long long  _debugOptions;
    <MTLDepthStencilState> * _defaultDepthStencilState;
    <MTLSamplerState> * _defaultSamplerState;
    struct { 
        struct __C3DFXPass {} *debugLightMeshPass[6]; 
        struct __C3DFXPass {} *lightPasses[6]; 
        struct __C3DMesh {} *lightMeshes[6]; 
        bool resourcesAreReady; 
    }  _deferredRendering;
    <MTLDevice> * _device;
    unsigned int  _disableLinearRendering;
    SCNMTLRenderPipeline * _downSamplePipeline;
    <CAMetalDrawable> * _drawable;
    struct __C3DEngineContext { } * _engineContext;
    unsigned int  _features;
    struct SCNMTLBufferPool { id x1; id x2; struct vector<SCNMTLBufferPool::Buffer, std::__1::allocator<SCNMTLBufferPool::Buffer> > { struct Buffer {} *x_3_1_1; struct Buffer {} *x_3_1_2; struct __compressed_pair<SCNMTLBufferPool::Buffer *, std::__1::allocator<SCNMTLBufferPool::Buffer> > { struct Buffer {} *x_3_2_1; } x_3_1_3; } x3; unsigned int x4; unsigned int x5; id x6; unsigned long long x7; unsigned long long x8; } * _frameConstantBufferPool;
    struct SCNMTLTexturePool { id x1; struct vector<SCNMTLTexturePool::CachedTexture, std::__1::allocator<SCNMTLTexturePool::CachedTexture> > { struct CachedTexture {} *x_2_1_1; struct CachedTexture {} *x_2_1_2; struct __compressed_pair<SCNMTLTexturePool::CachedTexture *, std::__1::allocator<SCNMTLTexturePool::CachedTexture> > { struct CachedTexture {} *x_3_2_1; } x_2_1_3; } x2; unsigned int x3; } * _frameTexturePool;
    struct SCNSceneBuffer { 
        struct float4x4 { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } viewTransform; 
        struct float4x4 { 
            void*columns[4]; 
        } projectionTransform; 
        struct float4x4 { 
            void*columns[4]; 
        } viewToCubeTransform; 
        void*ambientLightingColor; 
    }  _frameUniforms;
    struct SCNMTLBufferPool { id x1; id x2; struct vector<SCNMTLBufferPool::Buffer, std::__1::allocator<SCNMTLBufferPool::Buffer> > { struct Buffer {} *x_3_1_1; struct Buffer {} *x_3_1_2; struct __compressed_pair<SCNMTLBufferPool::Buffer *, std::__1::allocator<SCNMTLBufferPool::Buffer> > { struct Buffer {} *x_3_2_1; } x_3_1_3; } x3; unsigned int x4; unsigned int x5; id x6; unsigned long long x7; unsigned long long x8; } * _frameVolatileBufferPool;
    NSMutableArray * _freeVolatileMeshElements;
    NSObject<OS_dispatch_semaphore> * _inFlightSemaphore;
    double  _initialTime;
    unsigned int  _isOpaque;
    bool  _isValidationEnabled;
    CAMetalLayer * _layerTarget;
    struct { 
        struct { 
            unsigned char lights[8]; 
        } currentLightingSet; 
        <MTLTexture> *currentShadowMaps[8]; 
        <MTLTexture> *currentGoboMaps[8]; 
        struct unordered_map<unsigned long long, SCNMTLLightSetData, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCNMTLLightSetData> > > { 
            struct __hash_table<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData> > > { 
                struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > > { 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > > { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> {} **__value_; 
                        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > { 
                            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *> > { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> {} *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true> > { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true> > { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } frameLightingSetDatas; 
        unsigned long long currentLightingHashKey; 
        struct { 
            long long count; 
            struct __C3DLight {} *lights[8]; 
            struct __C3DLightRuntimeData {} *lightsData[8]; 
        } currentLightingDesc; 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } currentLightingSpace; 
        bool needLightingSpaceTransformation; 
        struct SCNMTLClusterSystem { 
            void*clustersCount; 
        } clusterSystem; 
    }  _lighting;
    struct { 
        <MTLBuffer> *buffer; 
        unsigned long long offset; 
        unsigned long long size; 
        <MTLTexture> *shadowMaps[256]; 
        <MTLTexture> *textureMaps[256]; 
        <MTLSamplerState> *samplerStates[256]; 
    }  _lightsData;
    bool  _needSuperSampling;
    struct { 
        struct float4x4 { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } modelTransform; 
        struct float4x4 { 
            void*columns[4]; 
        } normalTransform; 
        struct float4x4 { 
            void*columns[4]; 
        } modelViewProjectionTransform; 
        struct float2x3 { 
            void*columns[2]; 
        } worldBoundingBox; 
    }  _nodeUniforms;
    MTLRenderPassDescriptor * _originalRenderPassDescriptor;
    struct atomic<int> { 
        int __a_; 
    }  _pendingGPUFrameCount;
    struct { 
        struct __C3DFXPassInstance {} *passInstance; 
        struct __C3DLightingSystem {} *lightingSystem; 
        struct __C3DDynamicBatchingSystem {} *dynamicBatchingSystem; 
        struct __C3DFXPass {} *pass; 
        void *renderGraphPass; 
        bool passRequiresLighting; 
        bool passRequiresLastFrameTransform; 
        struct __C3DTransformTree {} *transformTree; 
    }  _processingContext;
    int  _profile;
    struct SCNMTLRenderCommandEncoder { bool x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned int x7; bool x8; bool x9; struct { id x_10_1_1; } x10[31]; /* Warning: unhandled array encoding: '[31@][16@][31{?=@Q}][31@][16@]@@@^{SCNMTLBufferPool}II}' */ id x11[31]; struct { id x_12_1_1; } x12[31]; id x13[31]; id x14; id x15; struct SCNMTLBufferPool {} x16; unsigned int x17; unsigned int x18; } * _renderEncoder;
    struct { 
        unsigned long long passHash; 
        struct __C3DMaterial {} *material; 
    }  _renderGraph;
    bool  _renderGraphEnabled;
    struct { 
        unsigned char renderSliceIndex; 
        unsigned char eyeCount; 
        unsigned char renderMode; 
        bool isFinalTechnique; 
    }  _renderPassParameters;
    NSMutableArray * _renderPasses;
    void _renderSize;
    SCNRenderTargetRegistry * _renderTargetRegistry;
    struct { 
        <MTLTexture> *currentColors[4]; 
        <MTLTexture> *currentDepth; 
        <MTLTexture> *currentStencil; 
        <MTLTexture> *mainColors[4]; 
        <MTLTexture> *mainColorsArray[4]; 
        <MTLTexture> *mainDepth; 
        <MTLTexture> *mainDepthArray; 
        <MTLTexture> *outputColors[4]; 
        <MTLTexture> *outputDepth; 
    }  _renderTargets;
    struct C3DColor4 { 
        union { 
            float rgba[4]; 
            struct { 
                float r; 
                float g; 
                float b; 
                float a; 
            } ; 
            /* Warning: Unrecognized filer type: ')' using 'void*' */ void*simd; 
        } ; 
    }  _rendererPremultipliedBackgroundColor;
    struct SCNMTLBlitCommandEncoder { 
        <MTLBlitCommandEncoder> *_encoder; 
        <MTLCommandBuffer> *_commandBuffer; 
    }  _resourceBlitEncoder;
    <MTLCommandBuffer> * _resourceCommandBuffer;
    struct SCNMTLComputeCommandEncoder { 
        <MTLBuffer> *_buffers[31]; 
        unsigned long long _offsets[31]; 
        <MTLTexture> *_textures[31]; 
        <MTLSamplerState> *_samplers[16]; 
        unsigned int _texturesToBind; 
        <MTLComputePipelineState> *_computePipelineState; 
        <MTLComputeCommandEncoder> *_encoder; 
        <MTLCommandBuffer> *_commandBuffer; 
        struct SCNMTLBufferPool {} *_bufferPool; 
        unsigned int _features; 
        unsigned int _buffersToBind; 
    }  _resourceComputeEncoder;
    NSObject<OS_dispatch_group> * _resourceGroup;
    SCNMTLResourceManager * _resourceManager;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    unsigned int  _reverseZ;
    long long  _sampleCount;
    struct { 
        <MTLBuffer> *buffer; 
        unsigned long long offset; 
    }  _sceneUniforms;
    struct SCNMatrix4 { 
        float m11; 
        float m12; 
        float m13; 
        float m14; 
        float m21; 
        float m22; 
        float m23; 
        float m24; 
        float m31; 
        float m32; 
        float m33; 
        float m34; 
        float m41; 
        float m42; 
        float m43; 
        float m44; 
    }  _screenTransform;
    unsigned int  _seed;
    <MTLBuffer> * _shadowKernelBuffer;
    bool  _showsAuthoringEnvironment;
    struct { 
        <MTLTexture> *backgroundTexture; 
        <MTLTexture> *overlayTexture; 
        <MTLTexture> *stencilTexture; 
    }  _skCompositing;
    double  _superSamplingFactor;
    <MTLTexture> * _textureTarget;
    unsigned int  _useFunctionConstants;
    NSMutableArray * _usedVolatileMeshElements;
    struct SCNMTLBufferPool {} * _volatileBufferPools;
    NSMutableArray * _volatileMeshes;
    unsigned int  _wantsWideGamut;
    bool  enablesDeferredShading;
}

@property (nonatomic, retain) <MTLCommandBuffer> *clientCommandBuffer;
@property (nonatomic, retain) <MTLRenderCommandEncoder> *clientRenderCommandEncoder;
@property (nonatomic, retain) MTLRenderPassDescriptor *clientRenderPassDescriptor;
@property (nonatomic) bool collectsCompilationErrors;
@property (nonatomic, retain) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) NSMutableDictionary *compilationErrors;
@property (nonatomic) double contentScaleFactor;
@property (nonatomic, readonly) <MTLCommandBuffer> *currentCommandBuffer;
@property (nonatomic, readonly) long long currentFrameIndex;
@property (nonatomic, readonly) <MTLRenderCommandEncoder> *currentRenderCommandEncoder;
@property (nonatomic, readonly) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long debugOptions;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic) bool disableLinearRendering;
@property (nonatomic) bool enablesDeferredShading;
@property (nonatomic, readonly) struct __C3DEngineContext { }*engineContext;
@property (nonatomic, readonly) unsigned int features;
@property (nonatomic, readonly) void*frameConstantBufferPool;
@property (nonatomic, readonly) void*frameTexturePool;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isOpaque;
@property (nonatomic, readonly) CAMetalLayer *layerTarget;
@property (nonatomic, readonly) long long pendingGPUFrameCount;
@property (nonatomic, readonly) int profile;
@property (nonatomic, readonly) void*renderEncoder;
@property (getter=isRenderGraphEnabled, nonatomic) bool renderGraphEnabled;
@property (nonatomic, readonly) SCNRenderTargetRegistry *renderTargetRegistry;
@property (nonatomic, readonly) struct SCNMTLBlitCommandEncoder { id x1; }*resourceBlitEncoder;
@property (nonatomic, readonly) <MTLCommandBuffer> *resourceCommandBuffer;
@property (nonatomic, readonly) struct SCNMTLComputeCommandEncoder { /* Warning: unhandled array encoding: '[31@][31Q][31@][16@]I@@@^{SCNMTLBufferPool}II}' */ id x1[31]; id x2[31]; unsigned int x3; id x4; id x5; struct SCNMTLBufferPool {} x6; unsigned int x7; unsigned int x8; }*resourceComputeEncoder;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *resourceGroup;
@property (nonatomic, readonly) SCNMTLResourceManager *resourceManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resourceQueue;
@property (nonatomic, readonly) bool reverseZ;
@property (nonatomic) long long sampleCount;
@property (nonatomic) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } screenTransform;
@property (nonatomic) bool showsAuthoringEnvironment;
@property (nonatomic) double superSamplingFactor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MTLTexture> *textureTarget;
@property (nonatomic) bool wantsWideGamut;

+ (void)registerBindings;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)__C3DFXContextDidApplyPass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFString {} *x2; int x3; int x4; bool x5; struct __C3DFXTechnique {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; struct __CFString {} *x9; struct __CFString {} *x10; bool x11; struct __C3DFXProgram {} *x12; struct __C3DMaterial {} *x13; struct __C3DBlendStates {} *x14; struct __C3DRasterizerStates {} *x15; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_16_1_1; } x16; unsigned char x17; unsigned int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; }*)arg1;
- (void)_clearRenderCaches;
- (void)_clearRenderCommandEncoderCache;
- (void)_clearUnusedBindingPoints;
- (struct __C3DFXPass { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFString {} *x2; int x3; int x4; bool x5; struct __C3DFXTechnique {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; struct __CFString {} *x9; struct __CFString {} *x10; bool x11; struct __C3DFXProgram {} *x12; struct __C3DMaterial {} *x13; struct __C3DBlendStates {} *x14; struct __C3DRasterizerStates {} *x15; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_16_1_1; } x16; unsigned char x17; unsigned int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; }*)_createPassWithVertex:(id)arg1 fragment:(id)arg2;
- (void)_createResourceCommandBufferIfNeeded;
- (void)_drawFullScreenTexture:(id)arg1 over:(bool)arg2;
- (void)_drawMeshElement:(id)arg1 instanceCount:(unsigned long long)arg2;
- (void)_drawPBRTextures;
- (void)_drawPatchForMeshElement:(id)arg1 instanceCount:(unsigned long long)arg2;
- (void)_drawShadowMaps;
- (id)_finalRenderTexture;
- (void)_logLightingInformation;
- (id)_newMTLBufferFromPoolWithLength:(unsigned long long)arg1;
- (void)_prepareMaterialTextures:(struct __C3DMaterial { }*)arg1;
- (void)_recycleMTLBufferToPool:(id)arg1;
- (void)_reduceStatsOfConstantBuffer:(id)arg1;
- (float)_renderBackgroundZFarForProjection:(const union C3DMatrix4x4 { float x1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x2[4]; void*x3; }*)arg1 defaultZFar:(float)arg2;
- (id)_renderCommandEncoderWithDescriptor:(id)arg1;
- (id)_renderTargetWithDescription:(void *)arg1 size:(void *)arg2 name:(void *)arg3 useCount:(void *)arg4; // needs 4 arg types, found 3: struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned char x10[4]; }, id, long long
- (void)_setMeshBuffers:(id)arg1;
- (void)_setReflectionProbeArrayTexture:(id)arg1;
- (void)_setSceneBufferAtVertexIndex:(long long)arg1 fragmentIndex:(long long)arg2;
- (bool)_setupDescriptor:(id)arg1 forPass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFString {} *x2; int x3; int x4; bool x5; struct __C3DFXTechnique {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; struct __CFString {} *x9; struct __CFString {} *x10; bool x11; struct __C3DFXProgram {} *x12; struct __C3DMaterial {} *x13; struct __C3DBlendStates {} *x14; struct __C3DRasterizerStates {} *x15; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_16_1_1; } x16; unsigned char x17; unsigned int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; }*)arg2 parameters:(struct { unsigned char x1; unsigned char x2; unsigned char x3; bool x4; }*)arg3 rendersIntoFinalDrawable:(bool*)arg4;
- (void)_updateProjectionForSkyboxRendering:(union C3DMatrix4x4 { float x1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x2[4]; void*x3; }*)arg1;
- (void)addRenderPass:(id)arg1;
- (void)beginDeferredLighting;
- (void)beginFrame:(id)arg1;
- (bool)beginRenderPass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFString {} *x2; int x3; int x4; bool x5; struct __C3DFXTechnique {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; struct __CFString {} *x9; struct __CFString {} *x10; bool x11; struct __C3DFXProgram {} *x12; struct __C3DMaterial {} *x13; struct __C3DBlendStates {} *x14; struct __C3DRasterizerStates {} *x15; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_16_1_1; } x16; unsigned char x17; unsigned int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; }*)arg1 parameters:(struct { unsigned char x1; unsigned char x2; unsigned char x3; bool x4; })arg2;
- (void)clearRenderPasses;
- (id)clientCommandBuffer;
- (id)clientRenderCommandEncoder;
- (id)clientRenderPassDescriptor;
- (bool)collectsCompilationErrors;
- (id)commandQueue;
- (id)compilationErrors;
- (double)contentScaleFactor;
- (struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; unsigned int x2; unsigned int x3; struct __C3DMeshElement {} *x4; unsigned char x5; unsigned char x6; unsigned char x7; struct { BOOL x_8_1_1; struct __CFData {} *x_8_1_2; unsigned int x_8_1_3; unsigned int *x_8_1_4; struct { long long x_5_2_1; long long x_5_2_2; } x_8_1_5; unsigned char x_8_1_6; bool x_8_1_7; } x8; float x9; float x10; float x11; void *x12; struct __C3DMeshSource {} *x13; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x14[2]; }*)createVolatileMeshElementOfType:(BOOL)arg1 primitiveCount:(long long)arg2 bytesPerIndex:(long long)arg3;
- (unsigned long long)cubeArrayTypeIfSupported;
- (id)currentCommandBuffer;
- (long long)currentFrameIndex;
- (id)currentRenderCommandEncoder;
- (id)currentRenderPassDescriptor;
- (void)dealloc;
- (unsigned long long)debugOptions;
- (id)device;
- (bool)disableLinearRendering;
- (void)drawFullScreenQuadForPass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFString {} *x2; int x3; int x4; bool x5; struct __C3DFXTechnique {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; struct __CFString {} *x9; struct __CFString {} *x10; bool x11; struct __C3DFXProgram {} *x12; struct __C3DMaterial {} *x13; struct __C3DBlendStates {} *x14; struct __C3DRasterizerStates {} *x15; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_16_1_1; } x16; unsigned char x17; unsigned int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; }*)arg1;
- (void)drawRenderElement:(struct __C3DRendererElement { unsigned int x1; struct __C3DNode {} *x2; struct __C3DGeometry {} *x3; struct __C3DMesh {} *x4; void *x5; struct __C3DMaterial {} *x6; struct __C3DFXTechnique {} *x7; struct { unsigned char x_8_1_1[8]; } x8; int x9; unsigned int x10; unsigned int x11 : 8; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 3; unsigned int x19 : 1; unsigned int x20 : 3; }*)arg1 withPass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFString {} *x2; int x3; int x4; bool x5; struct __C3DFXTechnique {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; struct __CFString {} *x9; struct __CFString {} *x10; bool x11; struct __C3DFXProgram {} *x12; struct __C3DMaterial {} *x13; struct __C3DBlendStates {} *x14; struct __C3DRasterizerStates {} *x15; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_16_1_1; } x16; unsigned char x17; unsigned int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; }*)arg2;
- (void)drawWireframeOverlayForElements:(struct { unsigned short x1; unsigned short x2; }*)arg1 range:(struct { long long x1; long long x2; })arg2 store:(struct __C3DRendererElementStore { }*)arg3 passInstance:(struct __C3DFXPassInstance { struct __C3DFXPass {} *x1; long long x2; struct __C3DFXPassInstance {} *x3; unsigned char x4; bool x5; unsigned char x6; struct __C3DArray {} *x7[6]; struct __C3DCullingContext { struct __C3DEnginePipeline {} *x_8_1_1; struct { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; } x_2_2_1[6]; } x_8_1_2[6]; union C3DMatrix4x4 { float x_3_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_2[4]; void*x_3_2_3; } x_8_1_3[6]; union C3DMatrix4x4 { float x_4_2_1[16]; void*x_4_2_2[4]; void*x_4_2_3; } x_8_1_4[6]; union C3DMatrix4x4 { float x_5_2_1[16]; void*x_5_2_2[4]; void*x_5_2_3; } x_8_1_5[6]; union C3DMatrix4x4 { float x_6_2_1[16]; void*x_6_2_2[4]; void*x_6_2_3; } x_8_1_6[6]; struct { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; } x_7_2_1[6]; } x_8_1_7[6]; union C3DMatrix4x4 { float x_8_2_1[16]; void*x_8_2_2[4]; void*x_8_2_3; } x_8_1_8[6]; union C3DMatrix4x4 { float x_9_2_1[16]; void*x_9_2_2[4]; void*x_9_2_3; } x_8_1_9[6]; union C3DMatrix4x4 { float x_10_2_1[16]; void*x_10_2_2[4]; void*x_10_2_3; } x_8_1_10[6]; union C3DMatrix4x4 { float x_11_2_1[16]; void*x_11_2_2[4]; void*x_11_2_3; } x_8_1_11[6]; } x8; }*)arg4;
- (bool)enablesDeferredShading;
- (void)endDeferredLighting;
- (void)endFrameWaitingUntilCompleted:(bool)arg1;
- (void)endRenderCommandEncoding;
- (void)endRenderPass;
- (struct __C3DEngineContext { }*)engineContext;
- (void)executeRenderPasses;
- (unsigned int)features;
- (void*)frameConstantBufferPool;
- (void*)frameTexturePool;
- (unsigned long long)getCurrentPassHash;
- (struct __C3DMaterial { }*)getCurrentPassMaterial;
- (id)initWithDevice:(id)arg1 engineContext:(struct __C3DEngineContext { }*)arg2;
- (id)irradianceTextureForEffectSlot:(struct __C3DEffectSlot { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; void *x3; union { struct __C3DImage {} *x_4_1_1; void *x_4_1_2; struct __C3DImageProxy {} *x_4_1_3; struct __C3DTexture {} *x_4_1_4; } x4; unsigned int x5 : 8; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 4; BOOL x10; struct __C3DTextureSampler {} *x11; union { unsigned char x_12_1_1; /* Warning: Unrecognized filer type: '3' using 'void*' */ void*x_12_1_2; long doublex_12_1_3; void*x_12_1_4; void*x_12_1_5; void*x_12_1_6; const int x_12_1_7; void*x_12_1_8; void*x_12_1_9; void*x_12_1_10; void*x_12_1_11; } *x12; float x13; int x14; void *x15; }*)arg1;
- (bool)isOpaque;
- (bool)isRenderGraphEnabled;
- (id)layerTarget;
- (id)mainColorTextureForChannel:(unsigned long long)arg1;
- (id)mainDepthTexture;
- (bool)mapVolatileMesh:(struct __C3DMesh { }*)arg1 verticesCount:(long long)arg2;
- (void)newBeginRenderPass:(id)arg1 renderEncoder:(void*)arg2;
- (void)newEndRenderPass;
- (id)newRenderTargetWithDescription:(void *)arg1 size:(void *)arg2 arrayLength:(void *)arg3; // needs 3 arg types, found 2: struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned char x10[4]; }*, unsigned long long
- (long long)pendingGPUFrameCount;
- (void)popDebugGroup;
- (void)processRendererElements:(struct { unsigned short x1; unsigned short x2; }*)arg1 count:(unsigned int)arg2 engineIterationContext:(struct { struct __C3DEnginePipeline {} *x1; struct __C3DEngineContext {} *x2; struct __C3DFXPassInstance {} *x3; void *x4; struct __C3DNode {} *x5; bool x6; bool x7; bool x8; }*)arg3;
- (int)profile;
- (void)pushDebugGroup:(id)arg1;
- (id)radianceTextureForEffectSlot:(struct __C3DEffectSlot { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; void *x3; union { struct __C3DImage {} *x_4_1_1; void *x_4_1_2; struct __C3DImageProxy {} *x_4_1_3; struct __C3DTexture {} *x_4_1_4; } x4; unsigned int x5 : 8; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 4; BOOL x10; struct __C3DTextureSampler {} *x11; union { unsigned char x_12_1_1; /* Warning: Unrecognized filer type: '3' using 'void*' */ void*x_12_1_2; long doublex_12_1_3; void*x_12_1_4; void*x_12_1_5; void*x_12_1_6; const int x_12_1_7; void*x_12_1_8; void*x_12_1_9; void*x_12_1_10; void*x_12_1_11; } *x12; float x13; int x14; void *x15; }*)arg1;
- (void)renderBackground:(struct __C3DEffectSlot { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; void *x3; union { struct __C3DImage {} *x_4_1_1; void *x_4_1_2; struct __C3DImageProxy {} *x_4_1_3; struct __C3DTexture {} *x_4_1_4; } x4; unsigned int x5 : 8; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 4; BOOL x10; struct __C3DTextureSampler {} *x11; union { unsigned char x_12_1_1; /* Warning: Unrecognized filer type: '3' using 'void*' */ void*x_12_1_2; long doublex_12_1_3; void*x_12_1_4; void*x_12_1_5; void*x_12_1_6; const int x_12_1_7; void*x_12_1_8; void*x_12_1_9; void*x_12_1_10; void*x_12_1_11; } *x12; float x13; int x14; void *x15; }*)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 passInstance:(struct __C3DFXPassInstance { struct __C3DFXPass {} *x1; long long x2; struct __C3DFXPassInstance {} *x3; unsigned char x4; bool x5; unsigned char x6; struct __C3DArray {} *x7[6]; struct __C3DCullingContext { struct __C3DEnginePipeline {} *x_8_1_1; struct { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; } x_2_2_1[6]; } x_8_1_2[6]; union C3DMatrix4x4 { float x_3_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_2[4]; void*x_3_2_3; } x_8_1_3[6]; union C3DMatrix4x4 { float x_4_2_1[16]; void*x_4_2_2[4]; void*x_4_2_3; } x_8_1_4[6]; union C3DMatrix4x4 { float x_5_2_1[16]; void*x_5_2_2[4]; void*x_5_2_3; } x_8_1_5[6]; union C3DMatrix4x4 { float x_6_2_1[16]; void*x_6_2_2[4]; void*x_6_2_3; } x_8_1_6[6]; struct { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; } x_7_2_1[6]; } x_8_1_7[6]; union C3DMatrix4x4 { float x_8_2_1[16]; void*x_8_2_2[4]; void*x_8_2_3; } x_8_1_8[6]; union C3DMatrix4x4 { float x_9_2_1[16]; void*x_9_2_2[4]; void*x_9_2_3; } x_8_1_9[6]; union C3DMatrix4x4 { float x_10_2_1[16]; void*x_10_2_2[4]; void*x_10_2_3; } x_8_1_10[6]; union C3DMatrix4x4 { float x_11_2_1[16]; void*x_11_2_2[4]; void*x_11_2_3; } x_8_1_11[6]; } x8; }*)arg3;
- (void*)renderEncoder;
- (void)renderLight:(struct __C3DNode { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DNode {} *x2; struct __C3DNode {} *x3; struct __C3DNode {} *x4; int x5; struct { union C3DMatrix4x4 { float x_1_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_2_2[4]; void*x_1_2_3; } x_6_1_1; union { } x_6_1_2; } x6; union { unsigned char x_7_1_1; void*x_7_1_2; long doublex_7_1_3; void*x_7_1_4; void*x_7_1_5; void*x_7_1_6; const int x_7_1_7; void*x_7_1_8; void*x_7_1_9; void*x_7_1_10; void*x_7_1_11; } *x7; bool x8; float x9; unsigned long long x10; int x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; }*)arg1 lightType:(int)arg2 lightData:(struct __C3DLightRuntimeData { unsigned int x1; float x2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_1_1[4]; void *x_3_1_2; struct __C3DTextureSampler {} *x_3_1_3; void *x_3_1_4; struct __C3DTextureSampler {} *x_3_1_5; } x3[4]; }*)arg3;
- (void)renderMesh:(struct __C3DMesh { }*)arg1 meshElement:(struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; unsigned int x2; unsigned int x3; struct __C3DMeshElement {} *x4; unsigned char x5; unsigned char x6; unsigned char x7; struct { BOOL x_8_1_1; struct __CFData {} *x_8_1_2; unsigned int x_8_1_3; unsigned int *x_8_1_4; struct { long long x_5_2_1; long long x_5_2_2; } x_8_1_5; unsigned char x_8_1_6; bool x_8_1_7; } x8; float x9; float x10; float x11; void *x12; struct __C3DMeshSource {} *x13; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x14[2]; }*)arg2 withProgram:(struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; int x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; }*)arg3 engineContext:(struct __C3DEngineContext { }*)arg4 transform:(union C3DMatrix4x4 { float x1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x2[4]; void*x3; })arg5 color:(const struct C3DColor4 { union { float x_1_1_1[4]; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; } x1; }*)arg6 rasterizerStates:(struct __C3DRasterizerStates { }*)arg7 blendState:(struct __C3DBlendStates { }*)arg8 texture:(struct __C3DImage { }*)arg9 depthBias:(bool)arg10;
- (void)renderSKSceneWithRenderer:(id)arg1 overlay:(bool)arg2 atTime:(double)arg3;
- (id)renderTargetForSemantic:(int)arg1;
- (id)renderTargetRegistry;
- (void)renderVideoBackground:(struct __C3DImageProxy { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); } x2; void *x3; unsigned char x4; }*)arg1 engineContext:(struct __C3DEngineContext { }*)arg2;
- (void)resetVolatileMeshElements;
- (void)resetVolatileMeshes;
- (struct SCNMTLBlitCommandEncoder { id x1; }*)resourceBlitEncoder;
- (id)resourceCommandBuffer;
- (struct SCNMTLComputeCommandEncoder { /* Warning: unhandled array encoding: '[31@][31Q][31@][16@]I@@@^{SCNMTLBufferPool}II}' */ id x1[31]; id x2[31]; unsigned int x3; id x4; id x5; struct SCNMTLBufferPool {} x6; unsigned int x7; unsigned int x8; }*)resourceComputeEncoder;
- (id)resourceGroup;
- (id)resourceManager;
- (id)resourceQueue;
- (bool)reverseZ;
- (long long)sampleCount;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })screenTransform;
- (void)setClientCommandBuffer:(id)arg1;
- (void)setClientRenderCommandEncoder:(id)arg1;
- (void)setClientRenderPassDescriptor:(id)arg1;
- (void)setCollectsCompilationErrors:(bool)arg1;
- (void)setCommandQueue:(id)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setCurrentPassHash:(unsigned long long)arg1;
- (void)setCurrentPassMaterial:(struct __C3DMaterial { }*)arg1;
- (void)setDebugOptions:(unsigned long long)arg1;
- (void)setDisableLinearRendering:(bool)arg1;
- (void)setEnablesDeferredShading:(bool)arg1;
- (void)setIsOpaque:(bool)arg1;
- (void)setRasterizerStates:(struct __C3DRasterizerStates { }*)arg1;
- (void)setRenderGraphEnabled:(bool)arg1;
- (void)setRenderPassParameters:(struct { unsigned char x1; unsigned char x2; unsigned char x3; bool x4; })arg1;
- (void)setRendererPremultipliedBackgroundColor:(struct C3DColor4 { union { float x_1_1_1[4]; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; } x1; })arg1;
- (void)setSampleCount:(long long)arg1;
- (void)setScreenTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setShowsAuthoringEnvironment:(bool)arg1;
- (void)setSuperSamplingFactor:(double)arg1;
- (void)setWantsWideGamut:(bool)arg1;
- (bool)showsAuthoringEnvironment;
- (void)startProcessingRendererElementsWithEngineIterationContext:(struct { struct __C3DEnginePipeline {} *x1; struct __C3DEngineContext {} *x2; struct __C3DFXPassInstance {} *x3; void *x4; struct __C3DNode {} *x5; bool x6; bool x7; bool x8; }*)arg1;
- (struct __C3DEngineStats { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; double x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; unsigned int x56; double x57; unsigned int x58; double x59; unsigned int x60; double x61; double x62; double x63; double x64; double x65[60]; }*)stats;
- (void)stopProcessingRendererElements:(bool)arg1;
- (void)superSampling:(id)arg1 into:(id)arg2;
- (double)superSamplingFactor;
- (bool)supportsMTLFeatureSet:(unsigned long long)arg1;
- (id)textureForEffectSlot:(struct __C3DEffectSlot { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; void *x3; union { struct __C3DImage {} *x_4_1_1; void *x_4_1_2; struct __C3DImageProxy {} *x_4_1_3; struct __C3DTexture {} *x_4_1_4; } x4; unsigned int x5 : 8; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 4; BOOL x10; struct __C3DTextureSampler {} *x11; union { unsigned char x_12_1_1; /* Warning: Unrecognized filer type: '3' using 'void*' */ void*x_12_1_2; long doublex_12_1_3; void*x_12_1_4; void*x_12_1_5; void*x_12_1_6; const int x_12_1_7; void*x_12_1_8; void*x_12_1_9; void*x_12_1_10; void*x_12_1_11; } *x12; float x13; int x14; void *x15; }*)arg1;
- (id)textureTarget;
- (void)unmapVolatileMesh:(struct __C3DMesh { }*)arg1 modifiedVerticesCount:(long long)arg2;
- (void)unmapVolatileMeshElement:(struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; unsigned int x2; unsigned int x3; struct __C3DMeshElement {} *x4; unsigned char x5; unsigned char x6; unsigned char x7; struct { BOOL x_8_1_1; struct __CFData {} *x_8_1_2; unsigned int x_8_1_3; unsigned int *x_8_1_4; struct { long long x_5_2_1; long long x_5_2_2; } x_8_1_5; unsigned char x_8_1_6; bool x_8_1_7; } x8; float x9; float x10; float x11; void *x12; struct __C3DMeshSource {} *x13; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x14[2]; }*)arg1;
- (bool)wantsWideGamut;
- (void)writeBytes:(void*)arg1 length:(unsigned long long)arg2;

@end
