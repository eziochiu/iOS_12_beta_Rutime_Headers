/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection {
    NSArray * _constantSamplerDescriptors;
    NSArray * _constantSamplerUniqueIdentifiers;
    struct { 
        unsigned int fragmentUsesDiscard : 1; 
        unsigned int fragmentWritesSampleMask : 1; 
        unsigned int fragmentWritesDepth : 1; 
        unsigned int vertexRegisterSpill : 1; 
        unsigned int fragmentRegisterSpill : 1; 
        unsigned int fragmentReadsFramebufferValues : 1; 
        unsigned int fragmentPunchThrough : 1; 
        unsigned int vertexWritesPointSize : 1; 
        unsigned int private2 : 1; 
        unsigned int reserved : 55; 
    }  _flags;
    NSArray * _fragmentArguments;
    MTLArgument * _imageBlockDataReturn;
    NSArray * _inferredInputs;
    NSDictionary * _performanceStatistics;
    NSArray * _postVertexDumpOutputs;
    unsigned long long  _postVertexDumpStride;
    NSArray * _tileArguments;
    NSArray * _tileBuiltInArguments;
    unsigned int  _traceBufferIndex;
    NSArray * _vertexArguments;
    NSArray * _vertexBuiltInArguments;
}

- (id)constantSamplerDescriptors;
- (id)constantSamplerUniqueIdentifiers;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)fragmentArguments;
- (id)imageBlockDataReturn;
- (id)inferredInputs;
- (id)initWithTileArguments:(id*)arg1 argumentCount:(unsigned int)arg2 builtInArgumentCount:(unsigned int)arg3 imageBlockDataReturn:(id)arg4 device:(id)arg5 traceBufferIndex:(unsigned int)arg6 flags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 55; })arg7;
- (id)initWithTileData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 55; })arg4;
- (id)initWithTileData:(id)arg1 functionType:(unsigned long long)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 55; })arg5;
- (id)initWithVertexData:(id)arg1 fragmentData:(id)arg2 serializedVertexDescriptor:(id)arg3 device:(id)arg4 options:(unsigned long long)arg5 flags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 55; })arg6;
- (id)performanceStatistics;
- (id)postVertexDumpOutputs;
- (unsigned long long)postVertexDumpStride;
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setConstantSamplerUniqueIdentifiers:(id)arg1;
- (void)setPerformanceStatistics:(id)arg1;
- (id)tileArguments;
- (unsigned int)traceBufferIndex;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 55; })usageFlags;
- (id)vertexArguments;
- (id)vertexBuiltInArguments;

@end
