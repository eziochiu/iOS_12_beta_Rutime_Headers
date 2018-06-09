/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugRenderPipelineState : MTLToolsRenderPipelineState {
    unsigned long long  _colorPixelFormat;
    unsigned long long  _depthPixelFormat;
    MTLRenderPipelineDescriptor * _descriptor;
    unsigned long long  _maxInstanceCount;
    unsigned long long  _maxPatchCount;
    unsigned long long  _maxVertexCount;
    unsigned long long  _rasterSampleCount;
    MTLRenderPipelineReflection * _reflection;
    unsigned long long  _stencilPixelFormat;
    bool  _threadgroupSizeMatchesTileSize;
    MTLTileRenderPipelineDescriptor * _tileDescriptor;
    unsigned long long  _vertexDescriptorLayoutCount;
    struct { 
        unsigned long long bufferIndex; 
        unsigned long long bufferStride; 
    }  _vertexDescriptorLayouts;
}

@property (nonatomic, readonly) MTLRenderPipelineDescriptor *descriptor;
@property (nonatomic, readonly) MTLRenderPipelineReflection *reflection;
@property (nonatomic, readonly) MTLTileRenderPipelineDescriptor *tileDescriptor;

- (id)_findMasterStruct:(id)arg1 includeImageBlockData:(bool)arg2;
- (void)_updateCachedPipelineState:(id)arg1;
- (void)_updateCachedTilePipelineState:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)getParameter:(id)arg1;
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 tileDescriptor:(id)arg4;
- (bool)isImageBlockLayoutInputCompatibleWithOutputOf:(id)arg1;
- (id)outputImageBlockData;
- (id)reflection;
- (id)tileDescriptor;

@end
